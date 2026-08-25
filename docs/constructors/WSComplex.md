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
 jlHead : % -> WSSymbol    jlId : % -> JLInt64
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
| [`*`](#op) | n * x multiplies n by x. |
| [`atan`](#atan) | atan(z1,z2) computes the arc tangent of z2/z1. |
| [`coerce`](#coerce) | coerce(z) coerces z to a FriCAS Complex(DoubleFloat). |
| [`complex`](#complex) | complex(re,im) constructs a WSComplex from real part re and imaginary part im. |
| [`erf`](#erf) | erf(x) is the error function. |
| [`erfc`](#erfc) | erfc(x) is the complementary error function. |
| [`exp`](#exp) | exp() returns the WSComplex ℯ (%e or exp(1)). |
| [`jWSComplex`](#jwscomplex) | jWSComplex(re) constructs a WSComplex with real part re. |
| [`jlApprox?`](#jlapprox) | jlApprox?(x,y) computes inexact equality comparison with WS default parameters (Equal). |
| [`log10`](#log10) | log10(z) computes the logarithm of z in base 10. |
| [`log2`](#log2) | log2(z) computes the logarithm of z in base 2. |
| [`sinc`](#sinc) | sinc(z) computes the unnormalized sinc of z, sin(z)/z and 0 if z = 0. |
| [`toString`](#tostring) | toString(expr, form) returns the string representation of expr with WS language format for... |
| [`urand01`](#urand01) | urand01() returns a unit square random complex number. |

### Detailed Documentation

#### `*` <a id="op"></a>

n * x multiplies n by x.

- **Signature**: `(WSInteger, %) -> %`

#### `atan` <a id="atan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1227)\]

atan(z1,z2) computes the arc tangent of z2/z1.

- **Signature**: `(%, %) -> %`

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

#### `complex` <a id="complex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1246)\]

complex(re,im) constructs a WSComplex from real part re and imaginary part im.

- **Signature**: `(WSReal, WSReal) -> %`

#### `erf` <a id="erf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1229)\]

erf(x) is the error function.

- **Signature**: `(%, %) -> %`

#### `erfc` <a id="erfc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1231)\]

erfc(x) is the complementary error function.

- **Signature**: `% -> %`

#### `exp` <a id="exp"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1219)\]

exp() returns the WSComplex ℯ (%e or exp(1)).

- **Signature**: `() -> %`

#### `jWSComplex` <a id="jwscomplex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1249)\]

##### `jWSComplex` : `WSReal -> %`

jWSComplex(re) constructs a WSComplex with real part re.

##### `jWSComplex` : `(WSReal, WSReal) -> %`

jWSComplex(re, im) constructs a WSComplex from real part re and imaginary part im.

#### `jlApprox?` <a id="jlapprox"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1216)\]

jlApprox?(x,y) computes inexact equality comparison with WS default parameters (Equal).

- **Signature**: `(%, %) -> Boolean`

#### `log10` <a id="log10"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1225)\]

log10(z) computes the logarithm of z in base 10.

- **Signature**: `% -> %`

#### `log2` <a id="log2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1223)\]

log2(z) computes the logarithm of z in base 2.

- **Signature**: `% -> %`

#### `sinc` <a id="sinc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1221)\]

sinc(z) computes the unnormalized sinc of z, sin(z)/z and 0 if z = 0.

- **Signature**: `% -> %`

#### `toString` <a id="tostring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1233)\]

toString(expr, form) returns the string representation of expr with WS language format form.

- **Signature**: `(%, WSExpression) -> String`

#### `urand01` <a id="urand01"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1212)\]

urand01() returns a unit square random complex number.

- **Signature**: `() -> %`
---
[Back to Index](../index.md)
