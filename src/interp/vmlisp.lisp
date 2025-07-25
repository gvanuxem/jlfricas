;; Copyright (c) 1991-2002, The Numerical ALgorithms Group Ltd.
;; All rights reserved.
;;
;; Redistribution and use in source and binary forms, with or without
;; modification, are permitted provided that the following conditions are
;; met:
;;
;;     - Redistributions of source code must retain the above copyright
;;       notice, this list of conditions and the following disclaimer.
;;
;;     - Redistributions in binary form must reproduce the above copyright
;;       notice, this list of conditions and the following disclaimer in
;;       the documentation and/or other materials provided with the
;;       distribution.
;;
;;     - Neither the name of The Numerical ALgorithms Group Ltd. nor the
;;       names of its contributors may be used to endorse or promote products
;;       derived from this software without specific prior written permission.
;;
;; THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
;; IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
;; TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
;; PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
;; OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
;; EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
;; PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
;; PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
;; LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
;; NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
;; SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


;      VM LISP EMULATION PACKAGE
;      Lars Ericson, Barry Trager, Martial Schor, tim daly, LVMCL, et al
;      IBM Thomas J. Watson Research Center
;      Summer, 1986

; This emulation package version is written for Symbolics Common Lisp.
; Emulation commentary refers to LISP/VM, IBM Program Number 5798-DQZ,
; as described in the LISP/VM User's Guide, document SH20-6477-1.
; Main comment section headings refer to sections in the User's Guide.

; If you are using this, you are probably in Common Lisp, yes?

(in-package "BOOT")

;; defuns

(defun define-function (f v)
 (setf (symbol-function f) v))

(define-function '|append| #'APPEND)

;;; Used in constructors for evaluating conditions
(define-function '|not| #'NOT)

(define-function '|get_run_time| #'get-internal-run-time)

; 9.5 Identifiers

(defun gensymp (x) (and (symbolp x) (null (symbol-package x))))

(defun digitp (x)
  (or (and (symbolp x) (digitp (symbol-name x)))
      (and (characterp x) (digit-char-p x))
      (and (stringp x) (= (length x) 1) (digit-char-p (char x 0)))))

(defun dig2fix (x)
  (if (symbolp x)
    (digit-char-p (char (symbol-name x) 0))
    (digit-char-p x)))

(defun LOG2 (x) (LOG x 2.0))

; 11.0 Operations on Identifiers

; 11.1 Creation

