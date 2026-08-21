# WSList

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L207)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS lists using the MathLink Julia package.

**WSList(E: WSObject) is a domain constructor.**  
**Abbreviation for WSList is WSLIST**

## Signatures

```fricas
 #? : % -> WSInteger    ?=? : (%, %) -> Boolean
 accumulate : % -> % if E has WSNUM    append : (%, E) -> %
 coerce : % -> List(E)    coerce : List(E) -> %
 coerce : % -> WSExpression    coerce : % -> JLObject
 coerce : % -> OutputForm    convert : % -> String
 delete : (%, WSList(WSInteger)) -> %    differences : % -> % if E has WSNUM
 dimensions : % -> WSList(WSInteger)    elt : (%, Integer) -> E
 extract : (%, WSExpression) -> %    first : % -> E
 insert : (%, E, WSInteger) -> %    intersection : (%, %) -> %
 jWSAggregate : List(E) -> %    jWSInterpret : (String, String, String) -> %
 jWSInterpret : (String, String) -> %    jWSInterpret : String -> %
 jWSList : String -> %    jWSList : List(E) -> %
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
 length : % -> WSInteger    missing? : % -> Boolean
 mutable? : % -> Boolean    nothing? : % -> Boolean
 numeric : (%, PositiveInteger) -> WSExpression    numeric : % -> WSExpression
 numeric? : % -> Boolean    part : (%, WSInteger) -> E
 prepend : (%, E) -> %    qelt : (%, Integer) -> E
 qsetelt : (%, Integer, E) -> %    qsetelt! : (%, Integer, E) -> %
 removeDuplicates : % -> %    replacePart : (%, %) -> %
 rest : % -> %    reverse : (%, WSList(WSInteger)) -> %
 reverse : (%, WSInteger) -> %    reverse : % -> %
 riffle : (%, %, %) -> %    riffle : (%, %) -> %
 setIntersection : (%, %) -> %    setelt : (%, Integer, E) -> %
 setelt! : (%, Integer, E) -> %    sort : % -> %
 sorted? : % -> Boolean    string : % -> String
 take : (%, WSList(WSInteger)) -> %    take : (%, Integer) -> %
 toString : % -> String    total : % -> E if E has WSNUM
 union : (%, %) -> %    ?~=? : (%, %) -> Boolean
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`coerce`](#coerce) | coerce(l) coerces l to a FriCAS List. |
| [`jWSList`](#jwslist) | jWSList(list) constructs list as a WSList. |
| [`total`](#total) | total(agg) returns the sum of the elements in agg. |
| [`union`](#union) | union(a, b) makes the set-union of two match results. |

### Detailed Documentation

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L217)\]

coerce(l) coerces l to a FriCAS List.

- **Signature**: `% -> List(E)`

#### `jWSList` <a id="jwslist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L219)\]

##### `jWSList` : `List(E) -> %`

jWSList(list) constructs list as a WSList.

##### `jWSList` : `String -> %`

jWSList(str) constructs str as a WSList. str must be in the WS language.

#### `total` <a id="total"></a>

total(agg) returns the sum of the elements in agg.

- **Signature**: `% -> E`
- **From**: [`WSAggregate(E)`](WSAggregate(E).md)

#### `union` <a id="union"></a>

##### `union` : `(%, %) -> %`

union(a, b) makes the set-union of two match results.

- **From**: [`PatternMatchResult(R`](PatternMatchResult(R.md)

##### `union` : `(%, %) -> %`

union(u, v) returns the set aggregate of elements which are members of either set aggregate u or v.

- **From**: [`SetAggregate(S)`](SetAggregate(S).md)

##### `union` : `(%, %) -> %`

union(agg1, agg2) is the union set operator. Elements are sorted on output.

- **From**: [`WSAggregate(E)`](WSAggregate(E).md)

##### `union` : `(%, S) -> %`

union(u, x) returns the set aggregate u with the element x added. If u already contains x, union(u, x) returns a copy of u.

- **From**: [`SetAggregate(S)`](SetAggregate(S).md)

##### `union` : `(S, %) -> %`

union(x, u) returns the set aggregate u with the element x added. If u already contains x, union(x, u) returns a copy of u.

- **From**: [`SetAggregate(S)`](SetAggregate(S).md)

##### `union` : `List(%) -> %`

union(x) constructs a compound boundary from the union of x x: List % is supplied list of boundaries to form union

- **From**: [`SBoundary(PT)`](SBoundary(PT).md)

##### `union` : `(List(Kernel(F)), List(Kernel(F))) -> List(Kernel(F))`

union(l1, l2) returns set-theoretic union of l1 and l2.

- **From**: [`IntegrationTools(R`](IntegrationTools(R.md)
---
[Back to Index](../index.md)
