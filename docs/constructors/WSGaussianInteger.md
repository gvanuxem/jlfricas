# WSGaussianInteger

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1098)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS gaussian integers using the MathLink Julia package.

**WSGaussianInteger is a domain constructor.**  
**Abbreviation for WSGaussianInteger is WSGINT**  
**108 names for 158 operations in this domain.**

## Signatures

```fricas
 0 : () -> %    1 : () -> %
 ?*? : (%, %) -> %    ?*? : (%, WSInteger) -> %
 ?*? : (Integer, %) -> %    ?*? : (NonNegativeInteger, %) -> %
 ?*? : (PositiveInteger, %) -> %    ?*? : (WSInteger, %) -> %
 ?*? : (NMInteger, %) -> JLObject    ?+? : (%, %) -> %
 -? : % -> %    ?-? : (%, %) -> %
 ?=? : (%, %) -> Boolean    D : % -> %
 D : (%, (WSInteger -> WSInteger)) -> %    D : (%, NonNegativeInteger) -> %
 ?^? : (%, NonNegativeInteger) -> %    ?^? : (%, PositiveInteger) -> %
 annihilate? : (%, %) -> Boolean    antiCommutator : (%, %) -> %
 associates? : (%, %) -> Boolean    associator : (%, %, %) -> %
 basis : () -> Vector(%)    characteristic : () -> NonNegativeInteger
 coerce : % -> %    coerce : Integer -> %
 coerce : WSInteger -> %    coerce : % -> JLObject
 coerce : % -> OutputForm    coerce : % -> WSExpression
 commutator : (%, %) -> %    complex : (WSInteger, WSInteger) -> %
 conjugate : % -> %    convert : SparseUnivariatePolynomial(WSInteger) -> %
 convert : Vector(WSInteger) -> %    convert : % -> Complex(DoubleFloat)
 convert : % -> Complex(Float)    convert : % -> InputForm
 convert : % -> Pattern(Integer)    convert : % -> SparseUnivariatePolynomial(WSInteger)
 convert : % -> String    convert : % -> Vector(WSInteger)
 coordinates : Vector(%) -> Matrix(WSInteger)    coordinates : % -> Vector(WSInteger)
 coordinates : (%, Vector(%)) -> Vector(WSInteger)    differentiate : % -> %
 differentiate : (%, (WSInteger -> WSInteger)) -> %    differentiate : (%, NonNegativeInteger) -> %
 discriminant : () -> WSInteger    discriminant : Vector(%) -> WSInteger
 divide : (%, %) -> Record(quotient: %,remainder: %)    euclideanSize : % -> NonNegativeInteger
 ?exquo? : (%, %) -> Union(%,"failed")    ?exquo? : (%, WSInteger) -> Union(%,"failed")
 factor : % -> Factored(%)    gcd : (%, %) -> %
 gcd : List(%) -> %    generator : () -> %
 imag : % -> WSInteger    imaginary : () -> %
 jWSGI : (WSInteger, WSInteger) -> %    jWSInterpret : String -> %
 jWSInterpret : (String, String) -> %    jWSInterpret : (String, String, String) -> %
 jlAbout : % -> Void    jlApply : (String, %) -> JLObject
 jlApply : (String, %, %) -> JLObject    jlApply : (String, %, %, %) -> JLObject
 jlApply : (String, %, %, %, %) -> JLObject    jlApply : (String, %, %, %, %, %) -> JLObject
 jlDisplay : % -> Void    jlDump : JLObject -> Void
 jlEval : % -> %    jlFieldNames : % -> JLObject
 jlGetField : (%, JLSymbol) -> JLObject    jlGetJuliaIndex : % -> String
 jlGetProperty : (%, JLSymbol) -> JLObject    jlHead : % -> WSSymbol
 jlId : % -> Integer    jlObject : () -> String
 jlPropertyNames : % -> JLObject    jlRef : % -> SExpression
 jlSymbolic : % -> String    jlText : (%, String) -> List(String)
 jlType : % -> Symbol    jlimref : String -> %
 jlref : String -> %    latex : % -> String
 lcm : (%, %) -> %    lcm : List(%) -> %
 leftPower : (%, NonNegativeInteger) -> %    leftPower : (%, PositiveInteger) -> %
 leftRecip : % -> Union(%,"failed")    lift : % -> SparseUnivariatePolynomial(WSInteger)
 map : ((WSInteger -> WSInteger), %) -> %    missing? : % -> Boolean
 mutable? : % -> Boolean    norm : % -> WSInteger
 nothing? : % -> Boolean    numeric : % -> WSExpression
 numeric : (%, PositiveInteger) -> WSExpression    numeric? : % -> Boolean
 one? : % -> Boolean    opposite? : (%, %) -> Boolean
 plenaryPower : (%, PositiveInteger) -> %    prime? : % -> Boolean
 ?quo? : (%, %) -> %    random : WSInteger -> %
 rank : () -> PositiveInteger    rational : % -> Fraction(Integer)
 rational? : % -> Boolean    rationalIfCan : % -> Union(Fraction(Integer),"failed")
 real : % -> WSInteger    recip : % -> Union(%,"failed")
 reduce : SparseUnivariatePolynomial(WSInteger) -> %    reducedSystem : Matrix(%) -> Matrix(WSInteger)
 regularRepresentation : % -> Matrix(WSInteger)    ?rem? : (%, %) -> %
 represents : Vector(WSInteger) -> %    represents : (Vector(WSInteger), Vector(%)) -> %
 retract : % -> Integer    retract : % -> WSInteger
 retractIfCan : % -> Union(Integer,"failed")    retractIfCan : % -> Union(WSInteger,"failed")
 rightPower : (%, NonNegativeInteger) -> %    rightPower : (%, PositiveInteger) -> %
 rightRecip : % -> Union(%,"failed")    sample : () -> %
 sizeLess? : (%, %) -> Boolean    smaller? : (%, %) -> Boolean
 squareFree : % -> Factored(%)    squareFreePart : % -> %
 string : % -> String    subtractIfCan : (%, %) -> Union(%,"failed")
 toString : % -> String    trace : % -> WSInteger
 traceMatrix : () -> Matrix(WSInteger)    traceMatrix : Vector(%) -> Matrix(WSInteger)
 unit? : % -> Boolean    unitCanonical : % -> %
 zero? : % -> Boolean    ?~=? : (%, %) -> Boolean
 D : (%, (WSInteger -> WSInteger), NonNegativeInteger) -> %
 characteristicPolynomial : % -> SparseUnivariatePolynomial(WSInteger)
 coordinates : (Vector(%), Vector(%)) -> Matrix(WSInteger)
 definingPolynomial : () -> SparseUnivariatePolynomial(WSInteger)
 differentiate : (%, (WSInteger -> WSInteger), NonNegativeInteger) -> %
 expressIdealMember : (List(%), %) -> Union(List(%),"failed")
 extendedEuclidean : (%, %) -> Record(coef1: %,coef2: %,generator: %)
 extendedEuclidean : (%, %, %) -> Union(Record(coef1: %,coef2: %),"failed")
 gcdPolynomial : (SparseUnivariatePolynomial(%), SparseUnivariatePolynomial(%)) -> SparseUnivariatePolynomial(%)
 lcmCoef : (%, %) -> Record(llcm_res: %,coeff1: %,coeff2: %)
 multiEuclidean : (List(%), %) -> Union(List(%),"failed")
 patternMatch : (%, Pattern(Integer), PatternMatchResult(Integer,%)) -> PatternMatchResult(Integer,%)
 principalIdeal : List(%) -> Record(coef: List(%),generator: %)
 reducedSystem : (Matrix(%), Vector(%)) -> Record(mat: Matrix(WSInteger),vec: Vector(WSInteger))
 regularRepresentation : (%, Vector(%)) -> Matrix(WSInteger)
 unitNormal : % -> Record(unit: %,canonical: %,associate: %)
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`*`](#op-mul) | Operation defined in WSGaussianInteger |
| [`+`](#op-add) | Operation defined in WSGaussianInteger |
| [`0`](#0) | 0 returns the input form corresponding to 0. |
| [`1`](#1) | 1 returns the input form corresponding to 1. |
| [`D`](#d) | D(x) returns the derivative of x. This function is a simple differential operator where no... |
| [`^`](#op-pow) | Operation defined in WSGaussianInteger |
| [`annihilate?`](#annihilate) | annihilate?(x,y) holds when the product of x and y is 0. |
| [`antiCommutator`](#anticommutator) | antiCommutator(a, b) returns a*b+b*a. |
| [`associates?`](#associates) | associates?(x, y) tests whether x and y are associates, i.e. differ by a unit factor. |
| [`associator`](#associator) | associator(a, b, c) returns (a*b)*c-a*(b*c). |
| [`basis`](#basis) | basis() returns the fixed R-module basis. |
| [`characteristic`](#characteristic) | characteristic() returns the characteristic of the ring. |
| [`characteristicPolynomial`](#characteristicpolynomial) | characteristicPolynomial(a) returns the characteristic polynomial of the regular represent... |
| [`coerce`](#coerce) | coerce(x): convenience function. |
| [`commutator`](#commutator) | commutator(a, b) returns a*b-b*a. |
| [`complex`](#complex) | complex(x, y) constructs x + %i*y. |
| [`conjugate`](#conjugate) | conjugate(x + %i y) returns x - %i y. |
| [`convert`](#convert) | convert(up) converts the univariate polynomial up to an algebra element, reducing by the d... |
| [`coordinates`](#coordinates) | coordinates([v1, ..., vm]) returns the coordinates of the vi's with respect to the fixed b... |
| [`definingPolynomial`](#definingpolynomial) | definingPolynomial() returns the minimal polynomial which generator() satisfies. |
| [`differentiate`](#differentiate) | differentiate(x) returns the derivative of x. This function is a simple differential opera... |
| [`discriminant`](#discriminant) | discriminant() = determinant(traceMatrix()). |
| [`divide`](#divide) | divide(x, y) divides x by y producing a record containing a quotient and remainder, where ... |
| [`euclideanSize`](#euclideansize) | euclideanSize(x) returns the euclidean size of the element x. Error: if x is zero. |
| [`expressIdealMember`](#expressidealmember) | expressIdealMember([f1, ..., fn], h) returns a representation of h as a linear combination... |
| [`exquo`](#exquo) | exquo(f, g) creates the equivalent infix form. |
| [`extendedEuclidean`](#extendedeuclidean) | extendedEuclidean(x, y) returns a record rec where rec.coef1*x+rec.coef2*y = rec.generator... |
| [`factor`](#factor) | factor(x) returns the factorization of x into irreducibles. |
| [`gcd`](#gcd) | gcd(x, y) returns the greatest common divisor of x and y. |
| [`gcdPolynomial`](#gcdpolynomial) | gcdPolynomial(p, q) returns the greatest common divisor (gcd) of univariate polynomials ov... |
| [`generator`](#generator) | generator() returns the generator for this domain. |
| [`imag`](#imag) | imag(x) returns imaginary part of x. |
| [`imaginary`](#imaginary) | imaginary() = sqrt(-1) = %i. |
| [`jWSGI`](#jwsgi) | jWSGI(re, im) constructs a WSGaussianInteger from real part re and imaginary part im. |
| [`jWSInterpret`](#jwsinterpret) | jWSInterpret(form) interprets form. |
| [`jlAbout`](#jlabout) | jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia.... |
| [`jlApply`](#jlapply) | jlApply(func, obj) applies the function func with obj as parameter and returns the result ... |
| [`jlDisplay`](#jldisplay) | jlDisplay(v) pretty prints v (à la Julia). |
| [`jlDump`](#jldump) | jlDump(obj) dumps (shows) the Julia object (internal structure with type). |
| [`jlEval`](#jleval) | jlEval(expr) evaluates expr using the WS Transport Protocol. |
| [`jlFieldNames`](#jlfieldnames) | jlFieldNames(obj) returns the field names of obj. |
| [`jlGetField`](#jlgetfield) | jlGetField(obj, sym) returns the property/element sym of obj. |
| [`jlGetJuliaIndex`](#jlgetjuliaindex) | jlGetJuliaIndex(obj) returns the Julia indexed dictionary index referencing the object obj... |
| [`jlGetProperty`](#jlgetproperty) | jlGetProperty(obj, sym) returns the property/element sym of obj. |
| [`jlHead`](#jlhead) | jlHead(expr) returns the Head type of expr. |
| [`jlId`](#jlid) | jlId(obj) returns the Julia indexed dictionary index referencing the object obj. |
| [`jlObject`](#jlobject) | jlObject() returns the internal Julia name of the Julia module used. For example: ... |
| [`jlPropertyNames`](#jlpropertynames) | jlPropertyNames(obj) returns the property/element names of obj. |
| [`jlRef`](#jlref) | jlRef(obj) returns the internal Lisp representation of the Julia object obj. |
| [`jlSymbolic`](#jlsymbolic) | jlSymbolic(expr) returns the symbolic 'FullForm'. |
| [`jlText`](#jltext) | jlText(obj, mimest) returns the text representation of obj as a list of String lines with ... |
| [`jlType`](#jltype) | jlType(obj) returns the Julia type of obj. |
| [`jlimref`](#jlimref) | jlimref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia im... |
| [`jlref`](#jlref) | jlRef(obj) returns the internal Lisp representation of the Julia object obj. |
| [`latex`](#latex) | latex(s) returns a LaTeX-printable output representation of s. |
| [`lcm`](#lcm) | lcm(x, y) returns the least common multiple of x and y. |
| [`lcmCoef`](#lcmcoef) | lcmCoef(c1, c2) computes (llcm_res, coeff1, coeff2) such that llcm_res is least left commo... |
| [`leftPower`](#leftpower) | leftPower(a, n) returns the n-th left power of a, i.e. leftPower(a, n) := a * leftPower(a,... |
| [`leftRecip`](#leftrecip) | leftRecip(a) returns an element, which is a left inverse of a, or "failed" if such an elem... |
| [`lift`](#lift) | lift(z) returns a minimal degree univariate polynomial up such that z=reduce up. |
| [`map`](#map) | map(f, ex) evaluates ex, applying f to values of type R in ex. |
| [`missing?`](#missing) | missing?(obj) checks whether or not obj is missing. |
| [`multiEuclidean`](#multieuclidean) | multiEuclidean([f1, ..., fn], z) returns a list of coefficients [a1, ..., an] such that  z... |
| [`mutable?`](#mutable) | mutable?(obj) checks whether or not obj is mutable. |
| [`norm`](#norm) | norm(x) returns x * conjugate(x) |
| [`nothing?`](#nothing) | nothing?(obj) checks whether or not obj is nothing. |
| [`numeric`](#numeric) | numeric(expr) returns numerical expr if possible. |
| [`numeric?`](#numeric) | numeric?(x) checks whether or not x is or would yield a number. |
| [`one?`](#one) | one?(a) tests whether a is the unit 1. |
| [`opposite?`](#opposite) | opposite?(x,y) holds if the sum of x and y is 0. |
| [`patternMatch`](#patternmatch) | patternMatch(expr, pat, res) matches the pattern pat to the expression expr. res contains ... |
| [`plenaryPower`](#plenarypower) | plenaryPower(a, n) is recursively defined to be plenaryPower(a, n-1)*plenaryPower(a, n-1) ... |
| [`prime?`](#prime) | prime?(x) tests if x can never be written as the product of two non-units of the ring, i.e... |
| [`principalIdeal`](#principalideal) | principalIdeal([f1, ..., fn]) returns a record whose generator component is a generator of... |
| [`quo`](#quo) | x quo y is the same as divide(x, y).quotient. See divide from EuclideanDomain. |
| [`random`](#random) | random(n) returns a gaussian integer where real part is in the range 0..n as the imaginary... |
| [`rank`](#rank) | rank() returns the rank of the algebra. |
| [`rational`](#rational) | rational(x) returns x as a rational number. Error: if x is not a rational number. |
| [`rational?`](#rational) | rational?(x) tests if x is a rational number. |
| [`rationalIfCan`](#rationalifcan) | rationalIfCan(x) returns x as a rational number, or "failed" if x is not a rational number... |
| [`real`](#real) | real(x) returns real part of x. |
| [`recip`](#recip) | recip(a) returns an element, which is both a left and a right inverse of a, or "failed" if... |
| [`reduce`](#reduce) | reduce(up) converts the univariate polynomial up to an algebra element, reducing by the de... |
| [`reducedSystem`](#reducedsystem) | reducedSystem(A) returns a matrix B such that A x = 0 and B x = 0 have the same solutions ... |
| [`regularRepresentation`](#regularrepresentation) | regularRepresentation(a) returns the matrix m of the linear map defined by left multiplica... |
| [`rem`](#rem) | x rem y is the same as divide(x, y).remainder. See divide from EuclideanDomain. |
| [`represents`](#represents) | represents([a1, .., an]) returns a1*v1 + ... + an*vn, where v1, ..., vn are the elements o... |
| [`retract`](#retract) | retract(a) transforms a into an element of S if possible. Error: if a cannot be made into ... |
| [`retractIfCan`](#retractifcan) | retractIfCan(a) transforms a into an element of S if possible. Returns "failed" if a canno... |
| [`rightPower`](#rightpower) | rightPower(a, n) returns the n-th right power of a, i.e. rightPower(a, n) := rightPower(a,... |
| [`rightRecip`](#rightrecip) | rightRecip(a) returns an element, which is a right inverse of a, or "failed" if such an el... |
| [`sample`](#sample) | sample yields a value of type % |
| [`sizeLess?`](#sizeless) | sizeLess?(x, y) tests whether x is strictly smaller than y with respect to the euclideanSi... |
| [`smaller?`](#smaller) | smaller?(x, y) is a strict ordering on depending on representatives of elements of the set... |
| [`squareFree`](#squarefree) | squareFree(x) returns the square-free factorization of x i.e. such that the factors are pa... |
| [`squareFreePart`](#squarefreepart) | squareFreePart(x) returns a product of prime factors of x each taken with multiplicity one... |
| [`string`](#string) | string(jt) returns the string representation of jt. |
| [`subtractIfCan`](#subtractifcan) | subtractIfCan(x, y) returns an element z such that z+y=x or "failed" if no such element ex... |
| [`toString`](#tostring) | toString(obj) returns the string representation of obj. |
| [`trace`](#trace) | trace(a) returns the trace of the regular representation of a with respect to any basis. |
| [`traceMatrix`](#tracematrix) | traceMatrix() is the n-by-n matrix ( Tr(vi * vj) ), where v1, ..., vn are the elements of ... |
| [`unit?`](#unit) | unit?(x) tests whether x is a unit, i.e. is invertible. |
| [`unitCanonical`](#unitcanonical) | unitCanonical(x) returns unitNormal(x).canonical. |
| [`unitNormal`](#unitnormal) | unitNormal(x) tries to choose a canonical element from the associate class of x. The attri... |
| [`zero?`](#zero) | zero?(x) tests if x is equal to 0. |
| [`~=`](#op-neq) | Operation defined in WSGaussianInteger |

### Detailed Documentation

#### `*` <a id="op-mul"></a>

##### `*` : `(%, %) -> %`

Operation defined in WSGaussianInteger.

##### `*` : `(%, WSInteger) -> %`

Operation defined in WSGaussianInteger.

##### `*` : `(Integer, %) -> %`

Operation defined in WSGaussianInteger.

##### `*` : `(NonNegativeInteger, %) -> %`

Operation defined in WSGaussianInteger.

##### `*` : `(PositiveInteger, %) -> %`

Operation defined in WSGaussianInteger.

##### `*` : `(WSInteger, %) -> %`

Operation defined in WSGaussianInteger.

##### `*` : `(NMInteger, %) -> JLObject`

Operation defined in WSGaussianInteger.

#### `+` <a id="op-add"></a>

Operation defined in WSGaussianInteger.

- **Signature**: `(%, %) -> %`

#### `0` <a id="0"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1134)\]

0 returns the input form corresponding to 0.

- **Signature**: `() -> %`
- **From**: `InputForm`

#### `1` <a id="1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1135)\]

1 returns the input form corresponding to 1.

- **Signature**: `() -> %`
- **From**: `InputForm`

#### `D` <a id="d"></a>

##### `D` : `% -> %`

D(x) returns the derivative of x. This function is a simple differential operator where no variable needs to be specifie d.

- **From**: `DifferentialRing`

##### `D` : `(%, (R -> R)) -> %`

D(x, deriv) differentiates x extending the derivation deriv on R.

- **From**: `DifferentialExtension(R)`

##### `D` : `(%, (R -> R), NonNegativeInteger) -> %`

D(x, deriv, n) differentiate x n times using a derivation which extends deriv on R.

- **From**: `DifferentialExtension(R)`

##### `D` : `(%, NonNegativeInteger) -> %`

D(x, n) returns the n-th derivative of x.

- **From**: `DifferentialRing`

#### `^` <a id="op-pow"></a>

##### `^` : `(%, NonNegativeInteger) -> %`

Operation defined in WSGaussianInteger.

##### `^` : `(%, PositiveInteger) -> %`

Operation defined in WSGaussianInteger.

#### `annihilate?` <a id="annihilate"></a>

annihilate?(x,y) holds when the product of x and y is 0.

- **Signature**: `(%, %) -> Boolean`
- **From**: `Rng`

#### `antiCommutator` <a id="anticommutator"></a>

antiCommutator(a, b) returns a*b+b*a.

- **Signature**: `(%, %) -> %`
- **From**: `NonAssociativeSemiRng`

#### `associates?` <a id="associates"></a>

associates?(x, y) tests whether x and y are associates, i.e. differ by a unit factor.

- **Signature**: `(%, %) -> Boolean`
- **From**: `EntireRing`

#### `associator` <a id="associator"></a>

associator(a, b, c) returns (a*b)*c-a*(b*c).

- **Signature**: `(%, %, %) -> %`
- **From**: `NonAssociativeRng`

#### `basis` <a id="basis"></a>

basis() returns the fixed R-module basis.

- **Signature**: `() -> Vector(%)`
- **From**: `FramedModule(R)`

#### `characteristic` <a id="characteristic"></a>

characteristic() returns the characteristic of the ring.

- **Signature**: `() -> NonNegativeInteger`
- **From**: `NonAssociativeRing`

#### `characteristicPolynomial` <a id="characteristicpolynomial"></a>

characteristicPolynomial(a) returns the characteristic polynomial of the regular representation of a with respect to any basis.

- **Signature**: `% -> SparseUnivariatePolynomial(WSInteger)`
- **From**: `FiniteRankAlgebra(R,UP)`

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1113)\]

##### `coerce` : `Integer  -> %`

coerce(x): convenience function.

##### `coerce` : `R -> %`

coerce(r) maps the ring element r to a member of the algebra.

- **From**: `Algebra(R)`

##### `coerce` : `S -> %`

coerce(a) transforms a into an element of %.

- **From**: `CoercibleFrom(S)`

##### `coerce` : `Integer -> %`

coerce(n) coerces the integer n to an element of the ring.

- **From**: `NonAssociativeRing`

##### `coerce` : `% -> S`

coerce(a) transforms a into an element of S.

- **From**: `CoercibleTo(S)`

##### `coerce` : `% -> JLObject`

coerce(obj) coerces obj to JLObject. Convenience function.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `coerce` : `% -> WSExpression`

coerce(expr) returns the WSExpression representation of expr.

- **From**: [`WSObject`](WSObject.md)

##### `coerce` : `% -> WSRational`

coerce(z) coerces z.

- **From**: [`WSInteger`](WSInteger.md)

#### `commutator` <a id="commutator"></a>

commutator(a, b) returns a*b-b*a.

- **Signature**: `(%, %) -> %`
- **From**: `NonAssociativeRng`

#### `complex` <a id="complex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1183)\]

complex(x, y) constructs x + %i*y.

- **Signature**: `(WSInteger, WSInteger) -> %`
- **From**: `ComplexCategory(R)`

#### `conjugate` <a id="conjugate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1144)\]

conjugate(x + %i y) returns x - %i y.

- **Signature**: `% -> %`
- **From**: `ComplexCategory(R)`

#### `convert` <a id="convert"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1177)\]

##### `convert` : `UP -> %`

convert(up) converts the univariate polynomial up to an algebra element, reducing by the definingPolynomial() if necessa ry.

- **From**: `MonogenicAlgebra(R,UP)`

##### `convert` : `DoubleFloat -> %`

convert(x) converts a DoubleFloat x to a Float.

- **From**: `Float`

##### `convert` : `List(%) -> %`

convert([a1, ..., an]) returns the pattern [a1, ..., an].

- **From**: `Pattern(R)`

##### `convert` : `SExpression -> %`

convert(s) makes s into an input form.

- **From**: `InputForm`

##### `convert` : `Vector(R) -> %`

convert([a1, .., an]) returns a1*v1 + ... + an*vn, where v1, ..., vn are the elements of the fixed basis.

- **From**: `FramedModule(R)`

##### `convert` : `% -> S`

convert(a) transforms a into an element of S.

- **From**: `ConvertibleTo(S)`

##### `convert` : `% -> Vector(R)`

convert(a) returns the coordinates of a with respect to the fixed R-module basis.

- **From**: `FramedModule(R)`

#### `coordinates` <a id="coordinates"></a>

##### `coordinates` : `Vector(%) -> Matrix(R)`

coordinates([v1, ..., vm]) returns the coordinates of the vi's with respect to the fixed basis. The coordinates of vi ar e contained in the ith row of the matrix returned by this function.

- **From**: `FramedModule(R)`

##### `coordinates` : `(Vector(%), Vector(%)) -> Matrix(R)`

coordinates([v1, ..., vm], basis) returns the coordinates of the vi's with respect to the basis basis. The coordinates o f vi are contained in the ith row of the matrix returned by this function.

- **From**: `FiniteRankAlgebra(R,UP)`

##### `coordinates` : `% -> Vector(R)`

coordinates(a) returns the coordinates of a with respect to the fixed R-module basis.

- **From**: `FramedModule(R)`

##### `coordinates` : `(%, Vector(%)) -> Vector(R)`

coordinates(a, basis) returns the coordinates of a with respect to the basis basis.

- **From**: `FiniteRankAlgebra(R,UP)`

#### `definingPolynomial` <a id="definingpolynomial"></a>

definingPolynomial() returns the minimal polynomial which generator() satisfies.

- **Signature**: `() -> SparseUnivariatePolynomial(WSInteger)`
- **From**: `MonogenicAlgebra(R,UP)`

#### `differentiate` <a id="differentiate"></a>

##### `differentiate` : `% -> %`

differentiate(x) returns the derivative of x. This function is a simple differential operator where no variable needs to be specified.

- **From**: `DifferentialRing`

##### `differentiate` : `(%, (R -> R)) -> %`

differentiate(x, deriv) differentiates x extending the derivation deriv on R.

- **From**: `DifferentialExtension(R)`

##### `differentiate` : `(%, (R -> R), NonNegativeInteger) -> %`

differentiate(x, deriv, n) differentiate x n times using a derivation which extends deriv on R.

- **From**: `DifferentialExtension(R)`

##### `differentiate` : `(%, NonNegativeInteger) -> %`

differentiate(x, n) returns the n-th derivative of x.

- **From**: `DifferentialRing`

#### `discriminant` <a id="discriminant"></a>

##### `discriminant` : `() -> R`

discriminant() = determinant(traceMatrix()).

- **From**: `FramedAlgebra(R,UP)`

##### `discriminant` : `Vector(%) -> R`

discriminant([v1, .., vn]) returns determinant(traceMatrix([v1, .., vn])).

- **From**: `FiniteRankAlgebra(R,UP)`

#### `divide` <a id="divide"></a>

divide(x, y) divides x by y producing a record containing a quotient and remainder, where the remainder is smaller (see sizeLess? from EuclideanDomain) than the divisor y.

- **Signature**: `(%, %) -> Record(quotient: %,remainder: %)`
- **From**: `EuclideanDomain`

#### `euclideanSize` <a id="euclideansize"></a>

euclideanSize(x) returns the euclidean size of the element x. Error: if x is zero.

- **Signature**: `% -> NonNegativeInteger`
- **From**: `EuclideanDomain`

#### `expressIdealMember` <a id="expressidealmember"></a>

expressIdealMember([f1, ..., fn], h) returns a representation of h as a linear combination of the fi or "failed" if h is not in the ideal generated by the fi.

- **Signature**: `(List(%), %) -> Union(List(%),"failed")`
- **From**: `PrincipalIdealDomain`

#### `exquo` <a id="exquo"></a>

##### `exquo` : `(%, %) -> %`

exquo(f, g) creates the equivalent infix form.

- **From**: `OutputForm`

##### `exquo` : `(%, %) -> Union(%,"failed")`

exquo(a, b) either returns an element c such that c*b=a or "failed" if no such element can be found.

- **From**: `EntireRing`

##### `exquo` : `(%, R) -> Union(%,"failed")`

exquo(x, r) returns the exact quotient of x by r, or "failed" if r does not divide x exactly.

- **From**: `ComplexCategory(R)`

#### `extendedEuclidean` <a id="extendedeuclidean"></a>

##### `extendedEuclidean` : `(%, %) -> Record(coef1: %,coef2: %,generator: %)`

extendedEuclidean(x, y) returns a record rec where rec.coef1*x+rec.coef2*y = rec.generator and rec.generator is a gcd of x and y. The gcd is unique only up to associates if canonicalUnitNormal is not asserted. principalIdeal provides a vers ion of this operation which accepts an arbitrary length list of arguments.

- **From**: `EuclideanDomain`

##### `extendedEuclidean` : `(%, %, %) -> Union(Record(coef1: %,coef2: %),"failed")`

extendedEuclidean(x, y, z) either returns a record rec where rec.coef1*x+rec.coef2*y=z or returns "failed" if z cannot b e expressed as a linear combination of x and y.

- **From**: `EuclideanDomain`

#### `factor` <a id="factor"></a>

##### `factor` : `% -> Factored(%)`

factor(x) returns the factorization of x into irreducibles.

- **From**: `UniqueFactorizationDomain`

##### `factor` : `% -> WSList(WSList(%))`

factor(n) returns the WS factorization of n.

- **From**: [`WSInteger`](WSInteger.md)

#### `gcd` <a id="gcd"></a>

##### `gcd` : `(%, %) -> %`

gcd(x, y) returns the greatest common divisor of x and y.

- **From**: `GcdDomain`

##### `gcd` : `List(%) -> %`

gcd(l) returns the common gcd of the elements in the list l.

- **From**: `GcdDomain`

#### `gcdPolynomial` <a id="gcdpolynomial"></a>

gcdPolynomial(p, q) returns the greatest common divisor (gcd) of univariate polynomials over the domain

- **Signature**: `(SparseUnivariatePolynomial(%), SparseUnivariatePolynomial(%)) -> SparseUnivariatePolynomial(%)`
- **From**: `GcdDomain`

#### `generator` <a id="generator"></a>

generator() returns the generator for this domain.

- **Signature**: `() -> %`
- **From**: `MonogenicAlgebra(R,UP)`

#### `imag` <a id="imag"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1142)\]

imag(x) returns imaginary part of x.

- **Signature**: `% -> WSInteger`
- **From**: `ComplexCategory(R)`

#### `imaginary` <a id="imaginary"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1136)\]

imaginary() = sqrt(-1) = %i.

- **Signature**: `() -> %`
- **From**: `ComplexCategory(R)`

#### `jWSGI` <a id="jwsgi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1115)\]

jWSGI(re, im) constructs a WSGaussianInteger from real part re and imaginary part im.

- **Signature**: `(WSInteger, WSInteger) -> %`

#### `jWSInterpret` <a id="jwsinterpret"></a>

##### `jWSInterpret` : `String -> %`

jWSInterpret(form) interprets form.

- **From**: [`WSObject`](WSObject.md)

##### `jWSInterpret` : `(String, String) -> %`

jWSInterpret(Type|Form, Expr) interprets Expr to be of type Type or Form using the WS Language. For exampl e: 

**Examples**:
```fricas
jWSInterpret("Number","3.2")@WSREAL
jWSInterpret("Real","3.2")@WSREAL
jWSInterpret("L ocation","Lille")$WSEXPR See jWSExpr "$InterpreterTypes"
```

- **From**: [`WSObject`](WSObject.md)

##### `jWSInterpret` : `(String, String, String) -> %`

jWSInterpret(form1,form2,form3) interprets forms.

- **From**: [`WSObject`](WSObject.md)

#### `jlAbout` <a id="jlabout"></a>

jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia. In the Julia interpreter, ent er in the package management mode with ']', and issue: pkg> add "https://github.com/tecosaur/About.jl"

- **Signature**: `% -> Void`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlApply` <a id="jlapply"></a>

