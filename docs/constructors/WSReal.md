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
 jlId : % -> JLInt64    jlObject : () -> String
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
| [`atan`](#atan) | atan(x,y) computes the arc tangent of y/x. |
| [`coerce`](#coerce) | coerce(r) coerces r to a DoubleFloat. |
| [`erf`](#erf) | erf(x) computes the error function of x. |
| [`erfc`](#erfc) | erfc(x) computes the complementary error function of x. |
| [`exp`](#exp) | exp() returns the WSAPReal ℯ (%e or exp(1)). |
| [`integerPart`](#integerpart) | integerPart(x) returns the integer part of x. |
| [`jWSReal`](#jwsreal) | jWSReal(z) coerces z to a WSReal. |
| [`jlApprox?`](#jlapprox) | jlApprox?(x,y) computes inexact equality comparison with WS default parameters (Equal). |
| [`log10`](#log10) | log10(x) computes the logarithm of x in base 10. |
| [`log2`](#log2) | log2(x) computes the logarithm of x in base 2. |
| [`rationalApproximation`](#rationalapproximation) | rationalApproximation(x) tries to find a rational approximation of x. Error if x can not b... |
| [`sinc`](#sinc) | sinc(x) computes the unnormalized sinc of x, sin(x)/x. |
| [`truncate`](#truncate) | truncate x returns the integer between x and 0 closest to x. |
| [`unit?`](#unit) | unit?(x) checks whether or not x is a unit, i.e. invertible. |
| [`unitCanonical`](#unitcanonical) | unitCanonical(x) returns unitNormal(x).canonical. |
| [`unitNormal`](#unitnormal) | unitNormal(x) tries to choose a canonical element from the associate class of x. The attri... |
| [`urand01`](#urand01) | urand01() returns a uniformly distributed random number in the range 0..1. |
| [`wholePart`](#wholepart) | wholePart(x) extracts the whole part of x. That is, if x = continuedFraction(b0, [a1, a2, ... |
| [`zero?`](#zero) | zero? x tries to determine if x is 0. For example: ... |

### Detailed Documentation

#### `atan` <a id="atan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L533)\]

atan(x,y) computes the arc tangent of y/x.

- **Signature**: `(%, %) -> %`

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

#### `erf` <a id="erf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L535)\]

erf(x) computes the error function of x.

- **Signature**: `(%, %) -> %`

#### `erfc` <a id="erfc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L537)\]

erfc(x) computes the complementary error function of x.

- **Signature**: `% -> %`

#### `exp` <a id="exp"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L525)\]

exp() returns the WSAPReal ℯ (%e or exp(1)).

- **Signature**: `() -> %`

#### `integerPart` <a id="integerpart"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L520)\]

integerPart(x) returns the integer part of x.

- **Signature**: `% -> WSInteger`

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

#### `jlApprox?` <a id="jlapprox"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L522)\]

jlApprox?(x,y) computes inexact equality comparison with WS default parameters (Equal).

- **Signature**: `(%, %) -> Boolean`

#### `log10` <a id="log10"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L531)\]

log10(x) computes the logarithm of x in base 10.

- **Signature**: `% -> %`

#### `log2` <a id="log2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L529)\]

log2(x) computes the logarithm of x in base 2.

- **Signature**: `% -> %`

#### `rationalApproximation` <a id="rationalapproximation"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L539)\]

##### `rationalApproximation` : `% -> WSRational`

rationalApproximation(x) tries to find a rational approximation of x. Error if x can not be retracted.

##### `rationalApproximation` : `(%, %) -> WSRational`

rationalApproximation(x, dx) returns a rational approximation of x within tolerance dx. If dx = 0, converts it anyway.

#### `sinc` <a id="sinc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L527)\]

sinc(x) computes the unnormalized sinc of x, sin(x)/x.

- **Signature**: `% -> %`

#### `truncate` <a id="truncate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L654)\]

##### `truncate` : `% -> %`

truncate x returns the integer between x and 0 closest to x.

- **From**: [`RealNumberSystem`](RealNumberSystem.md)

##### `truncate` : `(%, Expon) -> %`

truncate(f, k) returns a (finite) power series consisting of the sum of all terms of f of degree <= k.

- **From**: [`UnivariatePowerSeriesCategory(Coef`](UnivariatePowerSeriesCategory(Coef.md)

##### `truncate` : `(%, Expon, Expon) -> %`

truncate(f, k1, k2) returns a (finite) power series consisting of the sum of all terms of f of degree d with k1 <= d <= k2.

- **From**: [`UnivariatePowerSeriesCategory(Coef`](UnivariatePowerSeriesCategory(Coef.md)

##### `truncate` : `(%, NonNegativeInteger) -> %`

truncate(p, n) returns p truncated to n terms. It's the remainder of the division by x^n.

- **From**: [`NMUnivariateLaurentPolynomial(R`](NMUnivariateLaurentPolynomial(R.md)

#### `unit?` <a id="unit"></a>

unit?(x) checks whether or not x is a unit, i.e. invertible.

- **Signature**: `% -> Boolean`
- **From**: [`NMRing`](NMRing.md)

#### `unitCanonical` <a id="unitcanonical"></a>

unitCanonical(x) returns unitNormal(x).canonical.

- **Signature**: `% -> %`
- **From**: [`EntireRing`](EntireRing.md)

#### `unitNormal` <a id="unitnormal"></a>

unitNormal(x) tries to choose a canonical element from the associate class of x. The attribute canonicalUnitNormal, if a sserted, means that the "canonical" element is the same across all associates of x if unitNormal(x) = [u, c, a] then u*c = x, a*u = 1.

- **Signature**: `% -> Record(unit: %,canonical: %,associate: %)`
- **From**: [`EntireRing`](EntireRing.md)

#### `urand01` <a id="urand01"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L518)\]

urand01() returns a uniformly distributed random number in the range 0..1.

- **Signature**: `() -> %`

#### `wholePart` <a id="wholepart"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L652)\]

##### `wholePart` : `% -> R`

wholePart(x) extracts the whole part of x. That is, if x = continuedFraction(b0, [a1, a2, a3, ...], [b1, b2, b3, ...]), then wholePart(x) = b0.

- **From**: [`ContinuedFraction(R)`](ContinuedFraction(R).md)

##### `wholePart` : `% -> R`

wholePart(p) extracts the whole part of the partial fraction p.

- **From**: [`PartialFraction(R)`](PartialFraction(R).md)

##### `wholePart` : `% -> S`

wholePart(x) returns the whole part of the fraction x i.e. the truncated quotient of the numerator by the denominator.

- **From**: [`QuotientFieldCategory(S)`](QuotientFieldCategory(S).md)

##### `wholePart` : `% -> Integer`

wholePart x returns the integer part of x.

- **From**: [`RealNumberSystem`](RealNumberSystem.md)

#### `zero?` <a id="zero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L671)\]

zero? x tries to determine if x is 0. For example: 

**Example**:
```fricas
expr:=0$WSEXPR/1*sqrt(17::WSEXPR); zero? expr
```

- **Signature**: `% -> Boolean`
- **From**: [`WSExpression`](WSExpression.md)
---
[Back to Index](../index.md)
