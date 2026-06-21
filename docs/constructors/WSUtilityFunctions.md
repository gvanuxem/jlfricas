# WSUtilityFunctions

> **Kind**: Package &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/WSUF.spad#L1)\] &nbsp;|&nbsp; **Group**: WS — Wolfram/MathLink

## Description

Julia Wolfram Symbolic utility functions using the MathLink Julia package.

**WSUtilityFunctions is a package constructor**  
**Abbreviation for WSUtilityFunctions is WSUF**  
**This constructor is exposed in this frame.**

## Signatures

```fricas
--- Operations ---

 gaussianMatrix : WSReal -> WSMatrix(WSReal)            jWSDateObject : () -> WSExpression
 jWSDateObject : WSExpression -> WSExpression           jWSRange : WSInteger -> WSList(WSInteger)
 jlWSDateString : () -> WSExpression                    jlWSDateString : WSExpression -> WSExpression
 jlWSDocumentation : Symbol -> WSExpression             jlWSExport : (String, WSExpression) -> WSExpression
 jlWSFileFormat : WSString -> WSExpression              jlWSImport : WSString -> WSExpression
 jlWSImport : (WSString, WSString) -> WSExpression      jlWSSeedRandom! : WSInteger -> WSExpression
 urand01Real : PositiveInteger -> WSVector(WSReal)
 fourierMatrix : PositiveInteger -> WSMatrix(WSExpression)
 hankelMatrix : PositiveInteger -> WSMatrix(WSInteger)
 hilbertMatrix : PositiveInteger -> WSMatrix(WSRational)
 identityMatrix : PositiveInteger -> WSMatrix(WSInteger)
 jWSDateObject : (WSExpression, WSExpression) -> WSExpression
 jWSRange : (WSInteger, WSInteger) -> WSList(WSInteger)
 jWSRange : (WSInteger, WSInteger, WSInteger) -> WSList(WSInteger)
 jlWSDateString : (WSExpression, WSExpression) -> WSExpression
 jlWSExportString : (WSExpression, WSString) -> WSExpression
 jlWSFileFormat : (WSString, WSExpression) -> WSExpression
 jlWSPlot : (WSExpression, WSExpression) -> WSExpression
 jlWSSnippet : (WSExpression, WSInteger) -> WSExpression
 urand01Complex : PositiveInteger -> WSVector(WSComplex)
 urand01Complex : (PositiveInteger, PositiveInteger) -> WSMatrix(WSComplex)
 urand01Real : (PositiveInteger, PositiveInteger) -> WSMatrix(WSReal)
 vandermondeMatrix : WSList(WSExpression) -> WSMatrix(WSExpression)
 vandermondeMatrix : (WSList(WSExpression), WSInteger) -> WSMatrix(WSExpression)
 zeroMatrix : (PositiveInteger, PositiveInteger) -> WSMatrix(WSInteger)
```

---
[Back to Index](../index.md)
