# WSSymbol

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L153)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS symbols using the MathLink Julia package.

**WSSymbol is a domain constructor.**  
**Abbreviation for WSSymbol is WSSYM**  
**51 names for 81 operations in this domain.**

## Signatures

```fricas
 ?=? : (%, %) -> Boolean    WComplex : () -> %
 WFailure : () -> %    WFalse : () -> %
 WFormat : () -> %    WInteger : () -> %
 WList : () -> %    WMissing : () -> %
 WNone : () -> %    WRational : () -> %
 WReal : () -> %    WRule : () -> %
 WString : () -> %    WSymbol : () -> %
 WTrue : () -> %    coerce : Boolean -> %
 coerce : String -> %    coerce : Symbol -> %
 coerce : % -> Boolean    coerce : % -> JLObject
 coerce : % -> OutputForm    coerce : % -> Symbol
 coerce : % -> WSExpression    convert : % -> String
 elt : (%, List(WSExpression)) -> WSExpression    elt : (%, WSExpression) -> WSExpression
 elt : (%, WSExpression, WSExpression) -> WSExpression    elt : (%, WSExpression, WSExpression, WSExpression) -> WSExpression
 elt : (%, WSExpression, WSExpression, WSExpression, WSExpression) -> WSExpression    elt : (%, WSExpression, WSExpression, WSExpression, WSExpression, WSExpression) -> WSExpression
 jWSInterpret : String -> %    jWSInterpret : (String, String) -> %
 jWSInterpret : (String, String, String) -> %    jWSSym : String -> %
 jWSSym : Symbol -> %    jlAbout : % -> Void
 jlApply : (String, %) -> JLObject    jlApply : (String, %, %) -> JLObject
 jlApply : (String, %, %, %) -> JLObject    jlApply : (String, %, %, %, %) -> JLObject
 jlApply : (String, %, %, %, %, %) -> JLObject    jlDisplay : % -> Void
 jlDump : JLObject -> Void    jlEval : % -> %
 jlFieldNames : % -> JLObject    jlGetField : (%, JLSymbol) -> JLObject
 jlGetJuliaIndex : % -> String    jlGetProperty : (%, JLSymbol) -> JLObject
 jlHead : % -> WSSymbol    jlId : % -> Integer
 jlNames : % -> JLObject    jlObject : () -> String
 jlPropertyNames : % -> JLObject    jlRef : % -> SExpression
 jlSymbolic : % -> String    jlText : (%, String) -> List(String)
 jlType : % -> Symbol    jlWSApply : (String, %) -> WSExpression
 jlWSApply : (String, %, %) -> WSExpression    jlWSApply : (String, %, %, %) -> WSExpression
 jlWSApply : (String, %, %, %, %) -> WSExpression    jlWSApply : (String, %, %, %, %, %) -> WSExpression
 jlWSApply : (String, List(%)) -> WSExpression    jlWSEval : (String, %) -> WSExpression
 jlWSEval : (String, %, %) -> WSExpression    jlWSEval : (String, %, %, %) -> WSExpression
 jlWSEval : (String, %, %, %, %) -> WSExpression    jlWSEval : (String, %, %, %, %, %) -> WSExpression
 jlWSEval : (String, List(%)) -> WSExpression    jlimref : String -> %
 jlref : String -> %    latex : % -> String
 missing? : % -> Boolean    mutable? : % -> Boolean
 nothing? : % -> Boolean    numeric : % -> WSExpression
 numeric : (%, PositiveInteger) -> WSExpression    numeric? : % -> Boolean
 string : % -> String    toString : % -> String
 ?~=? : (%, %) -> Boolean
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`WComplex`](#wcomplex) | WComplex() returns the WS Complex symbol. |
| [`WFailure`](#wfailure) | WFailure() returns the WS Failure symbol. |
| [`WFalse`](#wfalse) | WFalse() returns the WS False symbol. |
| [`WFormat`](#wformat) | WFormat() returns the WS Format symbol. |
| [`WInteger`](#winteger) | WInteger() returns the WS Integer symbol. |
| [`WList`](#wlist) | WList() returns the WS List symbol. |
| [`WMissing`](#wmissing) | WMissing() returns the WS Missing symbol. |
| [`WNone`](#wnone) | WNone() returns the WS None symbol. |
| [`WRational`](#wrational) | WRational() returns the WS Rational symbol. |
| [`WReal`](#wreal) | WReal() returns the WS Real symbol. |
| [`WRule`](#wrule) | WRule() returns the WS Rule symbol. |
| [`WString`](#wstring) | WString() returns the WS String symbol. |
| [`WSymbol`](#wsymbol) | WSymbol() returns the WS Symbol symbol. |
| [`WTrue`](#wtrue) | WTrue() returns the WS True symbol. |
| [`coerce`](#coerce) | coerce(bool) coerces bool to a Julia WS boolean. |
| [`convert`](#convert) | convert(a) transforms a into an element of S. |
| [`elt`](#elt) | elt(sym, list) applies the symbol sym to a list of arguments, evaluating it. |
| [`jWSInterpret`](#jwsinterpret) | jWSInterpret(form) interprets form. |
| [`jWSSym`](#jwssym) | jWSSym(str) constructs str as a WSSymbol. |
| [`jlAbout`](#jlabout) | jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia. |
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
| [`jlNames`](#jlnames) | jlNames(obj) returns the names of obj depending of the type of obj. |
| [`jlObject`](#jlobject) | jlObject() returns the internal Julia name of the Julia module used. For example:... |
| [`jlPropertyNames`](#jlpropertynames) | jlPropertyNames(obj) returns the property/element names of obj. |
| [`jlRef`](#jlref) | jlRef(obj) returns the internal Lisp representation of the Julia object obj. |
| [`jlSymbolic`](#jlsymbolic) | jlSymbolic(expr) returns the symbolic 'FullForm'. |
| [`jlText`](#jltext) | jlText(obj, mimest) returns the text representation of obj as a list of String lines with ... |
| [`jlType`](#jltype) | jlType(obj) returns the Julia type of obj. |
| [`jlWSApply`](#jlwsapply) | jlWSApply(sym, x) creates an unevaluated Wolfram expression sym[x]. |
| [`jlWSEval`](#jlwseval) | jlWSEval(func, x) evaluates the Wolfram function func on x. |
| [`jlimref`](#jlimref) | jlimref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia im... |
| [`jlref`](#jlref) | jlref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia muta... |
| [`latex`](#latex) | latex(s) returns a LaTeX-printable output representation of s. |
| [`missing?`](#missing) | missing?(obj) checks whether or not obj is missing. |
| [`mutable?`](#mutable) | mutable?(obj) checks whether or not obj is mutable. |
| [`nothing?`](#nothing) | nothing?(obj) checks whether or not obj is nothing. |
| [`numeric`](#numeric) | numeric(expr) returns numerical expr if possible. |
| [`numeric?`](#numeric) | numeric?(x) checks whether or not x is or would yield a number. |
| [`string`](#string) | string(jt) returns the string representation of jt. |
| [`toString`](#tostring) | toString(obj) returns the string representation of obj. |
| [`~=`](#op-neq) | Operation defined in WSSymbol |

### Detailed Documentation

#### `WComplex` <a id="wcomplex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L167)\]

WComplex() returns the WS Complex symbol.

- **Signature**: `() -> %`

#### `WFailure` <a id="wfailure"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L177)\]

WFailure() returns the WS Failure symbol.

- **Signature**: `() -> %`

#### `WFalse` <a id="wfalse"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L175)\]

WFalse() returns the WS False symbol.

- **Signature**: `() -> %`

#### `WFormat` <a id="wformat"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L191)\]

WFormat() returns the WS Format symbol.

- **Signature**: `() -> %`

#### `WInteger` <a id="winteger"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L171)\]

WInteger() returns the WS Integer symbol.

- **Signature**: `() -> %`

#### `WList` <a id="wlist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L181)\]

WList() returns the WS List symbol.

- **Signature**: `() -> %`

#### `WMissing` <a id="wmissing"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L187)\]

WMissing() returns the WS Missing symbol.

- **Signature**: `() -> %`

#### `WNone` <a id="wnone"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L189)\]

WNone() returns the WS None symbol.

- **Signature**: `() -> %`

#### `WRational` <a id="wrational"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L169)\]

WRational() returns the WS Rational symbol.

- **Signature**: `() -> %`

#### `WReal` <a id="wreal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L165)\]

WReal() returns the WS Real symbol.

- **Signature**: `() -> %`

#### `WRule` <a id="wrule"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L179)\]

WRule() returns the WS Rule symbol.

- **Signature**: `() -> %`

#### `WString` <a id="wstring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L183)\]

WString() returns the WS String symbol.

- **Signature**: `() -> %`

#### `WSymbol` <a id="wsymbol"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L185)\]

WSymbol() returns the WS Symbol symbol.

- **Signature**: `() -> %`

#### `WTrue` <a id="wtrue"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L173)\]

WTrue() returns the WS True symbol.

- **Signature**: `() -> %`

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L193)\]

##### `coerce` : `Boolean -> %`

coerce(bool) coerces bool to a Julia WS boolean.

##### `coerce` : `String -> %`

coerce(str) is a convenience function to coerce a String.

##### `coerce` : `Symbol -> %`

coerce(sym) is a convenience function to coerce a Symbol.

##### `coerce` : `% -> S`

coerce(a) transforms a into an element of S.

- **From**: `CoercibleTo(S)`

##### `coerce` : `% -> Boolean`

coerce(sym) coerces sym to a FriCAS Boolean. Sym must be a Julia WS boolean

##### `coerce` : `% -> JLObject`

coerce(obj) coerces obj to JLObject. Convenience function.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `coerce` : `% -> Symbol`

coerce(sym) is a convenience function to coerce sym to a FriCAS Symbol.

##### `coerce` : `% -> WSExpression`

coerce(expr) returns the WSExpression representation of expr.

- **From**: [`WSObject`](WSObject.md)

##### `coerce` : `% -> OutputForm`

Operation defined in WSSymbol.

#### `convert` <a id="convert"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L424)\]

##### `convert` : `% -> S`

convert(a) transforms a into an element of S.

- **From**: `ConvertibleTo(S)`

##### `convert` : `% -> String`

Operation defined in WSSymbol.

#### `elt` <a id="elt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L209)\]

##### `elt` : `(%, List(WSExpression)) -> WSExpression`

elt(sym, list) applies the symbol sym to a list of arguments, evaluating it.

##### `elt` : `(%, WSExpression) -> WSExpression`

elt(sym, x) applies the symbol sym to x, evaluating it.

##### `elt` : `(%, WSExpression, WSExpression) -> WSExpression`

elt(sym, x, y) applies the symbol sym to x and y, evaluating it.

##### `elt` : `(%, WSExpression, WSExpression, WSExpression) -> WSExpression`

elt(sym, x, y, z) applies the symbol sym to x, y, and z, evaluating it.

##### `elt` : `(%, WSExpression, WSExpression, WSExpression, WSExpression) -> WSExpression`

elt(sym, a, b, c, d) applies the symbol sym to 4 arguments, evaluating it.

##### `elt` : `(%, WSExpression, WSExpression, WSExpression, WSExpression, WSExpression) -> WSExpression`

elt(sym, a, b, c, d, e) applies the symbol sym to 5 arguments, evaluating it.

#### `jWSInterpret` <a id="jwsinterpret"></a>

##### `jWSInterpret` : `String -> %`

jWSInterpret(form) interprets form.

- **From**: [`WSObject`](WSObject.md)

##### `jWSInterpret` : `(String, String) -> %`

jWSInterpret(Type|Form, Expr) interprets Expr to be of type Type or Form using the WS Language. For example:

```fricas
jWSInterpret("Number","3.2")@WSREAL
jWSInterpret("Real","3.2")@WSREAL
jWSInterpret("Location","Lille")$WSEXPR
See jWSExpression "$InterpreterTypes"
```

- **From**: [`WSObject`](WSObject.md)

##### `jWSInterpret` : `(String, String, String) -> %`

jWSInterpret(form1,form2,form3) interprets forms.

- **From**: [`WSObject`](WSObject.md)

#### `jWSSym` <a id="jwssym"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L205)\]

##### `jWSSym` : `String -> %`

jWSSym(str) constructs str as a WSSymbol.

##### `jWSSym` : `Symbol -> %`

jWSSym(sym) constructs sym as a WSSymbol.

#### `jlAbout` <a id="jlabout"></a>

jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia.

- **Signature**: `% -> Void`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlApply` <a id="jlapply"></a>