##### `jlApply` : `(String, %) -> JLObject`

jlApply(func, obj) applies the function func with obj as parameter and returns the result as a FriCAS JLObject. For exam ple, using JLMatrix(JLObjFloat64): 

**Examples**:
```fricas
M:=nrand(4,4);
jlApply("svd", M::JLMatrix(JLObjFloat64)).S shou ld be "equivalent" to svdvals(M).
```

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlApply` : `(String, %, %) -> JLObject`

jlApply(func, obj1, obj2) applies the function func with obj1 and obj2 as parameters and returns the result as a FriCAS JLObject. For example (equivalent to map(cos, v)): 

**Examples**:
```fricas
v:=urand01(5)$JLVector(JLFloat)
jlApply("map", " cos", coerce v)
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

jlGetJuliaIndex(obj) returns the Julia indexed dictionary index referencing the object obj. Convenience function for use in the interpreter.

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

**Example**:
```fricas
jlObject()$NMUnivariatePolyn omial(NINT,'x)
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

**Examples**:
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

#### `jlref` <a id="jlref"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1124)\]

##### `jlref` : `% -> SExpression`

jlRef(obj) returns the internal Lisp representation of the Julia object obj.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlref` : `String -> %`

jlref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia mutable object.

- **From**: [`JLObjectType`](JLObjectType.md)

