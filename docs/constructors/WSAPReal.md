# WSAPReal

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L801)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS arbitrary precision real numbers using WS Transport Protocol.

**WSAPReal(prec: PositiveInteger) is a domain constructor.**  
**Abbreviation for WSAPReal is WSAPR**

## Signatures

```fricas
 ?*? : (Fraction(Integer), %) -> % if % has CHARZ    ?*? : (%, Fraction(Integer)) -> % if % has CHARZ
 ?*? : (PositiveInteger, %) -> %    ?*? : (%, %) -> %
 ?*? : (Integer, %) -> %    ?*? : (NonNegativeInteger, %) -> %
 ?*? : (NMInteger, %) -> JLObject    ?+? : (%, %) -> %
 ?-? : (%, %) -> %    -? : % -> %
 ?/? : (%, %) -> %    ?/? : (%, Integer) -> %
 0 : () -> %    1 : () -> %
 ?<? : (%, %) -> Boolean    ?<=? : (%, %) -> Boolean
 ?=? : (%, %) -> Boolean    ?>? : (%, %) -> Boolean
 ?>=? : (%, %) -> Boolean    Chi : % -> %
 Ci : % -> %    D : % -> %
 D : (%, NonNegativeInteger) -> %    Ei : % -> %
 Shi : % -> %    Si : % -> %
 ?^? : (%, %) -> %    ?^? : (%, Integer) -> %
 ?^? : (%, Fraction(Integer)) -> %    ?^? : (%, PositiveInteger) -> %
 ?^? : (%, NonNegativeInteger) -> %    abs : % -> % if % has ABELGRP
 acos : % -> %    acosh : % -> %
 acot : % -> %    acoth : % -> %
 acsc : % -> %    acsch : % -> %
 annihilate? : (%, %) -> Boolean    antiCommutator : (%, %) -> %
 asec : % -> %    asech : % -> %
 asin : % -> %    asinh : % -> %
 associates? : (%, %) -> Boolean    associator : (%, %, %) -> %
 atan : (%, %) -> %    atan : % -> %
 atanh : % -> %    base : () -> PositiveInteger
 bits : () -> PositiveInteger    ceiling : % -> %
 characteristic : () -> NonNegativeInteger    coerce : JLFloat -> %
 coerce : Float -> %    coerce : String -> %
 coerce : % -> JLFloat    coerce : % -> %
 coerce : Fraction(Integer) -> %    coerce : Integer -> %
 coerce : % -> WSExpression    coerce : % -> JLObject
 coerce : % -> OutputForm    commutator : (%, %) -> %
 convert : % -> Float    convert : % -> DoubleFloat
 convert : % -> Pattern(Float)    convert : % -> String
 cos : % -> %    cosh : % -> %
 cot : % -> %    coth : % -> %
 csc : % -> %    csch : % -> %
 differentiate : % -> %    differentiate : (%, NonNegativeInteger) -> %
 digits : () -> PositiveInteger    dilog : % -> %
 divide : (%, %) -> Record(quotient: %,remainder: %)    erf : (%, %) -> %
 erf : % -> %    erfc : % -> %
 erfi : % -> %    euclideanSize : % -> NonNegativeInteger
 exp : () -> %    exp : % -> %
 exponent : % -> Integer    ?exquo? : (%, %) -> Union(%,"failed")
 factor : % -> Factored(%)    float : (Integer, Integer) -> %
 float : (Integer, Integer, PositiveInteger) -> %    floor : % -> %
 fractionPart : % -> %    fresnelC : % -> %
 fresnelS : % -> %    gcd : (%, %) -> %
 gcd : List(%) -> %    integerPart : % -> WSInteger
 integral : (%, SegmentBinding(%)) -> %    integral : (%, Symbol) -> %
 inv : % -> %    jWSInterpret : (String, String, String) -> %
 jWSInterpret : (String, String) -> %    jWSInterpret : String -> %
 jWSReal : String -> %    jWSReal : JLFloat -> %
 jWSReal : Float -> %    jWSReal : JLFloat64 -> %
 jWSReal : DoubleFloat -> %    jWSReal : Integer -> %
 jlAbout : % -> Void    jlApply : (String, %, %, %, %, %) -> JLObject
 jlApply : (String, %, %, %, %) -> JLObject    jlApply : (String, %, %, %) -> JLObject
 jlApply : (String, %, %) -> JLObject    jlApply : (String, %) -> JLObject
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
 lcm : List(%) -> %    leftPower : (%, PositiveInteger) -> %
 leftPower : (%, NonNegativeInteger) -> %    leftRecip : % -> Union(%,"failed")
 li : % -> %    log : % -> %
 log10 : % -> %    log2 : % -> %
 mantissa : % -> Integer    max : (%, %) -> %
 min : (%, %) -> %    missing? : % -> Boolean
 mutable? : % -> Boolean    negative? : % -> Boolean if % has SETCATZ
 norm : % -> %    nothing? : % -> Boolean
 nthRoot : (%, Integer) -> %    numeric : (%, PositiveInteger) -> WSExpression
 numeric : % -> WSExpression    numeric? : % -> Boolean
 one? : % -> Boolean    opposite? : (%, %) -> Boolean
 order : % -> Integer    pi : () -> %
 plenaryPower : (%, PositiveInteger) -> %    positive? : % -> Boolean if % has SETCATZ
 precision : () -> PositiveInteger    prime? : % -> Boolean
 ?quo? : (%, %) -> %    rationalApproximation : (%, %) -> WSRational
 rationalApproximation : % -> WSRational    recip : % -> Union(%,"failed")
 ?rem? : (%, %) -> %    retract : % -> Integer
 retract : % -> Fraction(Integer)    retractIfCan : % -> Union(Integer,"failed")
 retractIfCan : % -> Union(Fraction(Integer),"failed")    rightPower : (%, PositiveInteger) -> %
 rightPower : (%, NonNegativeInteger) -> %    rightRecip : % -> Union(%,"failed")
 round : % -> %    sample : () -> %
 sec : % -> %    sech : % -> %
 sign : % -> Integer if % has SETCATZ    sin : % -> %
 sinc : % -> %    sinh : % -> %
 sizeLess? : (%, %) -> Boolean    smaller? : (%, %) -> Boolean
 sqrt : % -> %    squareFree : % -> Factored(%)
 squareFreePart : % -> %    string : % -> String
 subtractIfCan : (%, %) -> Union(%,"failed")    tan : % -> %
 tanh : % -> %    toString : (%, NonNegativeInteger) -> String
 toString : % -> String    truncate : % -> %
 unit? : % -> Boolean    unitCanonical : % -> %
 urand01 : () -> %    wholePart : % -> Integer
 zero? : % -> Boolean    ?~=? : (%, %) -> Boolean
 bits : PositiveInteger -> PositiveInteger if % has ATARBPR
 decreasePrecision : Integer -> PositiveInteger if % has ATARBPR
 digits : PositiveInteger -> PositiveInteger if % has ATARBPR
 expressIdealMember : (List(%), %) -> Union(List(%),"failed")
 extendedEuclidean : (%, %) -> Record(coef1: %,coef2: %,generator: %)
 extendedEuclidean : (%, %, %) -> Union(Record(coef1: %,coef2: %),"failed")
 gcdPolynomial : (SparseUnivariatePolynomial(%), SparseUnivariatePolynomial(%)) -> SparseUnivariatePolynomial(%)
 increasePrecision : Integer -> PositiveInteger if % has ATARBPR
 lcmCoef : (%, %) -> Record(llcm_res: %,coeff1: %,coeff2: %)
 max : () -> % if not % has ATARBEX and not % has ATARBPR
 min : () -> % if not % has ATARBEX and not % has ATARBPR
 multiEuclidean : (List(%), %) -> Union(List(%),"failed")
 patternMatch : (%, Pattern(Float), PatternMatchResult(Float,%)) -> PatternMatchResult(Float,%)
 precision : PositiveInteger -> PositiveInteger if % has ATARBPR
 principalIdeal : List(%) -> Record(coef: List(%),generator: %)
 unitNormal : % -> Record(unit: %,canonical: %,associate: %)
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`atan`](#atan) | atan(x,y) computes the arc tangent of y/x. |
| [`coerce`](#coerce) | coerce(x) converts x as a JLFloat. |
| [`erf`](#erf) | erf(x) computes the error function of x. |
| [`erfc`](#erfc) | erfc(x) computes the complementary error function of x. |
| [`exp`](#exp) | exp() returns the WSAPReal ℯ (%e or exp(1)). |
| [`integerPart`](#integerpart) | integerPart(x) returns the integer part of x. |
| [`jWSReal`](#jwsreal) | jWSReal(i) coerces i to a WSAPReal. |
| [`jlApprox?`](#jlapprox) | jlApprox?(x,y) computes inexact equality comparison with WS default parameters (Equal). |
| [`log10`](#log10) | log10(x) computes the logarithm of x in base 10. |
| [`log2`](#log2) | log2(x) computes the logarithm of x in base 2. |
| [`rationalApproximation`](#rationalapproximation) | rationalApproximation(x) tries to find a rational approximation of x. |
| [`sinc`](#sinc) | sinc(x) computes the unnormalized sinc of x, sin(x)/x and 0 if x = 0. |
| [`urand01`](#urand01) | urand01() returns a uniformly distributed random number in the range 0..1. |

### Detailed Documentation

#### `atan` <a id="atan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L831)\]

atan(x,y) computes the arc tangent of y/x.

- **Signature**: `(%, %) -> %`

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L843)\]

##### `coerce` : `% -> JLFloat`

coerce(x) converts x as a JLFloat.

##### `coerce` : `String -> %`

coerce(str) constructs str as a WSAPReal.

##### `coerce` : `Float  -> %`

coerce(x) converts x as a WSAPReal.

##### `coerce` : `JLFloat  -> %`

coerce(x) converts x as a WSAPReal.

#### `erf` <a id="erf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L833)\]

erf(x) computes the error function of x.

- **Signature**: `(%, %) -> %`

#### `erfc` <a id="erfc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L835)\]

erfc(x) computes the complementary error function of x.

- **Signature**: `% -> %`

#### `exp` <a id="exp"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L823)\]

exp() returns the WSAPReal ℯ (%e or exp(1)).

- **Signature**: `() -> %`

#### `integerPart` <a id="integerpart"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L818)\]

integerPart(x) returns the integer part of x.

- **Signature**: `% -> WSInteger`

#### `jWSReal` <a id="jwsreal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L851)\]

##### `jWSReal` : `Integer -> %`

jWSReal(i) coerces i to a WSAPReal.

##### `jWSReal` : `DoubleFloat -> %`

jWSReal(f) coerces f to a WSAPReal.

##### `jWSReal` : `JLFloat64 -> %`

jWSReal(f) coerces f to a WSAPReal.

##### `jWSReal` : `Float -> %`

jWSReal(f) coerces f to a WSAPReal.

##### `jWSReal` : `JLFloat -> %`

jWSReal(f) coerces f to a WSAPReal.

##### `jWSReal` : `String -> %`

jWSReal(str) constructs str as a WSAPReal.

#### `jlApprox?` <a id="jlapprox"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L820)\]

jlApprox?(x,y) computes inexact equality comparison with WS default parameters (Equal).

- **Signature**: `(%, %) -> Boolean`

#### `log10` <a id="log10"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L829)\]

log10(x) computes the logarithm of x in base 10.

- **Signature**: `% -> %`

#### `log2` <a id="log2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L827)\]

log2(x) computes the logarithm of x in base 2.

- **Signature**: `% -> %`

#### `rationalApproximation` <a id="rationalapproximation"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L837)\]

##### `rationalApproximation` : `% -> WSRational`

rationalApproximation(x) tries to find a rational approximation of x.

##### `rationalApproximation` : `(%, %) -> WSRational`

rationalApproximation(x, dx) tries to find a rational approximation of x within tolerance dx.

#### `sinc` <a id="sinc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L825)\]

sinc(x) computes the unnormalized sinc of x, sin(x)/x and 0 if x = 0.

- **Signature**: `% -> %`

#### `urand01` <a id="urand01"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L816)\]

urand01() returns a uniformly distributed random number in the range 0..1.

- **Signature**: `() -> %`
---
[Back to Index](../index.md)
