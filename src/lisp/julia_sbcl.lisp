(in-package "BOOT")
(export (import (find-symbol "FIXNUMP" 'sb-ext)) 'boot)

(eval-when (:execute :load-toplevel)
    (sb-int:set-floating-point-modes :traps nil ;'(:overflow)
         :rounding-mode :nearest :current-exceptions nil
         :accrued-exceptions nil :fast-mode nil)
    (unwind-protect
        (defconstant nan (/ 0d0 0d0))))

(defconstant positive-infinity sb-ext::double-float-positive-infinity)
(defconstant negative-infinity sb-ext::double-float-negative-infinity)

;#+(and :sbcl :fricas_has_julia)
;(defun |run_shell_command| (s)
;    (boot::|jl_eval_string| (concatenate 'string "run(\`" s "\`)")))

(defclass jlref ()
    ((id  :reader jlrefId   :initarg :id)
    (type :accessor jlrefType :initarg :type))
    (:default-initargs :id nil :type nil))

(defmethod print-object((obj jlref) stream)
    (print-unreadable-object (obj stream :type t :identity t)
        (princ (concatenate 'string " " (jlrefType obj)) stream)
        (princ (concatenate 'string " " (jlrefId obj)) stream)))

(defun |make_jlref| (str)
    (let* ((index (write-to-string (random most-positive-fixnum)))
            (id (|jl_setindex_wrap_eval_string| index str)))
        (if (not (equal id "")) ; unless str code is wrong
            (let ((ret (make-instance 'jlref :id id
                    :type (|jl_string_eval_string|
                        (concatenate 'string "string(typeof(getindex(refs,\"" id "\")))")))))
                    #+:sbcl (sb-ext:finalize ret (lambda ()
                        (sb-concurrency:enqueue index *jqueue*))) ret)
            (error "Invalid command given to Julia"))))

(defun |make_jlref_from_vec| (cplx vec)
    (let ((id (|jl_wrap_1darray| cplx vec)))
        (if (not (equal id ""))
            (let ((ret (make-instance 'jlref :id id
                    :type (|jl_string_eval_string|
                        (concatenate 'string "string(typeof(getindex(refs,\"" id "\")))")))))
                    #+:sbcl (sb-ext:finalize ret (lambda ()
                        (sb-concurrency:enqueue index *jqueue*))) ret)
            (error "Invalid vector given to Julia"))))

(defun |make_jlref_from_mat| (cplx mat m)
    (let ((id (|jl_wrap_2darray| cplx mat m)))
        (if (not (equal id ""))
            (let ((ret (make-instance 'jlref :id id
                    :type (|jl_string_eval_string|
                        (concatenate 'string "string(typeof(getindex(refs,\"" id "\")))")))))
                    #+:sbcl (sb-ext:finalize ret (lambda ()
                        (sb-concurrency:enqueue index *jqueue*))) ret)
            (error "Invalid matrix given to Julia"))))

(defmacro pointer (array) `(sb-alien:sap-alien
    (sb-sys:vector-sap (sb-ext:array-storage-vector ,array)) (* double-float)))

(defmacro ipointer (array) `(sb-alien:sap-alien
    (sb-sys:vector-sap (sb-ext:array-storage-vector ,array)) (* (sb-alien::signed 64))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Vectors
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
(defun |jl_stringify_1difunction| (func mime array)
    (let ((size (array-dimension array 0)))
        ;(concatenate 'string #\newline
        (uiop:split-string
            (sb-sys:with-pinned-objects (array)
                (sb-alien:alien-funcall
                    (sb-alien::extern-alien "jl_call_stringify_1difunction"
                        (sb-alien::function (sb-alien::c-string)
                            (sb-alien::c-string)
                            (sb-alien::c-string)
                            (* integer)
                            (sb-alien::integer)))
                        func mime (ipointer array) size))
                                :separator (string #\newline))))

(defun |jl_stringify_1dfunction| (cplx func mime array)
    (let ((size (get_vnrows cplx array)))
        (uiop:split-string
            (sb-sys:with-pinned-objects (array)
                (sb-alien:alien-funcall
                    (sb-alien::extern-alien "jl_call_stringify_1dfunction"
                        (sb-alien::function (sb-alien::c-string)
                            (sb-alien::integer)
                            (sb-alien::c-string)
                            (sb-alien::c-string)
                            (* double-float)
                            (sb-alien::integer)))
                    cplx func mime (pointer array) size))
                        :separator (string #\newline))))

(defun |jl_1dfunction| (cplx func array)
    (let ((size (get_vnrows cplx array)))
            (sb-sys:with-pinned-objects (array)
                (sb-alien:alien-funcall
                    (sb-alien::extern-alien "jl_call_1dfunction"
                        (sb-alien::function sb-alien::void
                            (sb-alien::integer)
                            (sb-alien::c-string)
                            (* double-float)
                            (sb-alien::integer)))
                    cplx func (pointer array) size))))

(defun |jl_1difunction| (func array)
    (let ((size (array-dimension array 0)))
        (sb-sys:with-pinned-objects (array)
            (sb-alien:alien-funcall
                (sb-alien::extern-alien "jl_call_1difunction"
                    (sb-alien::function sb-alien::void
                            (sb-alien::c-string)
                            (* (sb-alien::signed 64))
                            (sb-alien::integer)))
                    func (ipointer array) size))))

(defun |jl_wrap_1darray| (cplx array)
    (let ((size (get_vnrows cplx array)))
        (sb-sys:with-pinned-objects (array)
                (sb-alien:alien-funcall
                    (sb-alien::extern-alien "jl_call_wrap_1darray"
                        (sb-alien::function (sb-alien::c-string)
                             (sb-alien::integer)
                            (* double-float)
                            (sb-alien::integer)))
                    cplx (pointer array) size))))

(defun |jl_dbl_1dfunction| (cplx func array)
    (let ((size (get_vnrows cplx array)))
            (sb-sys:with-pinned-objects (array)
                (sb-alien:alien-funcall
                    (sb-alien::extern-alien "jl_call_dbl_1dfunction"
                        (sb-alien::function sb-alien::double-float
                             (sb-alien::integer)
                            (sb-alien::c-string)
                            (* double-float)
                            (sb-alien::integer)))
                    cplx func (pointer array) size))))

(defun |jl_dbl_1dfunction_dbl| (cplx func array val)
    (let ((size (get_vnrows cplx array)))
            (sb-sys:with-pinned-objects (array)
                (sb-alien:alien-funcall
                    (sb-alien::extern-alien "jl_call_dbl_1dfunction_dbl"
                        (sb-alien::function sb-alien::double-float
                            (sb-alien::integer)
                            (sb-alien::c-string)
                            (* double-float)
                            (sb-alien::integer)
                            sb-alien::double-float))
                    cplx func (pointer array) size val))))

(defun |jl_1d2function| (cplx func array1 array2)
    (let ((size1 (get_vnrows cplx array1))
          (size2 (get_vnrows cplx array2)))
            (sb-sys:with-pinned-objects (array1 array2)
              (sb-alien:alien-funcall
                (sb-alien::extern-alien "jl_call_1d2function"
                      (sb-alien::function sb-alien::void
                          (sb-alien::integer)
                          (sb-alien::c-string)
                          (* double-float)
                          (sb-alien::integer)
                          (* double-float)
                          (sb-alien::integer)))
                  cplx func (pointer array1) size1
                            (pointer array2) size2))))

 (defun |jl_bool_1d2function| (cplx func array1 array2)
    (let ((size1 (get_vnrows cplx array1))
          (size2 (get_vnrows cplx array2)))
              (sb-sys:with-pinned-objects (array1 array2)
                (sb-alien:alien-funcall
                  (sb-alien::extern-alien "jl_call_bool_1d2function"
                      (sb-alien::function (sb-alien::boolean 8)
                          (sb-alien::integer)
                          (sb-alien::c-string)
                          (* double-float)
                          (sb-alien::integer)
                          (* double-float)
                          (sb-alien::integer)))
                  cplx func (pointer array1) size1
                            (pointer array2) size2))))

(defun |jl_dbl_1d2function| (cplx func array1 array2)
    (let ((size1 (get_vnrows cplx array1))
          (size2 (get_vnrows cplx array2)))
            (sb-sys:with-pinned-objects (array1 array2)
              (sb-alien:alien-funcall
                (sb-alien::extern-alien "jl_call_dbl_1d2function"
                      (sb-alien::function sb-alien::double-float
                          (sb-alien::integer)
                          (sb-alien:c-string)
                          (* double-float)
                          (sb-alien::integer)
                          (* double-float)
                          (sb-alien::integer)))
                    cplx func (pointer array1) size1
                              (pointer array2) size2))))

(defun |jl_1d3function| (func array1 array2 array3)
    (let ((size1 (array-dimension array1 0))
          (size2 (array-dimension array2 0))
          (size3 (array-dimension array3 0)))
          (sb-sys:with-pinned-objects (array1 array2 array3)
              (sb-alien:alien-funcall
                  (sb-alien::extern-alien "jl_call_1d3function"
                      (sb-alien::function sb-alien::void
                          (sb-alien::c-string)
                          (* double-float)
                          (sb-alien::integer)
                          (* double-float)
                          (sb-alien::integer)
                          (* double-float)
                          (sb-alien::integer)))
                  func (pointer array1) size1
                        (pointer array2) size2
                        (pointer array3) size3))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Matrices
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun |jl_stringify_2dfunction| (cplx func mime array m)
    (let ((n (get_ncols cplx array m)))
        (uiop:split-string
            (sb-sys:with-pinned-objects (array)
                (sb-alien:alien-funcall
                    (sb-alien::extern-alien "jl_call_stringify_2dfunction"
                        (sb-alien::function (sb-alien::c-string)
                            (sb-alien::integer)
                            (sb-alien::c-string)
                            (sb-alien::c-string)
                            (* double-float)
                            (sb-alien::integer)
                            (sb-alien::integer)))
                            cplx func mime (pointer array) m n))
                                :separator (string #\newline))))

(defun |jl_wrap_2darray| (cplx array m)
    (let ((n (get_ncols cplx array m)))
        (sb-sys:with-pinned-objects (array)
           (sb-alien:alien-funcall
               (sb-alien::extern-alien "jl_call_wrap_2darray"
                   (sb-alien::function (sb-alien::c-string)
                       (sb-alien::integer)
                       (* double-float)
                       (sb-alien::integer)
                       (sb-alien::integer)))
                cplx (pointer array) m n))))

(defun |jl_2dfunction| (cplx func array m)
    (let ((n (get_ncols cplx array m)))
       (sb-sys:with-pinned-objects (array)
           (sb-alien:alien-funcall
               (sb-alien::extern-alien "jl_call_2dfunction"
                   (sb-alien::function sb-alien::void
                       (sb-alien::integer)
                       (sb-alien:c-string)
                       (* double-float)
                       (sb-alien::integer)
                       (sb-alien::integer)))
                cplx func (pointer array) m n))))

(defun |jl_bool_2dfunction| (cplx func array m)
    (let ((n (get_ncols cplx array m)))
        (sb-sys:with-pinned-objects (array)
           (sb-alien:alien-funcall
               (sb-alien::extern-alien "jl_call_bool_2dfunction"
                   (sb-alien::function (sb-alien::boolean 8)
                       (sb-alien::integer)
                       (sb-alien:c-string)
                       (* double-float)
                       (sb-alien::integer)
                       (sb-alien::integer)))
                cplx func (pointer array) m n))))

(defun |jl_dbl_2dfunction| (cplx func array m)
    (let ((n (get_ncols cplx array m)))
       (sb-sys:with-pinned-objects (array)
           (sb-alien:alien-funcall
               (sb-alien::extern-alien "jl_call_dbl_2dfunction"
                   (sb-alien::function sb-alien::double-float
                       (sb-alien::integer)
                       (sb-alien:c-string)
                       (* double-float)
                       (sb-alien::integer)
                       (sb-alien::integer)))
                cplx func (pointer array) m n))))

(defun |jl_2d2function| (cplx func array m array1 o)
    (let ((n (get_ncols cplx array m))
          (p (get_ncols cplx array1 o)))
       (sb-sys:with-pinned-objects (array array1)
           (sb-alien:alien-funcall
               (sb-alien::extern-alien "jl_call_2d2function"
                   (sb-alien::function sb-alien::void
                        (sb-alien::integer)
                        (sb-alien:c-string)
                        (* double-float)
                        (sb-alien::integer)
                        (sb-alien::integer)
                        (* double-float)
                        (sb-alien::integer)
                        (sb-alien::integer)))
                cplx func (pointer array) m n (pointer array1) o p))))

(defun |jl_dbl_2dfunction_dbl| (cplx func array m val)
    (let ((n (get_ncols cplx array m)))
      (sb-sys:with-pinned-objects (array)
           (sb-alien:alien-funcall
               (sb-alien::extern-alien "jl_call_dbl_2dfunction_dbl"
                   (sb-alien::function sb-alien::double-float
                       (sb-alien::integer)
                       (sb-alien:c-string)
                       (* double-float)
                       (sb-alien::integer)
                       (sb-alien::integer)
                       sb-alien::double-float
                       ))
               cplx func (pointer array) m n val))))

(defun |jl_bool_2d2function| (cplx func array m array1 o)
    (let ((n (get_ncols cplx array m))
          (p (get_ncols cplx array1 o)))
        (sb-sys:with-pinned-objects (array array1)
           (sb-alien:alien-funcall
               (sb-alien::extern-alien "jl_call_bool_2d2function"
                   (sb-alien::function (sb-alien::boolean 8)
                       (sb-alien::integer)
                       (sb-alien:c-string)
                       (* double-float)
                       (sb-alien::integer)
                       (sb-alien::integer)
                       (* double-float)
                       (sb-alien::integer)
                       (sb-alien::integer)))
                cplx func (pointer array) m n
                    (pointer array1) o p))))

(defun |jl_dbl_2d2function| (cplx func array m array1 o)
    (let ((n (get_ncols cplx array m))
          (p (get_ncols cplx array1 o)))
       (sb-sys:with-pinned-objects (array array1)
           (sb-alien:alien-funcall
               (sb-alien::extern-alien "jl_call_dbl_2d2function"
                   (sb-alien::function sb-alien::double-float
                       (sb-alien::integer)
                       (sb-alien:c-string)
                       (* double-float)
                       (sb-alien::integer)
                       (sb-alien::integer)
                       (* double-float)
                       (sb-alien::integer)
                       (sb-alien::integer)))
               cplx func (pointer array) m n (pointer array1) o p))))

(defun |jl_2d3function| (cplx func array m array1 o array2 q)
    (let ((n (get_ncols cplx array m))
          (p (get_ncols cplx array1 o))
          (r (get_ncols cplx array2 q)))
       (sb-sys:with-pinned-objects (array array1 array2)
           (sb-alien:alien-funcall
               (sb-alien::extern-alien "jl_call_2d3function"
                   (sb-alien::function sb-alien::void
                        (sb-alien::integer)
                        (sb-alien:c-string)
                        (* double-float)
                        (sb-alien::integer)
                        (sb-alien::integer)
                        (* double-float)
                        (sb-alien::integer)
                        (sb-alien::integer)
                        (* double-float)
                        (sb-alien::integer)
                        (sb-alien::integer)))
                cplx func (pointer array) m n
                    (pointer array1) o p (pointer array2) q r))))

(defun |jl_iarray_2dfunction| (cplx func ipiv array m)
    (let ((n (get_ncols cplx array m)))
       (sb-sys:with-pinned-objects (ipiv array)
           (sb-alien:alien-funcall
               (sb-alien::extern-alien "jl_call_iarray_2dfunction"
                   (sb-alien::function sb-alien::void
                       (sb-alien::integer)
                       (sb-alien:c-string)
                       (* (sb-alien::signed 64))
                       (* double-float)
                       (sb-alien::integer)
                       (sb-alien::integer)))
                cplx func (ipointer ipiv) (pointer array) m n))))

(defun |jl_array_1dfunction| (acplx cplx func vec array)
    (let ((size (get_vnrows cplx array)))
        (sb-sys:with-pinned-objects (vec array)
            (sb-alien:alien-funcall
                (sb-alien::extern-alien "jl_call_array_1dfunction"
                    (sb-alien::function sb-alien::void
                        (sb-alien::integer)
                        (sb-alien::integer)
                        (sb-alien:c-string)
                        (* double-float)
                        (* double-float)
                        (sb-alien::integer)))
                    acplx cplx func (pointer vec) (pointer array) size))))

(defun |jl_array_2dfunction| (acplx cplx func vec array m)
    (let ((n (get_ncols cplx array m)))
        (sb-sys:with-pinned-objects (vec array)
           (sb-alien:alien-funcall
               (sb-alien::extern-alien "jl_call_array_2dfunction"
                   (sb-alien::function sb-alien::void
                       (sb-alien::integer)
                       (sb-alien::integer)
                       (sb-alien:c-string)
                       (* double-float)
                       (* double-float)
                       (sb-alien::integer)
                       (sb-alien::integer)))
               acplx cplx func (pointer vec) (pointer array) m n))))

(defun |jl_svd_function| (cplx func u s v array m)
    (let ((n (get_ncols cplx array m)))
        (sb-sys:with-pinned-objects (u s v array)
           (sb-alien:alien-funcall
               (sb-alien::extern-alien "jl_call_svd"
                    (sb-alien::function sb-alien::void
                       (sb-alien::integer)
                       (sb-alien:c-string)
                       (* double-float)
                       (* double-float)
                       (* double-float)
                       (* double-float)
                       (sb-alien::integer)
                       (sb-alien::integer)))
                cplx func (pointer u) (pointer s)
                    (pointer v) (pointer array) m n))))

(defun |jl_eigen_function| (cplx func val vec array m)
    (let ((n (get_ncols cplx array m)))
        (sb-sys:with-pinned-objects (val vec array)
           (sb-alien:alien-funcall
               (sb-alien::extern-alien "jl_call_eigen"
                    (sb-alien::function sb-alien::void
                       (sb-alien::integer)
                       (sb-alien:c-string)
                       (* double-float)
                       (* double-float)
                       (* double-float)
                       (sb-alien::integer)
                       (sb-alien::integer)))
                cplx func (pointer val) (pointer vec) (pointer array) m n))))

(defun |jl_eigen_system_function| (cplx func val lvec rvec array m)
    (let ((n (get_ncols cplx array m)))
        (sb-sys:with-pinned-objects (val lvec rvec array)
           (sb-alien:alien-funcall
               (sb-alien::extern-alien "jl_call_eigen_system"
                    (sb-alien::function sb-alien::void
                       (sb-alien::integer)
                       (sb-alien:c-string)
                       (* double-float)
                       (* double-float)
                       (* double-float)
                       (* double-float)
                       (sb-alien::integer)
                       (sb-alien::integer)))
                cplx func (pointer val) (pointer lvec) (pointer rvec)
                    (pointer array) m n))))

(defun |jl_2v2dfunction| (func vec1 vec2 array m)
    (let ((size (array-dimension vec1 0))
          (n (/ (array-dimension array 0) m)))
            (sb-sys:with-pinned-objects (vec1 vec2 array)
                (sb-alien:alien-funcall
                    (sb-alien::extern-alien "jl_call_2v2dfunction"
                        (sb-alien::function sb-alien::void
                            (sb-alien:c-string)
                            (sb-alien::integer)
                            (* double-float)
                            (* double-float)
                            (* double-float)
                            (sb-alien::integer)
                            (sb-alien::integer)))
                    func size (pointer vec1)
                        (pointer vec2)
                        (pointer array) m n))))

(defun |init_julia_env| ()
    (if (not *julia-initialized*)
        (progn
            (sb-alien:alien-funcall
                (sb-alien:extern-alien "jl_init_env"
                    (sb-alien:function sb-alien:void)))
            (setf *julia-initialized* t))
        *julia-initialized*))

(defun |clear_julia_env| ()
    (if *julia-initialized*
      (progn
          (sb-alien:alien-funcall
              (sb-alien:extern-alien "jl_clear_env"
                (sb-alien:function sb-alien:void)))
	  (setf *julia-initialized* nil))
      *julia-initialized*))