#### `latex` <a id="latex"></a>

latex(s) returns a LaTeX-printable output representation of s.

- **Signature**: `% -> String`
- **From**: `SetCategory`

#### `lcm` <a id="lcm"></a>

##### `lcm` : `(%, %) -> %`

lcm(x, y) returns the least common multiple of x and y.

- **From**: `GcdDomain`

##### `lcm` : `List(%) -> %`

lcm(l) returns the least common multiple of the elements of the list l.

- **From**: `GcdDomain`

#### `lcmCoef` <a id="lcmcoef"></a>

lcmCoef(c1, c2) computes (llcm_res, coeff1, coeff2) such that llcm_res is least left common multiple of c1 and c2 and ll cm_res = coeff1*c1 = coeff2*c2

- **Signature**: `(%, %) -> Record(llcm_res: %,coeff1: %,coeff2: %)`
- **From**: `LeftOreRing`

#### `leftPower` <a id="leftpower"></a>

##### `leftPower` : `(%, NonNegativeInteger) -> %`

leftPower(a, n) returns the n-th left power of a, i.e. leftPower(a, n) := a * leftPower(a, n-1) and leftPower(a, 0) := 1 .

- **From**: `MagmaWithUnit`

##### `leftPower` : `(%, PositiveInteger) -> %`

