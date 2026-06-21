# WSSymbol

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/WSSYM.spad#L1)\] &nbsp;|&nbsp; **Group**: WS — Wolfram/MathLink

## Description

Julia Wolfram Symbolic symbols using the MathLink Julia package.

**WSSymbol is a domain constructor.**  
**Abbreviation for WSSymbol is WSSYM**  
**This constructor is exposed in this frame.**  
**47 names for 62 operations in this domain.**

## Signatures

```fricas
--- Operations ---

 ?=? : (%, %) -> Boolean                                WComplex : () -> %
 WFailure : () -> %                                     WFalse : () -> %
 WFormat : () -> %                                      WInteger : () -> %
 WList : () -> %                                        WMissing : () -> %
 WNone : () -> %                                        WRational : () -> %
 WReal : () -> %                                        WRule : () -> %
 WString : () -> %                                      WSymbol : () -> %
 WTrue : () -> %                                        coerce : Boolean -> %
 coerce : String -> %                                   coerce : Symbol -> %
 coerce : % -> Boolean                                  coerce : % -> JLObject
 coerce : % -> OutputForm                               coerce : % -> Symbol
 coerce : % -> WSExpression                             convert : % -> String
 jWSInterpret : String -> %                             jWSInterpret : (String, String) -> %
 jWSInterpret : (String, String, String) -> %           jWSSym : String -> %
 jWSSym : Symbol -> %                                   jlAbout : % -> Void
 jlApply : (String, %) -> JLObject                      jlApply : (String, %, %) -> JLObject
 jlApply : (String, %, %, %) -> JLObject                jlApply : (String, %, %, %, %) -> JLObject
 jlApply : (String, %, %, %, %, %) -> JLObject          jlDisplay : % -> Void
 jlDump : JLObject -> Void                              jlEval : % -> %
 jlFieldNames : % -> JLObject                           jlGetField : (%, JLSymbol) -> JLObject
 jlGetJuliaIndex : % -> String                          jlGetProperty : (%, JLSymbol) -> JLObject
 jlHead : % -> WSSymbol                                 jlId : % -> JLInt64
 jlObject : () -> String                                jlPropertyNames : % -> JLObject
 jlRef : % -> SExpression                               jlSymbolic : % -> String
 jlText : (%, String) -> List(String)                   jlType : % -> Symbol
 jlimref : String -> %                                  jlref : String -> %
 latex : % -> String                                    missing? : % -> Boolean
 mutable? : % -> Boolean                                nothing? : % -> Boolean
 numeric : % -> WSExpression                            numeric : (%, PositiveInteger) -> WSExpression
 numeric? : % -> Boolean                                string : % -> String
 toString : % -> String                                 ?~=? : (%, %) -> Boolean
```

---
[Back to Index](../index.md)
