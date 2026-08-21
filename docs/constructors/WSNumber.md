# WSNumber

> **Kind**: Category &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L105)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS category for numbers using the Wolfram Symbol Transport Protocol.

**WSNumber is a category constructor.**  
**Abbreviation for WSNumber is WSNUM**

## Signatures

```fricas
 ?*? : (PositiveInteger, %) -> %    ?*? : (%, %) -> %
 ?*? : (Integer, %) -> %    ?*? : (NonNegativeInteger, %) -> %
 ?*? : (NMInteger, %) -> JLObject    ?+? : (%, %) -> %
 ?-? : (%, %) -> %    -? : % -> %
 0 : () -> %    1 : () -> %
 ?=? : (%, %) -> Boolean    ?^? : (%, PositiveInteger) -> %
 ?^? : (%, NonNegativeInteger) -> %    annihilate? : (%, %) -> Boolean
 antiCommutator : (%, %) -> %    associator : (%, %, %) -> %
 characteristic : () -> NonNegativeInteger    coerce : Integer -> %
 coerce : % -> WSExpression    coerce : % -> JLObject
 coerce : % -> OutputForm    commutator : (%, %) -> %
 convert : % -> String    jWSInterpret : (String, String, String) -> %
 jWSInterpret : (String, String) -> %    jWSInterpret : String -> %
 jlAbout : % -> Void    jlApply : (String, %, %, %, %, %) -> JLObject
 jlApply : (String, %, %, %, %) -> JLObject    jlApply : (String, %, %, %) -> JLObject
 jlApply : (String, %, %) -> JLObject    jlApply : (String, %) -> JLObject
 jlDisplay : % -> Void    jlDump : JLObject -> Void
 jlEval : % -> %    jlFieldNames : % -> JLObject
 jlGetField : (%, JLSymbol) -> JLObject    jlGetJuliaIndex : % -> String
 jlGetProperty : (%, JLSymbol) -> JLObject    jlHead : % -> WSSymbol
 jlId : % -> JLInt64    jlObject : () -> String
 jlPropertyNames : % -> JLObject    jlRef : % -> SExpression
 jlSymbolic : % -> String    jlText : (%, String) -> List(String)
 jlType : % -> Symbol    jlimref : String -> %
 jlref : String -> %    latex : % -> String
 leftPower : (%, PositiveInteger) -> %    leftPower : (%, NonNegativeInteger) -> %
 leftRecip : % -> Union(%,"failed")    missing? : % -> Boolean
 mutable? : % -> Boolean    nothing? : % -> Boolean
 numeric : (%, PositiveInteger) -> WSExpression    numeric : % -> WSExpression
 numeric? : % -> Boolean    one? : % -> Boolean
 opposite? : (%, %) -> Boolean    recip : % -> Union(%,"failed")
 rightPower : (%, PositiveInteger) -> %    rightPower : (%, NonNegativeInteger) -> %
 rightRecip : % -> Union(%,"failed")    sample : () -> %
 string : % -> String    subtractIfCan : (%, %) -> Union(%,"failed")
 toString : % -> String    zero? : % -> Boolean
 ?~=? : (%, %) -> Boolean
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`sample`](#sample) | sample yields a value of type % |
| [`string`](#string) | string(jt) returns the string representation of jt. |
| [`subtractIfCan`](#subtractifcan) | subtractIfCan(x, y) returns an element z such that z+y=x or "failed" if no such element ex... |
| [`toString`](#tostring) | toString(obj) returns the string representation of obj. |
| [`zero?`](#zero) | zero? x tries to determine if x is 0. For example: ... |

### Detailed Documentation

#### `sample` <a id="sample"></a>

##### `sample` : `() -> %`

sample yields a value of type %

- **From**: [`Aggregate`](Aggregate.md)

##### `sample` : `() -> %`

sample() returns an object of type %.

- **From**: [`CartesianTensor(minix`](CartesianTensor(minix.md)

##### `sample` : `() -> %`

sample() returns a sample of %

- **From**: [`Symbol`](Symbol.md)

#### `string` <a id="string"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L465)\]

##### `string` : `% -> String`

string(jt) returns the string representation of jt.

- **From**: [`JLType`](JLType.md)

##### `string` : `% -> String`

string(obj) returns the string representation of obj in the Julia WS format.

- **From**: [`WSObject`](WSObject.md)

#### `subtractIfCan` <a id="subtractifcan"></a>

subtractIfCan(x, y) returns an element z such that z+y=x or "failed" if no such element exists.

- **Signature**: `(%, %) -> Union(%,"failed")`
- **From**: [`CancellationAbelianMonoid`](CancellationAbelianMonoid.md)

#### `toString` <a id="tostring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L751)\]

##### `toString` : `% -> String`

toString(obj) returns the string representation of obj.

- **From**: [`WSObject`](WSObject.md)

##### `toString` : `(%, %) -> String`

toString(expr, form) returns the string representation of expr with WS language format form.

- **From**: [`WSExpression`](WSExpression.md)

#### `zero?` <a id="zero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L350)\]

zero? x tries to determine if x is 0. For example: 

**Example**:
```fricas
expr:=0$WSEXPR/1*sqrt(17::WSEXPR); zero? expr
```

- **Signature**: `% -> Boolean`
- **From**: [`WSExpression`](WSExpression.md)
---
[Back to Index](../index.md)