leftPower(a, n) returns the n-th left power of a, i.e. leftPower(a, n) := a * leftPower(a, n-1) and leftPower(a, 1) := a .

- **From**: `Magma`

#### `leftRecip` <a id="leftrecip"></a>

leftRecip(a) returns an element, which is a left inverse of a, or "failed" if such an element doesn't exist or cannot be determined (see unitsKnown).

- **Signature**: `% -> Union(%,"failed")`
- **From**: `MagmaWithUnit`

#### `lift` <a id="lift"></a>

lift(z) returns a minimal degree univariate polynomial up such that z=reduce up.

- **Signature**: `% -> SparseUnivariatePolynomial(WSInteger)`
- **From**: `MonogenicAlgebra(R,UP)`

#### `map` <a id="map"></a>

map(f, ex) evaluates ex, applying f to values of type R in ex.

- **Signature**: `((WSInteger -> WSInteger), %) -> %`
- **From**: `FullyEvalableOver(R)`

#### `missing?` <a id="missing"></a>

missing?(obj) checks whether or not obj is missing.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `multiEuclidean` <a id="multieuclidean"></a>

multiEuclidean([f1, ..., fn], z) returns a list of coefficients [a1, ..., an] such that  z / prod fi = sum aj/fj. If no such list of coefficients exists, "failed" is returned.

