# WSRational

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L388)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS rational numbers using the MathLink Julia package.

**WSRational is a domain constructor.**  
**Abbreviation for WSRational is WSRAT**  
**107 names for 153 operations in this domain.**

## Signatures

```fricas
 0 : () -> %    1 : () -> %
 ?*? : (%, %) -> %    ?*? : (%, Fraction(Integer)) -> %
 ?*? : (%, WSInteger) -> %    ?*? : (Fraction(Integer), %) -> %
 ?*? : (Integer, %) -> %    ?*? : (NonNegativeInteger, %) -> %
 ?*? : (PositiveInteger, %) -> %    ?*? : (WSInteger, %) -> %
 ?*? : (NMInteger, %) -> JLObject    ?+? : (%, %) -> %
 -? : % -> %    ?-? : (%, %) -> %
 ?/? : (%, %) -> %    ?/? : (WSInteger, WSInteger) -> %
 ?<? : (%, %) -> Boolean    ?<=? : (%, %) -> Boolean
 ?=? : (%, %) -> Boolean    ?>? : (%, %) -> Boolean
 ?>=? : (%, %) -> Boolean    D : % -> %
 D : (%, (WSInteger -> WSInteger)) -> %    D : (%, NonNegativeInteger) -> %
 ?^? : (%, Integer) -> %    ?^? : (%, NonNegativeInteger) -> %
 ?^? : (%, PositiveInteger) -> %    abs : % -> %
 annihilate? : (%, %) -> Boolean    antiCommutator : (%, %) -> %
 associates? : (%, %) -> Boolean    associator : (%, %, %) -> %
 ceiling : % -> WSInteger    characteristic : () -> NonNegativeInteger
 coerce : % -> %    coerce : Fraction(Integer) -> %
 coerce : Integer -> %    coerce : WSInteger -> %
 coerce : % -> JLObject    coerce : % -> OutputForm
 coerce : % -> WSExpression    commutator : (%, %) -> %
 convert : % -> DoubleFloat    convert : % -> Float
 convert : % -> Fraction(Integer)    convert : % -> InputForm
 convert : % -> Pattern(Integer)    convert : % -> String
 denom : % -> WSInteger    denominator : % -> %
 differentiate : % -> %    differentiate : (%, (WSInteger -> WSInteger)) -> %
 differentiate : (%, NonNegativeInteger) -> %    divide : (%, %) -> Record(quotient: %,remainder: %)
 euclideanSize : % -> NonNegativeInteger    ?exquo? : (%, %) -> Union(%,"failed")
 factor : % -> Factored(%)    floor : % -> WSInteger
 fractionPart : % -> %    gcd : (%, %) -> %
 gcd : List(%) -> %    init : () -> %
 inv : % -> %    jWSInterpret : String -> %
 jWSInterpret : (String, String) -> %    jWSInterpret : (String, String, String) -> %
 jWSRational : Fraction(Integer) -> %    jlAbout : % -> Void
 jlApply : (String, %) -> JLObject    jlApply : (String, %, %) -> JLObject
 jlApply : (String, %, %, %) -> JLObject    jlApply : (String, %, %, %, %) -> JLObject
 jlApply : (String, %, %, %, %, %) -> JLObject    jlDisplay : % -> Void
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
 map : ((WSInteger -> WSInteger), %) -> %    max : (%, %) -> %
 min : (%, %) -> %    missing? : % -> Boolean
 mutable? : % -> Boolean    negative? : % -> Boolean
 nextItem : % -> Union(%,"failed")    nothing? : % -> Boolean
 numer : % -> WSInteger    numerator : % -> %
 numeric : % -> WSExpression    numeric : (%, PositiveInteger) -> WSExpression
 numeric? : % -> Boolean    one? : % -> Boolean
 opposite? : (%, %) -> Boolean    plenaryPower : (%, PositiveInteger) -> %
 positive? : % -> Boolean    prime? : % -> Boolean
 ?quo? : (%, %) -> %    recip : % -> Union(%,"failed")
 reducedSystem : Matrix(%) -> Matrix(WSInteger)    ?rem? : (%, %) -> %
 retract : % -> Fraction(Integer)    retract : % -> Integer
 retract : % -> WSInteger    retractIfCan : % -> Union(Fraction(Integer),"failed")
 retractIfCan : % -> Union(Integer,"failed")    retractIfCan : % -> Union(WSInteger,"failed")
 rightPower : (%, NonNegativeInteger) -> %    rightPower : (%, PositiveInteger) -> %
 rightRecip : % -> Union(%,"failed")    sample : () -> %
 sign : % -> Integer    sizeLess? : (%, %) -> Boolean
 smaller? : (%, %) -> Boolean    squareFree : % -> Factored(%)
 squareFreePart : % -> %    string : % -> String
 subtractIfCan : (%, %) -> Union(%,"failed")    toString : % -> String
 unit? : % -> Boolean    unitCanonical : % -> %
 wholePart : % -> WSInteger    zero? : % -> Boolean
 ?~=? : (%, %) -> Boolean
 D : (%, (WSInteger -> WSInteger), NonNegativeInteger) -> %
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
 unitNormal : % -> Record(unit: %,canonical: %,associate: %)
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`/`](#op) | a/b returns the Julia WS rational a/b. |
| [`coerce`](#coerce) | coerce(z) coerces z. Convenience function. |
| [`convert`](#convert) | convert(q) returns q as a Fraction(Integer). |
| [`jWSRational`](#jwsrational) | jWSRational(q) constructs q as a WSRational. |
| [`toString`](#tostring) | toString(obj) returns the string representation of obj. |
| [`unit?`](#unit) | unit?(x) checks whether or not x is a unit, i.e. invertible. |
| [`unitCanonical`](#unitcanonical) | unitCanonical(x) returns unitNormal(x).canonical. |
| [`unitNormal`](#unitnormal) | unitNormal(x) tries to choose a canonical element from the associate class of x. The attri... |
| [`wholePart`](#wholepart) | wholePart(x) extracts the whole part of x. That is, if x = continuedFraction(b0, [a1, a2, ... |
| [`zero?`](#zero) | zero? x tries to determine if x is 0. For example: ... |

### Detailed Documentation

#### `/` <a id="op"></a>

a/b returns the Julia WS rational a/b.

- **Signature**: `(WSInteger, WSInteger) -> %`

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L401)\]

coerce(z) coerces z. Convenience function.

- **Signature**: `Integer  -> %`

#### `convert` <a id="convert"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L407)\]

convert(q) returns q as a Fraction(Integer).

- **Signature**: `% -> Fraction(Integer)`

#### `jWSRational` <a id="jwsrational"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L409)\]

jWSRational(q) constructs q as a WSRational.

- **Signature**: `Fraction(Integer) -> %`

#### `toString` <a id="tostring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L751)\]

##### `toString` : `% -> String`

toString(obj) returns the string representation of obj.

- **From**: [`WSObject`](WSObject.md)

##### `toString` : `(%, %) -> String`

toString(expr, form) returns the string representation of expr with WS language format form.

- **From**: [`WSExpression`](WSExpression.md)

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
