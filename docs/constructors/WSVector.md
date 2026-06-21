# WSVector

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/WSVEC.spad#L1)\] &nbsp;|&nbsp; **Group**: WS — Wolfram/MathLink

## Description

Julia Wolfram Symbolic vectors using the MathLink Julia package.

**WSVector(E: WSObject) is a domain constructor**  
**Abbreviation for WSVector is WSVEC**  
**This constructor is exposed in this frame.**

## Signatures

```fricas
--- Operations ---

 #? : % -> NonNegativeInteger if % has ATFINAG          #? : % -> WSInteger
 ?*? : (%, E) -> %                                      ?*? : (E, %) -> %
 ?*? : (WSInteger, %) -> %                              ?*? : (Integer, %) -> % if E has ABELGRP
 ?+? : (%, %) -> %                                      -? : % -> %
 ?-? : (%, %) -> %                                      ?=? : (%, %) -> Boolean
 accumulate : % -> % if E has WSNUM                     append : (%, E) -> %
 coerce : % -> WSMatrix(E) if E has WSRING              coerce : List(E) -> %
 coerce : % -> WSExpression                             coerce : % -> JLObject
 coerce : % -> OutputForm                               concat : (%, E) -> %
 concat : (E, %) -> %                                   concat : (%, %) -> %
 concat : List(%) -> %                                  construct : List(E) -> %
 convert : % -> String                                  copy : % -> %
 cross : (%, %) -> %                                    delete : (%, Integer) -> %
 delete : (%, UniversalSegment(Integer)) -> %           delete : (%, WSList(WSInteger)) -> %
 differences : % -> % if E has WSNUM                    dimensions : % -> WSList(WSInteger)
 dot : (%, %) -> E                                      elt : (%, Integer, E) -> E
 elt : (%, UniversalSegment(Integer)) -> %              elt : (%, Integer) -> E
 empty : () -> %                                        empty? : % -> Boolean
 entries : % -> List(E)                                 eq? : (%, %) -> Boolean
 extract : (%, WSExpression) -> %                       fill! : (%, E) -> % if % has ATSHMUT
 find : ((E -> Boolean), %) -> Union(E,"failed")        first : (%, NonNegativeInteger) -> %
 first : % -> E                                         index? : (Integer, %) -> Boolean
 indices : % -> List(Integer)                           insert : (E, %, Integer) -> %
 insert : (%, %, Integer) -> %                          insert : (%, E, WSInteger) -> %
 intersection : (%, %) -> %                             jWSAggregate : List(E) -> %
 jWSInterpret : (String, String, String) -> %           jWSInterpret : (String, String) -> %
 jWSInterpret : String -> %                             jWSVector : String -> %
 jWSVector : List(E) -> %                               jlAbout : % -> Void
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
 less? : (%, NonNegativeInteger) -> Boolean             map : ((E -> E), %) -> %
 map : (((E, E) -> E), %, %) -> %                       map! : ((E -> E), %) -> % if % has ATSHMUT
 maxIndex : % -> Integer if Integer has ORDSET          members : % -> List(E) if % has ATFINAG
 minIndex : % -> Integer if Integer has ORDSET          missing? : % -> Boolean
 more? : (%, NonNegativeInteger) -> Boolean             mutable? : % -> Boolean
 new : (NonNegativeInteger, E) -> %                     norm : % -> E
 nothing? : % -> Boolean                                numeric : (%, PositiveInteger) -> WSExpression
 numeric : % -> WSExpression                            numeric? : % -> Boolean
 part : (%, WSInteger) -> E                             parts : % -> List(E) if % has ATFINAG
 prepend : (%, E) -> %                                  qelt : (%, Integer) -> E
 qsetelt : (%, Integer, E) -> %                         qsetelt! : (%, Integer, E) -> %
 removeDuplicates : % -> %                              replacePart : (%, %) -> %
 rest : % -> %                                          reverse : (%, WSList(WSInteger)) -> %
 reverse : (%, WSInteger) -> %                          reverse : % -> %
 riffle : (%, %, %) -> %                                riffle : (%, %) -> %
 sample : () -> %                                       setIntersection : (%, %) -> %
 setelt : (%, Integer, E) -> %                          setelt! : (%, Integer, E) -> %
 size? : (%, NonNegativeInteger) -> Boolean             sort : % -> %
 sorted? : % -> Boolean                                 string : % -> String
 take : (%, WSList(WSInteger)) -> %                     take : (%, Integer) -> %
 toString : % -> String                                 total : % -> E if E has WSNUM
 transpose : % -> %                                     union : (%, %) -> %
 vector : WSList(E) -> %                                zero? : % -> Boolean if E has ABELMON
 ?~=? : (%, %) -> Boolean
 ?<? : (%, %) -> Boolean if % has ATFINAG and E has ORDSET
 ?<=? : (%, %) -> Boolean if % has ATFINAG and E has ORDSET
 ?>? : (%, %) -> Boolean if % has ATFINAG and E has ORDSET
 ?>=? : (%, %) -> Boolean if % has ATFINAG and E has ORDSET
 any? : ((E -> Boolean), %) -> Boolean if % has ATFINAG
 convert : % -> InputForm if E has KONVERT(INFORM)
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
 length : % -> E if E has RADCAT and E has RING
 max : (((E, E) -> Boolean), %) -> E if % has ATFINAG
 max : % -> E if % has ATFINAG and E has ORDSET
 max : (%, %) -> % if % has ATFINAG and E has ORDSET
 member? : (E, %) -> Boolean if % has ATFINAG and E has BASTYPE
 merge : (((E, E) -> Boolean), %, %) -> % if % has ATFINAG
 merge : (%, %) -> % if % has ATFINAG and E has ORDSET
 min : % -> E if % has ATFINAG and E has ORDSET
 min : (%, %) -> % if % has ATFINAG and E has ORDSET
 outerProduct : (%, %) -> Matrix(E) if E has RING
 position : ((E -> Boolean), %) -> Integer if % has ATFINAG
 position : (E, %) -> Integer if % has ATFINAG and E has BASTYPE
 position : (E, %, Integer) -> Integer if % has ATFINAG and E has BASTYPE
 qsetelt! : (%, Integer, E) -> E if % has ATSHMUT
 reduce : (((E, E) -> E), %, E, E) -> E if % has ATFINAG and E has BASTYPE
 reduce : (((E, E) -> E), %, E) -> E if % has ATFINAG
 reduce : (((E, E) -> E), %) -> E if % has ATFINAG
 remove : (E, %) -> % if % has ATFINAG and E has BASTYPE
 remove : ((E -> Boolean), %) -> % if % has ATFINAG
 reverse! : % -> % if % has ATFINAG and % has ATSHMUT
 rightTrim : (%, E) -> % if % has ATFINAG and E has BASTYPE
 select : ((E -> Boolean), %) -> % if % has ATFINAG
 setelt! : (%, Integer, E) -> E if % has ATSHMUT
 setelt! : (%, UniversalSegment(Integer), E) -> E if % has ATSHMUT
 smaller? : (%, %) -> Boolean if % has ATFINAG and E has COMPAR or % has ATFINAG and E has ORDSET
 sort : (((E, E) -> Boolean), %) -> % if % has ATFINAG
 sort! : (((E, E) -> Boolean), %) -> % if % has ATFINAG and % has ATSHMUT
 sort! : % -> % if % has ATFINAG and % has ATSHMUT and E has ORDSET
 sorted? : (((E, E) -> Boolean), %) -> Boolean if % has ATFINAG
 swap! : (%, Integer, Integer) -> Void if % has ATSHMUT
 trim : (%, E) -> % if % has ATFINAG and E has BASTYPE
 zero : NonNegativeInteger -> % if E has ABELMON
```

---
[Back to Index](../index.md)