- **Signature**: `(List(%), %) -> Union(List(%),"failed")`
- **From**: `EuclideanDomain`

#### `mutable?` <a id="mutable"></a>

mutable?(obj) checks whether or not obj is mutable.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `norm` <a id="norm"></a>

norm(x) returns x * conjugate(x)

- **Signature**: `% -> WSInteger`
- **From**: `ComplexCategory(R)`

#### `nothing?` <a id="nothing"></a>

nothing?(obj) checks whether or not obj is nothing.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

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

#### `one?` <a id="one"></a>

one?(a) tests whether a is the unit 1.

- **Signature**: `% -> Boolean`
- **From**: `MagmaWithUnit`

#### `opposite?` <a id="opposite"></a>

opposite?(x,y) holds if the sum of x and y is 0.

- **Signature**: `(%, %) -> Boolean`
- **From**: `AbelianMonoid`

#### `patternMatch` <a id="patternmatch"></a>

patternMatch(expr, pat, res) matches the pattern pat to the expression expr. res contains the variables of pat which are already matched and their matches (necessary for recursion). Initially, res is just the result of new which is an empty list of matches.

- **Signature**: `(%, Pattern(Integer), PatternMatchResult(Integer,%)) -> PatternMatchResult(Integer,%)`
- **From**: `PatternMatchable(S)`

