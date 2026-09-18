# WSComplex

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1199)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS complex numbers using the MathLink Julia package.

**WSComplex is a domain constructor.**  
**Abbreviation for WSComplex is WSCPLX**  
**158 names for 227 operations in this domain.**

## Signatures

```fricas
 0 : () -> %    1 : () -> %
 ?*? : (%, %) -> %    ?*? : (%, Fraction(Integer)) -> %
 ?*? : (%, WSReal) -> %    ?*? : (Fraction(Integer), %) -> %
 ?*? : (Integer, %) -> %    ?*? : (NonNegativeInteger, %) -> %
 ?*? : (PositiveInteger, %) -> %    ?*? : (WSInteger, %) -> %
 ?*? : (WSReal, %) -> %    ?*? : (NMInteger, %) -> JLObject
 ?+? : (%, %) -> %    -? : % -> %
 ?-? : (%, %) -> %    ?/? : (%, %) -> %
 ?=? : (%, %) -> Boolean    Chi : % -> %
 Ci : % -> %    D : % -> %
 D : (%, (WSReal -> WSReal)) -> %    D : (%, (WSReal -> WSReal), NonNegativeInteger) -> %
 D : (%, NonNegativeInteger) -> %    Ei : % -> %
 Shi : % -> %    Si : % -> %
 ?^? : (%, %) -> %    ?^? : (%, Fraction(Integer)) -> %
 ?^? : (%, Integer) -> %    ?^? : (%, NonNegativeInteger) -> %
 ?^? : (%, PositiveInteger) -> %    abs : % -> WSReal
 acos : % -> %    acosh : % -> %
 acot : % -> %    acoth : % -> %
 acsc : % -> %    acsch : % -> %
 annihilate? : (%, %) -> Boolean    antiCommutator : (%, %) -> %
 argument : % -> WSReal    asec : % -> %
 asech : % -> %    asin : % -> %
 asinh : % -> %    associates? : (%, %) -> Boolean
 associator : (%, %, %) -> %    atan : % -> %
 atan : (%, %) -> %    atanh : % -> %
 basis : () -> Vector(%)    characteristic : () -> NonNegativeInteger
 coerce : % -> %    coerce : Complex(Integer) -> %
 coerce : Fraction(Integer) -> %    coerce : Integer -> %
 coerce : WSInteger -> %    coerce : WSReal -> %
 coerce : % -> Complex(DoubleFloat)    coerce : % -> Complex(JLFloat64)
 coerce : % -> JLObject    coerce : % -> OutputForm
 coerce : % -> WSExpression    commutator : (%, %) -> %
 complex : (WSReal, WSReal) -> %    conjugate : % -> %
 convert : SparseUnivariatePolynomial(WSReal) -> %    convert : Vector(WSReal) -> %
 convert : % -> Complex(DoubleFloat)    convert : % -> Complex(Float)
 convert : % -> Pattern(Float)    convert : % -> SparseUnivariatePolynomial(WSReal)
 convert : % -> String    convert : % -> Vector(WSReal)
 coordinates : Vector(%) -> Matrix(WSReal)    coordinates : (Vector(%), Vector(%)) -> Matrix(WSReal)
 coordinates : % -> Vector(WSReal)    coordinates : (%, Vector(%)) -> Vector(WSReal)
 cos : % -> %    cosh : % -> %
 cot : % -> %    coth : % -> %
 csc : % -> %    csch : % -> %
 differentiate : % -> %    differentiate : (%, (WSReal -> WSReal)) -> %
 differentiate : (%, NonNegativeInteger) -> %    dilog : % -> %
 discriminant : () -> WSReal    discriminant : Vector(%) -> WSReal
 divide : (%, %) -> Record(quotient: %,remainder: %)    erf : % -> %
 erf : (%, %) -> %    erfc : % -> %
 erfi : % -> %    euclideanSize : % -> NonNegativeInteger
 exp : () -> %    exp : % -> %
 ?exquo? : (%, %) -> Union(%,"failed")    ?exquo? : (%, WSReal) -> Union(%,"failed")
 factor : % -> Factored(%)    fresnelC : % -> %
 fresnelS : % -> %    gcd : (%, %) -> %
 gcd : List(%) -> %    generator : () -> %
 imag : % -> WSReal    imaginary : () -> %
 integral : (%, SegmentBinding(%)) -> %    integral : (%, Symbol) -> %
 inv : % -> %    jWSComplex : WSReal -> %
 jWSComplex : (WSReal, WSReal) -> %    jWSInterpret : String -> %
 jWSInterpret : (String, String) -> %    jWSInterpret : (String, String, String) -> %
 jlAbout : % -> Void    jlApply : (String, %) -> JLObject
 jlApply : (String, %, %) -> JLObject    jlApply : (String, %, %, %) -> JLObject
 jlApply : (String, %, %, %, %) -> JLObject    jlApply : (String, %, %, %, %, %) -> JLObject
 jlApprox? : (%, %) -> Boolean    jlDisplay : % -> Void
 jlDump : JLObject -> Void    jlEval : % -> %
 jlFieldNames : % -> JLObject    jlGetField : (%, JLSymbol) -> JLObject
 jlGetJuliaIndex : % -> String    jlGetProperty : (%, JLSymbol) -> JLObject
 jlHead : % -> WSSymbol    jlId : % -> Integer
 jlObject : () -> String    jlPropertyNames : % -> JLObject
 jlRef : % -> SExpression    jlSymbolic : % -> String
 jlText : (%, String) -> List(String)    jlType : % -> Symbol
 jlimref : String -> %    jlref : String -> %
 latex : % -> String    lcm : (%, %) -> %
 lcm : List(%) -> %    leftPower : (%, NonNegativeInteger) -> %
 leftPower : (%, PositiveInteger) -> %    leftRecip : % -> Union(%,"failed")
 li : % -> %    lift : % -> SparseUnivariatePolynomial(WSReal)
 log : % -> %    log10 : % -> %
 log2 : % -> %    map : ((WSReal -> WSReal), %) -> %
 missing? : % -> Boolean    mutable? : % -> Boolean
 norm : % -> WSReal    nothing? : % -> Boolean
 nthRoot : (%, Integer) -> %    numeric : % -> WSExpression
 numeric : (%, PositiveInteger) -> WSExpression    numeric? : % -> Boolean
 one? : % -> Boolean    opposite? : (%, %) -> Boolean
 pi : () -> %    plenaryPower : (%, PositiveInteger) -> %
 polarCoordinates : % -> Record(r: WSReal,phi: WSReal)    prime? : % -> Boolean
 ?quo? : (%, %) -> %    rank : () -> PositiveInteger
 real : % -> WSReal    recip : % -> Union(%,"failed")
 reduce : SparseUnivariatePolynomial(WSReal) -> %    reducedSystem : Matrix(%) -> Matrix(WSReal)
 regularRepresentation : % -> Matrix(WSReal)    ?rem? : (%, %) -> %
 represents : Vector(WSReal) -> %    represents : (Vector(WSReal), Vector(%)) -> %
 retract : % -> Fraction(Integer)    retract : % -> Integer
 retract : % -> WSReal    retractIfCan : % -> Union(Fraction(Integer),"failed")
 retractIfCan : % -> Union(Integer,"failed")    retractIfCan : % -> Union(WSReal,"failed")
 rightPower : (%, NonNegativeInteger) -> %    rightPower : (%, PositiveInteger) -> %
 rightRecip : % -> Union(%,"failed")    sample : () -> %
 sec : % -> %    sech : % -> %
 sin : % -> %    sinc : % -> %
 sinh : % -> %    sizeLess? : (%, %) -> Boolean
 smaller? : (%, %) -> Boolean    sqrt : % -> %
 squareFree : % -> Factored(%)    squareFreePart : % -> %
 string : % -> String    subtractIfCan : (%, %) -> Union(%,"failed")
 tan : % -> %    tanh : % -> %
 toString : % -> String    toString : (%, WSExpression) -> String
 trace : % -> WSReal    traceMatrix : () -> Matrix(WSReal)
 traceMatrix : Vector(%) -> Matrix(WSReal)    unit? : % -> Boolean
 unitCanonical : % -> %    urand01 : () -> %
 zero? : % -> Boolean    ?~=? : (%, %) -> Boolean
 characteristicPolynomial : % -> SparseUnivariatePolynomial(WSReal)
 definingPolynomial : () -> SparseUnivariatePolynomial(WSReal)
 derivationCoordinates : (Vector(%), (WSReal -> WSReal)) -> Matrix(WSReal)
 differentiate : (%, (WSReal -> WSReal), NonNegativeInteger) -> %
 expressIdealMember : (List(%), %) -> Union(List(%),"failed")
 extendedEuclidean : (%, %) -> Record(coef1: %,coef2: %,generator: %)
 extendedEuclidean : (%, %, %) -> Union(Record(coef1: %,coef2: %),"failed")
 gcdPolynomial : (SparseUnivariatePolynomial(%), SparseUnivariatePolynomial(%)) -> SparseUnivariatePolynomial(%)
 lcmCoef : (%, %) -> Record(llcm_res: %,coeff1: %,coeff2: %)
 minimalPolynomial : % -> SparseUnivariatePolynomial(WSReal)
 multiEuclidean : (List(%), %) -> Union(List(%),"failed")
 patternMatch : (%, Pattern(Float), PatternMatchResult(Float,%)) -> PatternMatchResult(Float,%)
 principalIdeal : List(%) -> Record(coef: List(%),generator: %)
 reduce : Fraction(SparseUnivariatePolynomial(WSReal)) -> Union(%,"failed")
 reducedSystem : (Matrix(%), Vector(%)) -> Record(mat: Matrix(WSReal),vec: Vector(WSReal))
 regularRepresentation : (%, Vector(%)) -> Matrix(WSReal)
 unitNormal : % -> Record(unit: %,canonical: %,associate: %)
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`*`](#op-mul) | n * x multiplies n by x. |
| [`+`](#op-add) | Operation defined in WSComplex |
| [`/`](#op-div) | Operation defined in WSComplex |
| [`0`](#0) | 0 |
| [`1`](#1) | 1 returns the unit element, denoted by 1. |
| [`Chi`](#chi) | Chi(x) returns the hyperbolic cosine integral of x, i.e. the integral of cosh(x) / x dx. |
| [`Ci`](#ci) | Ci(x) returns the cosine integral of x, i.e. the integral of cos(x) / x dx. |
| [`D`](#d) | D(x) returns the derivative of x. This function is a simple differential operator where no... |
| [`Ei`](#ei) | Ei(x) returns the exponential integral of x, i.e. the integral of exp(x)/x dx. |
| [`Shi`](#shi) | Shi(x) returns the hyperbolic sine integral of x, i.e. the integral of sinh(x) / x dx. |
| [`Si`](#si) | Si(x) returns the sine integral of x, i.e. the integral of sin(x) / x dx. |
| [`^`](#op-pow) | Operation defined in WSComplex |
| [`abs`](#abs) | abs(x) returns the absolute value of x = sqrt(norm(x)). |
| [`acos`](#acos) | acos(x) returns the arc-cosine of x. When evaluated into some subset of the complex number... |
| [`acosh`](#acosh) | acosh(x) returns the hyperbolic arc-cosine of x. |
| [`acot`](#acot) | acot(x) returns the arc-cotangent of x. |
| [`acoth`](#acoth) | acoth(x) returns the hyperbolic arc-cotangent of x. |
| [`acsc`](#acsc) | acsc(x) returns the arc-cosecant of x. |
| [`acsch`](#acsch) | acsch(x) returns the hyperbolic arc-cosecant of x. |
| [`annihilate?`](#annihilate) | annihilate?(x,y) holds when the product of x and y is 0. |
| [`antiCommutator`](#anticommutator) | antiCommutator(a, b) returns a*b+b*a. |
| [`argument`](#argument) | argument(x) returns the angle made by (1, 0) and x. |
| [`asec`](#asec) | asec(x) returns the arc-secant of x. |
| [`asech`](#asech) | asech(x) returns the hyperbolic arc-secant of x. |
| [`asin`](#asin) | asin(x) returns the arc-sine of x. When evaluated into some subset of the complex numbers,... |
| [`asinh`](#asinh) | asinh(x) returns the hyperbolic arc-sine of x. |
| [`associates?`](#associates) | associates?(x, y) tests whether x and y are associates, i.e. differ by a unit factor. |
| [`associator`](#associator) | associator(a, b, c) returns (a*b)*c-a*(b*c). |
| [`atan`](#atan) | atan(z1,z2) computes the arc tangent of z2/z1. |
| [`atanh`](#atanh) | atanh(x) returns the hyperbolic arc-tangent of x. |
| [`basis`](#basis) | basis() returns the fixed R-module basis. |
| [`characteristic`](#characteristic) | characteristic() returns the characteristic of the ring. |
| [`characteristicPolynomial`](#characteristicpolynomial) | characteristicPolynomial(a) returns the characteristic polynomial of the regular represent... |
| [`coerce`](#coerce) | coerce(z) coerces z to a FriCAS Complex(DoubleFloat). |
| [`commutator`](#commutator) | commutator(a, b) returns a*b-b*a. |
| [`complex`](#complex) | complex(re,im) constructs a WSComplex from real part re and imaginary part im. |
| [`conjugate`](#conjugate) | conjugate(x + %i y) returns x - %i y. |
| [`convert`](#convert) | convert(up) converts the univariate polynomial up to an algebra element, reducing by the d... |
| [`coordinates`](#coordinates) | coordinates([v1, ..., vm]) returns the coordinates of the vi's with respect to the fixed b... |
| [`cos`](#cos) | cos(x) returns the cosine of x. |
| [`cosh`](#cosh) | cosh(x) returns the hyperbolic cosine of x. |
| [`cot`](#cot) | cot(x) returns the cotangent of x. |
| [`coth`](#coth) | coth(x) returns the hyperbolic cotangent of x. |
| [`csc`](#csc) | csc(x) returns the cosecant of x. |
| [`csch`](#csch) | csch(x) returns the hyperbolic cosecant of x. |
| [`definingPolynomial`](#definingpolynomial) | definingPolynomial() returns the minimal polynomial which generator() satisfies. |
| [`derivationCoordinates`](#derivationcoordinates) | derivationCoordinates(b, ') returns M such that b' = M b. |
| [`differentiate`](#differentiate) | differentiate(x) returns the derivative of x. This function is a simple differential opera... |
| [`dilog`](#dilog) | dilog(x) returns the dilogarithm of x, i.e. the integral of log(x) / (1 - x) dx. |
| [`discriminant`](#discriminant) | discriminant() = determinant(traceMatrix()). |
| [`divide`](#divide) | divide(x, y) divides x by y producing a record containing a quotient and remainder, where ... |
| [`erf`](#erf) | erf(x) is the error function. |
| [`erfc`](#erfc) | erfc(x) is the complementary error function. |
| [`erfi`](#erfi) | erfi(x) denotes -%i*erf(%i*x) |
| [`euclideanSize`](#euclideansize) | euclideanSize(x) returns the euclidean size of the element x. Error: if x is zero. |
| [`exp`](#exp) | exp() returns the WSComplex ℯ (%e or exp(1)). |
| [`expressIdealMember`](#expressidealmember) | expressIdealMember([f1, ..., fn], h) returns a representation of h as a linear combination... |
| [`exquo`](#exquo) | exquo(f, g) creates the equivalent infix form. |
| [`extendedEuclidean`](#extendedeuclidean) | extendedEuclidean(x, y) returns a record rec where rec.coef1*x+rec.coef2*y = rec.generator... |
| [`factor`](#factor) | factor(x) returns the factorization of x into irreducibles. |
| [`fresnelC`](#fresnelc) | fresnelC(x) is the Fresnel integral C, defined by C(x) = integrate(cos(%pi*t^2/2), t=0..x) |
| [`fresnelS`](#fresnels) | fresnelS(x) is the Fresnel integral S, defined by S(x) = integrate(sin(%pi*t^2/2), t=0..x) |
| [`gcd`](#gcd) | gcd(x, y) returns the greatest common divisor of x and y. |
| [`gcdPolynomial`](#gcdpolynomial) | gcdPolynomial(p, q) returns the greatest common divisor (gcd) of univariate polynomials ov... |
| [`generator`](#generator) | generator() returns the generator for this domain. |
| [`imag`](#imag) | imag(x) returns imaginary part of x. |
| [`imaginary`](#imaginary) | imaginary() = sqrt(-1) = %i. |
| [`integral`](#integral) | integral(f, x = a..b) returns the formal definite integral of f dx for x between a and b. |
| [`inv`](#inv) | inv x returns the multiplicative inverse of x. Error: if x is 0. |
| [`jWSComplex`](#jwscomplex) | jWSComplex(re) constructs a WSComplex with real part re. |
| [`jWSInterpret`](#jwsinterpret) | jWSInterpret(form) interprets form. |
| [`jlAbout`](#jlabout) | jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia.... |
| [`jlApply`](#jlapply) | jlApply(func, obj) applies the function func with obj as parameter and returns the result ... |
| [`jlApprox?`](#jlapprox) | jlApprox?(x,y) computes inexact equality comparison with WS default parameters (Equal). |
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
| [`latex`](#latex) | latex(s) returns a LaTeX-printable output representation of s. |
| [`lcm`](#lcm) | lcm(x, y) returns the least common multiple of x and y. |
| [`lcmCoef`](#lcmcoef) | lcmCoef(c1, c2) computes (llcm_res, coeff1, coeff2) such that llcm_res is least left commo... |
| [`leftPower`](#leftpower) | leftPower(a, n) returns the n-th left power of a, i.e. leftPower(a, n) := a * leftPower(a,... |
| [`leftRecip`](#leftrecip) | leftRecip(a) returns an element, which is a left inverse of a, or "failed" if such an elem... |
| [`li`](#li) | li(x) returns the logarithmic integral of x, i.e. the integral of dx / log(x). |
| [`lift`](#lift) | lift(z) returns a minimal degree univariate polynomial up such that z=reduce up. |
| [`log`](#log) | log(x) returns the natural logarithm of x. When evaluated into some subset of the complex ... |
| [`log10`](#log10) | log10(z) computes the logarithm of z in base 10. |
| [`log2`](#log2) | log2(z) computes the logarithm of z in base 2. |
| [`map`](#map) | map(f, ex) evaluates ex, applying f to values of type R in ex. |
| [`minimalPolynomial`](#minimalpolynomial) | minimalPolynomial(a) returns the minimal polynomial of a. |
| [`missing?`](#missing) | missing?(obj) checks whether or not obj is missing. |
| [`multiEuclidean`](#multieuclidean) | multiEuclidean([f1, ..., fn], z) returns a list of coefficients [a1, ..., an] such that z ... |
| [`mutable?`](#mutable) | mutable?(obj) checks whether or not obj is mutable. |
| [`norm`](#norm) | norm(x) returns x * conjugate(x) |
| [`nothing?`](#nothing) | nothing?(obj) checks whether or not obj is nothing. |
| [`nthRoot`](#nthroot) | nthRoot(x, n) returns the nth root of x. |
| [`numeric`](#numeric) | numeric(expr) returns numerical expr if possible. |
| [`numeric?`](#numeric) | numeric?(x) checks whether or not x is or would yield a number. |
| [`one?`](#one) | one?(a) tests whether a is the unit 1. |
| [`opposite?`](#opposite) | opposite?(x,y) holds if the sum of x and y is 0. |
| [`patternMatch`](#patternmatch) | patternMatch(expr, pat, res) matches the pattern pat to the expression expr. res contains ... |
| [`pi`](#pi) | pi() returns the constant pi. |
| [`plenaryPower`](#plenarypower) | plenaryPower(a, n) is recursively defined to be plenaryPower(a, n-1)*plenaryPower(a, n-1) ... |
| [`polarCoordinates`](#polarcoordinates) | polarCoordinates(x) returns (r, phi) such that x = r * exp(%i * phi). |
| [`prime?`](#prime) | prime?(x) tests if x can never be written as the product of two non-units of the ring, i.e... |
| [`principalIdeal`](#principalideal) | principalIdeal([f1, ..., fn]) returns a record whose generator component is a generator of... |
| [`quo`](#quo) | x quo y is the same as divide(x, y).quotient. See divide from EuclideanDomain. |
| [`rank`](#rank) | rank() returns the rank of the algebra. |
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
| [`sec`](#sec) | sec(x) returns the secant of x. |
| [`sech`](#sech) | sech(x) returns the hyperbolic secant of x. |
| [`sin`](#sin) | sin(x) returns the sine of x. |
| [`sinc`](#sinc) | sinc(z) computes the unnormalized sinc of z, sin(z)/z and 0 if z = 0. |
| [`sinh`](#sinh) | sinh(x) returns the hyperbolic sine of x. |
| [`sizeLess?`](#sizeless) | sizeLess?(x, y) tests whether x is strictly smaller than y with respect to the euclideanSi... |
| [`smaller?`](#smaller) | smaller?(x, y) is a strict ordering on depending on representatives of elements of the set... |
| [`sqrt`](#sqrt) | sqrt(x) returns the square root of x. The branch cut lies along the negative real axis, co... |
| [`squareFree`](#squarefree) | squareFree(x) returns the square-free factorization of x i.e. such that the factors are pa... |
| [`squareFreePart`](#squarefreepart) | squareFreePart(x) returns a product of prime factors of x each taken with multiplicity one... |
| [`string`](#string) | string(jt) returns the string representation of jt. |
| [`subtractIfCan`](#subtractifcan) | subtractIfCan(x, y) returns an element z such that z+y=x or "failed" if no such element ex... |
| [`tan`](#tan) | tan(x) returns the tangent of x. |
| [`tanh`](#tanh) | tanh(x) returns the hyperbolic tangent of x. |
| [`toString`](#tostring) | toString(expr, form) returns the string representation of expr with WS language format for... |
| [`trace`](#trace) | trace(a) returns the trace of the regular representation of a with respect to any basis. |
| [`traceMatrix`](#tracematrix) | traceMatrix() is the n-by-n matrix ( Tr(vi * vj) ), where v1, ..., vn are the elements of ... |
| [`unit?`](#unit) | unit?(x) tests whether x is a unit, i.e. is invertible. |
| [`unitCanonical`](#unitcanonical) | unitCanonical(x) returns unitNormal(x).canonical. |
| [`unitNormal`](#unitnormal) | unitNormal(x) tries to choose a canonical element from the associate class of x. The attri... |
| [`urand01`](#urand01) | urand01() returns a unit square random complex number. |
| [`zero?`](#zero) | zero?(x) tests if x is equal to 0. |
| [`~=`](#op-neq) | Operation defined in WSComplex |

### Detailed Documentation

#### `*` <a id="op-mul"></a>

n * x multiplies n by x.

- **Signature**: `(WSInteger, %) -> %`

#### `+` <a id="op-add"></a>

Operation defined in WSComplex.

- **Signature**: `(%, %) -> %`

#### `/` <a id="op-div"></a>

Operation defined in WSComplex.

- **Signature**: `(%, %) -> %`

#### `0` <a id="0"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1276)\]

0

- **Signature**: `() -> %`
- **From**: `Pattern(R)`

#### `1` <a id="1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1277)\]

1 returns the unit element, denoted by 1.

- **Signature**: `() -> %`
- **From**: `MagmaWithUnit`

#### `Chi` <a id="chi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1387)\]

Chi(x) returns the hyperbolic cosine integral of x, i.e. the integral of cosh(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `Ci` <a id="ci"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1386)\]

Ci(x) returns the cosine integral of x, i.e. the integral of cos(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

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

#### `Ei` <a id="ei"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1388)\]

Ei(x) returns the exponential integral of x, i.e. the integral of exp(x)/x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `Shi` <a id="shi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1385)\]

Shi(x) returns the hyperbolic sine integral of x, i.e. the integral of sinh(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `Si` <a id="si"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1384)\]

Si(x) returns the sine integral of x, i.e. the integral of sin(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `^` <a id="op-pow"></a>

##### `^` : `(%, %) -> %`

Operation defined in WSComplex.

##### `^` : `(%, Fraction(Integer)) -> %`

Operation defined in WSComplex.

##### `^` : `(%, Integer) -> %`

Operation defined in WSComplex.

##### `^` : `(%, NonNegativeInteger) -> %`

Operation defined in WSComplex.

##### `^` : `(%, PositiveInteger) -> %`

Operation defined in WSComplex.

#### `abs` <a id="abs"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1320)\]

abs(x) returns the absolute value of x = sqrt(norm(x)).

- **Signature**: `% -> WSReal`
- **From**: `ComplexCategory(R)`

#### `acos` <a id="acos"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1345)\]

acos(x) returns the arc-cosine of x. When evaluated into some subset of the complex numbers, one branch cut for acos lie s along the negative real axis to the left of -1 (inclusive), continuous with the upper half plane, the other along the positive real axis to the right of 1 (inclusive), continuous with the lower half plane.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `acosh` <a id="acosh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1364)\]

acosh(x) returns the hyperbolic arc-cosine of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `acot` <a id="acot"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1354)\]

acot(x) returns the arc-cotangent of x.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `acoth` <a id="acoth"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1375)\]

acoth(x) returns the hyperbolic arc-cotangent of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `acsc` <a id="acsc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1351)\]

acsc(x) returns the arc-cosecant of x.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `acsch` <a id="acsch"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1372)\]

acsch(x) returns the hyperbolic arc-cosecant of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `annihilate?` <a id="annihilate"></a>

annihilate?(x,y) holds when the product of x and y is 0.

- **Signature**: `(%, %) -> Boolean`
- **From**: `Rng`

#### `antiCommutator` <a id="anticommutator"></a>

antiCommutator(a, b) returns a*b+b*a.

- **Signature**: `(%, %) -> %`
- **From**: `NonAssociativeSemiRng`

#### `argument` <a id="argument"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1321)\]

argument(x) returns the angle made by (1, 0) and x.

- **Signature**: `% -> WSReal`
- **From**: `ComplexCategory(R)`

#### `asec` <a id="asec"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1348)\]

asec(x) returns the arc-secant of x.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `asech` <a id="asech"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1369)\]

asech(x) returns the hyperbolic arc-secant of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `asin` <a id="asin"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1344)\]

asin(x) returns the arc-sine of x. When evaluated into some subset of the complex numbers, one branch cut for asin lies along the negative real axis to the left of -1 (inclusive), continuous with the upper half plane, the other along the po sitive real axis to the right of 1 (inclusive), continuous with the lower half plane.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `asinh` <a id="asinh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1363)\]

asinh(x) returns the hyperbolic arc-sine of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `associates?` <a id="associates"></a>

associates?(x, y) tests whether x and y are associates, i.e. differ by a unit factor.

- **Signature**: `(%, %) -> Boolean`
- **From**: `EntireRing`

#### `associator` <a id="associator"></a>

associator(a, b, c) returns (a*b)*c-a*(b*c).

- **Signature**: `(%, %, %) -> %`
- **From**: `NonAssociativeRng`

#### `atan` <a id="atan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1227)\]

##### `atan` : `(%, %) -> %`

atan(z1,z2) computes the arc tangent of z2/z1.

##### `atan` : `% -> %`

atan(x) returns the arc-tangent of x. When evaluated into some subset of the complex numbers, one branch cut for atan li es along the positive imaginary axis above %i (exclusive), continuous with the left half plane, the other along the nega tive imaginary axis below -%i (exclusive) continuous with the right half plane. The domain does not contain %i and -%i.

- **From**: `ArcTrigonometricFunctionCategory`

#### `atanh` <a id="atanh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1365)\]

atanh(x) returns the hyperbolic arc-tangent of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

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

- **Signature**: `% -> SparseUnivariatePolynomial(WSReal)`
- **From**: `FiniteRankAlgebra(R,UP)`

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1236)\]

##### `coerce` : `% -> Complex(DoubleFloat)`

coerce(z) coerces z to a FriCAS Complex(DoubleFloat).

##### `coerce` : `% -> Complex(JLFloat64)`

coerce(z) coerces z to a FriCAS Complex(JLFloat64).

##### `coerce` : `Integer  -> %`

coerce(int): coerces int. Convenience function.

##### `coerce` : `Complex(Integer) -> %`

coerce(z) coerce z. Convenience function. -- %i operations for example

##### `coerce` : `WSInteger  -> %`

coerce(int): coerces int. Convenience function.

##### `coerce` : `R -> %`

coerce(r) maps the ring element r to a member of the algebra.

- **From**: `Algebra(R)`

##### `coerce` : `S -> %`

coerce(a) transforms a into an element of %.

- **From**: `CoercibleFrom(S)`

##### `coerce` : `DoubleFloat -> %`

coerce(x) converts x to a WSReal.

- **From**: [`WSReal`](WSReal.md)

##### `coerce` : `Integer -> %`

coerce(n) coerces the integer n to an element of the ring.

- **From**: `NonAssociativeRing`

##### `coerce` : `String -> %`

coerce(str) constructs str as a WSReal.

- **From**: [`WSReal`](WSReal.md)

##### `coerce` : `% -> S`

coerce(a) transforms a into an element of S.

- **From**: `CoercibleTo(S)`

##### `coerce` : `% -> DoubleFloat`

coerce(r) coerces r to a DoubleFloat.

- **From**: [`WSReal`](WSReal.md)

##### `coerce` : `% -> JLFloat`

coerce(x) converts x to a JLFloat.

- **From**: [`WSReal`](WSReal.md)

##### `coerce` : `% -> JLFloat64`

coerce(r) coerces r to a JLFloat64.

- **From**: [`WSReal`](WSReal.md)

##### `coerce` : `% -> JLObject`

coerce(obj) coerces obj to JLObject. Convenience function.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `coerce` : `% -> WSExpression`

coerce(expr) returns the WSExpression representation of expr.

- **From**: [`WSObject`](WSObject.md)

#### `commutator` <a id="commutator"></a>

commutator(a, b) returns a*b-b*a.

- **Signature**: `(%, %) -> %`
- **From**: `NonAssociativeRng`

#### `complex` <a id="complex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1246)\]

##### `complex` : `(WSReal, WSReal) -> %`

complex(re,im) constructs a WSComplex from real part re and imaginary part im.

##### `complex` : `(R, R) -> %`

complex(x, y) constructs x + %i*y.

- **From**: `ComplexCategory(R)`

#### `conjugate` <a id="conjugate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1290)\]

conjugate(x + %i y) returns x - %i y.

- **Signature**: `% -> %`
- **From**: `ComplexCategory(R)`

#### `convert` <a id="convert"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1398)\]

##### `convert` : `UP -> %`

convert(up) converts the univariate polynomial up to an algebra element, reducing by the definingPolynomial() if necessa ry.

- **From**: `MonogenicAlgebra(R,UP)`

##### `convert` : `DoubleFloat -> %`

convert(x) converts a DoubleFloat x to a Float.

- **From**: `Float`

##### `convert` : `List(%) -> %`

convert([a1, ..., an]) returns the pattern [a1, ..., an].

- **From**: `Pattern(R)`

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

#### `cos` <a id="cos"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1336)\]

cos(x) returns the cosine of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `cosh` <a id="cosh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1357)\]

cosh(x) returns the hyperbolic cosine of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `cot` <a id="cot"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1340)\]

cot(x) returns the cotangent of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `coth` <a id="coth"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1361)\]

coth(x) returns the hyperbolic cotangent of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `csc` <a id="csc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1339)\]

csc(x) returns the cosecant of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `csch` <a id="csch"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1360)\]

csch(x) returns the hyperbolic cosecant of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `definingPolynomial` <a id="definingpolynomial"></a>

definingPolynomial() returns the minimal polynomial which generator() satisfies.

- **Signature**: `() -> SparseUnivariatePolynomial(WSReal)`
- **From**: `MonogenicAlgebra(R,UP)`

#### `derivationCoordinates` <a id="derivationcoordinates"></a>

derivationCoordinates(b, ') returns M such that b' = M b.

- **Signature**: `(Vector(%), (WSReal -> WSReal)) -> Matrix(WSReal)`
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

#### `dilog` <a id="dilog"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1392)\]

dilog(x) returns the dilogarithm of x, i.e. the integral of log(x) / (1 - x) dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

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

#### `erf` <a id="erf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1229)\]

##### `erf` : `(%, %) -> %`

erf(x) is the error function.

##### `erf` : `% -> %`

erf(x) returns the error function of x, i.e. 2 / sqrt(%pi) times the integral of exp(-x^2) dx.

- **From**: `LiouvillianFunctionCategory`

#### `erfc` <a id="erfc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1231)\]

erfc(x) is the complementary error function.

- **Signature**: `% -> %`

#### `erfi` <a id="erfi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1383)\]

erfi(x) denotes -%i*erf(%i*x)

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `euclideanSize` <a id="euclideansize"></a>

euclideanSize(x) returns the euclidean size of the element x. Error: if x is zero.

- **Signature**: `% -> NonNegativeInteger`
- **From**: `EuclideanDomain`

#### `exp` <a id="exp"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1219)\]

##### `exp` : `() -> %`

exp() returns the WSComplex ℯ (%e or exp(1)).

##### `exp` : `% -> %`

exp(x) returns %e to the power x.

- **From**: `ElementaryFunctionCategory`

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

factor(x) returns the factorization of x into irreducibles.

- **Signature**: `% -> Factored(%)`
- **From**: `UniqueFactorizationDomain`

#### `fresnelC` <a id="fresnelc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1389)\]

fresnelC(x) is the Fresnel integral C, defined by C(x) = integrate(cos(%pi*t^2/2), t=0..x)

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `fresnelS` <a id="fresnels"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1390)\]

fresnelS(x) is the Fresnel integral S, defined by S(x) = integrate(sin(%pi*t^2/2), t=0..x)

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

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

#### `imag` <a id="imag"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1288)\]

imag(x) returns imaginary part of x.

- **Signature**: `% -> WSReal`
- **From**: `ComplexCategory(R)`

#### `imaginary` <a id="imaginary"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1278)\]

imaginary() = sqrt(-1) = %i.

- **Signature**: `() -> %`
- **From**: `ComplexCategory(R)`

#### `integral` <a id="integral"></a>

##### `integral` : `(%, SegmentBinding(%)) -> %`

integral(f, x = a..b) returns the formal definite integral of f dx for x between a and b.

- **From**: `PrimitiveFunctionCategory`

##### `integral` : `(%, Symbol) -> %`

integral(f, x) returns the formal integral of f dx.

- **From**: `PrimitiveFunctionCategory`

#### `inv` <a id="inv"></a>

inv x returns the multiplicative inverse of x. Error: if x is 0.

- **Signature**: `% -> %`
- **From**: `DivisionRing`

#### `jWSComplex` <a id="jwscomplex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1249)\]

##### `jWSComplex` : `WSReal -> %`

jWSComplex(re) constructs a WSComplex with real part re.

##### `jWSComplex` : `(WSReal, WSReal) -> %`

jWSComplex(re, im) constructs a WSComplex from real part re and imaginary part im.

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

#### `jlApprox?` <a id="jlapprox"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1216)\]

jlApprox?(x,y) computes inexact equality comparison with WS default parameters (Equal).

- **Signature**: `(%, %) -> Boolean`

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

#### `jlref` <a id="jlref"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1261)\]

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

#### `li` <a id="li"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1391)\]

li(x) returns the logarithmic integral of x, i.e. the integral of dx / log(x).

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `lift` <a id="lift"></a>

lift(z) returns a minimal degree univariate polynomial up such that z=reduce up.

- **Signature**: `% -> SparseUnivariatePolynomial(WSReal)`
- **From**: `MonogenicAlgebra(R,UP)`

#### `log` <a id="log"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1325)\]

log(x) returns the natural logarithm of x. When evaluated into some subset of the complex numbers, the branch cut lies a long the negative real axis, continuous with quadrant II. The domain does not contain the origin.

- **Signature**: `% -> %`
- **From**: `ElementaryFunctionCategory`

#### `log10` <a id="log10"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1225)\]

##### `log10` : `% -> %`

log10(z) computes the logarithm of z in base 10.

##### `log10` : `() -> %`

log10() returns ln 10: 2.3025809299....

- **From**: `Float`

#### `log2` <a id="log2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1223)\]

##### `log2` : `% -> %`

log2(z) computes the logarithm of z in base 2.

##### `log2` : `() -> %`

log2() returns ln 2, i.e. 0.6931471805....

- **From**: `Float`

#### `map` <a id="map"></a>

map(f, ex) evaluates ex, applying f to values of type R in ex.

- **Signature**: `((WSReal -> WSReal), %) -> %`
- **From**: `FullyEvalableOver(R)`

#### `minimalPolynomial` <a id="minimalpolynomial"></a>

minimalPolynomial(a) returns the minimal polynomial of a.

- **Signature**: `% -> SparseUnivariatePolynomial(WSReal)`
- **From**: `FiniteRankAlgebra(R,UP)`

#### `missing?` <a id="missing"></a>

missing?(obj) checks whether or not obj is missing.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `multiEuclidean` <a id="multieuclidean"></a>

multiEuclidean([f1, ..., fn], z) returns a list of coefficients [a1, ..., an] such that z / prod fi = sum aj/fj. If no such list of coefficients exists, "failed" is returned.

- **Signature**: `(List(%), %) -> Union(List(%),"failed")`
- **From**: `EuclideanDomain`

#### `mutable?` <a id="mutable"></a>

mutable?(obj) checks whether or not obj is mutable.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `norm` <a id="norm"></a>

norm(x) returns x * conjugate(x)

- **Signature**: `% -> WSReal`
- **From**: `ComplexCategory(R)`

#### `nothing?` <a id="nothing"></a>

nothing?(obj) checks whether or not obj is nothing.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `nthRoot` <a id="nthroot"></a>

nthRoot(x, n) returns the nth root of x.

- **Signature**: `(%, Integer) -> %`
- **From**: `RadicalCategory`

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

- **Signature**: `(%, Pattern(Float), PatternMatchResult(Float,%)) -> PatternMatchResult(Float,%)`
- **From**: `PatternMatchable(S)`

#### `pi` <a id="pi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1284)\]

pi() returns the constant pi.

- **Signature**: `() -> %`
- **From**: `TranscendentalFunctionCategory`

#### `plenaryPower` <a id="plenarypower"></a>

plenaryPower(a, n) is recursively defined to be plenaryPower(a, n-1)*plenaryPower(a, n-1) for n>1 and a for n=1.

- **Signature**: `(%, PositiveInteger) -> %`
- **From**: `NonAssociativeAlgebra(R)`

#### `polarCoordinates` <a id="polarcoordinates"></a>

polarCoordinates(x) returns (r, phi) such that x = r * exp(%i * phi).

- **Signature**: `% -> Record(r: WSReal,phi: WSReal)`
- **From**: `ComplexCategory(R)`

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

#### `rank` <a id="rank"></a>

rank() returns the rank of the algebra.

- **Signature**: `() -> PositiveInteger`
- **From**: `FiniteRankAlgebra(R,UP)`

#### `real` <a id="real"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1287)\]

real(x) returns real part of x.

- **Signature**: `% -> WSReal`
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

#### `sec` <a id="sec"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1338)\]

sec(x) returns the secant of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `sech` <a id="sech"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1359)\]

sech(x) returns the hyperbolic secant of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `sin` <a id="sin"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1335)\]

sin(x) returns the sine of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `sinc` <a id="sinc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1221)\]

sinc(z) computes the unnormalized sinc of z, sin(z)/z and 0 if z = 0.

- **Signature**: `% -> %`

#### `sinh` <a id="sinh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1356)\]

sinh(x) returns the hyperbolic sine of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `sizeLess?` <a id="sizeless"></a>

sizeLess?(x, y) tests whether x is strictly smaller than y with respect to the euclideanSize from EuclideanDomain. Note: zero is considered smaller than every nonzero element.

- **Signature**: `(%, %) -> Boolean`
- **From**: `EuclideanDomain`

#### `smaller?` <a id="smaller"></a>

smaller?(x, y) is a strict ordering on depending on representatives of elements of the set. If % has Comparable then sma ller? gives mathematical linear order.

- **Signature**: `(%, %) -> Boolean`
- **From**: `ComparableRepresentation`

#### `sqrt` <a id="sqrt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1324)\]

sqrt(x) returns the square root of x. The branch cut lies along the negative real axis, continuous with quadrant II.

- **Signature**: `% -> %`
- **From**: `ComplexCategory(R)`

#### `squareFree` <a id="squarefree"></a>

squareFree(x) returns the square-free factorization of x i.e. such that the factors are pairwise relatively prime and ea ch has multiple prime factors.

- **Signature**: `% -> Factored(%)`
- **From**: `UniqueFactorizationDomain`

#### `squareFreePart` <a id="squarefreepart"></a>

squareFreePart(x) returns a product of prime factors of x each taken with multiplicity one.

- **Signature**: `% -> %`
- **From**: `UniqueFactorizationDomain`

#### `string` <a id="string"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1397)\]

string(jt) returns the string representation of jt.

- **Signature**: `% -> String`
- **From**: [`JLType`](JLType.md)

#### `subtractIfCan` <a id="subtractifcan"></a>

subtractIfCan(x, y) returns an element z such that z+y=x or "failed" if no such element exists.

- **Signature**: `(%, %) -> Union(%,"failed")`
- **From**: `CancellationAbelianMonoid`

#### `tan` <a id="tan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1337)\]

tan(x) returns the tangent of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `tanh` <a id="tanh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1358)\]

tanh(x) returns the hyperbolic tangent of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `toString` <a id="tostring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1233)\]

##### `toString` : `(%, WSExpression) -> String`

toString(expr, form) returns the string representation of expr with WS language format form.

##### `toString` : `% -> String`

toString(obj) returns the string representation of obj.

- **From**: [`WSObject`](WSObject.md)

#### `trace` <a id="trace"></a>

trace(a) returns the trace of the regular representation of a with respect to any basis.

- **Signature**: `% -> WSReal`
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

#### `urand01` <a id="urand01"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1212)\]

urand01() returns a unit square random complex number.

- **Signature**: `() -> %`

#### `zero?` <a id="zero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1349)\]

zero?(x) tests if x is equal to 0.

- **Signature**: `% -> Boolean`
- **From**: `SetWithZero`

#### `~=` <a id="op-neq"></a>

Operation defined in WSComplex.

- **Signature**: `(%, %) -> Boolean`
---
[Back to Index](../index.md)
