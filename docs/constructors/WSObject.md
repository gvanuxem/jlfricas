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
 jlId : % -> JLInt64    jlObject : () -> String
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
| [`jWSInterpret`](#jwsinterpret) | jWSInterpret(form) interprets form. |
| [`jlEval`](#jleval) | jlEval(expr) evaluates expr using the WS Transport Protocol. |
| [`jlHead`](#jlhead) | jlHead(expr) returns the Head type of expr. |
| [`jlSymbolic`](#jlsymbolic) | jlSymbolic(expr) returns the symbolic 'FullForm'. |
| [`nothing?`](#nothing) | nothing?(obj) checks whether or not obj is nothing. |
| [`numeric`](#numeric) | numeric(expr) returns numerical expr if possible. |
| [`numeric?`](#numeric) | numeric?(x) checks whether or not x is or would yield a number. |
| [`string`](#string) | string(obj) returns the string representation of obj in the Julia WS format. |
| [`toString`](#tostring) | toString(obj) returns the string representation of obj. |

### Detailed Documentation

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L41)\]

coerce(expr) returns the WSExpression representation of expr.

- **Signature**: `% -> WSExpression`

#### `jWSInterpret` <a id="jwsinterpret"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L10)\]

##### `jWSInterpret` : `String -> %`

jWSInterpret(form) interprets form.

##### `jWSInterpret` : `(String, String) -> %`

jWSInterpret(Type|Form, Expr) interprets Expr to be of type Type or Form using the WS Language. For example: \example{jWSInterpret("Number","3.2")@WSREAL} \example{jWSInterpret("Real","3.2")@WSREAL} \example{jWSInterpret("Location","Lille")$WSEXPR} See jWSExpr "\$InterpreterTypes"

##### `jWSInterpret` : `(String, String, String) -> %`

jWSInterpret(form1,form2,form3) interprets forms.

#### `jlEval` <a id="jleval"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L23)\]

jlEval(expr) evaluates expr using the WS Transport Protocol.

- **Signature**: `% -> %`

#### `jlHead` <a id="jlhead"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L34)\]

jlHead(expr) returns the Head type of expr.

- **Signature**: `% -> WSSymbol`

#### `jlSymbolic` <a id="jlsymbolic"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L25)\]

jlSymbolic(expr) returns the symbolic 'FullForm'.

- **Signature**: `% -> String`

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
---
[Back to Index](../index.md)