#### `plenaryPower` <a id="plenarypower"></a>

plenaryPower(a, n) is recursively defined to be plenaryPower(a, n-1)*plenaryPower(a, n-1) for n>1 and a for n=1.

- **Signature**: `(%, PositiveInteger) -> %`
- **From**: `NonAssociativeAlgebra(R)`

#### `prime?` <a id="prime"></a>

prime?(x) tests if x can never be written as the product of two non-units of the ring, i.e. x is an irreducible element.

- **Signature**: `% -> Boolean`
- **From**: `UniqueFactorizationDomain`

#### `principalIdeal` <a id="principalideal"></a>

principalIdeal([f1, ..., fn]) returns a record whose generator component is a generator of the ideal generated by [f1, . .., fn] whose coef component satisfies generator = sum (input.i * coef.i)

- **Signature**: `List(%) -> Record(coef: List(%),generator: %)`
- **From**: `PrincipalIdealDomain`

#### `quo` <a id="quo"></a>

x quo y is the same as divide(x, y).quotient. See divide from EuclideanDomain.

- **Signature**: `(%, %) -> %`
- **From**: `EuclideanDomain`

#### `random` <a id="random"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1110)\]

##### `random` : `WSInteger -> %`

random(n) returns a gaussian integer where real part is in the range 0..n as the imaginary part.

