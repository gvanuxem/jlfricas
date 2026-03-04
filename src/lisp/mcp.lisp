(in-package :boot)

;; Ensure yason is loaded
(eval-when (:compile-toplevel :load-toplevel :execute)
  (require :asdf)
  (asdf:load-system :yason))

(defpackage :fricas-mcp
  (:use :cl :boot)
  (:export #:start-mcp-server #:stop-mcp-server #:check-mcp-args))

(in-package :fricas-mcp)

(defvar *mcp-thread* nil)
(defvar *mcp-running* nil)

(defun send-json (data)
  (handler-case
      (progn
        (yason:encode data *standard-output*)
        (terpri *standard-output*)
        (force-output *standard-output*))
    (error (c)
      (format *error-output* "Failed to encode JSON: ~A~%" c))))

(defun send-error (id code message &optional data)
  (let ((resp (make-hash-table :test 'equal)))
    (setf (gethash "jsonrpc" resp) "2.0")
    (setf (gethash "id" resp) id)
    (let ((err (make-hash-table :test 'equal)))
      (setf (gethash "code" err) code)
      (setf (gethash "message" err) message)
      (when data (setf (gethash "data" err) data))
      (setf (gethash "error" resp) err))
    (send-json resp)))

(defun send-result (id result)
  (let ((resp (make-hash-table :test 'equal)))
    (setf (gethash "jsonrpc" resp) "2.0")
    (setf (gethash "id" resp) id)
    (setf (gethash "result" resp) result)
    (send-json resp)))

(defun handle-initialize (id params)
  (declare (ignore params))
  (let ((result (make-hash-table :test 'equal)))
    (setf (gethash "protocolVersion" result) "2024-11-05")
    (let ((caps (make-hash-table :test 'equal)))
      (setf (gethash "tools" caps) (make-hash-table))
      (setf (gethash "capabilities" result) caps))
    (let ((info (make-hash-table :test 'equal)))
      (setf (gethash "name" info) "jlFriCAS MCP Server")
      (setf (gethash "version" info) "0.1.0")
      (setf (gethash "serverInfo" result) info))
    (send-result id result)))

(defun handle-list-tools (id)
  (let ((result (make-hash-table :test 'equal))
        (tool (make-hash-table :test 'equal))
        (schema (make-hash-table :test 'equal))
        (props (make-hash-table :test 'equal))
        (expr-prop (make-hash-table :test 'equal)))
    (setf (gethash "name" tool) "evaluate")
    (setf (gethash "description" tool) "Evaluate a FriCAS or Julia mathematical expression. Routes automatically based on syntax.")
    (setf (gethash "type" expr-prop) "string")
    (setf (gethash "description" expr-prop) "The mathematical expression to evaluate")
    (setf (gethash "expression" props) expr-prop)
    (setf (gethash "type" schema) "object")
    (setf (gethash "properties" schema) props)
    (setf (gethash "required" schema) '("expression"))
    (setf (gethash "inputSchema" tool) schema)
    
    (let ((doc-tool (make-hash-table :test 'equal))
          (doc-schema (make-hash-table :test 'equal))
          (doc-props (make-hash-table :test 'equal))
          (name-prop (make-hash-table :test 'equal))
          (type-prop (make-hash-table :test 'equal)))
      (setf (gethash "name" doc-tool) "get-documentation")
      (setf (gethash "description" doc-tool) "Get documentation for a FriCAS constructor (Domain, Category, Package) or operation.")
      (setf (gethash "type" name-prop) "string")
      (setf (gethash "description" name-prop) "The name of the constructor or operation")
      (setf (gethash "name" doc-props) name-prop)
      (setf (gethash "type" type-prop) "string")
      (setf (gethash "description" type-prop) "The type of the entity ('constructor' or 'operation')")
      (setf (gethash "enum" type-prop) '("constructor" "operation"))
      (setf (gethash "type" doc-props) type-prop)
      (setf (gethash "type" doc-schema) "object")
      (setf (gethash "properties" doc-schema) doc-props)
      (setf (gethash "required" doc-schema) '("name" "type"))
      (setf (gethash "inputSchema" doc-tool) doc-schema)

      (setf (gethash "tools" result) (list tool doc-tool)))
    (send-result id result)))

(defun handle-call-tool (id name params)
  (cond
    ((string= name "evaluate")
     (let ((expr (gethash "expression" params)))
       (if (not expr)
           (send-error id -32602 "Missing expression parameter")
           (let ((output (capture-fricas-output expr)))
             (let ((result (make-hash-table :test 'equal))
                   (content (make-hash-table :test 'equal)))
               (setf (gethash "type" content) "text")
               (setf (gethash "text" content) output)
               (setf (gethash "content" result) (list content))
               (send-result id result))))))
    ((string= name "get-documentation")
     (let ((entity-name (gethash "name" params))
           (entity-type (gethash "type" params)))
       (if (or (not entity-name) (not entity-type))
           (send-error id -32602 "Missing name or type parameter")
           (let* ((fricas-func (if (string= entity-type "constructor")
                                   "jlConstructorDocumentation"
                                   "jlOperationDocumentation"))
                  (cmd (format nil "~A('~A)$JUF" fricas-func entity-name))
                  (output (capture-fricas-output cmd)))
             (let ((result (make-hash-table :test 'equal))
                   (content (make-hash-table :test 'equal)))
               (setf (gethash "type" content) "text")
               (setf (gethash "text" content) (clean-fricas-doc-output output))
               (setf (gethash "content" result) (list content))
               (send-result id result))))))
    (t (send-error id -32601 (format nil "Tool not found: ~A" name)))))

(defun clean-fricas-doc-output (text)
  "Clean up FriCAS output for documentation tools without regex."
  (if (not (stringp text)) (return-from clean-fricas-doc-output ""))
  (let* ((trimmed (string-trim '(#\Space #\Newline #\Return) text))
         (marker "Type: Void")
         (t-len (length trimmed))
         (m-len (length marker)))
    (if (and (>= t-len m-len)
             (string= trimmed marker :start1 (- t-len m-len)))
        (string-trim '(#\Space #\Newline #\Return) (subseq trimmed 0 (- t-len m-len)))
        trimmed)))


(defun capture-fricas-output (expr)
  (handler-case
      ;; Establish FriCAS top-level catch tag
      (let ((res (catch 'boot::|top_level|
                   (boot::|parseAndInterpToString| expr))))
        (if (consp res)
            (format nil "~{~A~^~%~}" res)
            (format nil "~A" res)))
    (error (c)
      (format nil "Evaluation Error: ~A" c))))

(defun mcp-loop ()
  (setf *mcp-running* t)
  (handler-case
      (loop while *mcp-running*
            do (let ((input (read-line *standard-input* nil :eof)))
                 (if (eq input :eof)
                     (setf *mcp-running* nil)
                     (let ((json (ignore-errors (yason:parse input))))
                       (if (not json)
                           (send-error nil -32700 "Parse error")
                           (let ((id (gethash "id" json))
                                 (method (gethash "method" json))
                                 (params (gethash "params" json)))
                             (cond
                               ((string= method "initialize") (handle-initialize id params))
                               ((string= method "tools/list") (handle-list-tools id))
                               ((string= method "tools/call") (handle-call-tool id (gethash "name" params) (gethash "arguments" params)))
                               ((string= method "notifications/initialized") nil)
                               (t (if id (send-error id -32601 "Method not found"))))))))))
    (error (c)
      (format *error-output* "MCP Loop aborted: ~A~%" c)
      (setf *mcp-running* nil))))

(defun start-mcp-server ()
  (if *mcp-thread*
      (format *error-output* "MCP server already running.~%")
      (progn
        (format *error-output* "Starting jlFriCAS MCP server on stdio...~%")
        (setf *mcp-running* t)
        (setf *mcp-thread*
              (sb-thread:make-thread
               (lambda () (mcp-loop))
               :name "MCP Server")))))

(defun stop-mcp-server ()
  (setf *mcp-running* nil)
  (when *mcp-thread*
    (setf *mcp-thread* nil)))

(defun check-mcp-args ()
  "Check command line arguments for --mcp flag and start server if present."
  (let ((args (fricas-lisp:|getCLArgs|))
        (boot-pkg (find-package "BOOT")))
    (when (member "--mcp" args :test #'string=)
      (format *error-output* "MCP flag detected. Initializing FriCAS...~%")
      
      (when boot-pkg
        ;; Use SB-POSIX to redirect FD 1 to FD 2 during init
        (let ((old-stdout (sb-posix:dup 1)))
          (sb-posix:dup2 2 1)
          (unwind-protect
              (handler-case
                  (let ((msgs-sym (find-symbol "|$displayStartMsgs|" boot-pkg))
                        (quiet-sym (find-symbol "|$QuietCommand|" boot-pkg))
                        (init-sym (find-symbol "fricas_init" boot-pkg))
                        (curout-sym (find-symbol "CUROUTSTREAM" boot-pkg))
                        (op-db-sym (find-symbol "open_operation_db" boot-pkg))
                        (jl-init-sym (find-symbol "init_julia_env" boot-pkg)))
                    
                    (when msgs-sym (set msgs-sym nil))
                    (when quiet-sym (set quiet-sym t))
                    
                    ;; Initialize FriCAS
                    (when init-sym (funcall init-sym))
                    
                    ;; Force open the operation database if not already open
                    (when op-db-sym (funcall op-db-sym nil))
                    
                    ;; Initialize Julia if available
                    (when jl-init-sym (funcall jl-init-sym))
                    
                    ;; Ensure CUROUTSTREAM is not NIL
                    (when curout-sym (set curout-sym *error-output*)))
                (error (c)
                  (format *error-output* "FriCAS initialization failed: ~A~%" c)))
            ;; Restore FD 1
            (sb-posix:dup2 old-stdout 1)
            (sb-posix:close old-stdout))))
      
      (format *error-output* "Starting server loop...~%")
      ;; In this mode, we run in the main thread and exit when done
      (mcp-loop)
      (fricas-lisp:quit))))

(in-package :boot)

(defun |startMCPServer| ()
  (fricas-mcp:start-mcp-server))

(defun |stopMCPServer| ()
  (fricas-mcp:stop-mcp-server))
