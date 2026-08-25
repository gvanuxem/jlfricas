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
 jlHead : % -> WSSymbol    jlId : % -> JLInt64
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
| [`*`](#op) | a * b is the matrix multiplication, not the element-wise multiplication. WS error if dimen... |
| [`+`](#op) | a + b is the matrix addition. WS error if dimensions are incompatible. |
| [`-`](#op) | a - b is the matrix subtraction. WS error if dimensions are incompatible. |
| [`^`](#op) | a^n is the matrix power by the positive integer n. |
| [`adjoint`](#adjoint) | adjoint(m) returns the adjoint of m, i.e. the conjugate transposition of m. |
| [`adjugate`](#adjugate) | adjugate(m) returns the adjugate of square m. |
| [`antisymmetric?`](#antisymmetric) | \spad{antisymmetric?(m)} returns true if the matrix m is square and antisymmetric (i.e. \s... |
| [`cholesky`](#cholesky) | cholesky(m) computes the Cholesky decomposition of the positive definite/hermitian square ... |
| [`column`](#column) | column(mat,i) returns the i-th column. |
| [`diagonal`](#diagonal) | diagonal(m) returns the diagonal elements of m as a vector. |
| [`diagonal?`](#diagonal) | \spad{diagonal?(m)} returns true if the matrix m is square and diagonal (i.e. all entries ... |
| [`diagonalMatrix`](#diagonalmatrix) | \spad{diagonalMatrix(l)} returns a diagonal matrix with elements of l as diagonal elements... |
| [`eigenSystem`](#eigensystem) | eigenvectors(m) returns the eigenvectors of the square matrix m. |
| [`eigenvalues`](#eigenvalues) | eigenvalues(m) returns the eigenvalues of the square matrix m. |
| [`eigenvectors`](#eigenvectors) | eigenvectors(m) returns the eigenvectors of the square matrix m. |
| [`elt`](#elt) | elt(mat, m, n) returns the element (m,n) of the matrix mat. |
| [`hermitian?`](#hermitian) | \spad{hermitian?(m)} checks whether or not m is hermitian. |
| [`hessenberg`](#hessenberg) | hessenberg(m) computes the Hessenberg decomposition of the square matrix m. |
| [`inverse`](#inverse) | inverse(m) computes the inverse of m. For example: \example{m:=jWSMatrix("\{\{a, b\}, \{b,... |
| [`invertIfCan`](#invertifcan) | invertIfCan(m) returns the inverse of the matrix m. If the matrix is not invertible, "fail... |
| [`jWSMatrix`](#jwsmatrix) | jWSMatrix(str) constructs str as a WSMatrix. str must be in the WS language (WS list of WS... |
| [`jordan`](#jordan) | jordan(m) computes the Jordan decomposition of the square matrix m. |
| [`linearSolve`](#linearsolve) | linearSolve(mat, b) finds x, solution of the equation mat * x = b. |
| [`lu`](#lu) | lu(m) computes the LU decomposition of the matrix m. |
| [`matrix`](#matrix) | matrix(vec) returns vec as a matrix (inplace coercion). |
| [`matrixFunction`](#matrixfunction) | matrixFunction(func, m) applies the matrix function func, if available, to the matrix m. T... |
| [`minors`](#minors) | minors(m) returns the minors of m. |
| [`norm`](#norm) | norm(m) returns the norm of m, i.e. the value of the maximum singular values of m. |
| [`nullSpace`](#nullspace) | nullSpace(m) returns the null space of m as a list of vectors. |
| [`permanent`](#permanent) | permanent(m) returns the permanent of m. |
| [`positiveDefinite?`](#positivedefinite) | \spad{positiveDefinite?(m)} checks whether or not m is positive definite. |
| [`pseudoInverse`](#pseudoinverse) | pseudoInverse(m) computes the pseudo inverse of m also known as Moore-Penrose inverse. |
| [`qelt`](#qelt) | qelt(mat, m, n) returns the element (m,n) of the matrix mat. No checks are done at the Fri... |
| [`qr`](#qr) | qr(m) computes the QR decomposition of the matrix m. |
| [`qsetelt`](#qsetelt) | qsetelt(mat,n,m,elt) returns a new matrix with element (n,m) replaced by the element elt. |
| [`row`](#row) | row(mat,i) returns the i-th row. |
| [`schur`](#schur) | schur(m) computes the Schur decomposition of the square matrix m. |
| [`setelt`](#setelt) | setelt(mat,n,m,elt) returns a new matrix with element (n,m) replaced by the element elt. |
| [`square?`](#square) | \spad{square?(m)} returns true if m is a square matrix (i.e. if m has the same number of r... |
| [`svd`](#svd) | svd(m) computes the singular value decomposition of the matrix m. |
| [`svdvals`](#svdvals) | svdvals(m) returns the singular values of the matrix m. |
| [`symmetric?`](#symmetric) | \spad{symmetric?(m)} returns true if the matrix m is square and symmetric (i.e. \spad{m[i,... |
| [`toString`](#tostring) | toString(mat, form) returns the string representation of mat with WS language format form. |
| [`trace`](#trace) | trace(m) returns the trace of m. |
| [`transpose`](#transpose) | transpose(m) returns the transposition of m. |
| [`vectors`](#vectors) | eigenSystem(m) computes the spectral decomposition of the square matrix m. It returns in a... |

### Detailed Documentation

#### `*` <a id="op"></a>

##### `*` : `(%, %) -> %`

a * b is the matrix multiplication, not the element-wise multiplication. WS error if dimensions are incompatible.

##### `*` : `(Integer, %) -> %`

n*a scales the matrix a by n.

##### `*` : `(E,%) -> %`

\spad{r*x} is the left scalar multiple of the scalar r and the matrix x.

##### `*` : `(%,E) -> %`

\spad{x * r} is the right scalar multiple of the scalar r and the matrix x.

##### `*` : `(%,WSVector(E)) -> %`

\spad{x * c} is the product of the matrix x and the column vector c. Error: if the dimensions are incompatible.

##### `*` : `(WSVector(E),%) -> %`

\spad{r * x} is the product of the row vector r and the matrix x. Error: if the dimensions are incompatible.

#### `+` <a id="op"></a>

a + b is the matrix addition. WS error if dimensions are incompatible.

- **Signature**: `(%, %) -> %`

#### `-` <a id="op"></a>

##### `-` : `(%, %) -> %`

a - b is the matrix subtraction. WS error if dimensions are incompatible.

##### `-` : `% -> %`

-a negates each element of the matrix a.

#### `^` <a id="op"></a>

##### `^` : `(%, PositiveInteger) -> %`

a^n is the matrix power by the positive integer n.

##### `^` : `(%, NonNegativeInteger) -> %`

a^n is the matrix power by the non-negative integer n.

#### `adjoint` <a id="adjoint"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L419)\]

adjoint(m) returns the adjoint of m, i.e. the conjugate transposition of m.

- **Signature**: `% -> %`

#### `adjugate` <a id="adjugate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L421)\]

adjugate(m) returns the adjugate of square m.

- **Signature**: `% -> %`

#### `antisymmetric?` <a id="antisymmetric"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L364)\]

\spad{antisymmetric?(m)} returns true if the matrix m is square and antisymmetric (i.e. \spad{m[i, j] = -m[j, i]} for all i and j) and false otherwise.

- **Signature**: `% -> Boolean`

#### `cholesky` <a id="cholesky"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L479)\]

cholesky(m) computes the Cholesky decomposition of the positive definite/hermitian square matrix m.

- **Signature**: `% -> Record(l : %, u : %)`

#### `column` <a id="column"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L415)\]

column(mat,i) returns the i-th column.

- **Signature**: `(%, Integer) -> %`

#### `diagonal` <a id="diagonal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L434)\]

diagonal(m) returns the diagonal elements of m as a vector.

- **Signature**: `% -> WSVector(E)`

#### `diagonal?` <a id="diagonal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L355)\]

\spad{diagonal?(m)} returns true if the matrix m is square and diagonal (i.e. all entries of m not on the diagonal are zero) and false otherwise.

- **Signature**: `% -> Boolean`

#### `diagonalMatrix` <a id="diagonalmatrix"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L502)\]

\spad{diagonalMatrix(l)} returns a diagonal matrix with elements of l as diagonal elements.

- **Signature**: `WSList(E) -> %`

#### `eigenSystem` <a id="eigensystem"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L461)\]

eigenvectors(m) returns the eigenvectors of the square matrix m.

- **Signature**: `% -> Record(values : WSVector(WSExpression),`

#### `eigenvalues` <a id="eigenvalues"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L457)\]

eigenvalues(m) returns the eigenvalues of the square matrix m.

- **Signature**: `% -> WSVector(WSExpression)`

#### `eigenvectors` <a id="eigenvectors"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L459)\]

eigenvectors(m) returns the eigenvectors of the square matrix m.

- **Signature**: `% -> WSMatrix(WSExpression)`

#### `elt` <a id="elt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L399)\]

elt(mat, m, n) returns the element (m,n) of the matrix mat.

- **Signature**: `(%, Integer, Integer) -> E`

#### `hermitian?` <a id="hermitian"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L370)\]

\spad{hermitian?(m)} checks whether or not m is hermitian.

- **Signature**: `% -> Boolean`

#### `hessenberg` <a id="hessenberg"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L476)\]

hessenberg(m) computes the Hessenberg decomposition of the square matrix m.

- **Signature**: `% -> Record(p : %, h : %)`

#### `inverse` <a id="inverse"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L436)\]

inverse(m) computes the inverse of m. For example: \example{m:=jWSMatrix("\{\{a, b\}, \{b, a\}\}")@WSMAT(WSEXPR)} \example{inverse m}

- **Signature**: `% -> %`

#### `invertIfCan` <a id="invertifcan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L442)\]

invertIfCan(m) returns the inverse of the matrix m. If the matrix is not invertible, "failed" is returned. Error: if the matrix is not square.

- **Signature**: `% -> Union(%,"failed")`

#### `jWSMatrix` <a id="jwsmatrix"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L510)\]

jWSMatrix(str) constructs str as a WSMatrix. str must be in the WS language (WS list of WS list(s)).

- **Signature**: `String -> %`

#### `jordan` <a id="jordan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L474)\]

jordan(m) computes the Jordan decomposition of the square matrix m.

- **Signature**: `% -> Record(s : %, j : %)`

#### `linearSolve` <a id="linearsolve"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L449)\]

linearSolve(mat, b) finds x, solution of the equation mat * x = b.

- **Signature**: `(%, %) -> %`

#### `lu` <a id="lu"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L482)\]

lu(m) computes the LU decomposition of the matrix m.

- **Signature**: `% -> Record(lu : %, p : %, c : %)`

#### `matrix` <a id="matrix"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L508)\]

matrix(vec) returns vec as a matrix (inplace coercion).

- **Signature**: `WSVector(E) -> %`

#### `matrixFunction` <a id="matrixfunction"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L484)\]

matrixFunction(func, m) applies the matrix function func, if available, to the matrix m. The Wolfram Language operator needs to be used. Note that it is not an element-wise operation. For example: \example{m := jWSMatrix("\{\{1.2, 1.7\},\{1.12, -2.1\}\}")@WSMAT(WSREAL)} \example{matrixFunction("Sqrt", m)}

- **Signature**: `(WSExpression, %) -> WSMatrix(WSExpression)`

#### `minors` <a id="minors"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L453)\]

##### `minors` : `% -> %`

minors(m) returns the minors of m.

##### `minors` : `(%, WSInteger) -> %`

minors(m,i) returns the i-th minors of m.

#### `norm` <a id="norm"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L423)\]

##### `norm` : `% -> E`

norm(m) returns the norm of m, i.e. the value of the maximum singular values of m.

##### `norm` : `(%, WSExpression) -> E`

norm(m, type) returns the type norm of m. For example, norm(m,2) returns the usual norm, norm(m, "Infinity") or norm(m, "Frobenius") returns their respective norms. See documentation for information.

#### `nullSpace` <a id="nullspace"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L451)\]

nullSpace(m) returns the null space of m as a list of vectors.

- **Signature**: `% -> WSList(WSVector(E))`

#### `permanent` <a id="permanent"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L432)\]

permanent(m) returns the permanent of m.

- **Signature**: `% -> E`

#### `positiveDefinite?` <a id="positivedefinite"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L368)\]

\spad{positiveDefinite?(m)} checks whether or not m is positive definite.

- **Signature**: `% -> Boolean`

#### `pseudoInverse` <a id="pseudoinverse"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L446)\]

pseudoInverse(m) computes the pseudo inverse of m also known as Moore-Penrose inverse.

- **Signature**: `% -> %`

#### `qelt` <a id="qelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L401)\]

qelt(mat, m, n) returns the element (m,n) of the matrix mat. No checks are done at the FriCAS level.

- **Signature**: `(%, Integer, Integer) -> E`

#### `qr` <a id="qr"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L472)\]

qr(m) computes the QR decomposition of the matrix m.

- **Signature**: `% -> Record(q : %, r : %)`

#### `qsetelt` <a id="qsetelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L407)\]

qsetelt(mat,n,m,elt) returns a new matrix with element (n,m) replaced by the element elt.

- **Signature**: `(%, Integer, Integer, E) -> %`

#### `row` <a id="row"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L413)\]

row(mat,i) returns the i-th row.

- **Signature**: `(%, Integer) -> %`

#### `schur` <a id="schur"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L470)\]

schur(m) computes the Schur decomposition of the square matrix m.

- **Signature**: `% -> Record(q : %, t : %)`

#### `setelt` <a id="setelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L404)\]

setelt(mat,n,m,elt) returns a new matrix with element (n,m) replaced by the element elt.

- **Signature**: `(%, Integer, Integer, E) -> %`

#### `square?` <a id="square"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L352)\]

\spad{square?(m)} returns true if m is a square matrix (i.e. if m has the same number of rows as columns) and false otherwise.

- **Signature**: `% -> Boolean`

#### `svd` <a id="svd"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L466)\]

svd(m) computes the singular value decomposition of the matrix m.

- **Signature**: `% -> Record(S : %, sv : %, V : %)`

#### `svdvals` <a id="svdvals"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L468)\]

svdvals(m) returns the singular values of the matrix m.

- **Signature**: `% -> WSList(E)`

#### `symmetric?` <a id="symmetric"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L359)\]

\spad{symmetric?(m)} returns true if the matrix m is square and symmetric (i.e. \spad{m[i, j] = m[j, i]} for all i and j) and false otherwise.

- **Signature**: `% -> Boolean`

#### `toString` <a id="tostring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L505)\]

toString(mat, form) returns the string representation of mat with WS language format form.

- **Signature**: `(%, WSExpression) -> String`

#### `trace` <a id="trace"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L430)\]

trace(m) returns the trace of m.

- **Signature**: `% -> E`

#### `transpose` <a id="transpose"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L417)\]

transpose(m) returns the transposition of m.

- **Signature**: `% -> %`

#### `vectors` <a id="vectors"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L462)\]

eigenSystem(m) computes the spectral decomposition of the square matrix m. It returns in a Record, the eigenvalues, selector 'values', and the eigenvectors selector 'vectors'.

- **Signature**: `WSMatrix(WSExpression))`
---
[Back to Index](../index.md)