##### `jlApply` : `(String, %) -> JLObject`

jlApply(func, obj) applies the function func with obj as parameter and returns the result as a FriCAS JLObject. For example, using JLMatrix(JLObjFloat64):

```fricas
M:=nrand(4,4);
jlApply("svd", M::JLMatrix(JLObjFloat64)).S
should be "equivalent" to svdvals(M).
```

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlApply` : `(String, %, %) -> JLObject`

jlApply(func, obj1, obj2) applies the function func with obj1 and obj2 as parameters and returns the result as a FriCAS JLObject. For example (equivalent to map(cos, v)):

```fricas
v:=urand01(5)$JLVector(JLFloat)
jlApply("map", "cos", coerce v)
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

#### `jlNames` <a id="jlnames"></a>

jlNames(obj) returns the names of obj depending of the type of obj.

- **Signature**: `% -> JLObject`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlObject` <a id="jlobject"></a>

jlObject() returns the internal Julia name of the Julia module used. For example:

```fricas
jlObject()$NMUnivariatePolynomial(NINT,'x)
```

- **Signature**: `() -> String`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlPropertyNames` <a id="jlpropertynames"></a>

jlPropertyNames(obj) returns the property/element names of obj.

- **Signature**: `% -> JLObject`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlRef` <a id="jlref"></a>

jlRef(obj) returns the internal Lisp representation of the Julia object obj.

- **Signature**: `% -> SExpression`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlSymbolic` <a id="jlsymbolic"></a>

jlSymbolic(expr) returns the symbolic 'FullForm'.

- **Signature**: `% -> String`
- **From**: [`WSObject`](WSObject.md)

#### `jlText` <a id="jltext"></a>

jlText(obj, mimest) returns the text representation of obj as a list of String lines with mime subtype mimest, for example "plain" for "text/plain" or "html" for "text/html" if is implemented at Julia level. Use internally the 'show' method. For example:

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

#### `jlWSApply` <a id="jlwsapply"></a>

##### `jlWSApply` : `(String, %) -> WSExpression`

jlWSApply(sym, x) creates an unevaluated Wolfram expression sym[x].

- **From**: [`WSObject`](WSObject.md)

##### `jlWSApply` : `(String, %, %) -> WSExpression`

jlWSApply(sym, x, y) creates an unevaluated Wolfram expression sym[x, y].

- **From**: [`WSObject`](WSObject.md)

##### `jlWSApply` : `(String, %, %, %) -> WSExpression`

jlWSApply(sym, x, y, z) creates an unevaluated Wolfram expression sym[x, y, z].

- **From**: [`WSObject`](WSObject.md)

##### `jlWSApply` : `(String, %, %, %, %) -> WSExpression`

jlWSApply(sym, a, b, c, d) creates an unevaluated Wolfram expression on 4 arguments.

- **From**: [`WSObject`](WSObject.md)

##### `jlWSApply` : `(String, %, %, %, %, %) -> WSExpression`

jlWSApply(sym, a, b, c, d, e) creates an unevaluated Wolfram expression on 5 arguments.

- **From**: [`WSObject`](WSObject.md)

##### `jlWSApply` : `(String, List(%)) -> WSExpression`

jlWSApply(sym, list) creates an unevaluated Wolfram expression sym[list...].

- **From**: [`WSObject`](WSObject.md)

#### `jlWSEval` <a id="jlwseval"></a>

##### `jlWSEval` : `(String, %) -> WSExpression`

jlWSEval(func, x) evaluates the Wolfram function func on x.

- **From**: [`WSObject`](WSObject.md)

##### `jlWSEval` : `(String, %, %) -> WSExpression`

jlWSEval(func, x, y) evaluates the Wolfram function func on x and y.

- **From**: [`WSObject`](WSObject.md)

##### `jlWSEval` : `(String, %, %, %) -> WSExpression`

jlWSEval(func, x, y, z) evaluates the Wolfram function func on x, y, and z.

- **From**: [`WSObject`](WSObject.md)

##### `jlWSEval` : `(String, %, %, %, %) -> WSExpression`

jlWSEval(func, a, b, c, d) evaluates the Wolfram function func on 4 arguments.

- **From**: [`WSObject`](WSObject.md)

##### `jlWSEval` : `(String, %, %, %, %, %) -> WSExpression`

jlWSEval(func, a, b, c, d, e) evaluates the Wolfram function func on 5 arguments.

- **From**: [`WSObject`](WSObject.md)

##### `jlWSEval` : `(String, List(%)) -> WSExpression`

jlWSEval(func, list) evaluates the Wolfram function func on a list of arguments.

- **From**: [`WSObject`](WSObject.md)

#### `jlimref` <a id="jlimref"></a>

jlimref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia immutable object wrapped in a Julia RefValueAny

- **Signature**: `String -> %`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlref` <a id="jlref"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L426)\]

jlref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia mutable object.

- **Signature**: `String -> %`
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

#### `numeric` <a id="numeric"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L524)\]

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

#### `string` <a id="string"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L507)\]

string(jt) returns the string representation of jt.

- **Signature**: `% -> String`
- **From**: [`JLType`](JLType.md)

#### `toString` <a id="tostring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L783)\]

toString(obj) returns the string representation of obj.

- **Signature**: `% -> String`
- **From**: [`WSObject`](WSObject.md)

#### `~=` <a id="op-neq"></a>

Operation defined in WSSymbol.

- **Signature**: `(%, %) -> Boolean`

---

[Back to Index](../index.md)
