# WSSymbol

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L115)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS symbols using the MathLink Julia package.

**WSSymbol is a domain constructor.**  
**Abbreviation for WSSymbol is WSSYM**  
**47 names for 62 operations in this domain.**

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
 jWSInterpret : String -> %    jWSInterpret : (String, String) -> %
 jWSInterpret : (String, String, String) -> %    jWSSym : String -> %
 jWSSym : Symbol -> %    jlAbout : % -> Void
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
 latex : % -> String    missing? : % -> Boolean
 mutable? : % -> Boolean    nothing? : % -> Boolean
 numeric : % -> WSExpression    numeric : (%, PositiveInteger) -> WSExpression
 numeric? : % -> Boolean    string : % -> String
 toString : % -> String    ?~=? : (%, %) -> Boolean
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
| [`coerce`](#coerce) | coerce(sym) coerces sym to a FriCAS Boolean. Sym must be a Julia WS boolean |
| [`jWSSym`](#jwssym) | jWSSym(sym) constructs sym as a WSSymbol. |

### Detailed Documentation

#### `WComplex` <a id="wcomplex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L128)\]

WComplex() returns the WS Complex symbol.

- **Signature**: `() -> %`

#### `WFailure` <a id="wfailure"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L138)\]

WFailure() returns the WS Failure symbol.

- **Signature**: `() -> %`

#### `WFalse` <a id="wfalse"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L136)\]

WFalse() returns the WS False symbol.

- **Signature**: `() -> %`

#### `WFormat` <a id="wformat"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L152)\]

WFormat() returns the WS Format symbol.

- **Signature**: `() -> %`

#### `WInteger` <a id="winteger"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L132)\]

WInteger() returns the WS Integer symbol.

- **Signature**: `() -> %`

#### `WList` <a id="wlist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L142)\]

WList() returns the WS List symbol.

- **Signature**: `() -> %`

#### `WMissing` <a id="wmissing"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L148)\]

WMissing() returns the WS Missing symbol.

- **Signature**: `() -> %`

#### `WNone` <a id="wnone"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L150)\]

WNone() returns the WS None symbol.

- **Signature**: `() -> %`

#### `WRational` <a id="wrational"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L130)\]

WRational() returns the WS Rational symbol.

- **Signature**: `() -> %`

#### `WReal` <a id="wreal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L126)\]

WReal() returns the WS Real symbol.

- **Signature**: `() -> %`

#### `WRule` <a id="wrule"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L140)\]

WRule() returns the WS Rule symbol.

- **Signature**: `() -> %`

#### `WString` <a id="wstring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L144)\]

WString() returns the WS String symbol.

- **Signature**: `() -> %`

#### `WSymbol` <a id="wsymbol"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L146)\]

WSymbol() returns the WS Symbol symbol.

- **Signature**: `() -> %`

#### `WTrue` <a id="wtrue"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L134)\]

WTrue() returns the WS True symbol.

- **Signature**: `() -> %`

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L154)\]

##### `coerce` : `% -> Boolean`

coerce(sym) coerces sym to a FriCAS Boolean. Sym must be a Julia WS boolean

##### `coerce` : `Boolean -> %`

coerce(bool) coerces bool to a Julia WS boolean.

##### `coerce` : `String -> %`

coerce(str) is a convenience function to coerce a String.

##### `coerce` : `Symbol -> %`

coerce(sym) is a convenience function to coerce a Symbol.

##### `coerce` : `% -> Symbol`

coerce(sym) is a convenience function to coerce sym to a FriCAS Symbol.

#### `jWSSym` <a id="jwssym"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L166)\]

##### `jWSSym` : `Symbol -> %`

jWSSym(sym) constructs sym as a WSSymbol.

##### `jWSSym` : `String -> %`

jWSSym(str) constructs str as a WSSymbol.
---
[Back to Index](../index.md)
