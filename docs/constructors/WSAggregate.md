# WSAggregate

> **Kind**: Category &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L1)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS aggregate (WS list) using the MathLink Julia package.

**WSAggregate(E: WSObject) is a category constructor.**  
**Abbreviation for WSAggregate is WSAGG**

## Signatures

```fricas
 #? : % -> WSInteger    ?=? : (%, %) -> Boolean
 accumulate : % -> % if E has WSNUM    append : (%, E) -> %
 coerce : List(E) -> %    coerce : % -> WSExpression
 coerce : % -> JLObject    coerce : % -> OutputForm
 convert : % -> String    delete : (%, WSList(WSInteger)) -> %
 differences : % -> % if E has WSNUM    dimensions : % -> WSList(WSInteger)
 elt : (%, Integer) -> E    extract : (%, WSExpression) -> %
 first : % -> E    insert : (%, E, WSInteger) -> %
 intersection : (%, %) -> %    jWSAggregate : List(E) -> %
 jWSInterpret : (String, String, String) -> %    jWSInterpret : (String, String) -> %
 jWSInterpret : String -> %    jlAbout : % -> Void
 jlApply : (String, %, %, %, %, %) -> JLObject    jlApply : (String, %, %, %, %) -> JLObject
 jlApply : (String, %, %, %) -> JLObject    jlApply : (String, %, %) -> JLObject
 jlApply : (String, %) -> JLObject    jlDisplay : % -> Void
 jlDump : JLObject -> Void    jlEval : % -> %
 jlFieldNames : % -> JLObject    jlGetField : (%, JLSymbol) -> JLObject
 jlGetJuliaIndex : % -> String    jlGetProperty : (%, JLSymbol) -> JLObject
 jlHead : % -> WSSymbol    jlId : % -> JLInt64
 jlObject : () -> String    jlPropertyNames : % -> JLObject
 jlRef : % -> SExpression    jlSymbolic : % -> String
 jlText : (%, String) -> List(String)    jlType : % -> Symbol
 jlimref : String -> %    jlref : String -> %
 join : (%, %) -> %    last : % -> E
 latex : % -> String    length : % -> WSInteger
 missing? : % -> Boolean    mutable? : % -> Boolean
 nothing? : % -> Boolean    numeric : (%, PositiveInteger) -> WSExpression
 numeric : % -> WSExpression    numeric? : % -> Boolean
 part : (%, WSInteger) -> E    prepend : (%, E) -> %
 qelt : (%, Integer) -> E    qsetelt : (%, Integer, E) -> %
 qsetelt! : (%, Integer, E) -> %    removeDuplicates : % -> %
 replacePart : (%, %) -> %    rest : % -> %
 reverse : (%, WSList(WSInteger)) -> %    reverse : (%, WSInteger) -> %
 reverse : % -> %    riffle : (%, %, %) -> %
 riffle : (%, %) -> %    setIntersection : (%, %) -> %
 setelt : (%, Integer, E) -> %    setelt! : (%, Integer, E) -> %
 sort : % -> %    sorted? : % -> Boolean
 string : % -> String    take : (%, WSList(WSInteger)) -> %
 take : (%, Integer) -> %    toString : % -> String
 total : % -> E if E has WSNUM    union : (%, %) -> %
 ?~=? : (%, %) -> Boolean
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`#`](#op) | #(agg) returns the length of agg. 0 if it is a scalar, an index for example. |
| [`--ratios`](#ratios) | accumulate(agg) returns the partial sums of elements in agg. |
| [`WT`](#wt) | Operation defined in WSAggregate |
| [`accumulate`](#accumulate) | accumulate(agg) returns the partial sums of elements in agg. |
| [`append`](#append) | append(l, elt) appends elt to the list l. |
| [`coerce`](#coerce) | coerce(list) tries to coerce list to a WSAggregate. |
| [`delete`](#delete) | delete(l, inds) deletes element(s) of the list l at index(es) inds. |
| [`differences`](#differences) | differences(agg) returns the differences between adjacent elements in agg. |
| [`dimensions`](#dimensions) | dimensions(agg) returns dimensions of agg. |
| [`elt`](#elt) | elt(agg,i) returns the i-th element. |
| [`extract`](#extract) | extract(agg, parts) extracts parts of agg. |
| [`first`](#first) | first(agg) returns the first element of agg. |
| [`insert`](#insert) | insert(l, elt, ind) inserts elt to the list l at index ind. |
| [`intersection`](#intersection) | intersection(agg1, agg2) is the intersection operator. |
| [`jWSAggregate`](#jwsaggregate) | jWSAggregate(list) constructs agg to a WSAggregate. |
| [`join`](#join) | join(agg1, agg2) joins the two aggregates agg1 and agg2. |
| [`last`](#last) | last(agg) returns the last element of agg. |
| [`length`](#length) | length(agg) returns the length of agg. 0 if it is a scalar, an index for example. |
| [`part`](#part) | part(agg,i) returns the i-th element. |
| [`prepend`](#prepend) | prepend(l, elt) prepends elt to the list l. |
| [`qelt`](#qelt) | qelt(agg,i) returns the i-th element. No checks are done at the FriCAS level. |
| [`qsetelt`](#qsetelt) | qsetelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem. No c... |
| [`removeDuplicates`](#removeduplicates) | removeDuplicates(agg) removes duplicate elements. |
| [`replacePart`](#replacepart) | replacePart(expr, part) replaces expr using rule(s) expressing position(s). |
| [`rest`](#rest) | rest(agg) returns agg without the first element. |
| [`ret`](#ret) | Operation defined in WSAggregate |
| [`reverse`](#reverse) | reverse(agg) reverses the elements of agg. |
| [`riffle`](#riffle) | riffle(agg, elts) riffles (interleaves) element(s) elts i.e. inserts them. |
| [`setIntersection`](#setintersection) | setIntersection(agg1, agg2) is the intersection set operator. |
| [`setelt`](#setelt) | setelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem. |
| [`sort`](#sort) | sort(agg) returns agg in sorted order. For complex numbers, sorts them by their real part ... |
| [`sorted?`](#sorted) | sorted?(agg) checks whether agg is sorted or not. |
| [`take`](#take) | take(l,i) returns the first i elements. |
| [`total`](#total) | total(agg) returns the sum of the elements in agg. |
| [`union`](#union) | union(agg1, agg2) is the union set operator. Elements are sorted on output. |

### Detailed Documentation

#### `#` <a id="op"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L140)\]

#(agg) returns the length of agg. 0 if it is a scalar, an index for example.

- **Signature**: `% -> WSInteger`

#### `--ratios` <a id="ratios"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L79)\]

accumulate(agg) returns the partial sums of elements in agg.

- **Signature**: `% -> E`

#### `WT` <a id="wt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L126)\]

- **Signature**: `WSSymbol := WTrue()`

#### `accumulate` <a id="accumulate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L77)\]

accumulate(agg) returns the partial sums of elements in agg.

- **Signature**: `% -> %`

#### `append` <a id="append"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L34)\]

append(l, elt) appends elt to the list l.

- **Signature**: `(%, E) -> %`

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L100)\]

coerce(list) tries to coerce list to a WSAggregate.

- **Signature**: `List(E) -> %`

#### `delete` <a id="delete"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L47)\]

delete(l, inds) deletes element(s) of the list l at index(es) inds.

- **Signature**: `(%, WSList(WSInteger)) -> %`

#### `differences` <a id="differences"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L74)\]

differences(agg) returns the differences between adjacent elements in agg.

- **Signature**: `% -> %`

#### `dimensions` <a id="dimensions"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L18)\]

dimensions(agg) returns dimensions of agg.

- **Signature**: `% -> WSList(WSInteger)`

#### `elt` <a id="elt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L82)\]

elt(agg,i) returns the i-th element.

- **Signature**: `(%, Integer) -> E`

#### `extract` <a id="extract"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L26)\]

extract(agg, parts) extracts parts of agg.

- **Signature**: `(%, WSExpression) -> %`

#### `first` <a id="first"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L28)\]

first(agg) returns the first element of agg.

- **Signature**: `% -> E`

#### `insert` <a id="insert"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L45)\]

insert(l, elt, ind) inserts elt to the list l at index ind.

- **Signature**: `(% , E, WSInteger) -> %`

#### `intersection` <a id="intersection"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L53)\]

intersection(agg1, agg2) is the intersection operator.

- **Signature**: `(%, %) -> %`

#### `jWSAggregate` <a id="jwsaggregate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L102)\]

jWSAggregate(list) constructs agg to a WSAggregate.

- **Signature**: `List(E) -> %`

#### `join` <a id="join"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L49)\]

join(agg1, agg2) joins the two aggregates agg1 and agg2.

- **Signature**: `(%, %) -> %`

#### `last` <a id="last"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L30)\]

last(agg) returns the last element of agg.

- **Signature**: `% -> E`

#### `length` <a id="length"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L15)\]

length(agg) returns the length of agg. 0 if it is a scalar, an index for example.

- **Signature**: `% -> WSInteger`

#### `part` <a id="part"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L20)\]

part(agg,i) returns the i-th element.

- **Signature**: `(%, WSInteger) -> E`

#### `prepend` <a id="prepend"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L40)\]

prepend(l, elt) prepends elt to the list l.

- **Signature**: `(%, E) -> %`

#### `qelt` <a id="qelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L84)\]

qelt(agg,i) returns the i-th element. No checks are done at the FriCAS level.

- **Signature**: `(%, Integer) -> E`

#### `qsetelt` <a id="qsetelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L90)\]

qsetelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem. No checks are done at the FriCAS level.

- **Signature**: `(%, Integer, E) -> %`

#### `removeDuplicates` <a id="removeduplicates"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L62)\]

removeDuplicates(agg) removes duplicate elements.

- **Signature**: `% -> %`

#### `replacePart` <a id="replacepart"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L98)\]

replacePart(expr, part) replaces expr using rule(s) expressing position(s).

- **Signature**: `(%, %) -> %`

#### `rest` <a id="rest"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L32)\]

rest(agg) returns agg without the first element.

- **Signature**: `% -> %`

#### `ret` <a id="ret"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L186)\]

##### `ret` : `Integer := jl_setindex_wrap_eval_string(jlId(agg), cmd)$Lisp`

##### `ret` : `Integer := jl_setindex_wrap_eval_string(jlId(agg),cmd)$Lisp`

#### `reverse` <a id="reverse"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L64)\]

##### `reverse` : `% -> %`

reverse(agg) reverses the elements of agg.

##### `reverse` : `(%, WSInteger) -> %`

reverse(agg, lev) reverses the elements of agg at level lev.

##### `reverse` : `(%, WSList(WSInteger)) -> %`

reverse(agg, levels) reverses the elements of agg using levels.

#### `riffle` <a id="riffle"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L57)\]

##### `riffle` : `(%, %) -> %`

riffle(agg, elts) riffles (interleaves) element(s) elts i.e. inserts them.

##### `riffle` : `(%, %, %) -> %`

riffle(agg, elts, inds) riffles (interleaves) element(s) elts i.e. inserts them. If inds is {min, max, n} inserts at position min, min+n, min+2n..max.

#### `setIntersection` <a id="setintersection"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L55)\]

setIntersection(agg1, agg2) is the intersection set operator.

- **Signature**: `(%, %) -> %`

#### `setelt` <a id="setelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L87)\]

setelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem.

- **Signature**: `(%, Integer, E) -> %`

#### `sort` <a id="sort"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L68)\]

sort(agg) returns agg in sorted order. For complex numbers, sorts them by their real part first.

- **Signature**: `% -> %`

#### `sorted?` <a id="sorted"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L10)\]

sorted?(agg) checks whether agg is sorted or not.

- **Signature**: `% -> Boolean`

#### `take` <a id="take"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L22)\]

##### `take` : `(%, Integer) -> %`

take(l,i) returns the first i elements.

##### `take` : `(%, WSList(WSInteger)) -> %`

take(l,i) returns the first i elements.

#### `total` <a id="total"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L72)\]

total(agg) returns the sum of the elements in agg.

- **Signature**: `% -> E`

#### `union` <a id="union"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L51)\]

union(agg1, agg2) is the union set operator. Elements are sorted on output.

- **Signature**: `(%, %) -> %`
---
[Back to Index](../index.md)