##### `random` : `% -> %`

random(n) returns a random integer from 0 to n-1.

- **From**: `Integer`

#### `rank` <a id="rank"></a>

rank() returns the rank of the algebra.

- **Signature**: `() -> PositiveInteger`
- **From**: `FiniteRankAlgebra(R,UP)`

#### `rational` <a id="rational"></a>

rational(x) returns x as a rational number. Error: if x is not a rational number.

- **Signature**: `% -> Fraction(Integer)`
- **From**: `ComplexCategory(R)`

#### `rational?` <a id="rational"></a>

rational?(x) tests if x is a rational number.

- **Signature**: `% -> Boolean`
- **From**: `ComplexCategory(R)`

#### `rationalIfCan` <a id="rationalifcan"></a>

rationalIfCan(x) returns x as a rational number, or "failed" if x is not a rational number.

- **Signature**: `% -> Union(Fraction(Integer),"failed")`
- **From**: `ComplexCategory(R)`

#### `real` <a id="real"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1141)\]

real(x) returns real part of x.

- **Signature**: `% -> WSInteger`
- **From**: `ComplexCategory(R)`

#### `recip` <a id="recip"></a>

recip(a) returns an element, which is both a left and a right inverse of a, or "failed" if such an element doesn't exist or cannot be determined (see unitsKnown).

- **Signature**: `% -> Union(%,"failed")`
- **From**: `MagmaWithUnit`

#### `reduce` <a id="reduce"></a>

##### `reduce` : `UP -> %`

reduce(up) converts the univariate polynomial up to an algebra element, reducing by the definingPolynomial() if necessar y.

- **From**: `MonogenicAlgebra(R,UP)`

##### `reduce` : `Fraction(UP) -> Union(%,"failed")`

reduce(frac) converts the fraction frac to an algebra element.

- **From**: `MonogenicAlgebra(R,UP)`

#### `reducedSystem` <a id="reducedsystem"></a>

##### `reducedSystem` : `Matrix(%) -> Matrix(R)`

reducedSystem(A) returns a matrix B such that A x = 0 and B x = 0 have the same solutions in R.

- **From**: `LinearlyExplicitOver(R)`

##### `reducedSystem` : `(Matrix(%), Vector(%)) -> Record(mat: Matrix(R),vec: Vector(R))`

reducedSystem(A, v) returns a matrix B and a vector w such that A x = v and B x = w have the same solutions in R.

- **From**: `LinearlyExplicitOver(R)`

#### `regularRepresentation` <a id="regularrepresentation"></a>

##### `regularRepresentation` : `% -> Matrix(R)`

regularRepresentation(a) returns the matrix m of the linear map defined by left multiplication by a with respect to the fixed basis. That is for all x we have coordinates(a*x) = m*coordinates(x).

- **From**: `FramedAlgebra(R,UP)`

