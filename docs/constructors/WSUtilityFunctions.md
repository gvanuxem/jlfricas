# WSUtilityFunctions

> **Kind**: Package &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L1)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS utility functions using the MathLink Julia package.

**WSUtilityFunctions is a package constructor.**  
**Abbreviation for WSUtilityFunctions is WSUF**

## Signatures

```fricas
 gaussianMatrix : WSReal -> WSMatrix(WSReal)    hankelMatrix : PositiveInteger -> WSMatrix(WSInteger)
 hilbertMatrix : PositiveInteger -> WSMatrix(WSRational)    identityMatrix : PositiveInteger -> WSMatrix(WSInteger)
 jWSDateObject : () -> WSExpression    jWSDateObject : WSExpression -> WSExpression
 jWSRange : WSInteger -> WSList(WSInteger)    jWSRange : (WSInteger, WSInteger) -> WSList(WSInteger)
 jlWSDateString : () -> WSExpression    jlWSDateString : WSExpression -> WSExpression
 jlWSDocumentation : Symbol -> WSExpression    jlWSExport : (String, WSExpression) -> WSExpression
 jlWSFileFormat : WSString -> WSExpression    jlWSImport : WSString -> WSExpression
 jlWSImport : (WSString, WSString) -> WSExpression    jlWSPlot : (WSExpression, WSExpression) -> WSExpression
 jlWSSeedRandom! : WSInteger -> WSExpression    jlWSSnippet : (WSExpression, WSInteger) -> WSExpression
 urand01Complex : PositiveInteger -> WSVector(WSComplex)    urand01Real : PositiveInteger -> WSVector(WSReal)
 fourierMatrix : PositiveInteger -> WSMatrix(WSExpression)
 jWSDateObject : (WSExpression, WSExpression) -> WSExpression
 jWSRange : (WSInteger, WSInteger, WSInteger) -> WSList(WSInteger)
 jlWSDateString : (WSExpression, WSExpression) -> WSExpression
 jlWSExportString : (WSExpression, WSString) -> WSExpression
 jlWSFileFormat : (WSString, WSExpression) -> WSExpression
 urand01Complex : (PositiveInteger, PositiveInteger) -> WSMatrix(WSComplex)
 urand01Real : (PositiveInteger, PositiveInteger) -> WSMatrix(WSReal)
 vandermondeMatrix : WSList(WSExpression) -> WSMatrix(WSExpression)
 vandermondeMatrix : (WSList(WSExpression), WSInteger) -> WSMatrix(WSExpression)
 zeroMatrix : (PositiveInteger, PositiveInteger) -> WSMatrix(WSInteger)
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`fourierMatrix`](#fouriermatrix) | fourierMatrix(n) returns the n x n Fourier matrix. |
| [`gaussianMatrix`](#gaussianmatrix) | gaussianMatrix(r) returns the Gaussian matrix with radius r. For example: \example{gaussia... |
| [`hankelMatrix`](#hankelmatrix) | hankelMatrix(n) returns the square Hankel matrix with integer coefficients. |
| [`hilbertMatrix`](#hilbertmatrix) | hilbertMatrix(n) returns the square Hilbert matrix. |
| [`identityMatrix`](#identitymatrix) | identityMatrix(n) returns the identity matrix of size n. |
| [`jWSDateObject`](#jwsdateobject) | jWSDateObject() returns the WSExpression object of the local date and time. |
| [`jWSRange`](#jwsrange) | jWSRange(n) returns a WSList that ranges from 1 to n. For example: \example{jWSRange(10)@W... |
| [`jlWSDateString`](#jlwsdatestring) | jlWSDateString() returns the WSExpression string of the local date and time. For example: ... |
| [`jlWSDocumentation`](#jlwsdocumentation) | jlWSDocumentation(sym) prints WS information about the symbol sym. Note that the WS langua... |
| [`jlWSExport`](#jlwsexport) | jlWSExport(file.ext, obj) exports the object obj to the file file.ext. The extension ext w... |
| [`jlWSExportString`](#jlwsexportstring) | jlWSExportString(expr, form) returns the string representation of expr in the specified fo... |
| [`jlWSFileFormat`](#jlwsfileformat) | jlWSFileFormat(src) tries to determine the format of the source src from its content. Can ... |
| [`jlWSImport`](#jlwsimport) | jlWSImport(src) imports the source src. For example: \example{file:=jlWSImport jWSString "... |
| [`jlWSPlot`](#jlwsplot) | jlWSPlot(expr, options) is the WS plot function. Since it should be run in a Wolfram noteb... |
| [`jlWSSeedRandom!`](#jlwsseedrandom) | jlWSSeedRandom!(n) reseeds the random number generator with n as seed. Returns the random ... |
| [`jlWSSnippet`](#jlwssnippet) | jlWSSnippet(expr, n) returns the first (or last) n snippets of the WSExpression expr. For ... |
| [`urand01Complex`](#urand01complex) | urand01Complex(n) returns a Julia WS vector with uniformly distributed random complex elem... |
| [`urand01Real`](#urand01real) | urand01Real(n) returns a Julia WS vector with uniformly distributed random elements in the... |
| [`vandermondeMatrix`](#vandermondematrix) | vandermondeMatrix(lvars) returns a Vandermonde matrix with nodes from lvars. |
| [`zeroMatrix`](#zeromatrix) | identityMatrix(n) returns the identity matrix of size n. |

### Detailed Documentation

#### `fourierMatrix` <a id="fouriermatrix"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L36)\]

fourierMatrix(n) returns the n x n Fourier matrix.

- **Signature**: `PositiveInteger -> WSMatrix(WSExpression)`

#### `gaussianMatrix` <a id="gaussianmatrix"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L38)\]

gaussianMatrix(r) returns the Gaussian matrix with radius r. For example: \example{gaussianMatrix "2.2"}

- **Signature**: `WSReal -> WSMatrix(WSReal)`

#### `hankelMatrix` <a id="hankelmatrix"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L31)\]

hankelMatrix(n) returns the square Hankel matrix with integer coefficients.

- **Signature**: `PositiveInteger -> WSMatrix(WSInteger)`

#### `hilbertMatrix` <a id="hilbertmatrix"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L34)\]

hilbertMatrix(n) returns the square Hilbert matrix.

- **Signature**: `PositiveInteger -> WSMatrix(WSRational)`

#### `identityMatrix` <a id="identitymatrix"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L49)\]

identityMatrix(n) returns the identity matrix of size n.

- **Signature**: `PositiveInteger ->  WSMatrix(WSInteger)`

#### `jWSDateObject` <a id="jwsdateobject"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L63)\]

##### `jWSDateObject` : `() -> WSExpression`

jWSDateObject() returns the WSExpression object of the local date and time.

##### `jWSDateObject` : `WSExpression -> WSExpression`

jWSDateObject(expr) returns the WSExpression object of the date from expr.

##### `jWSDateObject` : `(WSExpression, WSExpression) -> WSExpression`

jWSDateObject(date,type) returns the WSExpression object of the date and type, for example "Month".

#### `jWSRange` <a id="jwsrange"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L54)\]

##### `jWSRange` : `WSInteger -> WSList(WSInteger)`

jWSRange(n) returns a WSList that ranges from 1 to n. For example: \example{jWSRange(10)@WSLIST(WSINT)}

##### `jWSRange` : `(WSInteger, WSInteger) -> WSList(WSInteger)`

jWSRange(n,m) returns a WSList that ranges from n to m.

##### `jWSRange` : `(WSInteger, WSInteger, WSInteger) ->`

jWSRange(n,m) returns a WSList that ranges from n to m.

#### `jlWSDateString` <a id="jlwsdatestring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L72)\]

##### `jlWSDateString` : `() -> WSExpression`

jlWSDateString() returns the WSExpression string of the local date and time. For example: \example{toString jlWSDateString()}

##### `jlWSDateString` : `WSExpression -> WSExpression`

jlWSDateString(expr) returns the WSExpression string of the date from a WS date object. For example: \example{jlWSDateString jWSExpr "Tomorrow"}

##### `jlWSDateString` : `(WSExpression, WSExpression) -> WSExpression`

jlWSDateString(expr, form) returns WSExpression string of the date from a WS date object with WS format form. For example: \example{jlWSDateString(jWSExpr("Now"), jWSExpr("Entity[_"Language_", _"French::367gk_"]"))}

#### `jlWSDocumentation` <a id="jlwsdocumentation"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L86)\]

jlWSDocumentation(sym) prints WS information about the symbol sym. Note that the WS language is preferable. Trivial implementation. For example: \example{jlWSDocumentation sin} \example{jlWSDocumentation ArcSin}

- **Signature**: `Symbol -> WSExpression`

#### `jlWSExport` <a id="jlwsexport"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L115)\]

jlWSExport(file.ext, obj) exports the object obj to the file file.ext. The extension ext will determine the saved format. A WS expression for example can be exported in an image file, it will be saved in the WS 'StandardForm' whereas in FriCAS it is displayed in WS 'OutputForm': \example{x:=jWSExpr(x);jlWSExport("legendreP.png", legendreP(7, x))}

- **Signature**: `(String, WSExpression) -> WSExpression`

#### `jlWSExportString` <a id="jlwsexportstring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L125)\]

jlWSExportString(expr, form) returns the string representation of expr in the specified format. Use toString or string to obtain the FriCAS String. For example: \example{jWSExpr \"Probability[x < 0, x \\[Distributed] NormalDistribution[]]\"} \example{jWSExpr \"Probability[x < 1, x \\[Distributed] NormalDistribution[]]\"} \example{string jlWSExportString(%,jWSString "TeX")}

- **Signature**: `(WSExpression, WSString) -> WSExpression`

#### `jlWSFileFormat` <a id="jlwsfileformat"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L101)\]

##### `jlWSFileFormat` : `WSString -> WSExpression`

jlWSFileFormat(src) tries to determine the format of the source src from its content. Can be used with jWSImport. For example: \example{jlWSFileFormat("examples/customers-100.csv")}

##### `jlWSFileFormat` : `(WSString, WSExpression) -> WSExpression`

jlWSFileFormat(src, list(form)) tries to determine the format of the source src from its content using the list of formats form. Returns WS None if no format is found. Can be used with jWSImport. For example: \spad{jlWSFileFormat("examples/customers-100.csv",jWSExpr "{_"CSV_",_"TSV_"}")}

#### `jlWSImport` <a id="jlwsimport"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L92)\]

##### `jlWSImport` : `WSString -> WSExpression`

jlWSImport(src) imports the source src. For example: \example{file:=jlWSImport jWSString "examples/customers-100.csv";} \example{jlWSDateString(file.2.11)}

##### `jlWSImport` : `(WSString, WSString) -> WSExpression`

jlWSImport(myfile, form) imports the file myfile with format form. For example: \example{file:=jlWSImport(jWSString("examples/customers-100.csv"), jWSString "CSV");}

#### `jlWSPlot` <a id="jlwsplot"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L133)\]

jlWSPlot(expr, options) is the WS plot function. Since it should be run in a Wolfram notebook or any other supported graphical interfaces, the Wolfram Jupyter "plugin" for example, it is left to the user for testing purposes. The following uses the jlWSExport function: \example{x:=jWSExpr(x);opt:=jWSList [x,-5,5]} \example{jlWSExport("sin.png", jlWSPlot(sin(x),opt))}

- **Signature**: `(WSExpression, WSExpression) -> WSExpression`

#### `jlWSSeedRandom!` <a id="jlwsseedrandom"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L13)\]

jlWSSeedRandom!(n) reseeds the random number generator with n as seed. Returns the random generator state.

- **Signature**: `WSInteger -> WSExpression`

#### `jlWSSnippet` <a id="jlwssnippet"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L111)\]

jlWSSnippet(expr, n) returns the first (or last) n snippets of the WSExpression expr. For example: \example{jlWSSnippet(jlWSImport jWSString "http://www.fricas.org/",-2)}

- **Signature**: `(WSExpression, WSInteger) -> WSExpression`

#### `urand01Complex` <a id="urand01complex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L22)\]

##### `urand01Complex` : `PositiveInteger -> WSVector(WSComplex)`

urand01Complex(n) returns a Julia WS vector with uniformly distributed random complex elements in the unit square. Convenience function.

##### `urand01Complex` : `(PositiveInteger, PositiveInteger) ->`

urand01Complex(n) returns a Julia WS vector with uniformly distributed random complex elements in the unit square. Convenience function.

#### `urand01Real` <a id="urand01real"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L16)\]

##### `urand01Real` : `PositiveInteger -> WSVector(WSReal)`

urand01Real(n) returns a Julia WS vector with uniformly distributed random elements in the range 0..1. Convenience function.

##### `urand01Real` : `(PositiveInteger, PositiveInteger) -> WSMatrix(WSReal)`

urand01Real(rows,cols) returns a Julia WS matrix with uniformly distributed random elements in the range 0..1. Convenience function.

#### `vandermondeMatrix` <a id="vandermondematrix"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L42)\]

##### `vandermondeMatrix` : `WSList(WSExpression) -> WSMatrix(WSExpression)`

vandermondeMatrix(lvars) returns a Vandermonde matrix with nodes from lvars.

##### `vandermondeMatrix` : `(WSList(WSExpression), WSInteger)`

vandermondeMatrix(lvars) returns a Vandermonde matrix with nodes from lvars.

#### `zeroMatrix` <a id="zeromatrix"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsutils.spad#L51)\]

identityMatrix(n) returns the identity matrix of size n.

- **Signature**: `(PositiveInteger, PositiveInteger) ->`
---
[Back to Index](../index.md)
