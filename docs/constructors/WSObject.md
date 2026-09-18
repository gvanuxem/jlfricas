# WSObject

> **Kind**: Category &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS Object category using the Wolfram Symbol Transport Protocol.

**WSObject is a category constructor.**  
**Abbreviation for WSObject is WSO**

## Signatures

```fricas
 ?=? : (%, %) -> Boolean    coerce : % -> WSExpression
 coerce : % -> JLObject    coerce : % -> OutputForm
 convert : % -> String    jWSInterpret : (String, String, String) -> %
 jWSInterpret : (String, String) -> %    jWSInterpret : String -> %
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
 jlref : String -> %    latex : % -> String
 missing? : % -> Boolean    mutable? : % -> Boolean
 nothing? : % -> Boolean    numeric : (%, PositiveInteger) -> WSExpression
 numeric : % -> WSExpression    numeric? : % -> Boolean
 string : % -> String    toString : % -> String
 ?~=? : (%, %) -> Boolean
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`coerce`](#coerce) | coerce(expr) returns the WSExpression representation of expr. |
| [`convert`](#convert) | convert(a) transforms a into an element of S. |
| [`jWSInterpret`](#jwsinterpret) | jWSInterpret(form) interprets form. |
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
| [`latex`](#latex) | latex(s) returns a LaTeX-printable output representation of s. |
| [`missing?`](#missing) | missing?(obj) checks whether or not obj is missing. |
| [`mutable?`](#mutable) | mutable?(obj) checks whether or not obj is mutable. |
| [`nothing?`](#nothing) | nothing?(obj) checks whether or not obj is nothing. |
| [`numeric`](#numeric) | numeric(expr) returns numerical expr if possible. |
| [`numeric?`](#numeric) | numeric?(x) checks whether or not x is or would yield a number. |
| [`string`](#string) | string(obj) returns the string representation of obj in the Julia WS format. |
| [`toString`](#tostring) | toString(obj) returns the string representation of obj. |
| [`~=`](#op-neq) | Operation defined in WSObject |

### Detailed Documentation

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L41)\]

##### `coerce` : `% -> WSExpression`

coerce(expr) returns the WSExpression representation of expr.

##### `coerce` : `% -> S`

coerce(a) transforms a into an element of S.

- **From**: `CoercibleTo(S)`

##### `coerce` : `% -> JLObject`

coerce(obj) coerces obj to JLObject. Convenience function.

- **From**: [`JLObjectType`](JLObjectType.md)

#### `convert` <a id="convert"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L377)\]

convert(a) transforms a into an element of S.

- **Signature**: `% -> String`
- **From**: `ConvertibleTo(S)`

#### `jWSInterpret` <a id="jwsinterpret"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L10)\]

##### `jWSInterpret` : `String -> %`

jWSInterpret(form) interprets form.

##### `jWSInterpret` : `(String, String) -> %`

jWSInterpret(Type|Form, Expr) interprets Expr to be of type Type or Form using the WS Language. For example:

```fricas
jWSInterpret("Number","3.2")@WSREAL
jWSInterpret("Real","3.2")@WSREAL
jWSInterpret("Location","Lille")$WSEXPR
```

See jWSExpr "$InterpreterTypes"

##### `jWSInterpret` : `(String, String, String) -> %`

jWSInterpret(form1,form2,form3) interprets forms.

#### `jlAbout` <a id="jlabout"></a>

jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia. In the Julia interpreter, ent er in the package management mode with ']', and issue: pkg> add "https://github.com/tecosaur/About.jl"

- **Signature**: `% -> Void`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlApply` <a id="jlapply"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L58)\]

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

#### `jlEval` <a id="jleval"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L23)\]

jlEval(expr) evaluates expr using the WS Transport Protocol.

- **Signature**: `% -> %`

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

#### `jlHead` <a id="jlhead"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L34)\]

jlHead(expr) returns the Head type of expr.

- **Signature**: `% -> WSSymbol`

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

#### `jlSymbolic` <a id="jlsymbolic"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L25)\]

jlSymbolic(expr) returns the symbolic 'FullForm'.

- **Signature**: `% -> String`

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

#### `jlref` <a id="jlref"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L57)\]

##### `jlref` : `% -> SExpression`

jlRef(obj) returns the internal Lisp representation of the Julia object obj.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlref` : `String -> %`

jlref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia mutable object.

- **From**: [`JLObjectType`](JLObjectType.md)

#### `latex` <a id="latex"></a>

latex(s) returns a LaTeX-printable output representation of s.

- **Signature**: `% -> String`
- **From**: `SetCategory`

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

#### `numeric` <a id="numeric"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L27)\]

##### `numeric` : `% -> WSExpression`

numeric(expr) returns numerical expr if possible.

##### `numeric` : `(%, PositiveInteger) -> WSExpression`

numeric(expr, prec) returns the numerical expr with prec digits of precision if possible.

#### `numeric?` <a id="numeric"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L32)\]

numeric?(x) checks whether or not x is or would yield a number.

- **Signature**: `% -> Boolean`

#### `string` <a id="string"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L38)\]

string(obj) returns the string representation of obj in the Julia WS format.

- **Signature**: `% -> String`

#### `toString` <a id="tostring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L36)\]

toString(obj) returns the string representation of obj.

- **Signature**: `% -> String`

#### `~=` <a id="op-neq"></a>

Operation defined in WSObject.

- **Signature**: `(%, %) -> Boolean`
---
[Back to Index](../index.md)
