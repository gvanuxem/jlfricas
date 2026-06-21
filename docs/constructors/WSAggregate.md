# WSAggregate

> **Kind**: Category &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsagg.spad#L1)\] &nbsp;|&nbsp; **Group**: WS — Wolfram/MathLink

## Description

Julia Wolfram Symbolic aggregate (WS list) using the MathLink Julia package.

**WSAggregate(E: WSObject) is a category constructor**  
**Abbreviation for WSAggregate is WSAGG**  
**This constructor is exposed in this frame.**

## Signatures

```fricas
--- Operations ---

 #? : % -> WSInteger                                    ?=? : (%, %) -> Boolean
 accumulate : % -> % if E has WSNUM                     append : (%, E) -> %
 coerce : List(E) -> %                                  coerce : % -> WSExpression
 coerce : % -> JLObject                                 coerce : % -> OutputForm
 convert : % -> String                                  delete : (%, WSList(WSInteger)) -> %
 differences : % -> % if E has WSNUM                    dimensions : % -> WSList(WSInteger)
 elt : (%, Integer) -> E                                extract : (%, WSExpression) -> %
 first : % -> E                                         insert : (%, E, WSInteger) -> %
 intersection : (%, %) -> %                             jWSAggregate : List(E) -> %
 jWSInterpret : (String, String, String) -> %           jWSInterpret : (String, String) -> %
 jWSInterpret : String -> %                             jlAbout : % -> Void
 jlApply : (String, %, %, %, %, %) -> JLObject          jlApply : (String, %, %, %, %) -> JLObject
 jlApply : (String, %, %, %) -> JLObject                jlApply : (String, %, %) -> JLObject
 jlApply : (String, %) -> JLObject                      jlDisplay : % -> Void
 jlDump : JLObject -> Void                              jlEval : % -> %
 jlFieldNames : % -> JLObject                           jlGetField : (%, JLSymbol) -> JLObject
 jlGetJuliaIndex : % -> String                          jlGetProperty : (%, JLSymbol) -> JLObject
 jlHead : % -> WSSymbol                                 jlId : % -> JLInt64
 jlObject : () -> String                                jlPropertyNames : % -> JLObject
 jlRef : % -> SExpression                               jlSymbolic : % -> String
 jlText : (%, String) -> List(String)                   jlType : % -> Symbol
 jlimref : String -> %                                  jlref : String -> %
 join : (%, %) -> %                                     last : % -> E
 latex : % -> String                                    length : % -> WSInteger
 missing? : % -> Boolean                                mutable? : % -> Boolean
 nothing? : % -> Boolean                                numeric : (%, PositiveInteger) -> WSExpression
 numeric : % -> WSExpression                            numeric? : % -> Boolean
 part : (%, WSInteger) -> E                             prepend : (%, E) -> %
 qelt : (%, Integer) -> E                               qsetelt : (%, Integer, E) -> %
 qsetelt! : (%, Integer, E) -> %                        removeDuplicates : % -> %
 replacePart : (%, %) -> %                              rest : % -> %
 reverse : (%, WSList(WSInteger)) -> %                  reverse : (%, WSInteger) -> %
 reverse : % -> %                                       riffle : (%, %, %) -> %
 riffle : (%, %) -> %                                   setIntersection : (%, %) -> %
 setelt : (%, Integer, E) -> %                          setelt! : (%, Integer, E) -> %
 sort : % -> %                                          sorted? : % -> Boolean
 string : % -> String                                   take : (%, WSList(WSInteger)) -> %
 take : (%, Integer) -> %                               toString : % -> String
 total : % -> E if E has WSNUM                          union : (%, %) -> %
 ?~=? : (%, %) -> Boolean
```

---
[Back to Index](../index.md)
