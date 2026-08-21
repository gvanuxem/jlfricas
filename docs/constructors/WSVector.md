# WSVector

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L242)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS vectors using the MathLink Julia package.

**WSVector(E: WSObject) is a domain constructor.**  
**Abbreviation for WSVector is WSVEC**

## Signatures

```fricas
 #? : % -> NonNegativeInteger if % has ATFINAG    #? : % -> WSInteger
 ?*? : (%, E) -> %    ?*? : (E, %) -> %
 ?*? : (WSInteger, %) -> %    ?*? : (Integer, %) -> % if E has ABELGRP
 ?+? : (%, %) -> %    -? : % -> %
 ?-? : (%, %) -> %    ?=? : (%, %) -> Boolean
 accumulate : % -> % if E has WSNUM    append : (%, E) -> %
 coerce : % -> WSMatrix(E) if E has WSRING    coerce : List(E) -> %
 coerce : % -> WSExpression    coerce : % -> JLObject
 coerce : % -> OutputForm    concat : (%, E) -> %
 concat : (E, %) -> %    concat : (%, %) -> %
 concat : List(%) -> %    construct : List(E) -> %
 convert : % -> InputForm if E has KONVERT(INFORM)    convert : % -> String
 copy : % -> %    cross : (%, %) -> %
 delete : (%, Integer) -> %    delete : (%, UniversalSegment(Integer)) -> %
 delete : (%, WSList(WSInteger)) -> %    differences : % -> % if E has WSNUM
 dimensions : % -> WSList(WSInteger)    dot : (%, %) -> E
 elt : (%, Integer, E) -> E    elt : (%, UniversalSegment(Integer)) -> %
 elt : (%, Integer) -> E    empty : () -> %
 empty? : % -> Boolean    entries : % -> List(E)
 eq? : (%, %) -> Boolean    extract : (%, WSExpression) -> %
 fill! : (%, E) -> % if % has ATSHMUT    find : ((E -> Boolean), %) -> Union(E,"failed")
 first : (%, NonNegativeInteger) -> %    first : % -> E
 index? : (Integer, %) -> Boolean    indices : % -> List(Integer)
 insert : (E, %, Integer) -> %    insert : (%, %, Integer) -> %
 insert : (%, E, WSInteger) -> %    intersection : (%, %) -> %
 jWSAggregate : List(E) -> %    jWSInterpret : (String, String, String) -> %
 jWSInterpret : (String, String) -> %    jWSInterpret : String -> %
 jWSVector : String -> %    jWSVector : List(E) -> %
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
 jlref : String -> %    join : (%, %) -> %
 last : % -> E    latex : % -> String
 length : % -> E if E has RADCAT and E has RING    length : % -> WSInteger
 less? : (%, NonNegativeInteger) -> Boolean    map : ((E -> E), %) -> %
 map : (((E, E) -> E), %, %) -> %    map! : ((E -> E), %) -> % if % has ATSHMUT
 max : % -> E if % has ATFINAG and E has ORDSET    maxIndex : % -> Integer if Integer has ORDSET
 members : % -> List(E) if % has ATFINAG    min : % -> E if % has ATFINAG and E has ORDSET
 minIndex : % -> Integer if Integer has ORDSET    missing? : % -> Boolean
 more? : (%, NonNegativeInteger) -> Boolean    mutable? : % -> Boolean
 new : (NonNegativeInteger, E) -> %    norm : % -> E
 nothing? : % -> Boolean    numeric : (%, PositiveInteger) -> WSExpression
 numeric : % -> WSExpression    numeric? : % -> Boolean
 outerProduct : (%, %) -> Matrix(E) if E has RING    part : (%, WSInteger) -> E
 parts : % -> List(E) if % has ATFINAG    prepend : (%, E) -> %
 qelt : (%, Integer) -> E    qsetelt : (%, Integer, E) -> %
 qsetelt! : (%, Integer, E) -> E if % has ATSHMUT    qsetelt! : (%, Integer, E) -> %
 reduce : (((E, E) -> E), %) -> E if % has ATFINAG    removeDuplicates : % -> %
 replacePart : (%, %) -> %    rest : % -> %
 reverse : (%, WSList(WSInteger)) -> %    reverse : (%, WSInteger) -> %
 reverse : % -> %    riffle : (%, %, %) -> %
 riffle : (%, %) -> %    sample : () -> %
 setIntersection : (%, %) -> %    setelt : (%, Integer, E) -> %
 setelt! : (%, Integer, E) -> E if % has ATSHMUT    setelt! : (%, Integer, E) -> %
 size? : (%, NonNegativeInteger) -> Boolean    sort : % -> %
 sorted? : % -> Boolean    string : % -> String
 take : (%, WSList(WSInteger)) -> %    take : (%, Integer) -> %
 toString : % -> String    total : % -> E if E has WSNUM
 transpose : % -> %    union : (%, %) -> %
 vector : WSList(E) -> %    zero : NonNegativeInteger -> % if E has ABELMON
 zero? : % -> Boolean if E has ABELMON    ?~=? : (%, %) -> Boolean
 ?<? : (%, %) -> Boolean if % has ATFINAG and E has ORDSET
 ?<=? : (%, %) -> Boolean if % has ATFINAG and E has ORDSET
 ?>? : (%, %) -> Boolean if % has ATFINAG and E has ORDSET
 ?>=? : (%, %) -> Boolean if % has ATFINAG and E has ORDSET
 any? : ((E -> Boolean), %) -> Boolean if % has ATFINAG
 copyInto! : (%, %, Integer) -> % if % has ATFINAG and % has ATSHMUT
 count : ((E -> Boolean), %) -> NonNegativeInteger if % has ATFINAG
 count : (E, %) -> NonNegativeInteger if % has ATFINAG and E has BASTYPE
 entry? : (E, %) -> Boolean if % has ATFINAG and E has BASTYPE
 eval : (%, List(Equation(E))) -> % if E has EVALAB(E) and E has SETCAT
 eval : (%, Equation(E)) -> % if E has EVALAB(E) and E has SETCAT
 eval : (%, E, E) -> % if E has EVALAB(E) and E has SETCAT
 eval : (%, List(E), List(E)) -> % if E has EVALAB(E) and E has SETCAT
 every? : ((E -> Boolean), %) -> Boolean if % has ATFINAG
 hash : % -> SingleInteger if % has ATFINAG and E has HASHABL
 hashUpdate! : (HashState, %) -> HashState if % has ATFINAG and E has HASHABL
 leftTrim : (%, E) -> % if % has ATFINAG and E has BASTYPE
 max : (((E, E) -> Boolean), %) -> E if % has ATFINAG
 max : (%, %) -> % if % has ATFINAG and E has ORDSET
 member? : (E, %) -> Boolean if % has ATFINAG and E has BASTYPE
 merge : (((E, E) -> Boolean), %, %) -> % if % has ATFINAG
 merge : (%, %) -> % if % has ATFINAG and E has ORDSET
 merge_unique : (((E, E) -> Boolean), %, %) -> % if % has ATFINAG and E has BASTYPE
 min : (%, %) -> % if % has ATFINAG and E has ORDSET
 negative? : % -> Boolean if % has SETCATZ and % has ATFINAG and E has ORDSET
 position : ((E -> Boolean), %) -> Integer if % has ATFINAG
 position : (E, %) -> Integer if % has ATFINAG and E has BASTYPE
 position : (E, %, Integer) -> Integer if % has ATFINAG and E has BASTYPE
 positive? : % -> Boolean if % has SETCATZ and % has ATFINAG and E has ORDSET
 reduce : (((E, E) -> E), %, E, E) -> E if % has ATFINAG and E has BASTYPE
 reduce : (((E, E) -> E), %, E) -> E if % has ATFINAG
 remove : (E, %) -> % if % has ATFINAG and E has BASTYPE
 remove : ((E -> Boolean), %) -> % if % has ATFINAG
 reverse! : % -> % if % has ATFINAG and % has ATSHMUT
 rightTrim : (%, E) -> % if % has ATFINAG and E has BASTYPE
 select : ((E -> Boolean), %) -> % if % has ATFINAG
 setelt! : (%, UniversalSegment(Integer), E) -> E if % has ATSHMUT
 sign : % -> Integer if % has SETCATZ and % has ATFINAG and E has ORDSET
 smaller? : (%, %) -> Boolean if % has ATFINAG and E has COMPAR or % has ATFINAG and E has ORDSET
 sort : (((E, E) -> Boolean), %) -> % if % has ATFINAG
 sort! : (((E, E) -> Boolean), %) -> % if % has ATFINAG and % has ATSHMUT
 sort! : % -> % if % has ATFINAG and % has ATSHMUT and E has ORDSET
 sorted? : (((E, E) -> Boolean), %) -> Boolean if % has ATFINAG
 swap! : (%, Integer, Integer) -> Void if % has ATSHMUT
 trim : (%, E) -> % if % has ATFINAG and E has BASTYPE
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`*`](#op) | n*a scales the vector a by n. |
| [`+`](#op) | a + b is the vector addition. WS error if dimensions are incompatible. |
| [`-`](#op) | a - b is the vector subtraction. WS error if dimensions are incompatible. |
| [`coerce`](#coerce) | coerce(v) coerces inplace v to a WS matrix. |
| [`cross`](#cross) | cross(v1,v2) computes the vector cross product of v1 and v2. |
| [`dot`](#dot) | dot(v1, v2) is the dot product of v1 and v2. |
| [`jWSVector`](#jwsvector) | jWSVector(list) constructs list as a WSVector. |
| [`norm`](#norm) | norm(v) computes the norm of the vector v. |
| [`transpose`](#transpose) | transpose(v) transposes v. For esoteric purpose, and if you know what you are doing. There... |
| [`vector`](#vector) | vector(list) returns list as a vector. Inplace coercion. \example{vector(range(5)} |

### Detailed Documentation

#### `*` <a id="op"></a>

##### `*` : `(WSInteger, %) -> %`

n*a scales the vector a by n.

##### `*` : `(E,%) -> %`

\spad{r*x} is the left scalar multiple of the scalar r and the vector x.

##### `*` : `(%,E) -> %`

\spad{x * r} is the right scalar multiple of the scalar r and the vector x.

#### `+` <a id="op"></a>

a + b is the vector addition. WS error if dimensions are incompatible.

- **Signature**: `(%, %) -> %`

#### `-` <a id="op"></a>

##### `-` : `(%, %) -> %`

a - b is the vector subtraction. WS error if dimensions are incompatible.

##### `-` : `% -> %`

-a negates each element of the vector a.

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L282)\]

coerce(v) coerces inplace v to a WS matrix.

- **Signature**: `% -> WSMatrix(E)`

#### `cross` <a id="cross"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L271)\]

cross(v1,v2) computes the vector cross product of v1 and v2.

- **Signature**: `(%,%) -> %`

#### `dot` <a id="dot"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L267)\]

dot(v1, v2) is the dot product of v1 and v2.

- **Signature**: `(%, %) -> E`

#### `jWSVector` <a id="jwsvector"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L284)\]

##### `jWSVector` : `List(E) -> %`

jWSVector(list) constructs list as a WSVector.

##### `jWSVector` : `String -> %`

jWSVector(str) constructs str as a WSVector. str must be in the WS language (list).

#### `norm` <a id="norm"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L269)\]

norm(v) computes the norm of the vector v.

- **Signature**: `% -> E`

#### `transpose` <a id="transpose"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L273)\]

transpose(v) transposes v. For esoteric purpose, and if you know what you are doing. There is only one type of vector in the Wolfram language. Should not be used, and for normal purpose, does nothing.

- **Signature**: `% -> %`

#### `vector` <a id="vector"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L277)\]

vector(list) returns list as a vector. Inplace coercion. \example{vector(range(5)}

- **Signature**: `WSList(E) -> %`
---
[Back to Index](../index.md)
