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
 jlId : % -> Integer    jlObject : () -> String
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
| [`#`](#op-hash) | #(agg) returns the length of agg. 0 if it is a scalar, an index for example. |
| [`accumulate`](#accumulate) | accumulate(agg) returns the partial sums of elements in agg. |
| [`append`](#append) | append(l, elt) appends elt to the list l. |
| [`coerce`](#coerce) | coerce(l) coerces l to a FriCAS List. |
| [`convert`](#convert) | convert(a) transforms a into an element of S. |
| [`delete`](#delete) | delete(l, inds) deletes element(s) of the list l at index(es) inds. |
| [`differences`](#differences) | differences(agg) returns the differences between adjacent elements in agg. |
| [`dimensions`](#dimensions) | dimensions(agg) returns dimensions of agg. |
| [`elt`](#elt) | elt(op, l) creates a form for application of op to list of arguments l. |
| [`extract`](#extract) | extract(agg, parts) extracts parts of agg. |
| [`first`](#first) | first(agg) returns the first element of agg. |
| [`insert`](#insert) | insert(l, elt, ind) inserts elt to the list l at index ind. |
| [`intersection`](#intersection) | intersection(agg1, agg2) is the intersection operator. |
| [`jWSAggregate`](#jwsaggregate) | jWSAggregate(list) constructs agg to a WSAggregate. |
| [`jWSInterpret`](#jwsinterpret) | jWSInterpret(form) interprets form. |
| [`jWSList`](#jwslist) | jWSList(list) constructs list as a WSList. |
| [`jlAbout`](#jlabout) | jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia.... |
| [`jlApply`](#jlapply) | jlApply(func, obj) applies the function func with obj as parameter and returns the result ... |
| [`jlDisplay`](#jldisplay) | jlDisplay(v) pretty prints v (à la Julia). |
| [`jlDump`](#jldump) | jlDump(obj) dumps (shows) the Julia object (internal structure with type). |
| [`jlEval`](#jleval) | jlEval(expr) evaluates expr using the WS Transport Protocol. |
| [`jlFieldNames`](#jlfieldnames) | jlFieldNames(obj) returns the field names of obj. |
| [`jlGetField`](#jlgetfield) | jlGetField(obj, sym) returns the property/element sym of obj. |
| [`jlGetJuliaIndex`](#jlgetjuliaindex) | jlGetJuliaIndex(obj) returns the string that allows access to the Julia indexed dictionary... |
| [`jlGetProperty`](#jlgetproperty) | jlGetProperty(obj, sym) returns the property/element sym of obj. |
| [`jlHead`](#jlhead) | jlHead(expr) returns the Head type of expr. |
| [`jlId`](#jlid) | jlId(obj) returns the Julia indexed dictionary index referencing the object obj. |
| [`jlObject`](#jlobject) | jlObject() returns the internal Julia name of the Julia module used. For example:... |
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
| [`length`](#length) | length(agg) returns the length of agg. 0 if it is a scalar, an index for example. |
| [`missing?`](#missing) | missing?(obj) checks whether or not obj is missing. |
| [`mutable?`](#mutable) | mutable?(obj) checks whether or not obj is mutable. |
| [`nothing?`](#nothing) | nothing?(obj) checks whether or not obj is nothing. |
| [`numeric`](#numeric) | numeric(expr) returns numerical expr if possible. |
| [`numeric?`](#numeric) | numeric?(x) checks whether or not x is or would yield a number. |
| [`part`](#part) | part(agg,i) returns the i-th element. |
| [`prepend`](#prepend) | prepend(l, elt) prepends elt to the list l. |
| [`qelt`](#qelt) | qelt(agg,i) returns the i-th element. No checks are done at the FriCAS level. |
| [`qsetelt`](#qsetelt) | qsetelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem. No c... |
| [`qsetelt!`](#qsetelt) | qsetelt!(l,i,elem) returns l with i-th element replaced by elem. No checks are done at the... |
| [`removeDuplicates`](#removeduplicates) | removeDuplicates(agg) removes duplicate elements. |
| [`replacePart`](#replacepart) | replacePart(expr, part) replaces expr using rule(s) expressing position(s). |
| [`rest`](#rest) | rest(agg) returns agg without the first element. |
| [`reverse`](#reverse) | reverse(agg) reverses the elements of agg. |
| [`riffle`](#riffle) | riffle(agg, elts) riffles (interleaves) element(s) elts i.e. inserts them. |
| [`setIntersection`](#setintersection) | setIntersection(agg1, agg2) is the intersection set operator. |
| [`setelt`](#setelt) | setelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem. |
| [`setelt!`](#setelt) | setelt!(l,i,elem) returns l with i-th element replaced by elem. |
| [`sort`](#sort) | sort(agg) returns agg in sorted order. For complex numbers, sorts them by their real part ... |
| [`sorted?`](#sorted) | sorted?(agg) checks whether agg is sorted or not. |
| [`string`](#string) | string(jt) returns the string representation of jt. |
| [`take`](#take) | take(l,i) returns the first i elements. |
| [`toString`](#tostring) | toString(obj) returns the string representation of obj. |
| [`total`](#total) | total(agg) returns the sum of the elements in agg. |
| [`union`](#union) | union(agg1, agg2) is the union set operator. Elements are sorted on output. |
| [`~=`](#op-neq) | Operation defined in WSList |

### Detailed Documentation

#### `#` <a id="op-hash"></a>

#(agg) returns the length of agg. 0 if it is a scalar, an index for example.

- **Signature**: `% -> WSInteger`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `accumulate` <a id="accumulate"></a>

accumulate(agg) returns the partial sums of elements in agg.

- **Signature**: `% -> % if E has WSNUM`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `append` <a id="append"></a>

append(l, elt) appends elt to the list l.

- **Signature**: `(%, E) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L217)\]

##### `coerce` : `% -> List(E)`

coerce(l) coerces l to a FriCAS List.

##### `coerce` : `List(E) -> %`

coerce(list) tries to coerce list to a WSAggregate.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `coerce` : `% -> S`

coerce(a) transforms a into an element of S.

- **From**: `CoercibleTo(S)`

##### `coerce` : `% -> JLObject`

coerce(obj) coerces obj to JLObject. Convenience function.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `coerce` : `% -> WSExpression`

coerce(expr) returns the WSExpression representation of expr.

- **From**: [`WSObject`](WSObject.md)

#### `convert` <a id="convert"></a>

convert(a) transforms a into an element of S.

- **Signature**: `% -> String`
- **From**: `ConvertibleTo(S)`

#### `delete` <a id="delete"></a>

delete(l, inds) deletes element(s) of the list l at index(es) inds.

- **Signature**: `(%, WSList(WSInteger)) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `differences` <a id="differences"></a>

differences(agg) returns the differences between adjacent elements in agg.

- **Signature**: `% -> % if E has WSNUM`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `dimensions` <a id="dimensions"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L551)\]

dimensions(agg) returns dimensions of agg.

- **Signature**: `% -> WSList(WSInteger)`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `elt` <a id="elt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L399)\]

##### `elt` : `(%, List(%)) -> %`

elt(op, l) creates a form for application of op to list of arguments l.

- **From**: `OutputForm`

##### `elt` : `(%, Integer) -> E`

elt(agg,i) returns the i-th element.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `extract` <a id="extract"></a>

extract(agg, parts) extracts parts of agg.

- **Signature**: `(%, WSExpression) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `first` <a id="first"></a>

first(agg) returns the first element of agg.

- **Signature**: `% -> E`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `insert` <a id="insert"></a>

insert(l, elt, ind) inserts elt to the list l at index ind.

- **Signature**: `(%, E, WSInteger) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

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

```fricas
jWSInterpret("Number","3.2")@WSREAL
jWSInterpret("Real","3.2")@WSREAL
jWSInterpret("L
ocation","Lille")$WSEXPR
See jWSExpr "$InterpreterTypes"
```

- **From**: [`WSObject`](WSObject.md)

##### `jWSInterpret` : `(String, String, String) -> %`

jWSInterpret(form1,form2,form3) interprets forms.

- **From**: [`WSObject`](WSObject.md)

#### `jWSList` <a id="jwslist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L219)\]

##### `jWSList` : `List(E) -> %`

jWSList(list) constructs list as a WSList.

##### `jWSList` : `String -> %`

jWSList(str) constructs str as a WSList. str must be in the WS language.

#### `jlAbout` <a id="jlabout"></a>

jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia. In the Julia interpreter, ent er in the package management mode with ']', and issue: pkg> add "https://github.com/tecosaur/About.jl"

- **Signature**: `% -> Void`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlApply` <a id="jlapply"></a>

##### `jlApply` : `(String, %) -> JLObject`

jlApply(func, obj) applies the function func with obj as parameter and returns the result as a FriCAS JLObject. For exam ple, using JLMatrix(JLObjFloat64):

```fricas
M:=nrand(4,4);
jlApply("svd", M::JLMatrix(JLObjFloat64)).S
shou
ld be "equivalent" to svdvals(M).
```

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlApply` : `(String, %, %) -> JLObject`

jlApply(func, obj1, obj2) applies the function func with obj1 and obj2 as parameters and returns the result as a FriCAS JLObject. For example (equivalent to map(cos, v)):

```fricas
v:=urand01(5)$JLVector(JLFloat)
jlApply("map", "
cos", coerce v)
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

jlGetJuliaIndex(obj) returns the string that allows access to the Julia indexed dictionary index referencing the object obj. Convenience function for use in the interpreter (jlref). For example: jlGetJuliaIndex(df) => "getindex(refs,10)"

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

```fricas
jlObject()$NMUnivariatePolyn
omial(NINT,'x)
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

#### `length` <a id="length"></a>

length(agg) returns the length of agg. 0 if it is a scalar, an index for example.

- **Signature**: `% -> WSInteger`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `missing?` <a id="missing"></a>

missing?(obj) checks whether or not obj is missing.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `mutable?` <a id="mutable"></a>

mutable?(obj) checks whether or not obj is mutable.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

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

#### `part` <a id="part"></a>

part(agg,i) returns the i-th element.

- **Signature**: `(%, WSInteger) -> E`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `prepend` <a id="prepend"></a>

prepend(l, elt) prepends elt to the list l.

- **Signature**: `(%, E) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `qelt` <a id="qelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L401)\]

qelt(agg,i) returns the i-th element. No checks are done at the FriCAS level.

- **Signature**: `(%, Integer) -> E`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `qsetelt` <a id="qsetelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L407)\]

qsetelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem. No checks are done at the FriCAS l evel.

- **Signature**: `(%, Integer, E) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `qsetelt!` <a id="qsetelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L410)\]

qsetelt!(l,i,elem) returns l with i-th element replaced by elem. No checks are done at the FriCAS level.

- **Signature**: `(%, Integer, E) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `removeDuplicates` <a id="removeduplicates"></a>

removeDuplicates(agg) removes duplicate elements.

- **Signature**: `% -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

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

reverse(agg) reverses the elements of agg.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `reverse` : `(%, WSInteger) -> %`

reverse(agg, lev) reverses the elements of agg at level lev.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `reverse` : `(%, WSList(WSInteger)) -> %`

reverse(agg, levels) reverses the elements of agg using levels.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `riffle` <a id="riffle"></a>

##### `riffle` : `(%, %) -> %`

riffle(agg, elts) riffles (interleaves) element(s) elts i.e. inserts them.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `riffle` : `(%, %, %) -> %`

riffle(agg, elts, inds) riffles (interleaves) element(s) elts i.e. inserts them. If inds is min, max, n inserts at posit ion min, min+n, min+2n..max.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `setIntersection` <a id="setintersection"></a>

setIntersection(agg1, agg2) is the intersection set operator.

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `setelt` <a id="setelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L404)\]

setelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem.

- **Signature**: `(%, Integer, E) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `setelt!` <a id="setelt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L599)\]

setelt!(l,i,elem) returns l with i-th element replaced by elem.

- **Signature**: `(%, Integer, E) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `sort` <a id="sort"></a>

sort(agg) returns agg in sorted order. For complex numbers, sorts them by their real part first.

- **Signature**: `% -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `sorted?` <a id="sorted"></a>

sorted?(agg) checks whether agg is sorted or not.

- **Signature**: `% -> Boolean`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `string` <a id="string"></a>

string(jt) returns the string representation of jt.

- **Signature**: `% -> String`
- **From**: [`JLType`](JLType.md)

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

#### `union` <a id="union"></a>

union(agg1, agg2) is the union set operator. Elements are sorted on output.

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `~=` <a id="op-neq"></a>

Operation defined in WSList.

- **Signature**: `(%, %) -> Boolean`
---
[Back to Index](../index.md)
