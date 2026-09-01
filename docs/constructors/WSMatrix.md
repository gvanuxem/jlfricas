# WSMatrix

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L335)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS matrices using the MathLink Julia package.

**WSMatrix(E: WSRing) is a domain constructor.**  
**Abbreviation for WSMatrix is WSMAT**

## Signatures

```fricas
 #? : % -> NonNegativeInteger if % has ATFINAG    #? : % -> WSInteger
 ?*? : (WSVector(E), %) -> %    ?*? : (%, WSVector(E)) -> %
 ?*? : (%, E) -> %    ?*? : (E, %) -> %
 ?*? : (Integer, %) -> %    ?*? : (%, %) -> %
 ?*? : (%, WSVector(E)) -> WSVector(E) if E has SRNG    ?*? : (WSVector(E), %) -> WSVector(E) if E has SRNG
 ?+? : (%, %) -> %    -? : % -> %
 ?-? : (%, %) -> %    ?/? : (%, E) -> % if E has FIELD
 ?=? : (%, %) -> Boolean    Pfaffian : % -> E if E has COMRING
 ?^? : (%, NonNegativeInteger) -> %    ?^? : (%, PositiveInteger) -> %
 ?^? : (%, Integer) -> % if E has FIELD    accumulate : % -> % if WSVector(E) has WSNUM
 adjoint : % -> %    adjugate : % -> %
 antisymmetric? : % -> Boolean    append : (%, WSVector(E)) -> %
 array2 : List(List(E)) -> %    blockConcat : List(List(%)) -> %
 cholesky : % -> Record(l: %,u: %)    coerce : WSVector(E) -> %
 coerce : List(WSVector(E)) -> %    coerce : % -> WSExpression
 coerce : % -> JLObject    coerce : % -> OutputForm
 colSlice : % -> Segment(Integer)    column : (%, Integer) -> %
 column : (%, Integer) -> WSVector(E)    convert : % -> String
 copy : % -> %    delete : (%, WSList(WSInteger)) -> %
 determinant : % -> E if E has COMRING    diagonal : % -> WSVector(E)
 diagonal? : % -> Boolean    diagonalMatrix : WSList(E) -> %
 diagonalMatrix : List(E) -> %    diagonalMatrix : List(%) -> %
 differences : % -> % if WSVector(E) has WSNUM    dimensions : % -> WSList(WSInteger)
 eigenvalues : % -> WSVector(WSExpression)    eigenvectors : % -> WSMatrix(WSExpression)
 elt : (%, Integer, Integer) -> E    elt : (%, Integer, Integer, E) -> E
 elt : (%, Integer, List(Integer)) -> %    elt : (%, List(Integer), Integer) -> %
 elt : (%, List(Integer), List(Integer)) -> %    elt : (%, Segment(Integer), Segment(Integer)) -> %
 elt : (%, List(Integer), Segment(Integer)) -> %    elt : (%, Segment(Integer), List(Integer)) -> %
 elt : (%, Integer, List(Segment(Integer))) -> %    elt : (%, List(Segment(Integer)), Integer) -> %
 elt : (%, Integer) -> WSVector(E)    empty : () -> %
 empty? : % -> Boolean    eq? : (%, %) -> Boolean
 extract : (%, WSExpression) -> %    fill! : (%, E) -> %
 first : % -> WSVector(E)    hash : % -> SingleInteger if E has HASHABL
 hermitian? : % -> Boolean    hessenberg : % -> Record(p: %,h: %)
 horizConcat : (%, %) -> %    horizConcat : List(%) -> %
 horizSplit : (%, PositiveInteger) -> List(%)    horizSplit : (%, List(NonNegativeInteger)) -> List(%)
 insert : (%, WSVector(E), WSInteger) -> %    intersection : (%, %) -> %
 inverse : % -> %    inverse : % -> Union(%,"failed") if E has FIELD
 jWSAggregate : List(WSVector(E)) -> %    jWSInterpret : (String, String, String) -> %
 jWSInterpret : (String, String) -> %    jWSInterpret : String -> %
 jWSMatrix : String -> %    jlAbout : % -> Void
 jlApply : (String, %, %, %, %, %) -> JLObject    jlApply : (String, %, %, %, %) -> JLObject
 jlApply : (String, %, %, %) -> JLObject    jlApply : (String, %, %) -> JLObject
 jlApply : (String, %) -> JLObject    jlDisplay : % -> Void
 jlDump : JLObject -> Void    jlEval : % -> %
 jlFieldNames : % -> JLObject    jlGetField : (%, JLSymbol) -> JLObject
 jlGetJuliaIndex : % -> String    jlGetProperty : (%, JLSymbol) -> JLObject
 jlHead : % -> WSSymbol    jlId : % -> Integer
 jlObject : () -> String    jlPropertyNames : % -> JLObject
 jlRef : % -> SExpression    jlSymbolic : % -> String
 jlText : (%, String) -> List(String)    jlType : % -> Symbol
 jlimref : String -> %    jlref : String -> %
 join : (%, %) -> %    jordan : % -> Record(s: %,j: %)
 kroneckerProduct : (%, %) -> % if E has SRNG    kroneckerProduct : List(%) -> % if E has SRNG
 kroneckerSum : (%, %) -> %    kroneckerSum : List(%) -> %
 last : % -> WSVector(E)    latex : % -> String
 length : % -> WSInteger    less? : (%, NonNegativeInteger) -> Boolean
 linearSolve : (%, %) -> %    listOfLists : % -> List(List(E))
 lu : % -> Record(lu: %,p: %,c: %)    map : ((E -> E), %) -> %
 map : (((E, E) -> E), %, %) -> %    map : (((E, E) -> E), %, %, E) -> %
 map! : ((E -> E), %) -> %    matrix : WSVector(E) -> %
 matrix : List(List(E)) -> %    max : % -> E if % has ATFINAG and E has ORDSET
 maxColIndex : % -> Integer    maxRowIndex : % -> Integer
 members : % -> List(E) if % has ATFINAG    min : % -> E if % has ATFINAG and E has ORDSET
 minColIndex : % -> Integer    minRowIndex : % -> Integer
 minordet : % -> E if E has COMRING    minors : (%, WSInteger) -> %
 minors : % -> %    missing? : % -> Boolean
 more? : (%, NonNegativeInteger) -> Boolean    mutable? : % -> Boolean
 ncols : % -> NonNegativeInteger    new : (NonNegativeInteger, NonNegativeInteger, E) -> %
 norm : (%, WSExpression) -> E    norm : % -> E
 nothing? : % -> Boolean    nrows : % -> NonNegativeInteger
 nullSpace : % -> WSList(WSVector(E))    nullSpace : % -> List(WSVector(E)) if E has INTDOM
 nullity : % -> NonNegativeInteger if E has INTDOM    numeric : (%, PositiveInteger) -> WSExpression
 numeric : % -> WSExpression    numeric? : % -> Boolean
 part : (%, WSInteger) -> WSVector(E)    parts : % -> List(E)
 permanent : % -> E    positiveDefinite? : % -> Boolean
 positivePower : (%, Integer) -> % if E has SRNG    prepend : (%, WSVector(E)) -> %
 pseudoInverse : % -> %    qelt : (%, Integer, Integer) -> E
 qelt : (%, Integer) -> WSVector(E)    qnew : (NonNegativeInteger, NonNegativeInteger) -> %
 qr : % -> Record(q: %,r: %)    qsetelt : (%, Integer, Integer, E) -> %
 qsetelt : (%, Integer, WSVector(E)) -> %    qsetelt! : (%, Integer, Integer, E) -> E
 qsetelt! : (%, Integer, WSVector(E)) -> %    rank : % -> NonNegativeInteger if E has INTDOM
 removeDuplicates : % -> %    replacePart : (%, %) -> %
 rest : % -> %    reverse : (%, WSList(WSInteger)) -> %
 reverse : (%, WSInteger) -> %    reverse : % -> %
 riffle : (%, %, %) -> %    riffle : (%, %) -> %
 row : (%, Integer) -> %    row : (%, Integer) -> WSVector(E)
 rowEchelon : % -> % if E has EUCDOM    rowSlice : % -> Segment(Integer)
 sample : () -> %    scalarMatrix : (NonNegativeInteger, E) -> %
 schur : % -> Record(q: %,t: %)    setColumn! : (%, Integer, WSVector(E)) -> %
 setIntersection : (%, %) -> %    setRow! : (%, Integer, WSVector(E)) -> %
 setelt : (%, Integer, Integer, E) -> %    setelt : (%, Integer, WSVector(E)) -> %
 setelt! : (%, Integer, Integer, E) -> E    setelt! : (%, Integer, List(Integer), %) -> %
 setelt! : (%, List(Integer), Integer, %) -> %    setelt! : (%, List(Integer), List(Integer), %) -> %
 setelt! : (%, Integer, WSVector(E)) -> %    setsubMatrix! : (%, Integer, Integer, %) -> %
 size? : (%, NonNegativeInteger) -> Boolean    smaller? : (%, %) -> Boolean if E has COMPAR
 sort : % -> %    sorted? : % -> Boolean
 square? : % -> Boolean    squareTop : % -> %
 string : % -> String    svd : % -> Record(S: %,sv: %,V: %)
 svdvals : % -> WSList(E)    swapColumns! : (%, Integer, Integer) -> %
 swapRows! : (%, Integer, Integer) -> %    symmetric? : % -> Boolean
 take : (%, WSList(WSInteger)) -> %    take : (%, Integer) -> %
 toString : (%, WSExpression) -> String    toString : % -> String
 total : % -> WSVector(E) if WSVector(E) has WSNUM    trace : % -> E
 transpose : % -> %    transpose : WSVector(E) -> %
 union : (%, %) -> %    vertConcat : (%, %) -> %
 vertConcat : List(%) -> %    vertSplit : (%, PositiveInteger) -> List(%)
 vertSplit : (%, List(NonNegativeInteger)) -> List(%)    zero : (NonNegativeInteger, NonNegativeInteger) -> %
 zero? : % -> Boolean if E has ABELMON    ?~=? : (%, %) -> Boolean
 any? : ((E -> Boolean), %) -> Boolean if % has ATFINAG
 blockSplit : (%, PositiveInteger, PositiveInteger) -> List(List(%))
 blockSplit : (%, List(NonNegativeInteger), List(NonNegativeInteger)) -> List(List(%))
 columnSpace : % -> List(WSVector(E)) if E has EUCDOM
 count : ((E -> Boolean), %) -> NonNegativeInteger if % has ATFINAG
 count : (E, %) -> NonNegativeInteger if % has ATFINAG and E has BASTYPE
 eigenSystem : % -> Record(values: WSVector(WSExpression),vectors: WSMatrix(WSExpression))
 elt : (%, Segment(Integer), List(Segment(Integer))) -> %
 elt : (%, List(Segment(Integer)), Segment(Integer)) -> %
 elt : (%, List(Segment(Integer)), List(Segment(Integer))) -> %
 eval : (%, List(Equation(E))) -> % if E has EVALAB(E) and E has SETCAT
 eval : (%, Equation(E)) -> % if E has EVALAB(E) and E has SETCAT
 eval : (%, E, E) -> % if E has EVALAB(E) and E has SETCAT
 eval : (%, List(E), List(E)) -> % if E has EVALAB(E) and E has SETCAT
 every? : ((E -> Boolean), %) -> Boolean if % has ATFINAG
 ?exquo? : (%, E) -> Union(%,"failed") if E has INTDOM
 hashUpdate! : (HashState, %) -> HashState if E has HASHABL
 invertIfCan : % -> Union(%,"failed") if E has INTDOM
 kronecker_prod1 : (%, Integer, List(List(NonNegativeInteger)), List(%), NonNegativeInteger, NonNegativeInteger, Union(E,one)) -> Void
 matrix : (NonNegativeInteger, NonNegativeInteger, ((Integer, Integer) -> E)) -> %
 matrixFunction : (WSExpression, %) -> WSMatrix(WSExpression)
 max : (((E, E) -> Boolean), %) -> E if % has ATFINAG
 member? : (E, %) -> Boolean if % has ATFINAG and E has BASTYPE
 randomComplexMatrix : (WSList(WSComplex), WSList(WSInteger)) -> WSMatrix(WSComplex)
 randomRealMatrix : (WSList(WSReal), WSList(WSInteger)) -> WSMatrix(WSReal)
 setelt! : (%, Integer, List(Segment(Integer)), %) -> %
 setelt! : (%, List(Segment(Integer)), Integer, %) -> %
 setelt! : (%, Segment(Integer), Segment(Integer), %) -> %
 setelt! : (%, List(Integer), Segment(Integer), %) -> %
 setelt! : (%, Segment(Integer), List(Integer), %) -> %
 setelt! : (%, Segment(Integer), List(Segment(Integer)), %) -> %
 setelt! : (%, List(Segment(Integer)), Segment(Integer), %) -> %
 setelt! : (%, List(Segment(Integer)), List(Segment(Integer)), %) -> %
 subMatrix : (%, Integer, Integer, Integer, Integer) -> %
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`#`](#op-hash) | #(u) returns the number of elements in u. |
| [`*`](#op-mul) | a * b is the matrix multiplication, not the element-wise multiplication. WS error if dimen... |
| [`+`](#op-add) | a + b is the matrix addition. WS error if dimensions are incompatible. |
| [`/`](#op-div) | Operation defined in WSMatrix |
| [`Pfaffian`](#pfaffian) | Pfaffian(m) returns the Pfaffian of the matrix m. Error: if the matrix is not antisymmetri... |
| [`^`](#op-pow) | a^n is the matrix power by the positive integer n. |
| [`accumulate`](#accumulate) | accumulate(agg) returns the partial sums of elements in agg. |
| [`adjoint`](#adjoint) | adjoint(m) returns the adjoint of m, i.e. the conjugate transposition of m. |
| [`adjugate`](#adjugate) | adjugate(m) returns the adjugate of square m. |
| [`antisymmetric?`](#antisymmetric) | antisymmetric?(m) returns true if the matrix m is square and antisymmetric (i.e. m[i, j] =... |
| [`any?`](#any) | any?(p, u) tests if p(x) is true for any element x of u. Note: for collections, any?(p, u)... |
| [`append`](#append) | append(l, elt) appends elt to the list l. |
| [`array2`](#array2) | array2(ll) constructs a 2-dimensional array, the inner list being the rows. |
| [`blockConcat`](#blockconcat) | blockConcat(ll) concatenates arrays row and column wise, building an array from blocks. Th... |
| [`blockSplit`](#blocksplit) | blockSplit(a, [n1,...,ni], [m1,...,mi]) splits a into multiple subarrays row and column wi... |
| [`cholesky`](#cholesky) | cholesky(m) computes the Cholesky decomposition of the positive definite/hermitian square ... |
| [`coerce`](#coerce) | coerce(col) converts the column col to a column matrix. |
| [`colSlice`](#colslice) | colSlice(m) returns a segment s such that for m the access m(i, s) gives the i-th row. |
| [`column`](#column) | column(mat,i) returns the i-th column. |
| [`columnSpace`](#columnspace) | columnSpace(m) returns a sublist of columns of the matrix m forming a basis of its column ... |
| [`convert`](#convert) | convert(a) transforms a into an element of S. |
| [`copy`](#copy) | copy(u) returns a top-level (non-recursive) copy of u. Note: for collections, copy(u) = [x... |
| [`count`](#count) | count(x, u) returns the number of occurrences of x in u. For collections, count(x, u) = re... |
| [`delete`](#delete) | delete(l, inds) deletes element(s) of the list l at index(es) inds. |
| [`determinant`](#determinant) | determinant(m) returns the determinant of the matrix m. Error: if the matrix is not square... |
| [`diagonal`](#diagonal) | diagonal(m) returns the diagonal elements of m as a vector. |
| [`diagonal?`](#diagonal) | diagonal?(m) returns true if the matrix m is square and diagonal (i.e. all entries of m no... |
| [`diagonalMatrix`](#diagonalmatrix) | diagonalMatrix(l) returns a diagonal matrix with elements of l as diagonal elements. |
| [`differences`](#differences) | differences(agg) returns the differences between adjacent elements in agg. |
| [`dimensions`](#dimensions) | dimensions(agg) returns dimensions of agg. |
| [`eigenSystem`](#eigensystem) | eigenvectors(m) returns the eigenvectors of the square matrix m. |
| [`eigenvalues`](#eigenvalues) | eigenvalues(m) returns the eigenvalues of the square matrix m. |
| [`eigenvectors`](#eigenvectors) | eigenvectors(m) returns the eigenvectors of the square matrix m. |
| [`elt`](#elt) | elt(mat, m, n) returns the element (m,n) of the matrix mat. |
| [`empty`](#empty) | empty()$D creates an aggregate of type D with 0 elements. Note: The $D can be dropped if u... |
| [`empty?`](#empty) | empty?(u) tests if u has 0 elements. |
| [`eq?`](#eq) | eq?(u, v) tests if u and v are same objects. |
| [`eval`](#eval) | eval(f, x, v) replaces x by v in f. |
| [`every?`](#every) | every?(p, u) tests if p(x) is true for all elements x of u. Note: for collections, every?(... |
| [`exquo`](#exquo) | exquo(f, g) creates the equivalent infix form. |
| [`extract`](#extract) | extract(agg, parts) extracts parts of agg. |
| [`fill!`](#fill) | fill!(m, r) fills m with r's |
| [`first`](#first) | first(agg) returns the first element of agg. |
| [`hash`](#hash) | hash(s) calculates a hash code for s. |
| [`hashUpdate!`](#hashupdate) | hashUpdate!(hs, s) computes new HashState from old and s used for incremental computation ... |
| [`hermitian?`](#hermitian) | hermitian?(m) checks whether or not m is hermitian. |
| [`hessenberg`](#hessenberg) | hessenberg(m) computes the Hessenberg decomposition of the square matrix m. |
| [`horizConcat`](#horizconcat) | horizConcat(x, y) horizontally concatenates two arrays with an equal number of rows. The e... |
| [`horizSplit`](#horizsplit) | horizSplit(a, [n1, n2, ..., ni]) splits a into arrays having n1, ..., ni columns. Error: i... |
| [`insert`](#insert) | insert(l, elt, ind) inserts elt to the list l at index ind. |
| [`intersection`](#intersection) | intersection(agg1, agg2) is the intersection operator. |
| [`inverse`](#inverse) | inverse(m) computes the inverse of m. For example:... |
| [`invertIfCan`](#invertifcan) | invertIfCan(m) returns the inverse of the matrix m. If the matrix is not invertible, "fail... |
| [`jWSAggregate`](#jwsaggregate) | jWSAggregate(list) constructs agg to a WSAggregate. |
| [`jWSInterpret`](#jwsinterpret) | jWSInterpret(form) interprets form. |
| [`jWSMatrix`](#jwsmatrix) | jWSMatrix(str) constructs str as a WSMatrix. str must be in the WS language (WS list of WS... |
| [`jlAbout`](#jlabout) | jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia.... |
| [`jlApply`](#jlapply) | jlApply(func, obj) applies the function func with obj as parameter and returns the result ... |
| [`jlDisplay`](#jldisplay) | jlDisplay(v) pretty prints v (à la Julia). |
| [`jlDump`](#jldump) | jlDump(obj) dumps (shows) the Julia object (internal structure with type). |
| [`jlEval`](#jleval) | jlEval(expr) evaluates expr using the WS Transport Protocol. |
| [`jlFieldNames`](#jlfieldnames) | jlFieldNames(obj) returns the field names of obj. |
| [`jlGetField`](#jlgetfield) | jlGetField(obj, sym) returns the property/element sym of obj. |
| [`jlGetJuliaIndex`](#jlgetjuliaindex) | jlGetJuliaIndex(obj) returns the string that allows access to the Julia indexed dictionary... |
| [`jlGetProperty`](#jlgetproperty) | jlGetProperty(obj, sym) returns the property/element sym of obj. |
| [`jlHead`](#jlhead) | jlHead(expr) returns the Head type of expr. |
| [`jlId`](#jlid) | jlId(obj) returns the Julia indexed dictionary index referencing the object obj. |
| [`jlObject`](#jlobject) | jlObject() returns the internal Julia name of the Julia module used. For example:... |
| [`jlPropertyNames`](#jlpropertynames) | jlPropertyNames(obj) returns the property/element names of obj. |
| [`jlRef`](#jlref) | jlRef(obj) returns the internal Lisp representation of the Julia object obj. |
| [`jlSymbolic`](#jlsymbolic) | jlSymbolic(expr) returns the symbolic 'FullForm'. |
| [`jlText`](#jltext) | jlText(obj, mimest) returns the text representation of obj as a list of String lines with ... |
| [`jlType`](#jltype) | jlType(obj) returns the Julia type of obj. |
| [`jlimref`](#jlimref) | jlimref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia im... |
| [`jlref`](#jlref) | jlRef(obj) returns the internal Lisp representation of the Julia object obj. |
| [`join`](#join) | join(agg1, agg2) joins the two aggregates agg1 and agg2. |
| [`jordan`](#jordan) | jordan(m) computes the Jordan decomposition of the square matrix m. |
| [`kroneckerProduct`](#kroneckerproduct) | kroneckerProduct(a, b) calculates the Kronecker product of the matrices a and b. This corr... |
| [`kroneckerSum`](#kroneckersum) | kroneckerSum(a, b) calculates the Kronecker sum of the matrices a and b. |
| [`kronecker_prod1`](#kronecker_prod1) | Should be local but conditional. > Void |
| [`last`](#last) | last(agg) returns the last element of agg. |
| [`latex`](#latex) | latex(s) returns a LaTeX-printable output representation of s. |
| [`length`](#length) | length(agg) returns the length of agg. 0 if it is a scalar, an index for example. |
| [`less?`](#less) | less?(u, n) tests if u has less than n elements. |
| [`linearSolve`](#linearsolve) | linearSolve(mat, b) finds x, solution of the equation mat * x = b. |
| [`listOfLists`](#listoflists) | listOfLists(m) returns the rows of the array m as a list of lists. |
| [`lu`](#lu) | lu(m) computes the LU decomposition of the matrix m. |
| [`map`](#map) | map(f, a) returns b, where b(i, j) = a(i, j) for all i, j. |
| [`map!`](#map) | map!(f, a) assigns a(i, j) to f(a(i, j)) for all i, j. |
| [`matrix`](#matrix) | matrix(vec) returns vec as a matrix (inplace coercion). |
| [`matrixFunction`](#matrixfunction) | matrixFunction(func, m) applies the matrix function func, if available, to the matrix m. T... |
| [`max`](#max) | max(u) returns maximal element of u. Error if u is empty. |
| [`maxColIndex`](#maxcolindex) | maxColIndex(m) returns the index of the 'last' column of the array m |
| [`maxRowIndex`](#maxrowindex) | maxRowIndex(m) returns the index of the 'last' row of the array m |
| [`member?`](#member) | member?(x, u) tests if x is a member of u. For collections, member?(x, u) = reduce(or, [x=... |
| [`members`](#members) | members(u) returns a list of the consecutive elements of u. For multisets members gives re... |
| [`min`](#min) | min(u) returns minimal element of u. Error if u is empty. |
| [`minColIndex`](#mincolindex) | minColIndex(m) returns the index of the 'first' column of the array m |
| [`minRowIndex`](#minrowindex) | minRowIndex(m) returns the index of the 'first' row of the array m |
| [`minordet`](#minordet) | minordet(m) computes the determinant of the matrix m using minors. Error: if the matrix is... |
| [`minors`](#minors) | minors(m) returns the minors of m. |
| [`missing?`](#missing) | missing?(obj) checks whether or not obj is missing. |
| [`more?`](#more) | more?(u, n) tests if u has more than n elements. |
| [`mutable?`](#mutable) | mutable?(obj) checks whether or not obj is mutable. |
| [`ncols`](#ncols) | ncols(m) returns the number of columns in the array m |
| [`new`](#new) | new(m, n, r) is an m-by-n array all of whose entries are r |
| [`norm`](#norm) | norm(m) returns the norm of m, i.e. the value of the maximum singular values of m. |
| [`nothing?`](#nothing) | nothing?(obj) checks whether or not obj is nothing. |
| [`nrows`](#nrows) | nrows(m) returns the number of rows in the array m |
| [`nullSpace`](#nullspace) | nullSpace(m) returns the null space of m as a list of vectors. |
| [`nullity`](#nullity) | nullity(m) returns the nullity of the matrix m. This is the dimension of the null space of... |
| [`numeric`](#numeric) | numeric(expr) returns numerical expr if possible. |
| [`numeric?`](#numeric) | numeric?(x) checks whether or not x is or would yield a number. |
| [`part`](#part) | part(agg,i) returns the i-th element. |
| [`parts`](#parts) | parts(m) returns a list of the elements of m in row major order |
| [`permanent`](#permanent) | permanent(m) returns the permanent of m. |
| [`positiveDefinite?`](#positivedefinite) | positiveDefinite?(m) checks whether or not m is positive definite. |
| [`positivePower`](#positivepower) | positivePower(x, n) computes a positive integral power of the matrix x. Error: if the matr... |
| [`prepend`](#prepend) | prepend(l, elt) prepends elt to the list l. |
| [`pseudoInverse`](#pseudoinverse) | pseudoInverse(m) computes the pseudo inverse of m also known as Moore-Penrose inverse. |
| [`qelt`](#qelt) | qelt(mat, m, n) returns the element (m,n) of the matrix mat. No checks are done at the Fri... |
| [`qnew`](#qnew) | qnew(m, n) is an m-by-n uninitialized array |
| [`qr`](#qr) | qr(m) computes the QR decomposition of the matrix m. |
| [`qsetelt`](#qsetelt) | qsetelt(mat,n,m,elt) returns a new matrix with element (n,m) replaced by the element elt. |
| [`qsetelt!`](#qsetelt) | qsetelt!(mat,n,m,elt) returns the element elt. The matrix mat is modified in place. |
| [`randomComplexMatrix`](#randomcomplexmatrix) | randomComplexMatrix(range, dims) returns a random matrix with random complex numbers in th... |
| [`randomRealMatrix`](#randomrealmatrix) | randomRealMatrix(range, dims) returns a random matrix with random numbers in the range ran... |
| [`rank`](#rank) | rank(m) returns the rank of the matrix m. |
| [`removeDuplicates`](#removeduplicates) | removeDuplicates(agg) removes duplicate elements. |
| [`replacePart`](#replacepart) | replacePart(expr, part) replaces expr using rule(s) expressing position(s). |
| [`rest`](#rest) | rest(agg) returns agg without the first element. |
| [`reverse`](#reverse) | reverse(agg) reverses the elements of agg. |
| [`riffle`](#riffle) | riffle(agg, elts) riffles (interleaves) element(s) elts i.e. inserts them. |
| [`row`](#row) | row(mat,i) returns the i-th row. |
| [`rowEchelon`](#rowechelon) | rowEchelon(m) returns the row echelon form of the matrix m. |
| [`rowSlice`](#rowslice) | rowSlice(m) returns a segment s such that for m the access m(s, j) gives the j-th column. |
| [`sample`](#sample) | sample yields a value of type % |
| [`scalarMatrix`](#scalarmatrix) | scalarMatrix(n, r) returns an n-by-n matrix with r's on the diagonal and zeroes elsewhere. |
| [`schur`](#schur) | schur(m) computes the Schur decomposition of the square matrix m. |
| [`setColumn!`](#setcolumn) | setColumn!(m, j, v) sets to jth column of m to v |
| [`setIntersection`](#setintersection) | setIntersection(agg1, agg2) is the intersection set operator. |
| [`setRow!`](#setrow) | setRow!(m, i, v) sets to ith row of m to v |
| [`setelt`](#setelt) | setelt(mat,n,m,elt) returns a new matrix with element (n,m) replaced by the element elt. |
| [`setelt!`](#setelt) | setelt!(l,i,elem) returns l with i-th element replaced by elem. |
| [`setsubMatrix!`](#setsubmatrix) | setsubMatrix(x, i1, j1, y) destructively alters the array x. Here x(i, j) is set to y(i-i1... |
| [`size?`](#size) | size?(u, n) tests if u has exactly n elements. |
| [`smaller?`](#smaller) | smaller?(x, y) is a strict ordering on depending on representatives of elements of the set... |
| [`sort`](#sort) | sort(agg) returns agg in sorted order. For complex numbers, sorts them by their real part ... |
| [`sorted?`](#sorted) | sorted?(agg) checks whether agg is sorted or not. |
| [`square?`](#square) | square?(m) returns true if m is a square matrix (i.e. if m has the same number of rows as ... |
| [`squareTop`](#squaretop) | squareTop(m) returns an n-by-n array consisting of the first n rows of the m-by-n array m.... |
| [`string`](#string) | string(jt) returns the string representation of jt. |
| [`subMatrix`](#submatrix) | subMatrix(x, i1, i2, j1, j2) extracts the submatrix [x(i, j)] where the index i ranges fro... |
| [`svd`](#svd) | svd(m) computes the singular value decomposition of the matrix m. |
| [`svdvals`](#svdvals) | svdvals(m) returns the singular values of the matrix m. |
| [`swapColumns!`](#swapcolumns) | swapColumns!(m, i, j) interchanges the ith and jth columns of m. This destructively alters... |
| [`swapRows!`](#swaprows) | swapRows!(m, i, j) interchanges the ith and jth rows of m. This destructively alters the a... |
| [`symmetric?`](#symmetric) | symmetric?(m) returns true if the matrix m is square and symmetric (i.e. m[i, j] = m[j, i]... |
| [`take`](#take) | take(l,i) returns the first i elements. |
| [`toString`](#tostring) | toString(mat, form) returns the string representation of mat with WS language format form. |
| [`total`](#total) | total(agg) returns the sum of the elements in agg. |
| [`trace`](#trace) | trace(m) returns the trace of m. |
| [`transpose`](#transpose) | transpose(m) returns the transposition of m. |
| [`union`](#union) | union(agg1, agg2) is the union set operator. Elements are sorted on output. |
| [`vertConcat`](#vertconcat) | vertConcat(x, y) vertically concatenates two arrays with an equal number of columns. The e... |
| [`vertSplit`](#vertsplit) | vertSplit(a, [n1, ..., ni]) splits a into arrays having n1, ..., ni rows. Error: if number... |
| [`zero`](#zero) | zero(m, n) returns an m-by-n zero matrix. |
| [`zero?`](#zero) | zero?(m) returns true if m is a zero matrix and false otherwise |
| [`~=`](#op-neq) | Operation defined in WSMatrix |

### Detailed Documentation

#### `#` <a id="op-hash"></a>

##### `#` : `% -> NonNegativeInteger`

#(u) returns the number of elements in u.

- **From**: `Aggregate`

##### `#` : `% -> WSInteger`

#(agg) returns the length of agg. 0 if it is a scalar, an index for example.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `*` <a id="op-mul"></a>

##### `*` : `(%, %) -> %`

a * b is the matrix multiplication, not the element-wise multiplication. WS error if dimensions are incompatible.

##### `*` : `(Integer, %) -> %`

n*a scales the matrix a by n.

##### `*` : `(E,%) -> %`

r*x is the left scalar multiple of the scalar r and the matrix x.

##### `*` : `(%,E) -> %`

x * r is the right scalar multiple of the scalar r and the matrix x.

##### `*` : `(%,WSVector(E)) -> %`

x * c is the product of the matrix x and the column vector c. Error: if the dimensions are incompatible.

##### `*` : `(WSVector(E),%) -> %`

r * x is the product of the row vector r and the matrix x. Error: if the dimensions are incompatible.

#### `+` <a id="op-add"></a>

a + b is the matrix addition. WS error if dimensions are incompatible.

- **Signature**: `(%, %) -> %`

#### `/` <a id="op-div"></a>

Operation defined in WSMatrix.

- **Signature**: `(%, E) -> % if E has FIELD`

#### `Pfaffian` <a id="pfaffian"></a>

Pfaffian(m) returns the Pfaffian of the matrix m. Error: if the matrix is not antisymmetric.

- **Signature**: `% -> E if E has COMRING`
- **From**: `MatrixCategory(R,Row,Col)`

#### `^` <a id="op-pow"></a>

##### `^` : `(%, PositiveInteger) -> %`

a^n is the matrix power by the positive integer n.

##### `^` : `(%, NonNegativeInteger) -> %`

a^n is the matrix power by the non-negative integer n.

#### `accumulate` <a id="accumulate"></a>

accumulate(agg) returns the partial sums of elements in agg.

- **Signature**: `% -> % if WSVector(E) has WSNUM`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `adjoint` <a id="adjoint"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L419)\]

adjoint(m) returns the adjoint of m, i.e. the conjugate transposition of m.

- **Signature**: `% -> %`

#### `adjugate` <a id="adjugate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L421)\]

adjugate(m) returns the adjugate of square m.

- **Signature**: `% -> %`

#### `antisymmetric?` <a id="antisymmetric"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L364)\]

antisymmetric?(m) returns true if the matrix m is square and antisymmetric (i.e. m[i, j] = -m[j, i] for all i and j) and false otherwise.

- **Signature**: `% -> Boolean`

#### `any?` <a id="any"></a>

any?(p, u) tests if p(x) is true for any element x of u. Note: for collections, any?(p, u) = reduce(or, map(p, u), false , true). However, any?(p, u) returns as soon as it finds an element for which p gives true.

- **Signature**: `((E -> Boolean), %) -> Boolean if % has ATFINAG`
- **From**: `HomogeneousAggregate(S)`

#### `append` <a id="append"></a>

append(l, elt) appends elt to the list l.

- **Signature**: `(%, WSVector(E)) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `array2` <a id="array2"></a>

array2(ll) constructs a 2-dimensional array, the inner list being the rows.

- **Signature**: `List(List(E)) -> %`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `blockConcat` <a id="blockconcat"></a>

blockConcat(ll) concatenates arrays row and column wise, building an array from blocks. The order is row major as in mat rix.

- **Signature**: `List(List(%)) -> %`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `blockSplit` <a id="blocksplit"></a>

##### `blockSplit` : `(%, List(NonNegativeInteger), List(NonNegativeInteger)) -> List(List(%))`

blockSplit(a, [n1,...,ni], [m1,...,mi]) splits a into multiple subarrays row and column wise, such that element at posit ion k, l has nk rows and ml columns. Error: if number of rows of a is different than n1 + ... + ni or number of columns of a is different than m1 + ... + mj

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `blockSplit` : `(%, PositiveInteger, PositiveInteger) -> List(List(%))`

blockSplit(a, n, m) splits a into n*m subarrays of equal size row and column wise, dividing a into blocks. Error: if num ber of rows of a is not divisible by n or number of columns of a is not divisible by m.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `cholesky` <a id="cholesky"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L479)\]

cholesky(m) computes the Cholesky decomposition of the positive definite/hermitian square matrix m.

- **Signature**: `% -> Record(l: %,u: %)`

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L721)\]

##### `coerce` : `Col -> %`

coerce(col) converts the column col to a column matrix.

- **From**: `MatrixCategory(R,Row,Col)`

##### `coerce` : `List(E) -> %`

coerce(list) tries to coerce list to a WSAggregate.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `coerce` : `% -> S`

coerce(a) transforms a into an element of S.

- **From**: `CoercibleTo(S)`

##### `coerce` : `% -> JLObject`

coerce(obj) coerces obj to JLObject. Convenience function.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `coerce` : `% -> WSExpression`

coerce(expr) returns the WSExpression representation of expr.

- **From**: [`WSObject`](WSObject.md)

##### `coerce` : `% -> WSMatrix(E)`

coerce(v) coerces inplace v to a WS matrix.

- **From**: [`WSVector(E)`](WSVector.md)

#### `colSlice` <a id="colslice"></a>

colSlice(m) returns a segment s such that for m the access m(i, s) gives the i-th row.

- **Signature**: `% -> Segment(Integer)`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `column` <a id="column"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L415)\]

##### `column` : `(%, Integer) -> %`

column(mat,i) returns the i-th column.

##### `column` : `(%, Integer) -> Col`

column(m, j) returns the jth column of m error check to determine if index is in proper ranges

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `columnSpace` <a id="columnspace"></a>

columnSpace(m) returns a sublist of columns of the matrix m forming a basis of its column space.

- **Signature**: `% -> List(WSVector(E)) if E has EUCDOM`
- **From**: `MatrixOperationsCategory(R,Row,Col)`

#### `convert` <a id="convert"></a>

convert(a) transforms a into an element of S.

- **Signature**: `% -> String`
- **From**: `ConvertibleTo(S)`

#### `copy` <a id="copy"></a>

copy(u) returns a top-level (non-recursive) copy of u. Note: for collections, copy(u) = [x for x in u].

- **Signature**: `% -> %`
- **From**: `Aggregate`

#### `count` <a id="count"></a>

##### `count` : `(S, %) -> NonNegativeInteger`

count(x, u) returns the number of occurrences of x in u. For collections, count(x, u) = reduce(+, [1 for y in u | x = y] , 0).

- **From**: `HomogeneousAggregate(S)`

##### `count` : `((S -> Boolean), %) -> NonNegativeInteger`

count(p, u) returns the number of elements x in u such that p(x) is true. For collections, count(p, u) = reduce(+, [1 fo r x in u | p(x)], 0).

- **From**: `HomogeneousAggregate(S)`

#### `delete` <a id="delete"></a>

delete(l, inds) deletes element(s) of the list l at index(es) inds.

- **Signature**: `(%, WSList(WSInteger)) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `determinant` <a id="determinant"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L690)\]

determinant(m) returns the determinant of the matrix m. Error: if the matrix is not square.

- **Signature**: `% -> E if E has COMRING`
- **From**: `MatrixCategory(R,Row,Col)`

#### `diagonal` <a id="diagonal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L434)\]

diagonal(m) returns the diagonal elements of m as a vector.

- **Signature**: `% -> WSVector(E)`

#### `diagonal?` <a id="diagonal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L355)\]

diagonal?(m) returns true if the matrix m is square and diagonal (i.e. all entries of m not on the diagonal are zero) and false otherwise.

- **Signature**: `% -> Boolean`

#### `diagonalMatrix` <a id="diagonalmatrix"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L502)\]

##### `diagonalMatrix` : `WSList(E) -> %`

diagonalMatrix(l) returns a diagonal matrix with elements of l as diagonal elements.

##### `diagonalMatrix` : `List(%) -> %`

diagonalMatrix([m1, ..., mk]) creates a block diagonal matrix M with block matrices m1, ..., mk down the diagonal, wit h 0 block matrices elsewhere. More precisely: if ri := nrows mi, ci := ncols mi, then m is an (r1+..+rk) by (c1+..+ck) m atrix with entries m.i.j = ml.(i-r1-..-r(l-1)).(j-c1-..-c(l-1)), if (r1+..+r(l-1)) < i <= r1+..+rl and (c1+..+c(l-1)) < i <= c1+..+cl, m.i.j = 0 otherwise.

- **From**: `MatrixCategory(R,Row,Col)`

##### `diagonalMatrix` : `List(R) -> %`

diagonalMatrix(l) returns a diagonal matrix with the elements of l on the diagonal.

- **From**: `MatrixCategory(R,Row,Col)`

#### `differences` <a id="differences"></a>

differences(agg) returns the differences between adjacent elements in agg.

- **Signature**: `% -> % if WSVector(E) has WSNUM`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `dimensions` <a id="dimensions"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L551)\]

dimensions(agg) returns dimensions of agg.

- **Signature**: `% -> WSList(WSInteger)`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `eigenSystem` <a id="eigensystem"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L461)\]

##### `eigenSystem` : `% -> Record(values : WSVector(WSExpression),`

eigenvectors(m) returns the eigenvectors of the square matrix m.

##### `eigenSystem` : `% -> Record(values: WSVector(WSExpression),vectors: WSMatrix(WSExpression))`

eigenSystem(m) computes the spectral decomposition of the square matrix m. It returns in a Record, the eigenvalues, sele ctor 'values', and the eigenvectors selector 'vectors'.

- **From**: [`WSMatrix(E)`](WSMatrix.md)

#### `eigenvalues` <a id="eigenvalues"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L457)\]

eigenvalues(m) returns the eigenvalues of the square matrix m.

- **Signature**: `% -> WSVector(WSExpression)`

#### `eigenvectors` <a id="eigenvectors"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L459)\]

eigenvectors(m) returns the eigenvectors of the square matrix m.

- **Signature**: `% -> WSMatrix(WSExpression)`

#### `elt` <a id="elt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L399)\]

##### `elt` : `(%, Integer, Integer) -> E`

elt(mat, m, n) returns the element (m,n) of the matrix mat.

##### `elt` : `(%, Integer, List(Integer)) -> %`

elt(x, row, colList) returns an 1-by-n array consisting of elements of x, where n = # colList. If colList = [j<1>, j<2>, ..., j<n>], then the (k, l)th entry of elt(x, row, colList) is x(row, j<l>).

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `elt` : `(%, Integer, List(Segment(Integer))) -> %`

elt(x, row, ls2) is equivalent to elt(x, row, l2) where l2 is obtained by appending expansions of elements of ls2, but s hould be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `elt` : `(%, List(%)) -> %`

elt(op, l) creates a form for application of op to list of arguments l.

- **From**: `OutputForm`

##### `elt` : `(%, List(Integer), Integer) -> %`

elt(x, rowList, col) returns an m-by-1 array consisting of elements of x, where m = # rowList. If rowList = [i<1>, i<2>, ..., i<m>], then the (k, l)th entry of elt(x, rowList, col) is x(i<k>, col).

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `elt` : `(%, List(Integer), List(Integer)) -> %`

elt(x, rowList, colList) returns an m-by-n array consisting of elements of x, where m = # rowList and n = # colList. If rowList = [i<1>, i<2>, ..., i<m>] and colList = [j<1>, j<2>, ..., j<n>], then the (k, l)th entry of elt(x, rowList, colL ist) is x(i<k>, j<l>).

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `elt` : `(%, List(Integer), Segment(Integer)) -> %`

elt(x, rowList, s) is equivalent to elt(x, rowList, expand(s)) but should be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `elt` : `(%, List(Segment(Integer)), Integer) -> %`

elt(x, ls1, col) is equivalent to elt(x, l1, col) where l1 is obtained by appending expansions of elements of ls1, but s hould be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `elt` : `(%, List(Segment(Integer)), List(Segment(Integer))) -> %`

elt(x, ls1, ls2) is equivalent to elt(x, l1, l2) where li is obtained by appending expansions of elements of lsi, but sh ould be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `elt` : `(%, List(Segment(Integer)), Segment(Integer)) -> %`

elt(x, ls1, s2) is equivalent to elt(x, l1, l2) where li is obtained by appending expansions of elements of lsi, but sho uld be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `elt` : `(%, Segment(Integer), List(Integer)) -> %`

elt(x, s, colList) is equivalent to elt(x, expand(s), colList) but should be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `elt` : `(%, Segment(Integer), List(Segment(Integer))) -> %`

elt(x, s1, ls2) is equivalent to elt(x, l1, l2) where li is obtained by appending expansions of elements of lsi, but sho uld be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `elt` : `(%, Segment(Integer), Segment(Integer)) -> %`

elt(x, s1, s2) is equivalent to elt(x, expand(s1), expand(s2)) but should be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `elt` : `(%, Integer) -> E`

elt(agg,i) returns the i-th element.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `elt` : `(%, Integer, Integer) -> R`

elt(m, i, j) returns the element in the ith row and jth column of the array m error check to determine if indices are in proper ranges

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `elt` : `(%, Integer, Integer, R) -> R`

elt(m, i, j, r) returns the element in the ith row and jth column of the array m, if m has an ith row and a jth column, and returns r otherwise

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `empty` <a id="empty"></a>

empty()$D creates an aggregate of type D with 0 elements. Note: The $D can be dropped if understood by context, e.g. u: D := empty().

- **Signature**: `() -> %`
- **From**: `Aggregate`

#### `empty?` <a id="empty"></a>

empty?(u) tests if u has 0 elements.

- **Signature**: `% -> Boolean`
- **From**: `Aggregate`

#### `eq?` <a id="eq"></a>

eq?(u, v) tests if u and v are same objects.

- **Signature**: `(%, %) -> Boolean`
- **From**: `Aggregate`

#### `eval` <a id="eval"></a>

##### `eval` : `(%, A, B) -> %`

eval(f, x, v) replaces x by v in f.

- **From**: `InnerEvalable(A,B)`

##### `eval` : `(%, Equation(R)) -> %`

eval(f, x = v) replaces x by v in f.

- **From**: `Evalable(R)`

##### `eval` : `(%, List(A), List(B)) -> %`

eval(f, [x1, ..., xn], [v1, ..., vn]) replaces xi by vi in f.

- **From**: `InnerEvalable(A,B)`

##### `eval` : `(%, List(Equation(R))) -> %`

eval(f, [x1 = v1, ..., xn = vn]) replaces xi by vi in f.

- **From**: `Evalable(R)`

#### `every?` <a id="every"></a>

every?(p, u) tests if p(x) is true for all elements x of u. Note: for collections, every?(p, u) = reduce(and, map(p, u), true, false). However, every?(p, u) returns as soon as it finds an element for which p gives false.

- **Signature**: `((E -> Boolean), %) -> Boolean if % has ATFINAG`
- **From**: `HomogeneousAggregate(S)`

#### `exquo` <a id="exquo"></a>

##### `exquo` : `(%, %) -> %`

exquo(f, g) creates the equivalent infix form.

- **From**: `OutputForm`

##### `exquo` : `(%, R) -> Union(%,"failed")`

exquo(m, r) computes the exact quotient of the elements of m by r, returning "failed" if this is not possible.

- **From**: `MatrixOperationsCategory(R,Row,Col)`

#### `extract` <a id="extract"></a>

extract(agg, parts) extracts parts of agg.

- **Signature**: `(%, WSExpression) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `fill!` <a id="fill"></a>

fill!(m, r) fills m with r's

- **Signature**: `(%, E) -> %`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `first` <a id="first"></a>

first(agg) returns the first element of agg.

- **Signature**: `% -> WSVector(E)`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `hash` <a id="hash"></a>

hash(s) calculates a hash code for s.

- **Signature**: `% -> SingleInteger if E has HASHABL`
- **From**: `Hashable`

#### `hashUpdate!` <a id="hashupdate"></a>

hashUpdate!(hs, s) computes new HashState from old and s used for incremental computation of hash values. hashUpdate! mi ght destructively work on its first argument.

- **Signature**: `(HashState, %) -> HashState if E has HASHABL`
- **From**: `Hashable`

#### `hermitian?` <a id="hermitian"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L370)\]

hermitian?(m) checks whether or not m is hermitian.

- **Signature**: `% -> Boolean`

#### `hessenberg` <a id="hessenberg"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L476)\]

hessenberg(m) computes the Hessenberg decomposition of the square matrix m.

- **Signature**: `% -> Record(p: %,h: %)`

#### `horizConcat` <a id="horizconcat"></a>

##### `horizConcat` : `(%, %) -> %`

horizConcat(x, y) horizontally concatenates two arrays with an equal number of rows. The entries of y appear to the righ t of the entries of x. Error: if the arrays do not have the same number of rows.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `horizConcat` : `List(%) -> %`

horizConcat(l) horizontally concatenates all members of l Error: if the arrays do not have the same number of rows.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `horizSplit` <a id="horizsplit"></a>

##### `horizSplit` : `(%, List(NonNegativeInteger)) -> List(%)`

horizSplit(a, [n1, n2, ..., ni]) splits a into arrays having n1, ..., ni columns. Error: if number of columns of a is di fferent than n1 + ... + ni.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `horizSplit` : `(%, PositiveInteger) -> List(%)`

horizSplit(a, n) splits a into n arrays of equal size column wise. Error: if number of columns of a is not divisible by n.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `insert` <a id="insert"></a>

insert(l, elt, ind) inserts elt to the list l at index ind.

- **Signature**: `(%, WSVector(E), WSInteger) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `intersection` <a id="intersection"></a>

intersection(agg1, agg2) is the intersection operator.

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `inverse` <a id="inverse"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L436)\]

##### `inverse` : `% -> %`

inverse(m) computes the inverse of m. For example:

```fricas
m:=jWSMatrix("{{a, b}, {b, a}}")@WSMAT(WSEXPR)
inverse m
```

##### `inverse` : `% -> Union(%,"failed")`

inverse(m) returns the inverse of the matrix m. If the matrix is not invertible, "failed" is returned. Error: if the mat rix is not square.

- **From**: `MatrixCategory(R,Row,Col)`

#### `invertIfCan` <a id="invertifcan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L442)\]

invertIfCan(m) returns the inverse of the matrix m. If the matrix is not invertible, "failed" is returned. Error: if the matrix is not square.

- **Signature**: `% -> Union(%,"failed") if E has INTDOM`

#### `jWSAggregate` <a id="jwsaggregate"></a>

jWSAggregate(list) constructs agg to a WSAggregate.

- **Signature**: `List(WSVector(E)) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `jWSInterpret` <a id="jwsinterpret"></a>

##### `jWSInterpret` : `String -> %`

jWSInterpret(form) interprets form.

- **From**: [`WSObject`](WSObject.md)

##### `jWSInterpret` : `(String, String) -> %`

jWSInterpret(Type|Form, Expr) interprets Expr to be of type Type or Form using the WS Language. For exampl e:

```fricas
jWSInterpret("Number","3.2")@WSREAL
jWSInterpret("Real","3.2")@WSREAL
jWSInterpret("L
ocation","Lille")$WSEXPR
See jWSExpr "$InterpreterTypes"
```

- **From**: [`WSObject`](WSObject.md)

##### `jWSInterpret` : `(String, String, String) -> %`

jWSInterpret(form1,form2,form3) interprets forms.

- **From**: [`WSObject`](WSObject.md)

#### `jWSMatrix` <a id="jwsmatrix"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L510)\]

jWSMatrix(str) constructs str as a WSMatrix. str must be in the WS language (WS list of WS list(s)).

- **Signature**: `String -> %`

#### `jlAbout` <a id="jlabout"></a>

jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia. In the Julia interpreter, ent er in the package management mode with ']', and issue: pkg> add "https://github.com/tecosaur/About.jl"

- **Signature**: `% -> Void`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlApply` <a id="jlapply"></a>

##### `jlApply` : `(String, %) -> JLObject`

jlApply(func, obj) applies the function func with obj as parameter and returns the result as a FriCAS JLObject. For exam ple, using JLMatrix(JLObjFloat64):

```fricas
M:=nrand(4,4);
jlApply("svd", M::JLMatrix(JLObjFloat64)).S
shou
ld be "equivalent" to svdvals(M).
```

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlApply` : `(String, %, %) -> JLObject`

jlApply(func, obj1, obj2) applies the function func with obj1 and obj2 as parameters and returns the result as a FriCAS JLObject. For example (equivalent to map(cos, v)):

```fricas
v:=urand01(5)$JLVector(JLFloat)
jlApply("map", "
cos", coerce v)
```

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlApply` : `(String, %, %, %) -> JLObject`

jlApply(func, obj1, obj2, obj3) applies the function func with obj1, obj2 and obj3 as parameters and returns the result as a FriCAS JLObject.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlApply` : `(String, %, %, %, %) -> JLObject`

jlApply(func, obj1, obj2, obj3, obj4) applies the function func with obj1, obj2, obj3 and obj4 as parameters and returns the result as a FriCAS JLObject.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlApply` : `(String, %, %, %, %, %) -> JLObject`

jlApply(func, obj1, obj2, obj3, obj4, obj5) applies the function func with obj1, obj2, obj3, obj4 and obj5 as parameters and returns the result as a FriCAS JLObject.

- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlDisplay` <a id="jldisplay"></a>

jlDisplay(v) pretty prints v (à la Julia).

- **Signature**: `% -> Void`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlDump` <a id="jldump"></a>

jlDump(obj) dumps (shows) the Julia object (internal structure with type).

- **Signature**: `JLObject -> Void`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlEval` <a id="jleval"></a>

jlEval(expr) evaluates expr using the WS Transport Protocol.

- **Signature**: `% -> %`
- **From**: [`WSObject`](WSObject.md)

#### `jlFieldNames` <a id="jlfieldnames"></a>

jlFieldNames(obj) returns the field names of obj.

- **Signature**: `% -> JLObject`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlGetField` <a id="jlgetfield"></a>

jlGetField(obj, sym) returns the property/element sym of obj.

- **Signature**: `(%, JLSymbol) -> JLObject`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlGetJuliaIndex` <a id="jlgetjuliaindex"></a>

jlGetJuliaIndex(obj) returns the string that allows access to the Julia indexed dictionary index referencing the object obj. Convenience function for use in the interpreter (jlref). For example: jlGetJuliaIndex(df) => "getindex(refs,10)"

- **Signature**: `% -> String`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlGetProperty` <a id="jlgetproperty"></a>

jlGetProperty(obj, sym) returns the property/element sym of obj.

- **Signature**: `(%, JLSymbol) -> JLObject`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlHead` <a id="jlhead"></a>

jlHead(expr) returns the Head type of expr.

- **Signature**: `% -> WSSymbol`
- **From**: [`WSObject`](WSObject.md)

#### `jlId` <a id="jlid"></a>

jlId(obj) returns the Julia indexed dictionary index referencing the object obj.

- **Signature**: `% -> Integer`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlObject` <a id="jlobject"></a>

jlObject() returns the internal Julia name of the Julia module used. For example:

```fricas
jlObject()$NMUnivariatePolyn
omial(NINT,'x)
```

- **Signature**: `() -> String`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlPropertyNames` <a id="jlpropertynames"></a>

jlPropertyNames(obj) returns the property/element names of obj.

- **Signature**: `% -> JLObject`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlRef` <a id="jlref"></a>

##### `jlRef` : `% -> SExpression`

jlRef(obj) returns the internal Lisp representation of the Julia object obj.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlRef` : `String -> %`

jlref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia mutable object.

- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlSymbolic` <a id="jlsymbolic"></a>

jlSymbolic(expr) returns the symbolic 'FullForm'.

- **Signature**: `% -> String`
- **From**: [`WSObject`](WSObject.md)

#### `jlText` <a id="jltext"></a>

jlText(obj, mimest) returns the text representation of obj as a list of String lines with mime subtype mimest, for examp le "plain" for "text/plain" or "html" for "text/html" if is implemented at Julia level. Use internally the 'show' method . For example:

```fricas
df:=jdframe nrand(6,3)
jlText(df, "plain")
jlText(df, "html")
jlText(df, "csv")
jlText(df, "latex")
```

- **Signature**: `(%, String) -> List(String)`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlType` <a id="jltype"></a>

jlType(obj) returns the Julia type of obj.

- **Signature**: `% -> Symbol`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlimref` <a id="jlimref"></a>

jlimref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia immutable object wrapped in a Ju lia RefValueAny

- **Signature**: `String -> %`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlref` <a id="jlref"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L522)\]

##### `jlref` : `% -> SExpression`

jlRef(obj) returns the internal Lisp representation of the Julia object obj.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlref` : `String -> %`

jlref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia mutable object.

- **From**: [`JLObjectType`](JLObjectType.md)

#### `join` <a id="join"></a>

join(agg1, agg2) joins the two aggregates agg1 and agg2.

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `jordan` <a id="jordan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L474)\]

jordan(m) computes the Jordan decomposition of the square matrix m.

- **Signature**: `% -> Record(s: %,j: %)`

#### `kroneckerProduct` <a id="kroneckerproduct"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L708)\]

##### `kroneckerProduct` : `(%, %) -> %`

kroneckerProduct(a, b) calculates the Kronecker product of the matrices a and b. This corresponds to tensor product of c orresponding operators.

- **From**: `MatrixCategory(R,Row,Col)`

##### `kroneckerProduct` : `List(%) -> %`

kroneckerProduct([a1, a2, ..., an]) calculates the Kronecker product of the matrices a1, a2, ..., an. This corresponds t o tensor product of corresponding operators.

- **From**: `MatrixCategory(R,Row,Col)`

#### `kroneckerSum` <a id="kroneckersum"></a>

##### `kroneckerSum` : `(%, %) -> %`

kroneckerSum(a, b) calculates the Kronecker sum of the matrices a and b.

- **From**: `MatrixCategory(R,Row,Col)`

##### `kroneckerSum` : `List(%) -> %`

kroneckerSum([a1, a2, ..., an]) calculates the Kronecker sum of the matrices a1, a2, ..., an.

- **From**: `MatrixCategory(R,Row,Col)`

#### `kronecker_prod1` <a id="kronecker_prod1"></a>

Should be local but conditional. > Void

- **Signature**: `(%, Integer, List(List(NonNegativeInteger)), List(%), NonNegativeInteger, NonNegativeInteger, Union(E,one)) -> Void`
- **From**: `MatrixCategory(R,Row,Col)`

#### `last` <a id="last"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L560)\]

last(agg) returns the last element of agg.

- **Signature**: `% -> WSVector(E)`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `latex` <a id="latex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L539)\]

latex(s) returns a LaTeX-printable output representation of s.

- **Signature**: `% -> String`
- **From**: `SetCategory`

#### `length` <a id="length"></a>

length(agg) returns the length of agg. 0 if it is a scalar, an index for example.

- **Signature**: `% -> WSInteger`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `less?` <a id="less"></a>

less?(u, n) tests if u has less than n elements.

- **Signature**: `(%, NonNegativeInteger) -> Boolean`
- **From**: `Aggregate`

#### `linearSolve` <a id="linearsolve"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L449)\]

linearSolve(mat, b) finds x, solution of the equation mat * x = b.

- **Signature**: `(%, %) -> %`

#### `listOfLists` <a id="listoflists"></a>

listOfLists(m) returns the rows of the array m as a list of lists.

- **Signature**: `% -> List(List(E))`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `lu` <a id="lu"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L482)\]

lu(m) computes the LU decomposition of the matrix m.

- **Signature**: `% -> Record(lu: %,p: %,c: %)`

#### `map` <a id="map"></a>

##### `map` : `((R -> R), %) -> %`

map(f, a) returns b, where b(i, j) = a(i, j) for all i, j.

- **From**: `MatrixOperationsCategory(R,Row,Col)`

##### `map` : `(((R, R) -> R), %, %) -> %`

map(f, a, b) returns c, where c(i, j) = f(a(i, j), b(i, j)) for all i, j

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `map` : `(((R, R) -> R), %, %, R) -> %`

map(f, a, b, r) returns c, where c(i, j) = f(a(i, j), b(i, j)) when both a(i, j) and b(i, j) exist; else c(i, j) = f(r, b(i, j)) when a(i, j) does not exist; else c(i, j) = f(a(i, j), r) when b(i, j) does not exist; otherwise c(i, j) = f(r, r).

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `map` : `((S -> S), %) -> %`

map(f, u) returns a copy of u with each element x replaced by f(x). For collections, map(f, u) = [f(x) for x in u].

- **From**: `HomogeneousAggregate(S)`

#### `map!` <a id="map"></a>

##### `map!` : `((R -> R), %) -> %`

map!(f, a) assigns a(i, j) to f(a(i, j)) for all i, j.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `map!` : `((S -> S), %) -> %`

map!(f, u) destructively replaces each element x of u by f(x).

- **From**: `HomogeneousAggregate(S)`

#### `matrix` <a id="matrix"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L508)\]

##### `matrix` : `WSVector(E) -> %`

matrix(vec) returns vec as a matrix (inplace coercion).

##### `matrix` : `List(List(%)) -> %`

matrix(llf) makes llf (a list of lists of forms) into a form which displays as a matrix.

- **From**: `OutputForm`

##### `matrix` : `List(List(R)) -> %`

matrix(l) converts the list of lists l to a matrix, where the list of lists is viewed as a list of the rows of the matri x.

- **From**: `MatrixCategory(R,Row,Col)`

##### `matrix` : `(NonNegativeInteger, NonNegativeInteger, ((Integer, Integer) -> R)) -> %`

matrix(n,m,f) constructs an n * m matrix with the (i,j) entry equal to f(i,j).

- **From**: `MatrixCategory(R,Row,Col)`

#### `matrixFunction` <a id="matrixfunction"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L484)\]

matrixFunction(func, m) applies the matrix function func, if available, to the matrix m. The Wolfram Language operator needs to be used. Note that it is not an element-wise operation. For example:

```fricas
m := jWSMatrix("{{1.2, 1.7},{1.12, -2.1}}")@WSMAT(WSREAL)
matrixFunction("Sqrt", m)
```

- **Signature**: `(WSExpression, %) -> WSMatrix(WSExpression)`

#### `max` <a id="max"></a>

##### `max` : `% -> S`

max(u) returns maximal element of u. Error if u is empty.

- **From**: `HomogeneousAggregate(S)`

##### `max` : `(((S, S) -> Boolean), %) -> S`

max(p, u) returns maximal element of u with respect to total ordering predicate p. Error if u is empty.

- **From**: `HomogeneousAggregate(S)`

#### `maxColIndex` <a id="maxcolindex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L577)\]

maxColIndex(m) returns the index of the 'last' column of the array m

- **Signature**: `% -> Integer`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `maxRowIndex` <a id="maxrowindex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L575)\]

maxRowIndex(m) returns the index of the 'last' row of the array m

- **Signature**: `% -> Integer`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `member?` <a id="member"></a>

member?(x, u) tests if x is a member of u. For collections, member?(x, u) = reduce(or, [x=y for y in u], false). However , member?(x, u) returns as soon as it finds a member.

- **Signature**: `(E, %) -> Boolean if % has ATFINAG and E has BASTYPE`
- **From**: `HomogeneousAggregate(S)`

#### `members` <a id="members"></a>

members(u) returns a list of the consecutive elements of u. For multisets members gives result with no repetition. See a lso parts.

- **Signature**: `% -> List(E) if % has ATFINAG`
- **From**: `HomogeneousAggregate(S)`

#### `min` <a id="min"></a>

min(u) returns minimal element of u. Error if u is empty.

- **Signature**: `% -> E if % has ATFINAG and E has ORDSET`
- **From**: `HomogeneousAggregate(S)`

#### `minColIndex` <a id="mincolindex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L574)\]

minColIndex(m) returns the index of the 'first' column of the array m

- **Signature**: `% -> Integer`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `minRowIndex` <a id="minrowindex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L573)\]

minRowIndex(m) returns the index of the 'first' row of the array m

- **Signature**: `% -> Integer`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `minordet` <a id="minordet"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L698)\]

minordet(m) computes the determinant of the matrix m using minors. Error: if the matrix is not square.

- **Signature**: `% -> E if E has COMRING`
- **From**: `MatrixCategory(R,Row,Col)`

#### `minors` <a id="minors"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L453)\]

##### `minors` : `% -> %`

minors(m) returns the minors of m.

##### `minors` : `(%, WSInteger) -> %`

minors(m,i) returns the i-th minors of m.

#### `missing?` <a id="missing"></a>

missing?(obj) checks whether or not obj is missing.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `more?` <a id="more"></a>

more?(u, n) tests if u has more than n elements.

- **Signature**: `(%, NonNegativeInteger) -> Boolean`
- **From**: `Aggregate`

#### `mutable?` <a id="mutable"></a>

mutable?(obj) checks whether or not obj is mutable.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `ncols` <a id="ncols"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L578)\]

ncols(m) returns the number of columns in the array m

- **Signature**: `% -> NonNegativeInteger`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `new` <a id="new"></a>

new(m, n, r) is an m-by-n array all of whose entries are r

- **Signature**: `(NonNegativeInteger, NonNegativeInteger, E) -> %`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `norm` <a id="norm"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L423)\]

##### `norm` : `% -> E`

norm(m) returns the norm of m, i.e. the value of the maximum singular values of m.

##### `norm` : `(%, WSExpression) -> E`

norm(m, type) returns the type norm of m. For example, norm(m,2) returns the usual norm, norm(m, "Infinity") or norm(m, "Frobenius") returns their respective norms. See documentation for information.

#### `nothing?` <a id="nothing"></a>

nothing?(obj) checks whether or not obj is nothing.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `nrows` <a id="nrows"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L576)\]

nrows(m) returns the number of rows in the array m

- **Signature**: `% -> NonNegativeInteger`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `nullSpace` <a id="nullspace"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L451)\]

##### `nullSpace` : `% -> WSList(WSVector(E))`

nullSpace(m) returns the null space of m as a list of vectors.

##### `nullSpace` : `% -> List(Col)`

nullSpace(m) returns a basis for the null space of the matrix m. Note: null space is considered as vector space over quo tient field of the ring.

- **From**: `MatrixOperationsCategory(R,Row,Col)`

#### `nullity` <a id="nullity"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L694)\]

nullity(m) returns the nullity of the matrix m. This is the dimension of the null space of the matrix m.

- **Signature**: `% -> NonNegativeInteger if E has INTDOM`
- **From**: `MatrixOperationsCategory(R,Row,Col)`

#### `numeric` <a id="numeric"></a>

##### `numeric` : `% -> WSExpression`

numeric(expr) returns numerical expr if possible.

- **From**: [`WSObject`](WSObject.md)

##### `numeric` : `(%, PositiveInteger) -> WSExpression`

numeric(expr, prec) returns the numerical expr with prec digits of precision if possible.

- **From**: [`WSObject`](WSObject.md)

#### `numeric?` <a id="numeric"></a>

numeric?(x) checks whether or not x is or would yield a number.

- **Signature**: `% -> Boolean`
- **From**: [`WSObject`](WSObject.md)

#### `part` <a id="part"></a>

part(agg,i) returns the i-th element.

- **Signature**: `(%, WSInteger) -> WSVector(E)`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `parts` <a id="parts"></a>

##### `parts` : `% -> List(R)`

parts(m) returns a list of the elements of m in row major order

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `parts` : `% -> List(S)`

parts(u) returns a list of the consecutive elements of u. For finite collections, construct(parts(u)) = u.

- **From**: `HomogeneousAggregate(S)`

#### `permanent` <a id="permanent"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L432)\]

permanent(m) returns the permanent of m.

- **Signature**: `% -> E`

#### `positiveDefinite?` <a id="positivedefinite"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L368)\]

positiveDefinite?(m) checks whether or not m is positive definite.

- **Signature**: `% -> Boolean`

#### `positivePower` <a id="positivepower"></a>

positivePower(x, n) computes a positive integral power of the matrix x. Error: if the matrix is not square.

- **Signature**: `(%, Integer) -> % if E has SRNG`
- **From**: `MatrixCategory(R,Row,Col)`

#### `prepend` <a id="prepend"></a>

prepend(l, elt) prepends elt to the list l.

- **Signature**: `(%, WSVector(E)) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `pseudoInverse` <a id="pseudoinverse"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L446)\]

pseudoInverse(m) computes the pseudo inverse of m also known as Moore-Penrose inverse.

- **Signature**: `% -> %`

#### `qelt` <a id="qelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L401)\]

##### `qelt` : `(%, Integer, Integer) -> E`

qelt(mat, m, n) returns the element (m,n) of the matrix mat. No checks are done at the FriCAS level.

##### `qelt` : `(%, Integer) -> E`

qelt(agg,i) returns the i-th element. No checks are done at the FriCAS level.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `qelt` : `(%, Integer, Integer) -> R`

qelt(m, i, j) returns the element in the ith row and jth column of the array m NO error check to determine if indices ar e in proper ranges

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `qnew` <a id="qnew"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L712)\]

qnew(m, n) is an m-by-n uninitialized array

- **Signature**: `(NonNegativeInteger, NonNegativeInteger) -> %`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `qr` <a id="qr"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L472)\]

qr(m) computes the QR decomposition of the matrix m.

- **Signature**: `% -> Record(q: %,r: %)`

#### `qsetelt` <a id="qsetelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L407)\]

##### `qsetelt` : `(%, Integer, Integer, E) -> %`

qsetelt(mat,n,m,elt) returns a new matrix with element (n,m) replaced by the element elt.

##### `qsetelt` : `(%, Integer, E) -> %`

qsetelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem. No checks are done at the FriCAS l evel.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `qsetelt!` <a id="qsetelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L410)\]

##### `qsetelt!` : `(%, Integer, Integer, E) -> E`

qsetelt!(mat,n,m,elt) returns the element elt. The matrix mat is modified in place.

##### `qsetelt!` : `(%, Integer, E) -> %`

qsetelt!(l,i,elem) returns l with i-th element replaced by elem. No checks are done at the FriCAS level.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `qsetelt!` : `(%, Integer, Integer, R) -> R`

qsetelt!(m, i, j, r) sets the element in the ith row and jth column of m to r NO error check to determine if indices are in proper ranges

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `randomComplexMatrix` <a id="randomcomplexmatrix"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L496)\]

randomComplexMatrix(range, dims) returns a random matrix with random complex numbers in the range range and dims dimensi ons.

```fricas
range:=jWSList("{1+I}")@WSLIST(WSCPLX)
randomComplexMatrix(range,jWSList("{3,3}")$WSLIST(WSINT
))@WSMAT(WSCPLX)
```

- **Signature**: `(WSList(WSComplex), WSList(WSInteger)) -> WSMatrix(WSComplex)`
- **From**: [`WSMatrix(E)`](WSMatrix.md)

#### `randomRealMatrix` <a id="randomrealmatrix"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L490)\]

randomRealMatrix(range, dims) returns a random matrix with random numbers in the range range and dims dimensions. Examp le: range := jWSList("-5,5")$WSLIST(WSREAL)

```fricas
randomRealMatrix(range,jWSList("{3,3}")$WSLIST(WSINT))@WSMAT(WS
REAL)
```

- **Signature**: `(WSList(WSReal), WSList(WSInteger)) -> WSMatrix(WSReal)`
- **From**: [`WSMatrix(E)`](WSMatrix.md)

#### `rank` <a id="rank"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L641)\]

rank(m) returns the rank of the matrix m.

- **Signature**: `% -> NonNegativeInteger if E has INTDOM`
- **From**: `MatrixOperationsCategory(R,Row,Col)`

#### `removeDuplicates` <a id="removeduplicates"></a>

removeDuplicates(agg) removes duplicate elements.

- **Signature**: `% -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `replacePart` <a id="replacepart"></a>

replacePart(expr, part) replaces expr using rule(s) expressing position(s).

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `rest` <a id="rest"></a>

rest(agg) returns agg without the first element.

- **Signature**: `% -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `reverse` <a id="reverse"></a>

##### `reverse` : `% -> %`

reverse(agg) reverses the elements of agg.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `reverse` : `(%, WSInteger) -> %`

reverse(agg, lev) reverses the elements of agg at level lev.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `reverse` : `(%, WSList(WSInteger)) -> %`

reverse(agg, levels) reverses the elements of agg using levels.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `riffle` <a id="riffle"></a>

##### `riffle` : `(%, %) -> %`

riffle(agg, elts) riffles (interleaves) element(s) elts i.e. inserts them.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `riffle` : `(%, %, %) -> %`

riffle(agg, elts, inds) riffles (interleaves) element(s) elts i.e. inserts them. If inds is min, max, n inserts at posit ion min, min+n, min+2n..max.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `row` <a id="row"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L413)\]

##### `row` : `(%, Integer) -> %`

row(mat,i) returns the i-th row.

##### `row` : `(%, Integer) -> Row`

row(m, i) returns the ith row of m error check to determine if index is in proper ranges

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `rowEchelon` <a id="rowechelon"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L639)\]

rowEchelon(m) returns the row echelon form of the matrix m.

- **Signature**: `% -> % if E has EUCDOM`
- **From**: `MatrixOperationsCategory(R,Row,Col)`

#### `rowSlice` <a id="rowslice"></a>

rowSlice(m) returns a segment s such that for m the access m(s, j) gives the j-th column.

- **Signature**: `% -> Segment(Integer)`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `sample` <a id="sample"></a>

sample yields a value of type %

- **Signature**: `() -> %`
- **From**: `Aggregate`

#### `scalarMatrix` <a id="scalarmatrix"></a>

scalarMatrix(n, r) returns an n-by-n matrix with r's on the diagonal and zeroes elsewhere.

- **Signature**: `(NonNegativeInteger, E) -> %`
- **From**: `MatrixCategory(R,Row,Col)`

#### `schur` <a id="schur"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L470)\]

schur(m) computes the Schur decomposition of the square matrix m.

- **Signature**: `% -> Record(q: %,t: %)`

#### `setColumn!` <a id="setcolumn"></a>

setColumn!(m, j, v) sets to jth column of m to v

- **Signature**: `(%, Integer, WSVector(E)) -> %`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `setIntersection` <a id="setintersection"></a>

setIntersection(agg1, agg2) is the intersection set operator.

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `setRow!` <a id="setrow"></a>

setRow!(m, i, v) sets to ith row of m to v

- **Signature**: `(%, Integer, WSVector(E)) -> %`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `setelt` <a id="setelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L404)\]

##### `setelt` : `(%, Integer, Integer, E) -> %`

setelt(mat,n,m,elt) returns a new matrix with element (n,m) replaced by the element elt.

##### `setelt` : `(%, Integer, E) -> %`

setelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `setelt!` <a id="setelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L599)\]

##### `setelt!` : `(%, Integer, E) -> %`

setelt!(l,i,elem) returns l with i-th element replaced by elem.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `setelt!` : `(%, Integer, List(Integer), %) -> %`

setelt!(x, row, colList) assigns to an 1-by-n selection of the array, where n = # colList.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `setelt!` : `(%, Integer, List(Segment(Integer)), %) -> %`

setelt!(x, row, ls2) is equivalent to setelt!(x, row, l2) where l2 is obtained by appending expansions of elements of ls 2, but should be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `setelt!` : `(%, List(Integer), Integer, %) -> %`

setelt!(x, rowList, col) assigns to an m-by-1 selection of the array, where m = # rowList.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `setelt!` : `(%, List(Integer), List(Integer), %) -> %`

setelt!(x, rowList, colList, y) destructively alters the array x. If y is m-by-n, rowList = [i<1>, i<2>, ..., i<m>] and colList = [j<1>, j<2>, ..., j<n>], then x(i<k>, j<l>) is set to y(k, l) for k = 1, ..., m and l = 1, ..., n.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `setelt!` : `(%, List(Integer), Segment(Integer), %) -> %`

setelt!(x, l1, s2) is equivalent to setelt!(x, l1, expand(s2)) but should be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `setelt!` : `(%, List(Segment(Integer)), Integer, %) -> %`

setelt!(x, ls1, col) is equivalent to setelt!(x, l1, col) where l1 is obtained by appending expansions of elements of ls 1, but should be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `setelt!` : `(%, List(Segment(Integer)), List(Segment(Integer)), %) -> %`

setelt!(x, ls1, ls1) is equivalent to setelt!(x, l1, l2) where li is obtained by appending expansions of elements of lsi , but should be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `setelt!` : `(%, List(Segment(Integer)), Segment(Integer), %) -> %`

setelt!(x, ls1, s2) is equivalent to setelt!(x, l1, l2) where li is obtained by appending expansions of elements of lsi, but should be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `setelt!` : `(%, Segment(Integer), List(Integer), %) -> %`

setelt!(x, s1, l2) is equivalent to setelt!(x, expand(s1), l2) but should be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `setelt!` : `(%, Segment(Integer), List(Segment(Integer)), %) -> %`

setelt!(x, s1, ls2) is equivalent to setelt!(x, l1, l2) where li is obtained by appending expansions of elements of lsi, but should be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `setelt!` : `(%, Segment(Integer), Segment(Integer), %) -> %`

setelt!(x, s1, s2) is equivalent to setelt!(x, expand(s1), expand(s2)) but should be more convenient and more efficient.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `setelt!` : `(%, Integer, Integer, R) -> R`

setelt!(m, i, j, r) sets the element in the ith row and jth column of m to r error check to determine if indices are in proper ranges

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `setsubMatrix!` <a id="setsubmatrix"></a>

setsubMatrix(x, i1, j1, y) destructively alters the array x. Here x(i, j) is set to y(i-i1+1, j-j1+1) for i = i1, ..., i 1-1+nrows y and j = j1, ..., j1-1+ncols y.

- **Signature**: `(%, Integer, Integer, %) -> %`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `size?` <a id="size"></a>

size?(u, n) tests if u has exactly n elements.

- **Signature**: `(%, NonNegativeInteger) -> Boolean`
- **From**: `Aggregate`

#### `smaller?` <a id="smaller"></a>

smaller?(x, y) is a strict ordering on depending on representatives of elements of the set. If % has Comparable then sma ller? gives mathematical linear order.

- **Signature**: `(%, %) -> Boolean if E has COMPAR`
- **From**: `ComparableRepresentation`

#### `sort` <a id="sort"></a>

sort(agg) returns agg in sorted order. For complex numbers, sorts them by their real part first.

- **Signature**: `% -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `sorted?` <a id="sorted"></a>

sorted?(agg) checks whether agg is sorted or not.

- **Signature**: `% -> Boolean`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `square?` <a id="square"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L352)\]

square?(m) returns true if m is a square matrix (i.e. if m has the same number of rows as columns) and false otherwise.

- **Signature**: `% -> Boolean`

#### `squareTop` <a id="squaretop"></a>

squareTop(m) returns an n-by-n array consisting of the first n rows of the m-by-n array m. Error: if m < n.

- **Signature**: `% -> %`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `string` <a id="string"></a>

string(jt) returns the string representation of jt.

- **Signature**: `% -> String`
- **From**: [`JLType`](JLType.md)

#### `subMatrix` <a id="submatrix"></a>

subMatrix(x, i1, i2, j1, j2) extracts the submatrix [x(i, j)] where the index i ranges from i1 to i2 and the index j ran ges from j1 to j2.

- **Signature**: `(%, Integer, Integer, Integer, Integer) -> %`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `svd` <a id="svd"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L466)\]

svd(m) computes the singular value decomposition of the matrix m.

- **Signature**: `% -> Record(S: %,sv: %,V: %)`

#### `svdvals` <a id="svdvals"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L468)\]

svdvals(m) returns the singular values of the matrix m.

- **Signature**: `% -> WSList(E)`

#### `swapColumns!` <a id="swapcolumns"></a>

swapColumns!(m, i, j) interchanges the ith and jth columns of m. This destructively alters the array.

- **Signature**: `(%, Integer, Integer) -> %`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `swapRows!` <a id="swaprows"></a>

swapRows!(m, i, j) interchanges the ith and jth rows of m. This destructively alters the array.

- **Signature**: `(%, Integer, Integer) -> %`
- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `symmetric?` <a id="symmetric"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L359)\]

symmetric?(m) returns true if the matrix m is square and symmetric (i.e. m[i, j] = m[j, i] for all i and j) and false otherwise.

- **Signature**: `% -> Boolean`

#### `take` <a id="take"></a>

take(l,i) returns the first i elements.

- **Signature**: `(%, Integer) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `toString` <a id="tostring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L505)\]

##### `toString` : `(%, WSExpression) -> String`

toString(mat, form) returns the string representation of mat with WS language format form.

##### `toString` : `% -> String`

toString(obj) returns the string representation of obj.

- **From**: [`WSObject`](WSObject.md)

#### `total` <a id="total"></a>

total(agg) returns the sum of the elements in agg.

- **Signature**: `% -> WSVector(E) if WSVector(E) has WSNUM`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `trace` <a id="trace"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L430)\]

trace(m) returns the trace of m.

- **Signature**: `% -> E`

#### `transpose` <a id="transpose"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L417)\]

##### `transpose` : `% -> %`

transpose(m) returns the transposition of m.

##### `transpose` : `Row -> %`

transpose(r) converts the row r to a row matrix.

- **From**: `MatrixCategory(R,Row,Col)`

#### `union` <a id="union"></a>

union(agg1, agg2) is the union set operator. Elements are sorted on output.

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `vertConcat` <a id="vertconcat"></a>

##### `vertConcat` : `(%, %) -> %`

vertConcat(x, y) vertically concatenates two arrays with an equal number of columns. The entries of y appear below of th e entries of x. Error: if the arrays do not have the same number of columns.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `vertConcat` : `List(%) -> %`

vertConcat(l) vertically concatenates all members of l Error: if the arrays do not have the same number of columns.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `vertSplit` <a id="vertsplit"></a>

##### `vertSplit` : `(%, List(NonNegativeInteger)) -> List(%)`

vertSplit(a, [n1, ..., ni]) splits a into arrays having n1, ..., ni rows. Error: if number of rows of a is different tha n n1+ ... + ni.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

##### `vertSplit` : `(%, PositiveInteger) -> List(%)`

vertSplit(a, n) splits a into n arrays of equal size row wise. Error: if number of rows of a is not divisible by n.

- **From**: `TwoDimensionalArrayCategory(R,Row,Col)`

#### `zero` <a id="zero"></a>

zero(m, n) returns an m-by-n zero matrix.

- **Signature**: `(NonNegativeInteger, NonNegativeInteger) -> %`
- **From**: `MatrixCategory(R,Row,Col)`

#### `zero?` <a id="zero"></a>

zero?(m) returns true if m is a zero matrix and false otherwise

- **Signature**: `% -> Boolean if E has ABELMON`
- **From**: `MatrixOperationsCategory(R,Row,Col)`

#### `~=` <a id="op-neq"></a>

Operation defined in WSMatrix.

- **Signature**: `(%, %) -> Boolean`
---
[Back to Index](../index.md)
