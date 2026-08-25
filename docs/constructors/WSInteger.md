# WSInteger

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L263)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS integers using the MathLink Julia package.

**WSInteger is a domain constructor.**  
**Abbreviation for WSInteger is WSINT**  
**125 names for 156 operations in this domain.**

## Signatures

```fricas
 0 : () -> %    1 : () -> %
 ?*? : (%, %) -> %    ?*? : (Integer, %) -> %
 ?*? : (NonNegativeInteger, %) -> %    ?*? : (PositiveInteger, %) -> %
 ?*? : (NMInteger, %) -> JLObject    ?+? : (%, %) -> %
 -? : % -> %    ?-? : (%, %) -> %
 ?<? : (%, %) -> Boolean    ?<=? : (%, %) -> Boolean
 ?=? : (%, %) -> Boolean    ?>? : (%, %) -> Boolean
 ?>=? : (%, %) -> Boolean    D : % -> %
 D : (%, NonNegativeInteger) -> %    ?^? : (%, NonNegativeInteger) -> %
 ?^? : (%, PositiveInteger) -> %    abs : % -> %
 addmod : (%, %, %) -> %    annihilate? : (%, %) -> Boolean
 antiCommutator : (%, %) -> %    associates? : (%, %) -> Boolean
 associator : (%, %, %) -> %    base : () -> %
 binomial : (%, %) -> %    bit? : (%, %) -> Boolean
 characteristic : () -> NonNegativeInteger    coerce : % -> %
 coerce : Integer -> %    coerce : % -> JLObject
 coerce : % -> OutputForm    coerce : % -> WSExpression
 coerce : % -> WSRational    commutator : (%, %) -> %
 convert : % -> DoubleFloat    convert : % -> Float
 convert : % -> InputForm    convert : % -> Integer
 convert : % -> Pattern(Integer)    convert : % -> String
 copy : % -> %    dec : % -> %
 differentiate : % -> %    differentiate : (%, NonNegativeInteger) -> %
 divide : (%, %) -> Record(quotient: %,remainder: %)    euclideanSize : % -> NonNegativeInteger
 even? : % -> Boolean    ?exquo? : (%, %) -> Union(%,"failed")
 factor : % -> Factored(%)    factor : % -> WSList(WSList(%))
 factorial : % -> %    fibonacci : % -> %
 gcd : (%, %) -> %    gcd : List(%) -> %
 hyperFactorial : % -> %    inc : % -> %
 init : () -> %    integer : % -> Integer
 invmod : (%, %) -> %    jWSInt : Integer -> %
 jWSInterpret : String -> %    jWSInterpret : (String, String) -> %
 jWSInterpret : (String, String, String) -> %    jlAbout : % -> Void
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
 length : % -> %    mask : % -> %
 max : (%, %) -> %    min : (%, %) -> %
 missing? : % -> Boolean    mulmod : (%, %, %) -> %
 mutable? : % -> Boolean    negative? : % -> Boolean
 nextItem : % -> Union(%,"failed")    nothing? : % -> Boolean
 numeric : % -> WSExpression    numeric : (%, PositiveInteger) -> WSExpression
 numeric? : % -> Boolean    odd? : % -> Boolean
 one? : % -> Boolean    opposite? : (%, %) -> Boolean
 permutation : (%, %) -> %    plenaryPower : (%, PositiveInteger) -> %
 positive? : % -> Boolean    positiveRemainder : (%, %) -> %
 powmod : (%, %, %) -> %    prime? : % -> Boolean
 qFactorial : (%, %) -> %    ?quo? : (%, %) -> %
 random : % -> %    rational : % -> Fraction(Integer)
 rational? : % -> Boolean    rationalIfCan : % -> Union(Fraction(Integer),"failed")
 recip : % -> Union(%,"failed")    ?rem? : (%, %) -> %
 retract : % -> Integer    retractIfCan : % -> Union(Integer,"failed")
 rightPower : (%, NonNegativeInteger) -> %    rightPower : (%, PositiveInteger) -> %
 rightRecip : % -> Union(%,"failed")    sample : () -> %
 shift : (%, %) -> %    sign : % -> Integer
 sizeLess? : (%, %) -> Boolean    smaller? : (%, %) -> Boolean
 squareFree : % -> Factored(%)    squareFreePart : % -> %
 stirling1 : (%, %) -> %    stirling2 : (%, %) -> %
 string : % -> String    submod : (%, %, %) -> %
 subtractIfCan : (%, %) -> Union(%,"failed")    symmetricRemainder : (%, %) -> %
 toString : % -> String    unit? : % -> Boolean
 unitCanonical : % -> %    zero? : % -> Boolean
 ?~=? : (%, %) -> Boolean
 expressIdealMember : (List(%), %) -> Union(List(%),"failed")
 extendedEuclidean : (%, %) -> Record(coef1: %,coef2: %,generator: %)
 extendedEuclidean : (%, %, %) -> Union(Record(coef1: %,coef2: %),"failed")
 gcdPolynomial : (SparseUnivariatePolynomial(%), SparseUnivariatePolynomial(%)) -> SparseUnivariatePolynomial(%)
 lcmCoef : (%, %) -> Record(llcm_res: %,coeff1: %,coeff2: %)
 multiEuclidean : (List(%), %) -> Union(List(%),"failed")
 patternMatch : (%, Pattern(Integer), PatternMatchResult(Integer,%)) -> PatternMatchResult(Integer,%)
 principalIdeal : List(%) -> Record(coef: List(%),generator: %)
 unitNormal : % -> Record(unit: %,canonical: %,associate: %)
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`coerce`](#coerce) | coerce(z) coerces z. |
| [`factor`](#factor) | factor(n) returns the WS factorization of n. |
| [`fibonacci`](#fibonacci) | fibonacci(n) returns the Fibonacci number Fn. |
| [`hyperFactorial`](#hyperfactorial) | hyperFactorial(n) computes the hyperfactorial of n. |
| [`integer`](#integer) | integer(i) returns i as a FriCAS Integer. |
| [`jWSInt`](#jwsint) | jWSInt(int) constructs int as a WSInteger. |
| [`qFactorial`](#qfactorial) | qFactorial(x,q) returns the q-analog of factorial of x. |
| [`stirling1`](#stirling1) | stirling1(n,m) returns the Stirling number of the first kind from n and m. For example: \e... |
| [`stirling2`](#stirling2) | stirling2(n,m) returns the Stirling number of the second kind from n and m. For example: \... |

### Detailed Documentation

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L294)\]

##### `coerce` : `Integer  -> %`

coerce(z) coerces z.

##### `coerce` : `% -> WSRational`

coerce(z) coerces z.

#### `factor` <a id="factor"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L292)\]

factor(n) returns the WS factorization of n.

- **Signature**: `% -> WSList WSList(%)`

#### `fibonacci` <a id="fibonacci"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L282)\]

fibonacci(n) returns the Fibonacci number Fn.

- **Signature**: `% -> %`

#### `hyperFactorial` <a id="hyperfactorial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L278)\]

hyperFactorial(n) computes the hyperfactorial of n.

- **Signature**: `% -> %`

#### `integer` <a id="integer"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L276)\]

integer(i) returns i as a FriCAS Integer.

- **Signature**: `% -> Integer`

#### `jWSInt` <a id="jwsint"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L298)\]

jWSInt(int) constructs int as a WSInteger.

- **Signature**: `Integer -> %`

#### `qFactorial` <a id="qfactorial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L280)\]

qFactorial(x,q) returns the q-analog of factorial of x.

- **Signature**: `(%, %) -> %`

#### `stirling1` <a id="stirling1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L284)\]

stirling1(n,m) returns the Stirling number of the first kind from n and m. For example: \example{stirling1(20, jWSInt 2)}

- **Signature**: `(%, %) -> %`

#### `stirling2` <a id="stirling2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L288)\]

stirling2(n,m) returns the Stirling number of the second kind from n and m. For example: \example{stirling2(20, jWSInt 2)}

- **Signature**: `(%, %) -> %`
---
[Back to Index](../index.md)