(defun upcase (l)
  (cond ((stringp l) (string-upcase l))
        ((identp l) (intern (string-upcase (symbol-name l))))
        ((characterp l) (char-upcase l))
        ((atom l) l)
        (t (mapcar #'upcase l))))

(defun downcase (l)
  (cond ((stringp l) (string-downcase l))
        ((identp l) (intern (string-downcase (symbol-name l))))
        ((characterp l) (char-downcase L))
        ((atom l) l)
        (t (mapcar #'downcase l))))

; 11.2 Accessing

;; note it is important that PNAME returns nil not an error for non-symbols
(defun PNAME (x)
  (cond ((symbolp x) (symbol-name x))
        ((characterp x) (string x))
        (t nil)))

(defun put (sym ind val) (setf (get sym ind) val))

(define-function 'MAKEPROP #'put)

; 12.0 Operations on Numbers

; 12.1 Conversion

; 12.2 Predicates

; 12.3 Computation


(defun QUOTIENT (x y)
  (cond ((or (floatp x) (floatp y)) (BREAK))
        (t (truncate x y))))

(defun REMAINDER (x y)
  (if (and (integerp x) (integerp y))
      (rem x y)
      (BREAK)))

(defun DIVIDE (x y)
  (if (and (integerp x) (integerp y))
      (multiple-value-list (truncate x y))
      (BREAK)))

; 13.3 Updating

(defun RPLNODE (pair1 ca2 cd2)
 (RPLACA pair1 ca2)
 (RPLACD pair1 cd2) pair1)

; 14.0 Operations on Lists

; 14.1 Creation

;;; needed for SPAD compiler output
#-gcl(define-function '|construct| #'list)
#+gcl(define-function '|construct| #'cl::list)

(defun VEC2LIST (vec) (coerce vec 'cl::list))

(defun |makeList| (size el) (make-list size :initial-element el) )

; note default test for union, intersection and set-difference is eql
(defun UNIONQ (l1 l2) (union l1 l2 :test #'eq))
(defun INTERSECTIONQ (l1 l2) (intersection l1 l2 :test #'eq))
(defun |member| (item sequence)
   (cond ((symbolp item) (member item sequence :test #'eq))
         ((stringp item) (member item sequence :test #'equal))
         ((and (atom item) (not (arrayp item))) (member item sequence))
         (T (member item sequence :test #'equalp))))

(defun |remove| (list item &optional (count 1))
  (if (integerp count)
      (remove item list :count count :test #'equalp)
      (remove item list :test #'equalp)))

;;; moved from union.lisp

(DEFUN |intersection|  (LIST-OF-ITEMS-1 LIST-OF-ITEMS-2)
    (PROG (I H V)
      (SETQ V (SETQ H (CONS NIL NIL)))
      (COND
        ( (NOT (LISTP LIST-OF-ITEMS-1))
          (SETQ LIST-OF-ITEMS-1 (LIST LIST-OF-ITEMS-1)) ) )
      (COND
        ( (NOT (LISTP LIST-OF-ITEMS-2))
          (SETQ LIST-OF-ITEMS-2 (LIST LIST-OF-ITEMS-2)) ) )
  LP  (COND
        ( (NOT (PAIRP LIST-OF-ITEMS-1))
          (RETURN (QCDR H)) )
        ( (|member|
            (PROG1 (SETF I (QCAR LIST-OF-ITEMS-1))
                   (SETF LIST-OF-ITEMS-1 (QCDR LIST-OF-ITEMS-1)))
            (QCDR H)) )
        ( (|member| I LIST-OF-ITEMS-2)
          (QRPLACD V (SETQ V (CONS I NIL))) ) )
      (GO LP) ) )

(DEFUN |union| (LIST-OF-ITEMS-1 LIST-OF-ITEMS-2)
    (PROG (I H V)
      (SETQ H (SETQ V (CONS NIL NIL)))
      (COND
        ( (NOT (LISTP LIST-OF-ITEMS-1))
          (SETQ LIST-OF-ITEMS-1 (LIST LIST-OF-ITEMS-1)) ) )
      (COND
        ( (NOT (LISTP LIST-OF-ITEMS-2))
          (SETQ LIST-OF-ITEMS-2 (LIST LIST-OF-ITEMS-2)) ) )
  LP1 (COND
        ( (NOT (PAIRP LIST-OF-ITEMS-1))
          (COND
            ( (PAIRP LIST-OF-ITEMS-2)
              (SETF LIST-OF-ITEMS-1 LIST-OF-ITEMS-2)
              (SETF LIST-OF-ITEMS-2 NIL) )
            ( 'T
              (RETURN (QCDR H)) ) ) )
        ( (NOT
            (|member|
              (PROG1 (SETF I (QCAR LIST-OF-ITEMS-1))
                     (SETF LIST-OF-ITEMS-1 (QCDR LIST-OF-ITEMS-1)))
              (QCDR H)))
          (QRPLACD V (SETQ V (CONS I NIL))) ) )
      (GO LP1) ) )

(DEFUN SETDIFFERENCE (LIST-OF-ITEMS-1 LIST-OF-ITEMS-2)
    (PROG (I H V)
      (SETQ H (SETQ V (CONS NIL NIL)))
      (COND
        ( (NOT (LISTP LIST-OF-ITEMS-1))
          (SETQ LIST-OF-ITEMS-1 (LIST LIST-OF-ITEMS-1)) ) )
      (COND
        ( (NOT (LISTP LIST-OF-ITEMS-2))
          (SETQ LIST-OF-ITEMS-2 (LIST LIST-OF-ITEMS-2)) ) )
  LP1 (COND
        ( (NOT (PAIRP LIST-OF-ITEMS-1))
          (RETURN (QCDR H)) )
        ( (|member|
            (PROG1 (SETF I (QCAR LIST-OF-ITEMS-1))
                   (SETF LIST-OF-ITEMS-1 (QCDR LIST-OF-ITEMS-1)))
            (QCDR H)) )
        ( (NOT (|member| I LIST-OF-ITEMS-2))
          (QRPLACD V (SETQ V (CONS I NIL))) ) )
      (GO LP1) ) )

;;; end of moved fragment

; 14.2 Accessing

(defun |last| (x) (car (LASTNODE x)))

; 14.3 Searching

(DEFUN |assoc| (X Y)
  "Return the pair associated with key X in association list Y."
  ; ignores non-nil list terminators
  ; ignores non-pair a-list entries
  (cond ((symbolp X)
         (PROG ()
               A  (COND ((ATOM Y) (RETURN NIL))
                        ((NOT (consp (CAR Y))) )
                        ((EQ (CAAR Y) X) (RETURN (CAR Y))) )
               (SETQ Y (CDR Y))
               (GO A)))
        ((or (numberp x) (characterp x))
         (PROG ()
               A  (COND ((ATOM Y) (RETURN NIL))
                        ((NOT (consp (CAR Y))) )
                        ((EQL (CAAR Y) X) (RETURN (CAR Y))) )
               (SETQ Y (CDR Y))
               (GO A)))
        (t
         (PROG ()
               A  (COND ((ATOM Y) (RETURN NIL))
                        ((NOT (consp (CAR Y))) )
                        ((EQUAL (CAAR Y) X) (RETURN (CAR Y))) )
               (SETQ Y (CDR Y))
               (GO A)))))
; 14.5 Updating

(defun NREMOVE (list item)
    (delete item list :test #'equal))

(defun EFFACE (item list) (delete item list :count 1 :test #'equal))

; 14.6 Miscellaneous

(defun SORTBY (keyfn l)
    (sort (copy-seq l) #'|lt_sexp| :key keyfn))

; 16.0 Operations on Vectors

; 16.1 Creation

(defun MAKE_VEC (n) (make-array n :initial-element nil))

(defun GETREFV (n) (make-array n :initial-element nil))

(defun LIST2VEC (list) (coerce list 'vector))

; 16.2 Accessing


(defun size (l)
  (cond ((vectorp l) (length l))
        ((consp l)   (list-length l))
        (t           0)))

; 17.0 Operations on Character and Bit Vectors

(defun charp (a) (or (characterp a)
                     (and (identp a) (= (length (symbol-name a)) 1))))

(defun NUM2CHAR (n) (code-char n))

(defun CHAR2NUM (c) (char-code (character c)))

(define-function '|isLowerCaseLetter| #'LOWER-CASE-P)

#+(or :UNICODE :SB-UNICODE :OPENMCL-UNICODE-STRINGS)
(defun NUM2USTR (n)
    (make-string 1 :initial-element (NUM2CHAR n)))
#-(or :UNICODE :SB-UNICODE :OPENMCL-UNICODE-STRINGS)
(defun NUM2USTR (n)
   (let (k n1 n2 n3 n4 (l nil))
       (cond
           ((< n 128)
               (setf k 1)
               (setf l (list n)))
           ((< n (ash 1 11))
               (setf k 2)
               (setf n1 (logior 128 (logand 63 n)))
               (setf n2 (logior 192 (logand 31 (ash n -6))))
               (setf l (list n2 n1)))
           ((< n (ash 1 16))
               (setf k 3)
               (setf n1 (logior 128 (logand 63 n)))
               (setf n2 (logior 128 (logand 63 (ash n -6))))
               (setf n3 (logior 224 (logand 15 (ash n -12))))
               (setf l (list n3 n2 n1)))
           ((< n (ash 1 21))
               (setf k 4)
               (setf n1 (logior 128 (logand 63 n)))
               (setf n2 (logior 128 (logand 63 (ash n -6))))
               (setf n3 (logior 128 (logand 63 (ash n -12))))
               (setf n4 (logior 240 (logand 7 (ash n -18))))
               (setf l (list n4 n3 n2 n1)))
           (t
               (|error| "Too large character code"))
       )
       (make-array k :element-type 'character
                  :initial-contents (mapcar #'code-char l))))


(defun UENTRIES(s)
   (let* ((res (cons nil nil))
         (res1 res)
         (c 0)
         (i 0)
         (l (length s)))
        (loop
        (cond ((eql i l) (return-from UENTRIES (cdr res))))
#+(or :UNICODE :SB-UNICODE :OPENMCL-UNICODE-STRINGS)
        (progn
            (setf c (char-code (aref s i)))
            (setf i (+ i 1)))
#-(or :UNICODE :SB-UNICODE :OPENMCL-UNICODE-STRINGS)
        (let ((c1 (char-code (aref s i))))
            (cond ((< c1 128)
                   (setf c c1)
                   (setf i (+ i 1)))
                  ((< c1 224)
                      (cond ((> (+ i 2) l)
                             (|error| "Invalid UTF-8 string"))
                            (t
                              (setf c (logior
                                          (logand 63
                                                 (char-code (aref s (+ i 1))))
                                          (ash (logand 31 c1) 6)))
                              (setf i (+ i 2)))))
                  ((< c1 240)
                      (cond ((> (+ i 3) l)
                             (|error| "Invalid UTF-8 string"))
                            (t
                              (setf c (logior
                                          (logand 63
                                                 (char-code (aref s (+ i 2))))
                                          (ash (logand 63
                                                 (char-code (aref s (+ i 1))))
                                               6)
                                          (ash (logand 15 c1) 12)))
                              (setf i (+ i 3)))))
                  ((< c1 248)
                      (cond ((> (+ i 4) l)
                             (|error| "Invalid UTF-8 string"))
                            (t
                              (setf c (logior
                                          (logand 63
                                                 (char-code (aref s (+ i 3))))
                                          (ash (logand 63
                                                 (char-code (aref s (+ i 2))))
                                               6)
                                          (ash (logand 63
                                                 (char-code (aref s (+ i 1))))
                                               12)
                                          (ash (logand 7 c1) 18)))
                              (cond ((>= c 1114112)
                                     (|error| "Invalid UTF-8 string")))
                              (setf i (+ i 4)))))
                  (t (|error| "Invalid UTF-8 string"))))
        (setf (cdr res1) (cons c nil))
        (setf res1 (cdr res1)))))

;;; Double negation to have boolean result
(defun CGREATERP (s1 s2) (not (not (string> (string s1) (string s2)))))

; 17.1 Creation


#-GCL
(defun CONCAT (a b &rest l)
   (let ((type (cond ((bit-vector-p a) 'bit-vector) (t 'string))))
      (cond ((eq type 'string)
             (setq a (string a) b (string b))
             (if l (setq l (mapcar #'string l)))))
      (if l (apply #'concatenate type a b l)
        (concatenate type a b))) )
#+GCL
(defun CONCAT (a b &rest l)
  (if (bit-vector-p a)
      (if l (apply #'concatenate 'bit-vector a b l)
        (concatenate 'bit-vector a b))
    (if l (apply #'system:string-concatenate a b l)
      (system:string-concatenate a b))))

(define-function 'STRCONC #'CONCAT)

; 17.2 Accessing

(defun STRING2ID_N (cvec n)
  (if (< n 1)
      nil
      (let ((start (position-if-not #'(lambda (x) (char= x #\Space)) cvec)))
        (if start
            (let ((end (or (position #\Space cvec :start start) (length cvec))))
              (if (= n 1)
                  (intern (subseq cvec start end))
                  (STRING2ID_N (subseq cvec end) (1- n))))
            0))))

(defun substring (cvec start length)
  (setq cvec (string cvec))
  (if length (subseq cvec start (+ start length)) (subseq cvec start)))

; 17.3 Searching

(defun strpos (what in start dontcare)
   (setq what (string what) in (string in))
   (if dontcare (progn (setq dontcare (character dontcare))
                       (search what in :start2 start
                               :test #'(lambda (x y) (or (eql x dontcare)
                                                         (eql x y)))))
                (if (= start 0)
                   (search what in)
                   (search what in :start2 start))
   ))

; In the following, table should be a string:

(defun STRPOSL (table cvec sint item)
  (setq cvec (string cvec))
  (if (not item)
      (position table cvec :test #'(lambda (x y) (position y x)) :start sint)
      (position table cvec :test-not #'(lambda (x y) (position y x)) :start sint)))

; 17.4 Updating operators

;;-- (defun rplacstr (cvec1 start1 length1 cvec2
;;--                        &optional (start2 0) (length2 nil)
;;--                        &aux end1 end2)
;;--   (setq cvec2 (string cvec2))
;;--   (if (null start1) (setq start1 0))
;;--   (if (null start2) (setq start2 0))
;;--   (if (null length1) (setq length1 (- (length cvec1) start1)))
;;--   (if (null length2) (setq length2 (- (length cvec2) start2)))
;;--   (if (numberp length1) (setq end1 (+ start1 length1)))
;;--   (if (numberp length2) (setq end2 (+ start2 length2)))
;;--   (if (/= length1 length2)
;;--       (concatenate 'string (subseq cvec1 0 start1)
;;--                            (subseq cvec2 start2 end2)
;;--                            (subseq cvec1 end1))
;;--       (replace cvec1 cvec2 :start1 start1 :end1 end1
;;--              :start2 start2 :end2 end2)))

; The following version has been provided to avoid reliance on the
; Common Lisp concatenate and replace functions. These built-in Lisp
; functions would probably end up doing the character-by-character
; copying shown here, but would also need to cope with generic sorts
; of sequences and unwarranted keyword generality

(defun RPLACSTR (cvec1 start1 length1 cvec2
                       &optional start2 length2
                       &aux end1 end2)
  (setq cvec2 (string cvec2))
  (if (null start1) (setq start1 0))
  (if (null start2) (setq start2 0))
  (if (null length1) (setq length1 (- (length cvec1) start1)))
  (if (null length2) (setq length2 (- (length cvec2) start2)))
  (setq end1 (+ start1 length1))
  (setq end2 (+ start2 length2))
  (if (= length1 length2)
      (do ()
          ((= start1 end1) cvec1)
          (setf (aref cvec1 start1) (aref cvec2 start2))
          (setq start1 (1+ start1))
          (setq start2 (1+ start2)))
      (let* ((l1 (length cvec1))
             (r (make-string (- (+ l1 length2) length1)))
             (i 0))
         (do ((j 0 (1+ j)))
             ((= j start1))
             (setf (aref r i) (aref cvec1 j))
             (setq i (1+ i)))
         (do ((j start2 (1+ j)))
             ((= j end2))
             (setf (aref r i) (aref cvec2 j))
             (setq i (1+ i)))
         (do ((j end1 (1+ j)))
             ((= j l1))
             (setf (aref r i) (aref cvec1 j))
             (setq i (1+ i)))
         r)
  ))

; 19.0 Operations on Arbitrary Objects

; 19.1 Creating

(defun |substitute| (new old tree) (subst new old tree :test #'equal))

(defun copy (x) (copy-tree x)) ; not right since should descend vectors

(defun eqsubstlist (new old list) (sublis (mapcar #'cons old new) list))


; 24.0 Printing

(define-function 'prin2cvec #'princ-to-string)

(define-function 'stringimage #'princ-to-string)

(define-function 'printexp #'princ)
(define-function 'prin0  #'prin1)

(defun |limited_print1_stdout|(form) (|limited_print1| form *standard-output*))

(defun |limited_print1|(form stream)
    (let ((*print-level* 4) (*print-length* 4))
       (prin1 form stream) (terpri stream)))

(defun prettyprint (x &optional (stream *standard-output*))
  (prettyprin0 x stream) (terpri stream))

(defun prettyprin0 (x &optional (stream *standard-output*))
  (let ((*print-pretty* t) (*print-array* t))
    (prin1 x stream)))

(defun tab (sint &optional (stream t))
  (format stream "~vT" sint))

; 27.0 Stream I/O


; 27.1 Creation

(defun |get_console_input| () *standard-input*)

(defun MAKE_INSTREAM (filespec)
   (cond
         ((not (STRINGP filespec)) (error "not handled yet"))
         (t (open (|make_input_filename1| filespec)
                  :direction :input :if-does-not-exist nil))))

(defun MAKE_OUTSTREAM (filespec)
   (cond
         ((not (STRINGP filespec)) (error "not handled yet"))
         (t (open filespec :direction :output
               #+(or :cmucl :openmcl :sbcl) :if-exists
               #+(or :cmucl :sbcl) :supersede
               #+:openmcl :ignored))))

(defun |make_out_stream| (filespec) (CONS T (MAKE_OUTSTREAM filespec)))

(defun MAKE_APPENDSTREAM (filespec)
 "fortran support"
 (cond
  ((not (STRINGP filespec)) (error "MAKE_APPENDSTREAM: not handled yet"))
  (t (open filespec :direction :output
          :if-exists :append :if-does-not-exist :create))))

(defun |make_append_stream| (filespec)
    (CONS T (MAKE_APPENDSTREAM filespec)))

(defun |mkOutputConsoleStream| () (CONS NIL *standard-output*))

(defun SHUT (st) (if (streamp st) (close st) -1))

(defun EOFP (stream) (null (peek-char nil stream nil nil)))

; 48.0 Miscellaneous CMS Interactions

(defun CURRENTTIME ()
  (multiple-value-bind (sec min hour) (get-decoded-time)
    (format nil "~2,'0D:~2,'0D:~2,'0D" hour min sec)))

; 99.0 Ancient Stuff We Decided To Keep

(defun |read_line| (st) (read-line st nil nil))

;;; GCMSG when called with argument equal to NIL is supposed to
;;; supress messages from garbage collector.  Empty body is
;;; OK if garbage collector prints no messages.
#+:gcl
(defun GCMSG (x)
   (prog1 system:*gbc-message* (setq system:*gbc-message* x)))
#+:cmu
(defun GCMSG (x)
   (prog1 ext:*gc-verbose* (setq ext:*gc-verbose* x)))
#-(or :gcl :cmu)
(defun GCMSG (x))

#+abcl
(defun reclaim () (ext::gc))
#+:allegro
(defun reclaim () (excl::gc t))
#+clisp
(defun reclaim () (#+lisp=cl ext::gc #-lisp=cl lisp::gc))
#+:cmu
(defun reclaim () (ext:gc))
#+cormanlisp
(defun reclaim () (cl::gc))
#+:GCL
(defun reclaim () (si::gbc t))
#+lispworks
(defun reclaim () (hcl:gc-generation t))
#+sbcl
(defun reclaim () (sb-ext::gc))
#+openmcl
(defun reclaim () (ccl::gc))
#+:ecl
(defun reclaim () (si::gc t))
#+:poplog
(defun reclaim () nil)

#+gcl
(defun BPINAME (func)
  (typecase func
    (symbol func)
    ((cons (eql lambda-block) t) (cadr func))
    (function
     (cond (#.(fboundp 'function-lambda-expression)
            (multiple-value-bind (x y z) (function-lambda-expression func)
              (or (and (symbolp z) (fboundp z) z) func)))
           ((compiled-function-p func)
            (system:compiled-function-name func))
           (func)))))

#+(OR IBCL)
(defun BPINAME (func)
  (if (functionp func)
      (cond ((symbolp func) func)
            ((and (consp func) (eq (car func) 'LAMBDA-BLOCK))
              (cadr func))
            ((compiled-function-p func)
             (system:compiled-function-name func))
            ('t func))))
#+:cmu
(defun BPINAME (func)
 (when (functionp func)
  (cond
    ((symbolp func) func)
    ((and (consp func) (eq (car func) 'lambda)) (second (third func)))
    ((compiled-function-p func)
     (kernel::%function-name func))
    ('t func))))

#+(or :sbcl :clisp :openmcl :ecl :lispworks :poplog :abcl)
(defun BPINAME (func)
  (cond
      ((functionp func)
         (let (d1 d2 res)
             (setf (values d1 d2 res) (function-lambda-expression func))
             (if (and res (symbolp res) (fboundp res))
                 res
                 func)))
      ((symbolp func) func)))

;;; moved from hash.lisp

;17.0 Operations on Hashtables

;17.2 Accessing

(defun HKEYS (table)
   (let (keys)
      (maphash
        #'(lambda (key val) (declare (ignore val)) (push key keys)) table)
        keys))

(define-function 'HASHTABLE_CLASS #'hash-table-test)

(define-function 'HCOUNT #'hash-table-count)

;17.6 Miscellaneous

(define-function 'HASHTABLEP #'hash-table-p)

;;; end of moved fragment

;;; ---------------------------------------------

;; Contributed by Juergen Weiss from a suggestion by Arthur Norman.
;; This is a Mantissa and Exponent function.
(defun manexp (u)
  (multiple-value-bind (f e s)
    (decode-float u)
    (cons (* s f) e)))

;;; Contributed by Juergen Weiss from Arthur Norman's CCL.
(defun cot (a)
  (if (or (> a 1000.0) (< a -1000.0))
    (/ (cos a) (sin a))
    (/ 1.0 (tan a))))

;;; moved from unlisp.lisp
(defun |AlistAssocQ| (key l)
  (assoc key l :test #'eq) )

(defun |AlistRemoveQ| (key l)
   (let ((pr (assoc key l :test #'eq)))
       (if pr
           (remove pr l :test #'eq)
           l) ))

(defun log10 (u) (log u 10.0d0))

(defun |make_spaces| (len)
    (make-string len :initial-element #\ ))

;;; end of moved fragment

