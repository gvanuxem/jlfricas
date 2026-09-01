# WSReal

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L502)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS real numbers using the MathLink Julia package.

**WSReal is a domain constructor.**  
**Abbreviation for WSReal is WSREAL**  
**159 names for 216 operations in this domain.**

## Signatures

```fricas
 0 : () -> %    1 : () -> %
 ?*? : (%, %) -> %    ?*? : (%, Fraction(Integer)) -> %
 ?*? : (Fraction(Integer), %) -> %    ?*? : (Integer, %) -> %
 ?*? : (NonNegativeInteger, %) -> %    ?*? : (PositiveInteger, %) -> %
 ?*? : (NMInteger, %) -> JLObject    ?+? : (%, %) -> %
 -? : % -> %    ?-? : (%, %) -> %
 ?/? : (%, %) -> %    ?/? : (%, Integer) -> %
 ?<? : (%, %) -> Boolean    ?<=? : (%, %) -> Boolean
 ?=? : (%, %) -> Boolean    ?>? : (%, %) -> Boolean
 ?>=? : (%, %) -> Boolean    Chi : % -> %
 Ci : % -> %    D : % -> %
 D : (%, NonNegativeInteger) -> %    Ei : % -> %
 Shi : % -> %    Si : % -> %
 ?^? : (%, %) -> %    ?^? : (%, Fraction(Integer)) -> %
 ?^? : (%, Integer) -> %    ?^? : (%, NonNegativeInteger) -> %
 ?^? : (%, PositiveInteger) -> %    abs : % -> %
 acos : % -> %    acosh : % -> %
 acot : % -> %    acoth : % -> %
 acsc : % -> %    acsch : % -> %
 annihilate? : (%, %) -> Boolean    antiCommutator : (%, %) -> %
 asec : % -> %    asech : % -> %
 asin : % -> %    asinh : % -> %
 associates? : (%, %) -> Boolean    associator : (%, %, %) -> %
 atan : % -> %    atan : (%, %) -> %
 atanh : % -> %    base : () -> PositiveInteger
 bits : () -> PositiveInteger    ceiling : % -> %
 characteristic : () -> NonNegativeInteger    coerce : % -> %
 coerce : DoubleFloat -> %    coerce : Float -> %
 coerce : Fraction(Integer) -> %    coerce : Integer -> %
 coerce : JLFloat -> %    coerce : JLFloat64 -> %
 coerce : String -> %    coerce : % -> DoubleFloat
 coerce : % -> JLFloat    coerce : % -> JLFloat64
 coerce : % -> JLObject    coerce : % -> OutputForm
 coerce : % -> WSExpression    commutator : (%, %) -> %
 convert : % -> DoubleFloat    convert : % -> Float
 convert : % -> Pattern(Float)    convert : % -> String
 cos : % -> %    cosh : % -> %
 cot : % -> %    coth : % -> %
 csc : % -> %    csch : % -> %
 differentiate : % -> %    differentiate : (%, NonNegativeInteger) -> %
 digits : () -> PositiveInteger    dilog : % -> %
 divide : (%, %) -> Record(quotient: %,remainder: %)    erf : % -> %
 erf : (%, %) -> %    erfc : % -> %
 erfi : % -> %    euclideanSize : % -> NonNegativeInteger
 exp : () -> %    exp : % -> %
 exponent : % -> Integer    ?exquo? : (%, %) -> Union(%,"failed")
 factor : % -> Factored(%)    float : (Integer, Integer) -> %
 float : (Integer, Integer, PositiveInteger) -> %    floor : % -> %
 fractionPart : % -> %    fresnelC : % -> %
 fresnelS : % -> %    gcd : (%, %) -> %
 gcd : List(%) -> %    integerPart : % -> WSInteger
 integral : (%, SegmentBinding(%)) -> %    integral : (%, Symbol) -> %
 inv : % -> %    jWSInterpret : String -> %
 jWSInterpret : (String, String) -> %    jWSInterpret : (String, String, String) -> %
 jWSReal : DoubleFloat -> %    jWSReal : Float -> %
 jWSReal : Integer -> %    jWSReal : JLFloat64 -> %
 jWSReal : String -> %    jlAbout : % -> Void
 jlApply : (String, %) -> JLObject    jlApply : (String, %, %) -> JLObject
 jlApply : (String, %, %, %) -> JLObject    jlApply : (String, %, %, %, %) -> JLObject
 jlApply : (String, %, %, %, %, %) -> JLObject    jlApprox? : (%, %) -> Boolean
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
 leftRecip : % -> Union(%,"failed")    li : % -> %
 log : % -> %    log10 : % -> %
 log2 : % -> %    mantissa : % -> Integer
 max : (%, %) -> %    min : (%, %) -> %
 missing? : % -> Boolean    mutable? : % -> Boolean
 negative? : % -> Boolean    norm : % -> %
 nothing? : % -> Boolean    nthRoot : (%, Integer) -> %
 numeric : % -> WSExpression    numeric : (%, PositiveInteger) -> WSExpression
 numeric? : % -> Boolean    one? : % -> Boolean
 opposite? : (%, %) -> Boolean    order : % -> Integer
 pi : () -> %    plenaryPower : (%, PositiveInteger) -> %
 positive? : % -> Boolean    precision : () -> PositiveInteger
 prime? : % -> Boolean    ?quo? : (%, %) -> %
 rationalApproximation : % -> WSRational    rationalApproximation : (%, %) -> WSRational
 recip : % -> Union(%,"failed")    ?rem? : (%, %) -> %
 retract : % -> Fraction(Integer)    retract : % -> Integer
 retractIfCan : % -> Union(Fraction(Integer),"failed")    retractIfCan : % -> Union(Integer,"failed")
 rightPower : (%, NonNegativeInteger) -> %    rightPower : (%, PositiveInteger) -> %
 rightRecip : % -> Union(%,"failed")    round : % -> %
 sample : () -> %    sec : % -> %
 sech : % -> %    sign : % -> Integer
 sin : % -> %    sinc : % -> %
 sinh : % -> %    sizeLess? : (%, %) -> Boolean
 smaller? : (%, %) -> Boolean    sqrt : % -> %
 squareFree : % -> Factored(%)    squareFreePart : % -> %
 string : % -> String    subtractIfCan : (%, %) -> Union(%,"failed")
 tan : % -> %    tanh : % -> %
 toString : % -> String    toString : (%, NonNegativeInteger) -> String
 truncate : % -> %    unit? : % -> Boolean
 unitCanonical : % -> %    urand01 : () -> %
 wholePart : % -> Integer    zero? : % -> Boolean
 ?~=? : (%, %) -> Boolean
 expressIdealMember : (List(%), %) -> Union(List(%),"failed")
 extendedEuclidean : (%, %) -> Record(coef1: %,coef2: %,generator: %)
 extendedEuclidean : (%, %, %) -> Union(Record(coef1: %,coef2: %),"failed")
 gcdPolynomial : (SparseUnivariatePolynomial(%), SparseUnivariatePolynomial(%)) -> SparseUnivariatePolynomial(%)
 lcmCoef : (%, %) -> Record(llcm_res: %,coeff1: %,coeff2: %)
 max : () -> % if not % has ATARBEX and not % has ATARBPR
 min : () -> % if not % has ATARBEX and not % has ATARBPR
 multiEuclidean : (List(%), %) -> Union(List(%),"failed")
 patternMatch : (%, Pattern(Float), PatternMatchResult(Float,%)) -> PatternMatchResult(Float,%)
 principalIdeal : List(%) -> Record(coef: List(%),generator: %)
 unitNormal : % -> Record(unit: %,canonical: %,associate: %)
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`*`](#op-mul) | Operation defined in WSReal |
| [`+`](#op-add) | Operation defined in WSReal |
| [`/`](#op-div) | Operation defined in WSReal |
| [`0`](#0) | 0 |
| [`1`](#1) | 1 returns the unit element, denoted by 1. |
| [`<`](#op-lt) | Operation defined in WSReal |
| [`<=`](#op-le) | Operation defined in WSReal |
| [`>`](#op-gt) | Operation defined in WSReal |
| [`>=`](#op-ge) | Operation defined in WSReal |
| [`Chi`](#chi) | Chi(x) returns the hyperbolic cosine integral of x, i.e. the integral of cosh(x) / x dx. |
| [`Ci`](#ci) | Ci(x) returns the cosine integral of x, i.e. the integral of cos(x) / x dx. |
| [`D`](#d) | D(x) returns the derivative of x. This function is a simple differential operator where no... |
| [`Ei`](#ei) | Ei(x) returns the exponential integral of x, i.e. the integral of exp(x)/x dx. |
| [`Shi`](#shi) | Shi(x) returns the hyperbolic sine integral of x, i.e. the integral of sinh(x) / x dx. |
| [`Si`](#si) | Si(x) returns the sine integral of x, i.e. the integral of sin(x) / x dx. |
| [`^`](#op-pow) | Operation defined in WSReal |
| [`abs`](#abs) | abs(x) returns the absolute value of x. |
| [`acos`](#acos) | acos(x) returns the arc-cosine of x. When evaluated into some subset of the complex number... |
| [`acosh`](#acosh) | acosh(x) returns the hyperbolic arc-cosine of x. |
| [`acot`](#acot) | acot(x) returns the arc-cotangent of x. |
| [`acoth`](#acoth) | acoth(x) returns the hyperbolic arc-cotangent of x. |
| [`acsc`](#acsc) | acsc(x) returns the arc-cosecant of x. |
| [`acsch`](#acsch) | acsch(x) returns the hyperbolic arc-cosecant of x. |
| [`annihilate?`](#annihilate) | annihilate?(x,y) holds when the product of x and y is 0. |
| [`antiCommutator`](#anticommutator) | antiCommutator(a, b) returns a*b+b*a. |
| [`asec`](#asec) | asec(x) returns the arc-secant of x. |
| [`asech`](#asech) | asech(x) returns the hyperbolic arc-secant of x. |
| [`asin`](#asin) | asin(x) returns the arc-sine of x. When evaluated into some subset of the complex numbers,... |
| [`asinh`](#asinh) | asinh(x) returns the hyperbolic arc-sine of x. |
| [`associates?`](#associates) | associates?(x, y) tests whether x and y are associates, i.e. differ by a unit factor. |
| [`associator`](#associator) | associator(a, b, c) returns (a*b)*c-a*(b*c). |
| [`atan`](#atan) | atan(x,y) computes the arc tangent of y/x. |
| [`atanh`](#atanh) | atanh(x) returns the hyperbolic arc-tangent of x. |
| [`base`](#base) | base() returns the base of the exponent from FloatingPointSystem. |
| [`bits`](#bits) | bits() returns ceiling's precision in bits. |
| [`ceiling`](#ceiling) | ceiling x returns the small integer >= x. |
| [`characteristic`](#characteristic) | characteristic() returns the characteristic of the ring. |
| [`coerce`](#coerce) | coerce(r) coerces r to a DoubleFloat. |
| [`commutator`](#commutator) | commutator(a, b) returns a*b-b*a. |
| [`convert`](#convert) | convert(x) converts a DoubleFloat x to a Float. |
| [`cos`](#cos) | cos(x) returns the cosine of x. |
| [`cosh`](#cosh) | cosh(x) returns the hyperbolic cosine of x. |
| [`cot`](#cot) | cot(x) returns the cotangent of x. |
| [`coth`](#coth) | coth(x) returns the hyperbolic cotangent of x. |
| [`csc`](#csc) | csc(x) returns the cosecant of x. |
| [`csch`](#csch) | csch(x) returns the hyperbolic cosecant of x. |
| [`differentiate`](#differentiate) | differentiate(x) returns the derivative of x. This function is a simple differential opera... |
| [`digits`](#digits) | digits() returns ceiling's precision in decimal digits. |
| [`dilog`](#dilog) | dilog(x) returns the dilogarithm of x, i.e. the integral of log(x) / (1 - x) dx. |
| [`divide`](#divide) | divide(x, y) divides x by y producing a record containing a quotient and remainder, where ... |
| [`erf`](#erf) | erf(x) computes the error function of x. |
| [`erfc`](#erfc) | erfc(x) computes the complementary error function of x. |
| [`erfi`](#erfi) | erfi(x) denotes -%i*erf(%i*x) |
| [`euclideanSize`](#euclideansize) | euclideanSize(x) returns the euclidean size of the element x. Error: if x is zero. |
| [`exp`](#exp) | exp() returns the WSAPReal ℯ (%e or exp(1)). |
| [`exponent`](#exponent) | exponent(x) returns the exponent from FloatingPointSystem part of x. |
| [`expressIdealMember`](#expressidealmember) | expressIdealMember([f1, ..., fn], h) returns a representation of h as a linear combination... |
| [`exquo`](#exquo) | exquo(f, g) creates the equivalent infix form. |
| [`extendedEuclidean`](#extendedeuclidean) | extendedEuclidean(x, y) returns a record rec where rec.coef1*x+rec.coef2*y = rec.generator... |
| [`factor`](#factor) | factor(x) returns the factorization of x into irreducibles. |
| [`float`](#float) | float(a, e) returns a * base() ^ e. |
| [`floor`](#floor) | floor x returns the largest integer <= x. |
| [`fractionPart`](#fractionpart) | fractionPart x returns the fractional part of x. |
| [`fresnelC`](#fresnelc) | fresnelC(x) is the Fresnel integral C, defined by C(x) = integrate(cos(%pi*t^2/2), t=0..x) |
| [`fresnelS`](#fresnels) | fresnelS(x) is the Fresnel integral S, defined by S(x) = integrate(sin(%pi*t^2/2), t=0..x) |
| [`gcd`](#gcd) | gcd(x, y) returns the greatest common divisor of x and y. |
| [`gcdPolynomial`](#gcdpolynomial) | gcdPolynomial(p, q) returns the greatest common divisor (gcd) of univariate polynomials ov... |
| [`integerPart`](#integerpart) | integerPart(x) returns the integer part of x. |
| [`integral`](#integral) | integral(f, x = a..b) returns the formal definite integral of f dx for x between a and b. |
| [`inv`](#inv) | inv x returns the multiplicative inverse of x. Error: if x is 0. |
| [`jWSInterpret`](#jwsinterpret) | jWSInterpret(form) interprets form. |
| [`jWSReal`](#jwsreal) | jWSReal(z) coerces z to a WSReal. |
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
| [`log`](#log) | log(x) returns the natural logarithm of x. When evaluated into some subset of the complex ... |
| [`log10`](#log10) | log10(x) computes the logarithm of x in base 10. |
| [`log2`](#log2) | log2(x) computes the logarithm of x in base 2. |
| [`mantissa`](#mantissa) | mantissa(x) returns the mantissa part of x. |
| [`max`](#max) | max() returns the maximum floating point number. |
| [`min`](#min) | min() returns the minimum floating point number. |
| [`missing?`](#missing) | missing?(obj) checks whether or not obj is missing. |
| [`multiEuclidean`](#multieuclidean) | multiEuclidean([f1, ..., fn], z) returns a list of coefficients [a1, ..., an] such that z ... |
| [`mutable?`](#mutable) | mutable?(obj) checks whether or not obj is mutable. |
| [`negative?`](#negative) | negative?(x) tests whether x is strictly less than 0. |
| [`norm`](#norm) | norm x returns the same as absolute value. |
| [`nothing?`](#nothing) | nothing?(obj) checks whether or not obj is nothing. |
| [`nthRoot`](#nthroot) | nthRoot(x, n) returns the nth root of x. |
| [`numeric`](#numeric) | numeric(expr) returns numerical expr if possible. |
| [`numeric?`](#numeric) | numeric?(x) checks whether or not x is or would yield a number. |
| [`one?`](#one) | one?(a) tests whether a is the unit 1. |
| [`opposite?`](#opposite) | opposite?(x,y) holds if the sum of x and y is 0. |
| [`order`](#order) | order x is the order of magnitude of x. Note: base ^ order x <= \|x\| < base ^ (1 + order x)... |
| [`patternMatch`](#patternmatch) | patternMatch(expr, pat, res) matches the pattern pat to the expression expr. res contains ... |
| [`pi`](#pi) | pi() returns the constant pi. |
| [`plenaryPower`](#plenarypower) | plenaryPower(a, n) is recursively defined to be plenaryPower(a, n-1)*plenaryPower(a, n-1) ... |
| [`positive?`](#positive) | positive?(x) tests whether x is strictly greater than 0. |
| [`precision`](#precision) | precision() returns the precision in digits base. |
| [`prime?`](#prime) | prime?(x) tests if x can never be written as the product of two non-units of the ring, i.e... |
| [`principalIdeal`](#principalideal) | principalIdeal([f1, ..., fn]) returns a record whose generator component is a generator of... |
| [`quo`](#quo) | x quo y is the same as divide(x, y).quotient. See divide from EuclideanDomain. |
| [`rationalApproximation`](#rationalapproximation) | rationalApproximation(x) tries to find a rational approximation of x. Error if x can not b... |
| [`recip`](#recip) | recip(a) returns an element, which is both a left and a right inverse of a, or "failed" if... |
| [`rem`](#rem) | x rem y is the same as divide(x, y).remainder. See divide from EuclideanDomain. |
| [`retract`](#retract) | retract(a) transforms a into an element of S if possible. Error: if a cannot be made into ... |
| [`retractIfCan`](#retractifcan) | retractIfCan(a) transforms a into an element of S if possible. Returns "failed" if a canno... |
| [`rightPower`](#rightpower) | rightPower(a, n) returns the n-th right power of a, i.e. rightPower(a, n) := rightPower(a,... |
| [`rightRecip`](#rightrecip) | rightRecip(a) returns an element, which is a right inverse of a, or "failed" if such an el... |
| [`round`](#round) | round x computes the integer closest to x. |
| [`sample`](#sample) | sample yields a value of type % |
| [`sec`](#sec) | sec(x) returns the secant of x. |
| [`sech`](#sech) | sech(x) returns the hyperbolic secant of x. |
| [`sign`](#sign) | sign(x) is 1 if x is positive, -1 if x is negative, 0 if x equals 0. |
| [`sin`](#sin) | sin(x) returns the sine of x. |
| [`sinc`](#sinc) | sinc(x) computes the unnormalized sinc of x, sin(x)/x. |
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
| [`toString`](#tostring) | toString(x) returns the string representation of x. |
| [`truncate`](#truncate) | truncate x returns the integer between x and 0 closest to x. |
| [`unit?`](#unit) | unit?(x) tests whether x is a unit, i.e. is invertible. |
| [`unitCanonical`](#unitcanonical) | unitCanonical(x) returns unitNormal(x).canonical. |
| [`unitNormal`](#unitnormal) | unitNormal(x) tries to choose a canonical element from the associate class of x. The attri... |
| [`urand01`](#urand01) | urand01() returns a uniformly distributed random number in the range 0..1. |
| [`wholePart`](#wholepart) | wholePart x returns the integer part of x. |
| [`zero?`](#zero) | zero?(x) tests if x is equal to 0. |
| [`~=`](#op-neq) | Operation defined in WSReal |

### Detailed Documentation

#### `*` <a id="op-mul"></a>

##### `*` : `(%, %) -> %`

Operation defined in WSReal.

##### `*` : `(%, Fraction(Integer)) -> %`

Operation defined in WSReal.

##### `*` : `(Fraction(Integer), %) -> %`

Operation defined in WSReal.

##### `*` : `(Integer, %) -> %`

Operation defined in WSReal.

##### `*` : `(NonNegativeInteger, %) -> %`

Operation defined in WSReal.

##### `*` : `(PositiveInteger, %) -> %`

Operation defined in WSReal.

##### `*` : `(NMInteger, %) -> JLObject`

Operation defined in WSReal.

#### `+` <a id="op-add"></a>

Operation defined in WSReal.

- **Signature**: `(%, %) -> %`

#### `/` <a id="op-div"></a>

##### `/` : `(%, %) -> %`

Operation defined in WSReal.

##### `/` : `(%, Integer) -> %`

Operation defined in WSReal.

#### `0` <a id="0"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L599)\]

0

- **Signature**: `() -> %`
- **From**: `Pattern(R)`

#### `1` <a id="1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L600)\]

1 returns the unit element, denoted by 1.

- **Signature**: `() -> %`
- **From**: `MagmaWithUnit`

#### `<` <a id="op-lt"></a>

Operation defined in WSReal.

- **Signature**: `(%, %) -> Boolean`

#### `<=` <a id="op-le"></a>

Operation defined in WSReal.

- **Signature**: `(%, %) -> Boolean`

#### `>` <a id="op-gt"></a>

Operation defined in WSReal.

- **Signature**: `(%, %) -> Boolean`

#### `>=` <a id="op-ge"></a>

Operation defined in WSReal.

- **Signature**: `(%, %) -> Boolean`

#### `Chi` <a id="chi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L742)\]

Chi(x) returns the hyperbolic cosine integral of x, i.e. the integral of cosh(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `Ci` <a id="ci"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L741)\]

Ci(x) returns the cosine integral of x, i.e. the integral of cos(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `D` <a id="d"></a>

##### `D` : `% -> %`

D(x) returns the derivative of x. This function is a simple differential operator where no variable needs to be specifie d.

- **From**: `DifferentialRing`

##### `D` : `(%, NonNegativeInteger) -> %`

D(x, n) returns the n-th derivative of x.

- **From**: `DifferentialRing`

#### `Ei` <a id="ei"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L743)\]

Ei(x) returns the exponential integral of x, i.e. the integral of exp(x)/x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `Shi` <a id="shi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L740)\]

Shi(x) returns the hyperbolic sine integral of x, i.e. the integral of sinh(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `Si` <a id="si"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L739)\]

Si(x) returns the sine integral of x, i.e. the integral of sin(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `^` <a id="op-pow"></a>

##### `^` : `(%, %) -> %`

Operation defined in WSReal.

##### `^` : `(%, Fraction(Integer)) -> %`

Operation defined in WSReal.

##### `^` : `(%, Integer) -> %`

Operation defined in WSReal.

##### `^` : `(%, NonNegativeInteger) -> %`

Operation defined in WSReal.

##### `^` : `(%, PositiveInteger) -> %`

Operation defined in WSReal.

#### `abs` <a id="abs"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L639)\]

abs(x) returns the absolute value of x.

- **Signature**: `% -> %`
- **From**: `OrderedAbelianSemiGroup`

#### `acos` <a id="acos"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L694)\]

acos(x) returns the arc-cosine of x. When evaluated into some subset of the complex numbers, one branch cut for acos lie s along the negative real axis to the left of -1 (inclusive), continuous with the upper half plane, the other along the positive real axis to the right of 1 (inclusive), continuous with the lower half plane.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `acosh` <a id="acosh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L716)\]

acosh(x) returns the hyperbolic arc-cosine of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `acot` <a id="acot"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L706)\]

acot(x) returns the arc-cotangent of x.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `acoth` <a id="acoth"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L729)\]

acoth(x) returns the hyperbolic arc-cotangent of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `acsc` <a id="acsc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L702)\]

acsc(x) returns the arc-cosecant of x.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `acsch` <a id="acsch"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L726)\]

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

#### `asec` <a id="asec"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L699)\]

asec(x) returns the arc-secant of x.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `asech` <a id="asech"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L722)\]

asech(x) returns the hyperbolic arc-secant of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `asin` <a id="asin"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L691)\]

asin(x) returns the arc-sine of x. When evaluated into some subset of the complex numbers, one branch cut for asin lies along the negative real axis to the left of -1 (inclusive), continuous with the upper half plane, the other along the po sitive real axis to the right of 1 (inclusive), continuous with the lower half plane.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `asinh` <a id="asinh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L715)\]

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

#### `atan` <a id="atan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L533)\]

##### `atan` : `(%, %) -> %`

atan(x,y) computes the arc tangent of y/x.

##### `atan` : `% -> %`

atan(x) returns the arc-tangent of x. When evaluated into some subset of the complex numbers, one branch cut for atan li es along the positive imaginary axis above %i (exclusive), continuous with the left half plane, the other along the nega tive imaginary axis below -%i (exclusive) continuous with the right half plane. The domain does not contain %i and -%i.

- **From**: `ArcTrigonometricFunctionCategory`

#### `atanh` <a id="atanh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L719)\]

atanh(x) returns the hyperbolic arc-tangent of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `base` <a id="base"></a>

base() returns the base of the exponent from FloatingPointSystem.

- **Signature**: `() -> PositiveInteger`
- **From**: `FloatingPointSystem`

#### `bits` <a id="bits"></a>

##### `bits` : `() -> PositiveInteger`

bits() returns ceiling's precision in bits.

- **From**: `FloatingPointSystem`

##### `bits` : `PositiveInteger -> PositiveInteger`

bits(n) set the precision from FloatingPointSystem to n bits.

- **From**: `FloatingPointSystem`

#### `ceiling` <a id="ceiling"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L637)\]

ceiling x returns the small integer >= x.

- **Signature**: `% -> %`
- **From**: `RealNumberSystem`

#### `characteristic` <a id="characteristic"></a>

characteristic() returns the characteristic of the ring.

- **Signature**: `() -> NonNegativeInteger`
- **From**: `NonAssociativeRing`

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L545)\]

##### `coerce` : `% -> DoubleFloat`

coerce(r) coerces r to a DoubleFloat.

##### `coerce` : `% -> JLFloat64`

coerce(r) coerces r to a JLFloat64.

##### `coerce` : `% -> JLFloat`

coerce(x) converts x to a JLFloat.

##### `coerce` : `String -> %`

coerce(str) constructs str as a WSReal.

##### `coerce` : `JLFloat64  -> %`

coerce(x) converts x to a WSReal.

##### `coerce` : `DoubleFloat  -> %`

coerce(x) converts x to a WSReal.

##### `coerce` : `Float  -> %`

coerce(x) converts x to a WSReal.

##### `coerce` : `JLFloat  -> %`

coerce(x) converts x to a WSReal.

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

#### `commutator` <a id="commutator"></a>

commutator(a, b) returns a*b-b*a.

- **Signature**: `(%, %) -> %`
- **From**: `NonAssociativeRng`

#### `convert` <a id="convert"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L662)\]

##### `convert` : `DoubleFloat -> %`

convert(x) converts a DoubleFloat x to a Float.

- **From**: `Float`

##### `convert` : `List(%) -> %`

convert([a1, ..., an]) returns the pattern [a1, ..., an].

- **From**: `Pattern(R)`

##### `convert` : `% -> S`

convert(a) transforms a into an element of S.

- **From**: `ConvertibleTo(S)`

#### `cos` <a id="cos"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L684)\]

cos(x) returns the cosine of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `cosh` <a id="cosh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L709)\]

cosh(x) returns the hyperbolic cosine of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `cot` <a id="cot"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L688)\]

cot(x) returns the cotangent of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `coth` <a id="coth"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L713)\]

coth(x) returns the hyperbolic cotangent of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `csc` <a id="csc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L687)\]

csc(x) returns the cosecant of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `csch` <a id="csch"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L712)\]

csch(x) returns the hyperbolic cosecant of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `differentiate` <a id="differentiate"></a>

##### `differentiate` : `% -> %`

differentiate(x) returns the derivative of x. This function is a simple differential operator where no variable needs to be specified.

- **From**: `DifferentialRing`

##### `differentiate` : `(%, NonNegativeInteger) -> %`

differentiate(x, n) returns the n-th derivative of x.

- **From**: `DifferentialRing`

#### `digits` <a id="digits"></a>

##### `digits` : `() -> PositiveInteger`

digits() returns ceiling's precision in decimal digits.

- **From**: `FloatingPointSystem`

##### `digits` : `PositiveInteger -> PositiveInteger`

digits(d) set the precision from FloatingPointSystem to d digits.

- **From**: `FloatingPointSystem`

#### `dilog` <a id="dilog"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L747)\]

dilog(x) returns the dilogarithm of x, i.e. the integral of log(x) / (1 - x) dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `divide` <a id="divide"></a>

divide(x, y) divides x by y producing a record containing a quotient and remainder, where the remainder is smaller (see sizeLess? from EuclideanDomain) than the divisor y.

- **Signature**: `(%, %) -> Record(quotient: %,remainder: %)`
- **From**: `EuclideanDomain`

#### `erf` <a id="erf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L535)\]

##### `erf` : `(%, %) -> %`

erf(x) computes the error function of x.

##### `erf` : `% -> %`

erf(x) returns the error function of x, i.e. 2 / sqrt(%pi) times the integral of exp(-x^2) dx.

- **From**: `LiouvillianFunctionCategory`

#### `erfc` <a id="erfc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L537)\]

erfc(x) computes the complementary error function of x.

- **Signature**: `% -> %`

#### `erfi` <a id="erfi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L737)\]

erfi(x) denotes -%i*erf(%i*x)

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `euclideanSize` <a id="euclideansize"></a>

euclideanSize(x) returns the euclidean size of the element x. Error: if x is zero.

- **Signature**: `% -> NonNegativeInteger`
- **From**: `EuclideanDomain`

#### `exp` <a id="exp"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L525)\]

##### `exp` : `() -> %`

exp() returns the WSAPReal ℯ (%e or exp(1)).

##### `exp` : `% -> %`

exp(x) returns %e to the power x.

- **From**: `ElementaryFunctionCategory`

#### `exponent` <a id="exponent"></a>

exponent(x) returns the exponent from FloatingPointSystem part of x.

- **Signature**: `% -> Integer`
- **From**: `FloatingPointSystem`

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

#### `float` <a id="float"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L650)\]

##### `float` : `(Integer, Integer) -> %`

float(a, e) returns a * base() ^ e.

- **From**: `FloatingPointSystem`

##### `float` : `(Integer, Integer, PositiveInteger) -> %`

float(a, e, b) returns a * b ^ e.

- **From**: `FloatingPointSystem`

#### `floor` <a id="floor"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L638)\]

floor x returns the largest integer <= x.

- **Signature**: `% -> %`
- **From**: `RealNumberSystem`

#### `fractionPart` <a id="fractionpart"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L653)\]

fractionPart x returns the fractional part of x.

- **Signature**: `% -> %`
- **From**: `RealNumberSystem`

#### `fresnelC` <a id="fresnelc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L744)\]

fresnelC(x) is the Fresnel integral C, defined by C(x) = integrate(cos(%pi*t^2/2), t=0..x)

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `fresnelS` <a id="fresnels"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L745)\]

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

#### `integerPart` <a id="integerpart"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L520)\]

integerPart(x) returns the integer part of x.

- **Signature**: `% -> WSInteger`

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

#### `jWSReal` <a id="jwsreal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L561)\]

##### `jWSReal` : `DoubleFloat -> %`

jWSReal(z) coerces z to a WSReal.

##### `jWSReal` : `Float -> %`

jWSReal(z) coerces z to a WSReal.

##### `jWSReal` : `JLFloat64 -> %`

jWSReal(z) coerces z to a WSReal.

##### `jWSReal` : `Integer -> %`

jWSReal(z) coerces the integer z to a WSReal.

##### `jWSReal` : `String -> %`

jWSReal(str) constructs str as a WSReal.

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

#### `jlApprox?` <a id="jlapprox"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L522)\]

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

#### `jlref` <a id="jlref"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L579)\]

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

#### `li` <a id="li"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L746)\]

li(x) returns the logarithmic integral of x, i.e. the integral of dx / log(x).

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `log` <a id="log"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L670)\]

log(x) returns the natural logarithm of x. When evaluated into some subset of the complex numbers, the branch cut lies a long the negative real axis, continuous with quadrant II. The domain does not contain the origin.

- **Signature**: `% -> %`
- **From**: `ElementaryFunctionCategory`

#### `log10` <a id="log10"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L531)\]

##### `log10` : `% -> %`

log10(x) computes the logarithm of x in base 10.

##### `log10` : `() -> %`

log10() returns ln 10: 2.3025809299....

- **From**: `Float`

#### `log2` <a id="log2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L529)\]

##### `log2` : `% -> %`

log2(x) computes the logarithm of x in base 2.

##### `log2` : `() -> %`

log2() returns ln 2, i.e. 0.6931471805....

- **From**: `Float`

#### `mantissa` <a id="mantissa"></a>

mantissa(x) returns the mantissa part of x.

- **Signature**: `% -> Integer`
- **From**: `FloatingPointSystem`

#### `max` <a id="max"></a>

##### `max` : `() -> %`

max() returns the maximum floating point number.

- **From**: `FloatingPointSystem`

##### `max` : `(%, %) -> %`

max(x,y) returns the maximum of x and y relative to "<".

- **From**: `OrderedSet`

#### `min` <a id="min"></a>

##### `min` : `() -> %`

min() returns the minimum floating point number.

- **From**: `FloatingPointSystem`

##### `min` : `(%, %) -> %`

min(x,y) returns the minimum of x and y relative to "<".

- **From**: `OrderedSet`

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

#### `negative?` <a id="negative"></a>

negative?(x) tests whether x is strictly less than 0.

- **Signature**: `% -> Boolean`
- **From**: `OrderedSet`

#### `norm` <a id="norm"></a>

norm x returns the same as absolute value.

- **Signature**: `% -> %`
- **From**: `RealNumberSystem`

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

#### `order` <a id="order"></a>

order x is the order of magnitude of x. Note: base ^ order x <= |x| < base ^ (1 + order x).

- **Signature**: `% -> Integer`
- **From**: `FloatingPointSystem`

#### `patternMatch` <a id="patternmatch"></a>

patternMatch(expr, pat, res) matches the pattern pat to the expression expr. res contains the variables of pat which are already matched and their matches (necessary for recursion). Initially, res is just the result of new which is an empty list of matches.

- **Signature**: `(%, Pattern(Float), PatternMatchResult(Float,%)) -> PatternMatchResult(Float,%)`
- **From**: `PatternMatchable(S)`

#### `pi` <a id="pi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L601)\]

pi() returns the constant pi.

- **Signature**: `() -> %`
- **From**: `TranscendentalFunctionCategory`

#### `plenaryPower` <a id="plenarypower"></a>

plenaryPower(a, n) is recursively defined to be plenaryPower(a, n-1)*plenaryPower(a, n-1) for n>1 and a for n=1.

- **Signature**: `(%, PositiveInteger) -> %`
- **From**: `NonAssociativeAlgebra(R)`

#### `positive?` <a id="positive"></a>

positive?(x) tests whether x is strictly greater than 0.

- **Signature**: `% -> Boolean`
- **From**: `OrderedSet`

#### `precision` <a id="precision"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L608)\]

##### `precision` : `() -> PositiveInteger`

precision() returns the precision in digits base.

- **From**: `FloatingPointSystem`

##### `precision` : `PositiveInteger -> PositiveInteger`

precision(n) set the precision in the base to n decimal digits.

- **From**: `FloatingPointSystem`

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

#### `rationalApproximation` <a id="rationalapproximation"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L539)\]

##### `rationalApproximation` : `% -> WSRational`

rationalApproximation(x) tries to find a rational approximation of x. Error if x can not be retracted.

##### `rationalApproximation` : `(%, %) -> WSRational`

rationalApproximation(x, dx) returns a rational approximation of x within tolerance dx. If dx = 0, converts it anyway.

##### `rationalApproximation` : `(%, NonNegativeInteger) -> Fraction(Integer)`

rationalApproximation(f, n) computes a rational approximation r to f with relative error < 10^(-n).

- **From**: `DoubleFloat`

##### `rationalApproximation` : `(%, NonNegativeInteger, NonNegativeInteger) -> Fraction(Integer)`

rationalApproximation(f, n, b) computes a rational approximation r to f with relative error < b^(-n) (that is, |(r-f)/f| < b^(-n)).

- **From**: `DoubleFloat`

#### `recip` <a id="recip"></a>

recip(a) returns an element, which is both a left and a right inverse of a, or "failed" if such an element doesn't exist or cannot be determined (see unitsKnown).

- **Signature**: `% -> Union(%,"failed")`
- **From**: `MagmaWithUnit`

#### `rem` <a id="rem"></a>

x rem y is the same as divide(x, y).remainder. See divide from EuclideanDomain.

- **Signature**: `(%, %) -> %`
- **From**: `EuclideanDomain`

#### `retract` <a id="retract"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L658)\]

retract(a) transforms a into an element of S if possible. Error: if a cannot be made into an element of S.

- **Signature**: `% -> S`
- **From**: `RetractableTo(S)`

#### `retractIfCan` <a id="retractifcan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L655)\]

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

#### `round` <a id="round"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L636)\]

round x computes the integer closest to x.

- **Signature**: `% -> %`
- **From**: `RealNumberSystem`

#### `sample` <a id="sample"></a>

sample yields a value of type %

- **Signature**: `() -> %`
- **From**: `MagmaWithUnit`

#### `sec` <a id="sec"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L686)\]

sec(x) returns the secant of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `sech` <a id="sech"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L711)\]

sech(x) returns the hyperbolic secant of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `sign` <a id="sign"></a>

sign(x) is 1 if x is positive, -1 if x is negative, 0 if x equals 0.

- **Signature**: `% -> Integer`
- **From**: `OrderedSet`

#### `sin` <a id="sin"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L683)\]

sin(x) returns the sine of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `sinc` <a id="sinc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L527)\]

sinc(x) computes the unnormalized sinc of x, sin(x)/x.

- **Signature**: `% -> %`

#### `sinh` <a id="sinh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L708)\]

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

#### `sqrt` <a id="sqrt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L667)\]

sqrt(x) returns the square root of x. The branch cut lies along the negative real axis, continuous with quadrant II.

- **Signature**: `% -> %`
- **From**: `RadicalCategory`

#### `squareFree` <a id="squarefree"></a>

squareFree(x) returns the square-free factorization of x i.e. such that the factors are pairwise relatively prime and ea ch has multiple prime factors.

- **Signature**: `% -> Factored(%)`
- **From**: `UniqueFactorizationDomain`

#### `squareFreePart` <a id="squarefreepart"></a>

squareFreePart(x) returns a product of prime factors of x each taken with multiplicity one.

- **Signature**: `% -> %`
- **From**: `UniqueFactorizationDomain`

#### `string` <a id="string"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1043)\]

string(jt) returns the string representation of jt.

- **Signature**: `% -> String`
- **From**: [`JLType`](JLType.md)

#### `subtractIfCan` <a id="subtractifcan"></a>

subtractIfCan(x, y) returns an element z such that z+y=x or "failed" if no such element exists.

- **Signature**: `(%, %) -> Union(%,"failed")`
- **From**: `CancellationAbelianMonoid`

#### `tan` <a id="tan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L685)\]

tan(x) returns the tangent of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `tanh` <a id="tanh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L710)\]

tanh(x) returns the hyperbolic tangent of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `toString` <a id="tostring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L751)\]

##### `toString` : `% -> String`

toString(x) returns the string representation of x.

- **From**: `FloatingPointSystem`

##### `toString` : `(%, NonNegativeInteger) -> String`

toString(x, n) returns a string representation of x truncated to n decimal digits.

- **From**: `FloatingPointSystem`

#### `truncate` <a id="truncate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L654)\]

truncate x returns the integer between x and 0 closest to x.

- **Signature**: `% -> %`
- **From**: `RealNumberSystem`

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

#### `urand01` <a id="urand01"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L518)\]

urand01() returns a uniformly distributed random number in the range 0..1.

- **Signature**: `() -> %`

#### `wholePart` <a id="wholepart"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L652)\]

wholePart x returns the integer part of x.

- **Signature**: `% -> Integer`
- **From**: `RealNumberSystem`

#### `zero?` <a id="zero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L671)\]

zero?(x) tests if x is equal to 0.

- **Signature**: `% -> Boolean`
- **From**: `SetWithZero`

#### `~=` <a id="op-neq"></a>

Operation defined in WSReal.

- **Signature**: `(%, %) -> Boolean`
---
[Back to Index](../index.md)
