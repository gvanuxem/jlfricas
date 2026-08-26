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
 jlId : % -> Integer    jlObject : () -> String
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
| [`#`](#op-hash) | #(u) returns the number of elements in u. |
| [`*`](#op-mul) | n*a scales the vector a by n. |
| [`+`](#op-add) | a + b is the vector addition. WS error if dimensions are incompatible. |
| [`<`](#op-lt) | Operation defined in WSVector |
| [`<=`](#op-le) | Operation defined in WSVector |
| [`>`](#op-gt) | Operation defined in WSVector |
| [`>=`](#op-ge) | Operation defined in WSVector |
| [`accumulate`](#accumulate) | accumulate(agg) returns the partial sums of elements in agg. |
| [`any?`](#any) | any?(p, u) tests if p(x) is true for any element x of u. Note: for collections, any?(p, u)... |
| [`append`](#append) | append(l, elt) appends elt to the list l. |
| [`coerce`](#coerce) | coerce(v) coerces inplace v to a WS matrix. |
| [`concat`](#concat) | concat(u, v) returns an aggregate consisting of the elements of u followed by the elements... |
| [`construct`](#construct) | construct([x, y, ..., z]) returns the collection of elements x, y, ..., z ordered as given... |
| [`convert`](#convert) | convert(s) makes s into an input form. |
| [`copy`](#copy) | copy(u) returns a top-level (non-recursive) copy of u. Note: for collections, copy(u) = [x... |
| [`copyInto!`](#copyinto) | copyInto!(u, v, i) returns aggregate u containing a copy of v inserted at element i. |
| [`count`](#count) | count(x, u) returns the number of occurrences of x in u. For collections, count(x, u) = re... |
| [`cross`](#cross) | cross(v1,v2) computes the vector cross product of v1 and v2. |
| [`delete`](#delete) | delete(u, i) returns a copy of u with the ith element deleted. Note: delete(u, i) = concat... |
| [`differences`](#differences) | differences(agg) returns the differences between adjacent elements in agg. |
| [`dimensions`](#dimensions) | dimensions(agg) returns dimensions of agg. |
| [`dot`](#dot) | dot(v1, v2) is the dot product of v1 and v2. |
| [`elt`](#elt) | elt(op, l) creates a form for application of op to list of arguments l. |
| [`empty`](#empty) | empty()$D creates an aggregate of type D with 0 elements. Note: The  $D can be dropped if ... |
| [`empty?`](#empty) | empty?(u) tests if u has 0 elements. |
| [`entries`](#entries) | entries(u) returns a list of all the entries of aggregate u in no assumed order. |
| [`entry?`](#entry) | entry?(x, u) tests if x equals u . i for some index i. |
| [`eq?`](#eq) | eq?(u, v) tests if u and v are same objects. |
| [`eval`](#eval) | eval(f, x, v) replaces x by v in f. |
| [`every?`](#every) | every?(p, u) tests if p(x) is true for all elements x of u. Note: for collections, every?(... |
| [`extract`](#extract) | extract(agg, parts) extracts parts of agg. |
| [`fill!`](#fill) | fill!(u, x) replaces each entry in aggregate u by x. The modified u is returned as value. |
| [`find`](#find) | find(p, u) returns the first x in u such that p(x) is true, and "failed" otherwise. |
| [`first`](#first) | first(u, n) returns a copy of the first n elements of u. Error: if u has less than n eleme... |
| [`hash`](#hash) | hash(s) calculates a hash code for s. |
| [`hashUpdate!`](#hashupdate) | hashUpdate!(hs, s) computes new HashState from old and s used for incremental computation ... |
| [`index?`](#index) | index?(i, u) tests if i is an index of aggregate u. |
| [`indices`](#indices) | indices(u) returns a list of indices of aggregate u in no particular order. |
| [`insert`](#insert) | insert(v, u, i) returns a copy of u having v inserted beginning at the ith element. Note: ... |
| [`intersection`](#intersection) | intersection(agg1, agg2) is the intersection operator. |
| [`jWSAggregate`](#jwsaggregate) | jWSAggregate(list) constructs agg to a WSAggregate. |
| [`jWSInterpret`](#jwsinterpret) | jWSInterpret(form) interprets form. |
| [`jWSVector`](#jwsvector) | jWSVector(list) constructs list as a WSVector. |
| [`jlAbout`](#jlabout) | jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia.... |
| [`jlApply`](#jlapply) | jlApply(func, obj) applies the function func with obj as parameter and returns the result ... |
| [`jlDisplay`](#jldisplay) | jlDisplay(v) pretty prints v (à la Julia). |
| [`jlDump`](#jldump) | jlDump(obj) dumps (shows) the Julia object (internal structure with type). |
| [`jlEval`](#jleval) | jlEval(expr) evaluates expr using the WS Transport Protocol. |
| [`jlFieldNames`](#jlfieldnames) | jlFieldNames(obj) returns the field names of obj. |
| [`jlGetField`](#jlgetfield) | jlGetField(obj, sym) returns the property/element sym of obj. |
| [`jlGetJuliaIndex`](#jlgetjuliaindex) | jlGetJuliaIndex(obj) returns the Julia indexed dictionary index referencing the object obj... |
| [`jlGetProperty`](#jlgetproperty) | jlGetProperty(obj, sym) returns the property/element sym of obj. |
| [`jlHead`](#jlhead) | jlHead(expr) returns the Head type of expr. |
| [`jlId`](#jlid) | jlId(obj) returns the Julia indexed dictionary index referencing the object obj. |
| [`jlObject`](#jlobject) | jlObject() returns the internal Julia name of the Julia module used. For example: ... |
| [`jlPropertyNames`](#jlpropertynames) | jlPropertyNames(obj) returns the property/element names of obj. |
| [`jlRef`](#jlref) | jlRef(obj) returns the internal Lisp representation of the Julia object obj. |
| [`jlSymbolic`](#jlsymbolic) | jlSymbolic(expr) returns the symbolic 'FullForm'. |
| [`jlText`](#jltext) | jlText(obj, mimest) returns the text representation of obj as a list of String lines with ... |
| [`jlType`](#jltype) | jlType(obj) returns the Julia type of obj. |
| [`jlimref`](#jlimref) | jlimref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia im... |
| [`jlref`](#jlref) | jlRef(obj) returns the internal Lisp representation of the Julia object obj. |
| [`join`](#join) | join(agg1, agg2) joins the two aggregates agg1 and agg2. |
| [`last`](#last) | last(agg) returns the last element of agg. |
| [`latex`](#latex) | latex(s) returns a LaTeX-printable output representation of s. |
| [`leftTrim`](#lefttrim) | leftTrim(u, x) returns a copy of u with all leading x deleted. For example, leftTrim(" abc... |
| [`length`](#length) | length(v) computes the sqrt(dot(v, v)), i.e. the euclidean length |
| [`less?`](#less) | less?(u, n) tests if u has less than n elements. |
| [`map`](#map) | map(f, u) returns a copy of u with each element x replaced by f(x). For collections, map(f... |
| [`map!`](#map) | map!(f, u) destructively replaces each element x of u by f(x). |
| [`max`](#max) | max(x,y) returns the maximum of x and y relative to "<". |
| [`maxIndex`](#maxindex) | maxIndex(u) returns the maximum index i of aggregate u. Note: in general, maxIndex(u) = re... |
| [`member?`](#member) | member?(x, u) tests if x is a member of u. For collections, member?(x, u) = reduce(or, [x=... |
| [`members`](#members) | members(u) returns a list of the consecutive elements of u. For multisets members gives re... |
| [`merge`](#merge) | merge(u, v) merges u and v in ascending order. Note: merge(u, v) = merge(<=, u, v). |
| [`merge_unique`](#merge_unique) | merge_unique(p, a, b) returns an aggregate c which merges a and b uniquely. p is a binary ... |
| [`min`](#min) | min(x,y) returns the minimum of x and y relative to "<". |
| [`minIndex`](#minindex) | minIndex(u) returns the minimum index i of aggregate u. Note: in general, minIndex(a) = re... |
| [`missing?`](#missing) | missing?(obj) checks whether or not obj is missing. |
| [`more?`](#more) | more?(u, n) tests if u has more than n elements. |
| [`mutable?`](#mutable) | mutable?(obj) checks whether or not obj is mutable. |
| [`negative?`](#negative) | negative?(x) tests whether x is strictly less than 0. |
| [`new`](#new) | new(n, x) returns a new aggregate of size n all of whose entries are x. |
| [`norm`](#norm) | norm(v) computes the norm of the vector v. |
| [`nothing?`](#nothing) | nothing?(obj) checks whether or not obj is nothing. |
| [`numeric`](#numeric) | numeric(expr) returns numerical expr if possible. |
| [`numeric?`](#numeric) | numeric?(x) checks whether or not x is or would yield a number. |
| [`outerProduct`](#outerproduct) | outerProduct(u, v) constructs the matrix whose (i, j)'th element is u(i)*v(j). |
| [`part`](#part) | part(agg,i) returns the i-th element. |
| [`parts`](#parts) | parts(u) returns a list of the consecutive elements of u. For finite collections, construc... |
| [`position`](#position) | position(x, a) returns the index i of the first occurrence of x in a, and minIndex(a) - 1 ... |
| [`positive?`](#positive) | positive?(x) tests whether x is strictly greater than 0. |
| [`prepend`](#prepend) | prepend(l, elt) prepends elt to the list l. |
| [`qelt`](#qelt) | qelt(agg,i) returns the i-th element. No checks are done at the FriCAS level. |
| [`qsetelt`](#qsetelt) | qsetelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem. No c... |
| [`qsetelt!`](#qsetelt) | qsetelt!(l,i,elem) returns l with i-th element replaced by elem. No checks are done at the... |
| [`reduce`](#reduce) | reduce(f, u) reduces the binary operation f across u. For example, if u is [x, y, ..., z] ... |
| [`remove`](#remove) | remove(x, u) returns a copy of u with all elements equal to x removed. Note: remove(x, u) ... |
| [`removeDuplicates`](#removeduplicates) | removeDuplicates(u) returns a copy of u with all duplicates removed. |
| [`replacePart`](#replacepart) | replacePart(expr, part) replaces expr using rule(s) expressing position(s). |
| [`rest`](#rest) | rest(agg) returns agg without the first element. |
| [`reverse`](#reverse) | reverse(a) returns a copy of a with elements in reverse order. |
| [`reverse!`](#reverse) | reverse!(u) returns u with its elements in reverse order. |
| [`riffle`](#riffle) | riffle(agg, elts) riffles (interleaves) element(s) elts i.e. inserts them. |
| [`rightTrim`](#righttrim) | rightTrim(u, x) returns a copy of u with all trailing occurrences of x deleted. For exampl... |
| [`sample`](#sample) | sample yields a value of type % |
| [`select`](#select) | select(p, u) returns a copy of u containing only those elements such p(x) is true. Note: s... |
| [`setIntersection`](#setintersection) | setIntersection(agg1, agg2) is the intersection set operator. |
| [`setelt`](#setelt) | setelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem. |
| [`setelt!`](#setelt) | setelt!(l,i,elem) returns l with i-th element replaced by elem. |
| [`sign`](#sign) | sign(x) is 1 if x is positive, -1 if x is negative, 0 if x equals 0. |
| [`size?`](#size) | size?(u, n) tests if u has exactly n elements. |
| [`smaller?`](#smaller) | smaller?(x, y) is a strict ordering on depending on representatives of elements of the set... |
| [`sort`](#sort) | sort(u) returns a copy of u with elements in ascending order. Note: sort(u) = sort(<, u). |
| [`sort!`](#sort) | sort!(u) returns u with its elements in ascending order. |
| [`sorted?`](#sorted) | sorted?(u) tests if the elements of u are in ascending order. |
| [`string`](#string) | string(jt) returns the string representation of jt. |
| [`swap!`](#swap) | swap!(u, i, j) interchanges elements i and j of aggregate u. No meaningful value is return... |
| [`take`](#take) | take(l,i) returns the first i elements. |
| [`toString`](#tostring) | toString(obj) returns the string representation of obj. |
| [`total`](#total) | total(agg) returns the sum of the elements in agg. |
| [`transpose`](#transpose) | transpose(v) transposes v. For esoteric purpose, and if you know what you are doing. There... |
| [`trim`](#trim) | trim(u, x) returns a copy of u with all occurrences of x deleted from right and left ends.... |
| [`union`](#union) | union(agg1, agg2) is the union set operator. Elements are sorted on output. |
| [`vector`](#vector) | vector(list) returns list as a vector. Inplace coercion. \example{vector(range(5)} |
| [`zero`](#zero) | zero(n) creates a zero vector of length n. |
| [`zero?`](#zero) | zero?(x) returns true if x is a zero vector, false otherwise. |
| [`~=`](#op-neq) | Operation defined in WSVector |

### Detailed Documentation

#### `#` <a id="op-hash"></a>

##### `#` : `% -> NonNegativeInteger`

#(u) returns the number of elements in u.

- **From**: `Aggregate`

##### `#` : `% -> WSInteger`

#(agg) returns the length of agg. 0 if it is a scalar, an index for example.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `*` <a id="op-mul"></a>

##### `*` : `(WSInteger, %) -> %`

n*a scales the vector a by n.

##### `*` : `(E,%) -> %`

\spad{r*x} is the left scalar multiple of the scalar r and the vector x.

##### `*` : `(%,E) -> %`

\spad{x * r} is the right scalar multiple of the scalar r and the vector x.

#### `+` <a id="op-add"></a>

a + b is the vector addition. WS error if dimensions are incompatible.

- **Signature**: `(%, %) -> %`

#### `<` <a id="op-lt"></a>

Operation defined in WSVector.

- **Signature**: `(%, %) -> Boolean if % has ATFINAG and E has ORDSET`

#### `<=` <a id="op-le"></a>

Operation defined in WSVector.

- **Signature**: `(%, %) -> Boolean if % has ATFINAG and E has ORDSET`

#### `>` <a id="op-gt"></a>

Operation defined in WSVector.

- **Signature**: `(%, %) -> Boolean if % has ATFINAG and E has ORDSET`

#### `>=` <a id="op-ge"></a>

Operation defined in WSVector.

- **Signature**: `(%, %) -> Boolean if % has ATFINAG and E has ORDSET`

#### `accumulate` <a id="accumulate"></a>

accumulate(agg) returns the partial sums of elements in agg.

- **Signature**: `% -> % if E has WSNUM`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `any?` <a id="any"></a>

any?(p, u) tests if p(x) is true for any element x of u. Note: for collections, any?(p, u) = reduce(or, map(p, u), false , true). However, any?(p, u) returns as soon as it finds an element for which p gives true.

- **Signature**: `((E -> Boolean), %) -> Boolean if % has ATFINAG`
- **From**: `HomogeneousAggregate(S)`

#### `append` <a id="append"></a>

append(l, elt) appends elt to the list l.

- **Signature**: `(%, E) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L282)\]

##### `coerce` : `% -> WSMatrix(E)`

coerce(v) coerces inplace v to a WS matrix.

##### `coerce` : `List(E) -> %`

coerce(list) tries to coerce list to a WSAggregate.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `coerce` : `Segment(S) -> %`

coerce(x) allows Segment values to be used as %.

- **From**: `UniversalSegment(S)`

##### `coerce` : `% -> S`

coerce(a) transforms a into an element of S.

- **From**: `CoercibleTo(S)`

##### `coerce` : `% -> JLObject`

coerce(obj) coerces obj to JLObject. Convenience function.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `coerce` : `% -> WSExpression`

coerce(expr) returns the WSExpression representation of expr.

- **From**: [`WSObject`](WSObject.md)

#### `concat` <a id="concat"></a>

##### `concat` : `(%, %) -> %`

concat(u, v) returns an aggregate consisting of the elements of u followed by the elements of v. Note: if w = concat(u, v) then w.i = u.i for i in indices u and w.(j + maxIndex u) = v.j for j in indices v.

- **From**: `LinearAggregate(S)`

##### `concat` : `(%, S) -> %`

concat(u, x) returns aggregate u with additional element x at the end. Note: for lists, concat(u, x) = concat(u, [x]).

- **From**: `LinearAggregate(S)`

##### `concat` : `(S, %) -> %`

concat(x, u) returns aggregate u with additional element x at the front. Note: for lists: concat(x, u) = concat([x], u).

- **From**: `LinearAggregate(S)`

##### `concat` : `List(%) -> %`

concat(u), where u is a list of aggregates [a, b, ..., c], returns a single aggregate consisting of the elements of a fo llowed by those of b followed ... by the elements of c. Note: concat([a, b, ..., c]) = concat(a, concat([b, ..., c])).

- **From**: `LinearAggregate(S)`

#### `construct` <a id="construct"></a>

construct([x, y, ..., z]) returns the collection of elements x, y, ..., z ordered as given. Equivalently written as [x, y, ..., z]$D, where D is the domain. D may be omitted for those of type List.

- **Signature**: `List(E) -> %`
- **From**: `Collection(S)`

#### `convert` <a id="convert"></a>

##### `convert` : `SExpression -> %`

convert(s) makes s into an input form.

- **From**: `InputForm`

##### `convert` : `% -> S`

convert(a) transforms a into an element of S.

- **From**: `ConvertibleTo(S)`

#### `copy` <a id="copy"></a>

copy(u) returns a top-level (non-recursive) copy of u. Note: for collections, copy(u) = [x for x in u].

- **Signature**: `% -> %`
- **From**: `Aggregate`

#### `copyInto!` <a id="copyinto"></a>

copyInto!(u, v, i) returns aggregate u containing a copy of v inserted at element i.

- **Signature**: `(%, %, Integer) -> % if % has ATFINAG and % has ATSHMUT`
- **From**: `LinearAggregate(S)`

#### `count` <a id="count"></a>

##### `count` : `(S, %) -> NonNegativeInteger`

count(x, u) returns the number of occurrences of x in u. For collections, count(x, u) = reduce(+, [1 for y in u | x = y] , 0).

- **From**: `HomogeneousAggregate(S)`

##### `count` : `((S -> Boolean), %) -> NonNegativeInteger`

count(p, u) returns the number of elements x in u such that p(x) is true. For collections, count(p, u) = reduce(+, [1 fo r x in u | p(x)], 0).

- **From**: `HomogeneousAggregate(S)`

#### `cross` <a id="cross"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L271)\]

##### `cross` : `(%,%) -> %`

cross(v1,v2) computes the vector cross product of v1 and v2.

##### `cross` : `(%, %) -> %`

cross(u, v) constructs the cross product of u and v. Error: if u and v are not of length 3.

- **From**: `VectorCategory(R)`

#### `delete` <a id="delete"></a>

##### `delete` : `(%, Integer) -> %`

delete(u, i) returns a copy of u with the ith element deleted. Note: delete(u, i) = concat(u(minIndex(u)..i - 1), u(i + 1..)).

- **From**: `LinearAggregate(S)`

##### `delete` : `(%, UniversalSegment(Integer)) -> %`

delete(u, i..j) returns a copy of u with the ith through jth element deleted. Note: delete(u, i..j) = concat(u(minIndex( u)..i-1), u(j+1..)).

- **From**: `LinearAggregate(S)`

##### `delete` : `(%, WSList(WSInteger)) -> %`

delete(l, inds) deletes element(s) of the list l at index(es) inds.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `differences` <a id="differences"></a>

differences(agg) returns the differences between adjacent elements in agg.

- **Signature**: `% -> % if E has WSNUM`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `dimensions` <a id="dimensions"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L551)\]

dimensions(agg) returns dimensions of agg.

- **Signature**: `% -> WSList(WSInteger)`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `dot` <a id="dot"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L267)\]

##### `dot` : `(%, %) -> E`

dot(v1, v2) is the dot product of v1 and v2.

##### `dot` : `% -> %`

dot(f) creates the form with one dot overhead.

- **From**: `OutputForm`

##### `dot` : `(%, NonNegativeInteger) -> %`

dot(f, n) creates the form f with n dots overhead.

- **From**: `OutputForm`

##### `dot` : `(%, %) -> R`

dot(x, y) computes the inner product of the two vectors x and y. Error: if x and y are not of the same length.

- **From**: `VectorCategory(R)`

#### `elt` <a id="elt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L399)\]

##### `elt` : `(%, List(%)) -> %`

elt(op, l) creates a form for application of op to list of arguments l.

- **From**: `OutputForm`

##### `elt` : `(%, Integer) -> E`

elt(agg,i) returns the i-th element.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `elt` : `(%, D) -> I`

elt(u, i) (also written: u.i) returns the element of u indexed by i. Error: if i is not an index of u.

- **From**: `Eltable(D,I)`

##### `elt` : `(%, Dom, Im) -> Im`

elt(u, x, y) applies u to x if x is in the domain of u, and returns y otherwise.

- **From**: `EltableAggregate(Dom,Im)`

#### `empty` <a id="empty"></a>

empty()$D creates an aggregate of type D with 0 elements. Note: The  $D can be dropped if understood by context, e.g. u: D := empty().

- **Signature**: `() -> %`
- **From**: `Aggregate`

#### `empty?` <a id="empty"></a>

empty?(u) tests if u has 0 elements.

- **Signature**: `% -> Boolean`
- **From**: `Aggregate`

#### `entries` <a id="entries"></a>

entries(u) returns a list of all the entries of aggregate u in no assumed order.

- **Signature**: `% -> List(E)`
- **From**: `IndexedAggregate(Index,Entry)`

#### `entry?` <a id="entry"></a>

entry?(x, u) tests if x equals u . i for some index i.

- **Signature**: `(E, %) -> Boolean if % has ATFINAG and E has BASTYPE`
- **From**: `IndexedAggregate(Index,Entry)`

#### `eq?` <a id="eq"></a>

eq?(u, v) tests if u and v are same objects.

- **Signature**: `(%, %) -> Boolean`
- **From**: `Aggregate`

#### `eval` <a id="eval"></a>

##### `eval` : `(%, A, B) -> %`

eval(f, x, v) replaces x by v in f.

- **From**: `InnerEvalable(A,B)`

##### `eval` : `(%, Equation(R)) -> %`

eval(f, x = v) replaces x by v in f.

- **From**: `Evalable(R)`

##### `eval` : `(%, List(A), List(B)) -> %`

eval(f, [x1, ..., xn], [v1, ..., vn]) replaces xi by vi in f.

- **From**: `InnerEvalable(A,B)`

##### `eval` : `(%, List(Equation(R))) -> %`

eval(f, [x1 = v1, ..., xn = vn]) replaces xi by vi in f.

- **From**: `Evalable(R)`

#### `every?` <a id="every"></a>

every?(p, u) tests if p(x) is true for all elements x of u. Note: for collections, every?(p, u) = reduce(and, map(p, u), true, false). However, every?(p, u) returns as soon as it finds an element for which p gives false.

- **Signature**: `((E -> Boolean), %) -> Boolean if % has ATFINAG`
- **From**: `HomogeneousAggregate(S)`

#### `extract` <a id="extract"></a>

extract(agg, parts) extracts parts of agg.

- **Signature**: `(%, WSExpression) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `fill!` <a id="fill"></a>

fill!(u, x) replaces each entry in aggregate u by x. The modified u is returned as value.

- **Signature**: `(%, E) -> % if % has ATSHMUT`
- **From**: `IndexedAggregate(Index,Entry)`

#### `find` <a id="find"></a>

find(p, u) returns the first x in u such that p(x) is true, and "failed" otherwise.

- **Signature**: `((E -> Boolean), %) -> Union(E,"failed")`
- **From**: `Collection(S)`

#### `first` <a id="first"></a>

##### `first` : `(%, NonNegativeInteger) -> %`

first(u, n) returns a copy of the first n elements of u. Error: if u has less than n elements.

- **From**: `LinearAggregate(S)`

##### `first` : `% -> E`

first(agg) returns the first element of agg.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `first` : `% -> Entry`

first(u) returns the first element x of u. Note: for collections, first([x, y, ..., z]) = x. Error: if u is empty.

- **From**: `IndexedAggregate(Index,Entry)`

#### `hash` <a id="hash"></a>

hash(s) calculates a hash code for s.

- **Signature**: `% -> SingleInteger if % has ATFINAG and E has HASHABL`
- **From**: `Hashable`

#### `hashUpdate!` <a id="hashupdate"></a>

hashUpdate!(hs, s) computes new HashState from old and s used for incremental computation of hash values. hashUpdate! mi ght destructively work on its first argument.

- **Signature**: `(HashState, %) -> HashState if % has ATFINAG and E has HASHABL`
- **From**: `Hashable`

#### `index?` <a id="index"></a>

index?(i, u) tests if i is an index of aggregate u.

- **Signature**: `(Integer, %) -> Boolean`
- **From**: `IndexedAggregate(Index,Entry)`

#### `indices` <a id="indices"></a>

indices(u) returns a list of indices of aggregate u in no particular order.

- **Signature**: `% -> List(Integer)`
- **From**: `IndexedAggregate(Index,Entry)`

#### `insert` <a id="insert"></a>

##### `insert` : `(%, %, Integer) -> %`

insert(v, u, i) returns a copy of u having v inserted beginning at the ith element. Note: insert(v, u, i) = concat(u(min Index(u)..i-1), concat(v, u(i..))).

- **From**: `LinearAggregate(S)`

##### `insert` : `(%, E, WSInteger) -> %`

insert(l, elt, ind) inserts elt to the list l at index ind.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `insert` : `(S, %, Integer) -> %`

insert(x, u, i) returns a copy of u having x as its ith element. Note: insert(x, u, i) = concat(u(minIndex(u)..i-1), con cat(x, u(i..))).

- **From**: `LinearAggregate(S)`

#### `intersection` <a id="intersection"></a>

intersection(agg1, agg2) is the intersection operator.

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `jWSAggregate` <a id="jwsaggregate"></a>

jWSAggregate(list) constructs agg to a WSAggregate.

- **Signature**: `List(E) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `jWSInterpret` <a id="jwsinterpret"></a>

##### `jWSInterpret` : `String -> %`

jWSInterpret(form) interprets form.

- **From**: [`WSObject`](WSObject.md)

##### `jWSInterpret` : `(String, String) -> %`

jWSInterpret(Type|Form, Expr) interprets Expr to be of type Type or Form using the WS Language. For exampl e: 

**Examples**:
```fricas
jWSInterpret("Number","3.2")@WSREAL
jWSInterpret("Real","3.2")@WSREAL
jWSInterpret("L ocation","Lille")$WSEXPR See jWSExpr "$InterpreterTypes"
```

- **From**: [`WSObject`](WSObject.md)

##### `jWSInterpret` : `(String, String, String) -> %`

jWSInterpret(form1,form2,form3) interprets forms.

- **From**: [`WSObject`](WSObject.md)

#### `jWSVector` <a id="jwsvector"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L284)\]

##### `jWSVector` : `List(E) -> %`

jWSVector(list) constructs list as a WSVector.

##### `jWSVector` : `String -> %`

jWSVector(str) constructs str as a WSVector. str must be in the WS language (list).

#### `jlAbout` <a id="jlabout"></a>

jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia. In the Julia interpreter, ent er in the package management mode with ']', and issue: pkg> add "https://github.com/tecosaur/About.jl"

- **Signature**: `% -> Void`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlApply` <a id="jlapply"></a>

##### `jlApply` : `(String, %) -> JLObject`

jlApply(func, obj) applies the function func with obj as parameter and returns the result as a FriCAS JLObject. For exam ple, using JLMatrix(JLObjFloat64): 

**Examples**:
```fricas
M:=nrand(4,4);
jlApply("svd", M::JLMatrix(JLObjFloat64)).S shou ld be "equivalent" to svdvals(M).
```

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlApply` : `(String, %, %) -> JLObject`

jlApply(func, obj1, obj2) applies the function func with obj1 and obj2 as parameters and returns the result as a FriCAS JLObject. For example (equivalent to map(cos, v)): 

**Examples**:
```fricas
v:=urand01(5)$JLVector(JLFloat)
jlApply("map", " cos", coerce v)
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

jlGetJuliaIndex(obj) returns the Julia indexed dictionary index referencing the object obj. Convenience function for use in the interpreter.

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

**Example**:
```fricas
jlObject()$NMUnivariatePolyn omial(NINT,'x)
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

**Examples**:
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

#### `jlref` <a id="jlref"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L296)\]

##### `jlref` : `% -> SExpression`

jlRef(obj) returns the internal Lisp representation of the Julia object obj.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlref` : `String -> %`

jlref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia mutable object.

- **From**: [`JLObjectType`](JLObjectType.md)

#### `join` <a id="join"></a>

join(agg1, agg2) joins the two aggregates agg1 and agg2.

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `last` <a id="last"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L560)\]

last(agg) returns the last element of agg.

- **Signature**: `% -> E`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `latex` <a id="latex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L539)\]

latex(s) returns a LaTeX-printable output representation of s.

- **Signature**: `% -> String`
- **From**: `SetCategory`

#### `leftTrim` <a id="lefttrim"></a>

leftTrim(u, x) returns a copy of u with all leading x deleted. For example, leftTrim(" abc ", char " ") returns "abc ".

- **Signature**: `(%, E) -> % if % has ATFINAG and E has BASTYPE`
- **From**: `LinearAggregate(S)`

#### `length` <a id="length"></a>

##### `length` : `% -> R`

length(v) computes the sqrt(dot(v, v)), i.e. the euclidean length

- **From**: `VectorCategory(R)`

##### `length` : `% -> WSInteger`

length(agg) returns the length of agg. 0 if it is a scalar, an index for example.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `less?` <a id="less"></a>

less?(u, n) tests if u has less than n elements.

- **Signature**: `(%, NonNegativeInteger) -> Boolean`
- **From**: `Aggregate`

#### `map` <a id="map"></a>

##### `map` : `((S -> S), %) -> %`

map(f, u) returns a copy of u with each element x replaced by f(x). For collections, map(f, u) = [f(x) for x in u].

- **From**: `HomogeneousAggregate(S)`

##### `map` : `(((S, S) -> S), %, %) -> %`

map(f, u, v) returns a new aggregate w with elements z = f(x, y) for corresponding elements x and y from u and v. Note: w.i = f(u.i, v.i).

- **From**: `LinearAggregate(S)`

#### `map!` <a id="map"></a>

map!(f, u) destructively replaces each element x of u by f(x).

- **Signature**: `((E -> E), %) -> % if % has ATSHMUT`
- **From**: `HomogeneousAggregate(S)`

#### `max` <a id="max"></a>

##### `max` : `(%, %) -> %`

max(x,y) returns the maximum of x and y relative to "<".

- **From**: `OrderedSet`

##### `max` : `% -> S`

max(u) returns maximal element of u. Error if u is empty.

- **From**: `HomogeneousAggregate(S)`

##### `max` : `(((S, S) -> Boolean), %) -> S`

max(p, u) returns maximal element of u with respect to total ordering predicate p. Error if u is empty.

- **From**: `HomogeneousAggregate(S)`

#### `maxIndex` <a id="maxindex"></a>

maxIndex(u) returns the maximum index i of aggregate u. Note: in general, maxIndex(u) = reduce(max, indices u); for List , maxIndex(u) = #u.

- **Signature**: `% -> Integer if Integer has ORDSET`
- **From**: `IndexedAggregate(Index,Entry)`

#### `member?` <a id="member"></a>

member?(x, u) tests if x is a member of u. For collections, member?(x, u) = reduce(or, [x=y for y in u], false). However , member?(x, u) returns as soon as it finds a member.

- **Signature**: `(E, %) -> Boolean if % has ATFINAG and E has BASTYPE`
- **From**: `HomogeneousAggregate(S)`

#### `members` <a id="members"></a>

members(u) returns a list of the consecutive elements of u. For multisets members gives result with no repetition. See a lso parts.

- **Signature**: `% -> List(E) if % has ATFINAG`
- **From**: `HomogeneousAggregate(S)`

#### `merge` <a id="merge"></a>

##### `merge` : `(%, %) -> %`

merge(u, v) merges u and v in ascending order. Note: merge(u, v) = merge(<=, u, v).

- **From**: `LinearAggregate(S)`

##### `merge` : `(((S, S) -> Boolean), %, %) -> %`

merge(p, a, b) returns an aggregate c which merges a and b. The result is produced by examining each element x of a and y of b successively. If p(x, y) is true, then x is inserted into the result; otherwise y is inserted. If x is chosen, th e next element of a is examined, and so on. When all the elements of one aggregate are examined, the remaining elements of the other are appended. For example, merge(<, [1, 3], [2, 7, 5]) returns [1, 2, 3, 7, 5].

- **From**: `LinearAggregate(S)`

#### `merge_unique` <a id="merge_unique"></a>

merge_unique(p, a, b) returns an aggregate c which merges a and b uniquely. p is a binary predicate and aggregates a and b are assumed to be ordered under p and without duplicates. The result aggregate c is also ordered under p, and contain s all elements from a and b, also without duplicates. For example, merge_unique(<, [1, 3, 5], [3, 5, 6]) returns [1, 3, 5, 6].

- **Signature**: `(((E, E) -> Boolean), %, %) -> % if % has ATFINAG and E has BASTYPE`
- **From**: `LinearAggregate(S)`

#### `min` <a id="min"></a>

##### `min` : `(%, %) -> %`

min(x,y) returns the minimum of x and y relative to "<".

- **From**: `OrderedSet`

##### `min` : `% -> S`

min(u) returns minimal element of u. Error if u is empty.

- **From**: `HomogeneousAggregate(S)`

#### `minIndex` <a id="minindex"></a>

minIndex(u) returns the minimum index i of aggregate u. Note: in general, minIndex(a) = reduce(min, indices a); for List , minIndex(a) = 1.

- **Signature**: `% -> Integer if Integer has ORDSET`
- **From**: `IndexedAggregate(Index,Entry)`

#### `missing?` <a id="missing"></a>

missing?(obj) checks whether or not obj is missing.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `more?` <a id="more"></a>

more?(u, n) tests if u has more than n elements.

- **Signature**: `(%, NonNegativeInteger) -> Boolean`
- **From**: `Aggregate`

#### `mutable?` <a id="mutable"></a>

mutable?(obj) checks whether or not obj is mutable.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `negative?` <a id="negative"></a>

negative?(x) tests whether x is strictly less than 0.

- **Signature**: `% -> Boolean if % has SETCATZ and % has ATFINAG and E has ORDSET`
- **From**: `OrderedSet`

#### `new` <a id="new"></a>

new(n, x) returns a new aggregate of size n all of whose entries are x.

- **Signature**: `(NonNegativeInteger, E) -> %`
- **From**: `LinearAggregate(S)`

#### `norm` <a id="norm"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L269)\]

norm(v) computes the norm of the vector v.

- **Signature**: `% -> E`

#### `nothing?` <a id="nothing"></a>

nothing?(obj) checks whether or not obj is nothing.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

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

#### `outerProduct` <a id="outerproduct"></a>

outerProduct(u, v) constructs the matrix whose (i, j)'th element is u(i)*v(j).

- **Signature**: `(%, %) -> Matrix(E) if E has RING`
- **From**: `VectorCategory(R)`

#### `part` <a id="part"></a>

part(agg,i) returns the i-th element.

- **Signature**: `(%, WSInteger) -> E`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `parts` <a id="parts"></a>

parts(u) returns a list of the consecutive elements of u. For finite collections, construct(parts(u)) = u.

- **Signature**: `% -> List(E) if % has ATFINAG`
- **From**: `HomogeneousAggregate(S)`

#### `position` <a id="position"></a>

##### `position` : `(S, %) -> Integer`

position(x, a) returns the index i of the first occurrence of x in a, and minIndex(a) - 1 if there is no such x.

- **From**: `LinearAggregate(S)`

##### `position` : `(S, %, Integer) -> Integer`

position(x, a, n) returns the index i of the first occurrence of x in a where i >= n, and minIndex(a) - 1 if no such x i s found.

- **From**: `LinearAggregate(S)`

##### `position` : `((S -> Boolean), %) -> Integer`

position(p, a) returns the index i of the first x in a such that p(x) is true, and minIndex(a) - 1 if there is no such x .

- **From**: `LinearAggregate(S)`

#### `positive?` <a id="positive"></a>

positive?(x) tests whether x is strictly greater than 0.

- **Signature**: `% -> Boolean if % has SETCATZ and % has ATFINAG and E has ORDSET`
- **From**: `OrderedSet`

#### `prepend` <a id="prepend"></a>

prepend(l, elt) prepends elt to the list l.

- **Signature**: `(%, E) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `qelt` <a id="qelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L401)\]

##### `qelt` : `(%, Integer) -> E`

qelt(agg,i) returns the i-th element. No checks are done at the FriCAS level.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `qelt` : `(%, Dom) -> Im`

qelt(u, x) applies u to x without checking whether x is in the domain of u. If x is not in the domain of u a memory-acce ss violation may occur. If a check on whether x is in the domain of u is required, use the function elt.

- **From**: `EltableAggregate(Dom,Im)`

#### `qsetelt` <a id="qsetelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L407)\]

qsetelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem. No checks are done at the FriCAS l evel.

- **Signature**: `(%, Integer, E) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `qsetelt!` <a id="qsetelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L410)\]

##### `qsetelt!` : `(%, Integer, E) -> %`

qsetelt!(l,i,elem) returns l with i-th element replaced by elem. No checks are done at the FriCAS level.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `qsetelt!` : `(%, Dom, Im) -> Im`

qsetelt!(u, x, y) sets the image of x to be y under u, without checking that x is in the domain of u. If such a check is required use the function setelt!.

- **From**: `EltableAggregate(Dom,Im)`

#### `reduce` <a id="reduce"></a>

##### `reduce` : `(((S, S) -> S), %) -> S`

reduce(f, u) reduces the binary operation f across u. For example, if u is [x, y, ..., z] then reduce(f, u) returns f(.. f(f(x, y), ...), z). Note: if u has one element x, reduce(f, u) returns x. Error: if u is empty.

- **From**: `Collection(S)`

##### `reduce` : `(((S, S) -> S), %, S) -> S`

reduce(f, u, x) reduces the binary operation f across u, where x is the identity operation of f. Same as reduce(f, u) if u has 2 or more elements. Returns f(y, x) if u has one element y. Returns x if u is empty. For example, reduce(+, u, 0) returns the sum of the elements of u.

- **From**: `Collection(S)`

##### `reduce` : `(((S, S) -> S), %, S, S) -> S`

reduce(f, u, x, z) reduces the binary operation f across u, stopping when an "absorbing element" z is encountered. As fo r reduce(f, u, x), x is the identity element of f. Same as reduce(f, u, x) when u contains no element z. Thus the third argument x is returned when u is empty.

- **From**: `Collection(S)`

#### `remove` <a id="remove"></a>

##### `remove` : `(S, %) -> %`

remove(x, u) returns a copy of u with all elements equal to x removed. Note: remove(x, u) = [y for y in u | y ~= x].

- **From**: `Collection(S)`

##### `remove` : `((S -> Boolean), %) -> %`

remove(p, u) returns a copy of u removing all elements x such that p(x) is true. Note: remove(p, u) = [x for x in u | no t p(x)].

- **From**: `Collection(S)`

#### `removeDuplicates` <a id="removeduplicates"></a>

removeDuplicates(u) returns a copy of u with all duplicates removed.

- **Signature**: `% -> %`
- **From**: `Collection(S)`

#### `replacePart` <a id="replacepart"></a>

replacePart(expr, part) replaces expr using rule(s) expressing position(s).

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `rest` <a id="rest"></a>

rest(agg) returns agg without the first element.

- **Signature**: `% -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `reverse` <a id="reverse"></a>

##### `reverse` : `% -> %`

reverse(a) returns a copy of a with elements in reverse order.

- **From**: `LinearAggregate(S)`

##### `reverse` : `(%, WSInteger) -> %`

reverse(agg, lev) reverses the elements of agg at level lev.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `reverse` : `(%, WSList(WSInteger)) -> %`

reverse(agg, levels) reverses the elements of agg using levels.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `reverse!` <a id="reverse"></a>

reverse!(u) returns u with its elements in reverse order.

- **Signature**: `% -> % if % has ATFINAG and % has ATSHMUT`
- **From**: `LinearAggregate(S)`

#### `riffle` <a id="riffle"></a>

##### `riffle` : `(%, %) -> %`

riffle(agg, elts) riffles (interleaves) element(s) elts i.e. inserts them.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `riffle` : `(%, %, %) -> %`

riffle(agg, elts, inds) riffles (interleaves) element(s) elts i.e. inserts them. If inds is min, max, n inserts at posit ion min, min+n, min+2n..max.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `rightTrim` <a id="righttrim"></a>

rightTrim(u, x) returns a copy of u with all trailing occurrences of x deleted. For example, rightTrim(" abc ", char " " ) returns " abc".

- **Signature**: `(%, E) -> % if % has ATFINAG and E has BASTYPE`
- **From**: `LinearAggregate(S)`

#### `sample` <a id="sample"></a>

sample yields a value of type %

- **Signature**: `() -> %`
- **From**: `Aggregate`

#### `select` <a id="select"></a>

select(p, u) returns a copy of u containing only those elements such p(x) is true. Note: select(p, u) = [x for x in u | p(x)].

- **Signature**: `((E -> Boolean), %) -> % if % has ATFINAG`
- **From**: `Collection(S)`

#### `setIntersection` <a id="setintersection"></a>

setIntersection(agg1, agg2) is the intersection set operator.

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `setelt` <a id="setelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L404)\]

setelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem.

- **Signature**: `(%, Integer, E) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `setelt!` <a id="setelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L599)\]

##### `setelt!` : `(%, Integer, E) -> %`

setelt!(l,i,elem) returns l with i-th element replaced by elem.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `setelt!` : `(%, Dom, Im) -> Im`

setelt!(u, x, y) sets the image of x to be y under u, if x is in the domain of u. Error: if x is not in the domain of u.

- **From**: `EltableAggregate(Dom,Im)`

##### `setelt!` : `(%, UniversalSegment(Integer), S) -> S`

setelt!(u, i..j, x) (also written: u(i..j) := x) destructively replaces each element in the segment u(i..j) by x. The va lue x is returned. Note: u is destructively changed so that u.k := x for k in i..j; its length remains unchanged.

- **From**: `LinearAggregate(S)`

#### `sign` <a id="sign"></a>

sign(x) is 1 if x is positive, -1 if x is negative, 0 if x equals 0.

- **Signature**: `% -> Integer if % has SETCATZ and % has ATFINAG and E has ORDSET`
- **From**: `OrderedSet`

#### `size?` <a id="size"></a>

size?(u, n) tests if u has exactly n elements.

- **Signature**: `(%, NonNegativeInteger) -> Boolean`
- **From**: `Aggregate`

#### `smaller?` <a id="smaller"></a>

smaller?(x, y) is a strict ordering on depending on representatives of elements of the set. If % has Comparable then sma ller? gives mathematical linear order.

- **Signature**: `(%, %) -> Boolean if % has ATFINAG and E has COMPAR or % has ATFINAG and E has ORDSET`
- **From**: `ComparableRepresentation`

#### `sort` <a id="sort"></a>

##### `sort` : `% -> %`

sort(u) returns a copy of u with elements in ascending order. Note: sort(u) = sort(<, u).

- **From**: `LinearAggregate(S)`

##### `sort` : `(((S, S) -> Boolean), %) -> %`

sort(p, a) returns a copy of a sorted using total ordering predicate p.

- **From**: `LinearAggregate(S)`

#### `sort!` <a id="sort"></a>

##### `sort!` : `% -> %`

sort!(u) returns u with its elements in ascending order.

- **From**: `LinearAggregate(S)`

##### `sort!` : `(((S, S) -> Boolean), %) -> %`

sort!(p, u) returns u with its elements ordered by p.

- **From**: `LinearAggregate(S)`

#### `sorted?` <a id="sorted"></a>

##### `sorted?` : `% -> Boolean`

sorted?(u) tests if the elements of u are in ascending order.

- **From**: `LinearAggregate(S)`

##### `sorted?` : `(((S, S) -> Boolean), %) -> Boolean`

sorted?(p, a) tests if a is sorted according to predicate p.

- **From**: `LinearAggregate(S)`

#### `string` <a id="string"></a>

string(jt) returns the string representation of jt.

- **Signature**: `% -> String`
- **From**: [`JLType`](JLType.md)

#### `swap!` <a id="swap"></a>

swap!(u, i, j) interchanges elements i and j of aggregate u. No meaningful value is returned.

- **Signature**: `(%, Integer, Integer) -> Void if % has ATSHMUT`
- **From**: `IndexedAggregate(Index,Entry)`

#### `take` <a id="take"></a>

take(l,i) returns the first i elements.

- **Signature**: `(%, Integer) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `toString` <a id="tostring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L505)\]

toString(obj) returns the string representation of obj.

- **Signature**: `% -> String`
- **From**: [`WSObject`](WSObject.md)

#### `total` <a id="total"></a>

total(agg) returns the sum of the elements in agg.

- **Signature**: `% -> E if E has WSNUM`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `transpose` <a id="transpose"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L273)\]

transpose(v) transposes v. For esoteric purpose, and if you know what you are doing. There is only one type of vector in the Wolfram language. Should not be used, and for normal purpose, does nothing.

- **Signature**: `% -> %`

#### `trim` <a id="trim"></a>

trim(u, x) returns a copy of u with all occurrences of x deleted from right and left ends. For example, trim(" abc ", ch ar " ") returns "abc".

- **Signature**: `(%, E) -> % if % has ATFINAG and E has BASTYPE`
- **From**: `LinearAggregate(S)`

#### `union` <a id="union"></a>

union(agg1, agg2) is the union set operator. Elements are sorted on output.

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `vector` <a id="vector"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L277)\]

vector(list) returns list as a vector. Inplace coercion. \example{vector(range(5)}

- **Signature**: `WSList(E) -> %`

#### `zero` <a id="zero"></a>

zero(n) creates a zero vector of length n.

- **Signature**: `NonNegativeInteger -> % if E has ABELMON`
- **From**: `VectorCategory(R)`

#### `zero?` <a id="zero"></a>

zero?(x) returns true if x is a zero vector, false otherwise.

- **Signature**: `% -> Boolean if E has ABELMON`
- **From**: `VectorCategory(R)`

#### `~=` <a id="op-neq"></a>

Operation defined in WSVector.

- **Signature**: `(%, %) -> Boolean`
---
[Back to Index](../index.md)