##### `regularRepresentation` : `(%, Vector(%)) -> Matrix(R)`

regularRepresentation(a, basis) returns the matrix m of the linear map defined by left multiplication by a with respect to the basis basis. That is for all x we have coordinates(a*x, basis) = m*coordinates(x, basis).

- **From**: `FiniteRankAlgebra(R,UP)`

#### `rem` <a id="rem"></a>

x rem y is the same as divide(x, y).remainder. See divide from EuclideanDomain.

- **Signature**: `(%, %) -> %`
- **From**: `EuclideanDomain`

#### `represents` <a id="represents"></a>

##### `represents` : `Vector(R) -> %`

represents([a1, .., an]) returns a1*v1 + ... + an*vn, where v1, ..., vn are the elements of the fixed basis.

- **From**: `FramedModule(R)`

##### `represents` : `(Vector(R), Vector(%)) -> %`

represents([a1, .., an], [v1, .., vn]) returns a1*v1 + ... + an*vn.

- **From**: `FiniteRankAlgebra(R,UP)`

#### `retract` <a id="retract"></a>

retract(a) transforms a into an element of S if possible. Error: if a cannot be made into an element of S.

- **Signature**: `% -> S`
- **From**: `RetractableTo(S)`

#### `retractIfCan` <a id="retractifcan"></a>

retractIfCan(a) transforms a into an element of S if possible. Returns "failed" if a cannot be made into an element of S .

- **Signature**: `% -> Union(S,"failed")`
- **From**: `RetractableTo(S)`

#### `rightPower` <a id="rightpower"></a>

##### `rightPower` : `(%, NonNegativeInteger) -> %`

rightPower(a, n) returns the n-th right power of a, i.e. rightPower(a, n) := rightPower(a, n-1) * a and rightPower(a, 0) := 1.

- **From**: `MagmaWithUnit`

##### `rightPower` : `(%, PositiveInteger) -> %`

rightPower(a, n) returns the n-th right power of a, i.e. rightPower(a, n) := rightPower(a, n-1) * a and rightPower(a, 1) := a.

- **From**: `Magma`

#### `rightRecip` <a id="rightrecip"></a>

rightRecip(a) returns an element, which is a right inverse of a, or "failed" if such an element doesn't exist or cannot be determined (see unitsKnown).

- **Signature**: `% -> Union(%,"failed")`
- **From**: `MagmaWithUnit`

#### `sample` <a id="sample"></a>

sample yields a value of type %

- **Signature**: `() -> %`
- **From**: `MagmaWithUnit`

#### `sizeLess?` <a id="sizeless"></a>

sizeLess?(x, y) tests whether x is strictly smaller than y with respect to the euclideanSize from EuclideanDomain. Note: zero is considered smaller than every nonzero element.

- **Signature**: `(%, %) -> Boolean`
- **From**: `EuclideanDomain`

#### `smaller?` <a id="smaller"></a>

smaller?(x, y) is a strict ordering on depending on representatives of elements of the set. If % has Comparable then sma ller? gives mathematical linear order.

- **Signature**: `(%, %) -> Boolean`
- **From**: `ComparableRepresentation`

#### `squareFree` <a id="squarefree"></a>

squareFree(x) returns the square-free factorization of x i.e. such that the factors are pairwise relatively prime and ea ch has multiple prime factors.

- **Signature**: `% -> Factored(%)`
- **From**: `UniqueFactorizationDomain`

#### `squareFreePart` <a id="squarefreepart"></a>

squareFreePart(x) returns a product of prime factors of x each taken with multiplicity one.

- **Signature**: `% -> %`
- **From**: `UniqueFactorizationDomain`

#### `string` <a id="string"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1176)\]

string(jt) returns the string representation of jt.

- **Signature**: `% -> String`
- **From**: [`JLType`](JLType.md)

#### `subtractIfCan` <a id="subtractifcan"></a>

subtractIfCan(x, y) returns an element z such that z+y=x or "failed" if no such element exists.

- **Signature**: `(%, %) -> Union(%,"failed")`
- **From**: `CancellationAbelianMonoid`

#### `toString` <a id="tostring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1233)\]

toString(obj) returns the string representation of obj.

- **Signature**: `% -> String`
- **From**: [`WSObject`](WSObject.md)

#### `trace` <a id="trace"></a>

trace(a) returns the trace of the regular representation of a with respect to any basis.

- **Signature**: `% -> WSInteger`
- **From**: `FiniteRankAlgebra(R,UP)`

#### `traceMatrix` <a id="tracematrix"></a>

##### `traceMatrix` : `() -> Matrix(R)`

traceMatrix() is the n-by-n matrix ( Tr(vi * vj) ), where v1, ..., vn are the elements of the fixed basis.

- **From**: `FramedAlgebra(R,UP)`

##### `traceMatrix` : `Vector(%) -> Matrix(R)`

traceMatrix([v1, .., vn]) is the n-by-n matrix ( Tr(vi * vj) )

- **From**: `FiniteRankAlgebra(R,UP)`

#### `unit?` <a id="unit"></a>

unit?(x) tests whether x is a unit, i.e. is invertible.

- **Signature**: `% -> Boolean`
- **From**: `EntireRing`

#### `unitCanonical` <a id="unitcanonical"></a>

unitCanonical(x) returns unitNormal(x).canonical.

- **Signature**: `% -> %`
- **From**: `EntireRing`

#### `unitNormal` <a id="unitnormal"></a>

unitNormal(x) tries to choose a canonical element from the associate class of x. The attribute canonicalUnitNormal, if a sserted, means that the "canonical" element is the same across all associates of x if unitNormal(x) = [u, c, a] then u*c = x, a*u = 1.

- **Signature**: `% -> Record(unit: %,canonical: %,associate: %)`
- **From**: `EntireRing`

#### `zero?` <a id="zero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1349)\]

zero?(x) tests if x is equal to 0.

- **Signature**: `% -> Boolean`
- **From**: `SetWithZero`

#### `~=` <a id="op-neq"></a>

Operation defined in WSGaussianInteger.

- **Signature**: `(%, %) -> Boolean`
---
[Back to Index](../index.md)
