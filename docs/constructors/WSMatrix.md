# WSMatrix

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/WSMAT.spad#L1)\] &nbsp;|&nbsp; **Group**: WS — Wolfram/MathLink

## Description

Julia Wolfram Symbolic matrices using the MathLink Julia package.

**WSMatrix(E: WSRing) is a domain constructor**  
**Abbreviation for WSMatrix is WSMAT**  
**This constructor is exposed in this frame.**

## Signatures

```fricas
--- Operations ---

 #? : % -> NonNegativeInteger if % has ATFINAG          #? : % -> WSInteger
 ?*? : (WSVector(E), %) -> %                            ?*? : (%, WSVector(E)) -> %
 ?*? : (%, E) -> %                                      ?*? : (E, %) -> %
 ?*? : (Integer, %) -> %                                ?*? : (%, %) -> %
 ?+? : (%, %) -> %                                      -? : % -> %
 ?-? : (%, %) -> %                                      ?/? : (%, E) -> % if E has FIELD
 ?=? : (%, %) -> Boolean                                Pfaffian : % -> E if E has COMRING
 ?^? : (%, NonNegativeInteger) -> %                     ?^? : (%, PositiveInteger) -> %
 ?^? : (%, Integer) -> % if E has FIELD                 accumulate : % -> % if WSVector(E) has WSNUM
 adjoint : % -> %                                       adjugate : % -> %
 antisymmetric? : % -> Boolean                          append : (%, WSVector(E)) -> %
 array2 : List(List(E)) -> %                            blockConcat : List(List(%)) -> %
 cholesky : % -> Record(l: %,u: %)                      coerce : WSVector(E) -> %
 coerce : List(WSVector(E)) -> %                        coerce : % -> WSExpression
 coerce : % -> JLObject                                 coerce : % -> OutputForm
 colSlice : % -> Segment(Integer)                       column : (%, Integer) -> %
 column : (%, Integer) -> WSVector(E)                   convert : % -> String
 copy : % -> %                                          delete : (%, WSList(WSInteger)) -> %
 determinant : % -> E if E has COMRING                  diagonal : % -> WSVector(E)
 diagonal? : % -> Boolean                               diagonalMatrix : WSList(E) -> %
 diagonalMatrix : List(E) -> %                          diagonalMatrix : List(%) -> %
 differences : % -> % if WSVector(E) has WSNUM          dimensions : % -> WSList(WSInteger)
 eigenvalues : % -> WSVector(WSExpression)              eigenvectors : % -> WSMatrix(WSExpression)
 elt : (%, Integer, Integer) -> E                       elt : (%, Integer, Integer, E) -> E
 elt : (%, Integer, List(Integer)) -> %                 elt : (%, List(Integer), Integer) -> %
 elt : (%, List(Integer), List(Integer)) -> %           elt : (%, List(Integer), Segment(Integer)) -> %
 elt : (%, Segment(Integer), List(Integer)) -> %        elt : (%, Integer, List(Segment(Integer))) -> %
 elt : (%, List(Segment(Integer)), Integer) -> %        elt : (%, Integer) -> WSVector(E)
 empty : () -> %                                        empty? : % -> Boolean
 eq? : (%, %) -> Boolean                                extract : (%, WSExpression) -> %
 fill! : (%, E) -> %                                    first : % -> WSVector(E)
 generalizedInverse : % -> %                            hash : % -> SingleInteger if E has HASHABL
 hermitian? : % -> Boolean                              hessenberg : % -> Record(p: %,h: %)
 horizConcat : (%, %) -> %                              horizConcat : List(%) -> %
 horizSplit : (%, PositiveInteger) -> List(%)           insert : (%, WSVector(E), WSInteger) -> %
 intersection : (%, %) -> %                             inverse : % -> %
 jWSAggregate : List(WSVector(E)) -> %                  jWSInterpret : (String, String, String) -> %
 jWSInterpret : (String, String) -> %                   jWSInterpret : String -> %
 jWSMatrix : String -> %                                jlAbout : % -> Void
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
 join : (%, %) -> %                                     jordan : % -> Record(s: %,j: %)
 kroneckerProduct : (%, %) -> % if E has SRNG           kroneckerProduct : List(%) -> % if E has SRNG
 kroneckerSum : (%, %) -> %                             kroneckerSum : List(%) -> %
 last : % -> WSVector(E)                                latex : % -> String
 length : % -> WSInteger                                less? : (%, NonNegativeInteger) -> Boolean
 linearSolve : (%, %) -> %                              listOfLists : % -> List(List(E))
 lu : % -> Record(lu: %,p: %,c: %)                      map : ((E -> E), %) -> %
 map : (((E, E) -> E), %, %) -> %                       map : (((E, E) -> E), %, %, E) -> %
 map! : ((E -> E), %) -> %                              matrix : WSVector(E) -> %
 matrix : List(List(E)) -> %                            maxColIndex : % -> Integer
 maxRowIndex : % -> Integer                             members : % -> List(E) if % has ATFINAG
 minColIndex : % -> Integer                             minRowIndex : % -> Integer
 minordet : % -> E if E has COMRING                     minors : (%, WSInteger) -> %
 minors : % -> %                                        missing? : % -> Boolean
 more? : (%, NonNegativeInteger) -> Boolean             mutable? : % -> Boolean
 ncols : % -> NonNegativeInteger                        norm : (%, WSExpression) -> E
 norm : % -> E                                          nothing? : % -> Boolean
 nrows : % -> NonNegativeInteger                        nullSpace : % -> WSList(WSVector(E))
 numeric : (%, PositiveInteger) -> WSExpression         numeric : % -> WSExpression
 numeric? : % -> Boolean                                part : (%, WSInteger) -> WSVector(E)
 parts : % -> List(E)                                   permanent : % -> E
 positiveDefinite? : % -> Boolean                       prepend : (%, WSVector(E)) -> %
 qelt : (%, Integer, Integer) -> E                      qelt : (%, Integer) -> WSVector(E)
 qr : % -> Record(q: %,r: %)                            qsetelt : (%, Integer, Integer, E) -> %
 qsetelt : (%, Integer, WSVector(E)) -> %               qsetelt! : (%, Integer, Integer, E) -> E
 qsetelt! : (%, Integer, WSVector(E)) -> %              rank : % -> NonNegativeInteger if E has INTDOM
 removeDuplicates : % -> %                              replacePart : (%, %) -> %
 rest : % -> %                                          reverse : (%, WSList(WSInteger)) -> %
 reverse : (%, WSInteger) -> %                          reverse : % -> %
 riffle : (%, %, %) -> %                                riffle : (%, %) -> %
 row : (%, Integer) -> %                                row : (%, Integer) -> WSVector(E)
 rowEchelon : % -> % if E has EUCDOM                    rowSlice : % -> Segment(Integer)
 sample : () -> %                                       scalarMatrix : (NonNegativeInteger, E) -> %
 schur : % -> Record(q: %,t: %)                         setColumn! : (%, Integer, WSVector(E)) -> %
 setIntersection : (%, %) -> %                          setRow! : (%, Integer, WSVector(E)) -> %
 setelt : (%, Integer, Integer, E) -> %                 setelt : (%, Integer, WSVector(E)) -> %
 setelt! : (%, Integer, Integer, E) -> E                setelt! : (%, Integer, List(Integer), %) -> %
 setelt! : (%, List(Integer), Integer, %) -> %          setelt! : (%, Integer, WSVector(E)) -> %
 setsubMatrix! : (%, Integer, Integer, %) -> %          size? : (%, NonNegativeInteger) -> Boolean
 smaller? : (%, %) -> Boolean if E has COMPAR           sort : % -> %
 sorted? : % -> Boolean                                 square? : % -> Boolean
 squareTop : % -> %                                     string : % -> String
 svd : % -> Record(S: %,sv: %,V: %)                     svdvals : % -> WSList(E)
 swapColumns! : (%, Integer, Integer) -> %              swapRows! : (%, Integer, Integer) -> %
 symmetric? : % -> Boolean                              take : (%, WSList(WSInteger)) -> %
 take : (%, Integer) -> %                               toString : (%, WSExpression) -> String
 toString : % -> String                                 trace : % -> E
 transpose : % -> %                                     transpose : WSVector(E) -> %
 union : (%, %) -> %                                    vertConcat : (%, %) -> %
 vertConcat : List(%) -> %                              vertSplit : (%, PositiveInteger) -> List(%)
 zero? : % -> Boolean if E has ABELMON                  ?~=? : (%, %) -> Boolean
 ?*? : (%, WSVector(E)) -> WSVector(E) if E has SRNG
 ?*? : (WSVector(E), %) -> WSVector(E) if E has SRNG
 any? : ((E -> Boolean), %) -> Boolean if % has ATFINAG
 blockSplit : (%, PositiveInteger, PositiveInteger) -> List(List(%))
 blockSplit : (%, List(NonNegativeInteger), List(NonNegativeInteger)) -> List(List(%))
 columnSpace : % -> List(WSVector(E)) if E has EUCDOM
 count : ((E -> Boolean), %) -> NonNegativeInteger if % has ATFINAG
 count : (E, %) -> NonNegativeInteger if % has ATFINAG and E has BASTYPE
 eigenSystem : % -> Record(values: WSVector(WSExpression),vectors: WSMatrix(WSExpression))
 elt : (%, Segment(Integer), Segment(Integer)) -> %
 elt : (%, Segment(Integer), List(Segment(Integer))) -> %
 elt : (%, List(Segment(Integer)), Segment(Integer)) -> %
 elt : (%, List(Segment(Integer)), List(Segment(Integer))) -> %
 eval : (%, List(Equation(E))) -> % if E has EVALAB(E) and E has SETCAT
 eval : (%, Equation(E)) -> % if E has EVALAB(E) and E has SETCAT
 eval : (%, E, E) -> % if E has EVALAB(E) and E has SETCAT
 eval : (%, List(E), List(E)) -> % if E has EVALAB(E) and E has SETCAT
 every? : ((E -> Boolean), %) -> Boolean if % has ATFINAG
 ?exquo? : (%, E) -> Union(%,"failed") if E has INTDOM
 hashUpdate! : (HashState, %) -> HashState if E has HASHABL
 horizSplit : (%, List(NonNegativeInteger)) -> List(%)
 inverse : % -> Union(%,"failed") if E has FIELD
 invertIfCan : % -> Union(%,"failed") if E has INTDOM
 kronecker_prod1 : (%, Integer, List(List(NonNegativeInteger)), List(%), NonNegativeInteger, NonNegativeInteger, Union(E,one)) -> Void
 matrix : (NonNegativeInteger, NonNegativeInteger, ((Integer, Integer) -> E)) -> %
 matrixFunction : (WSExpression, %) -> WSMatrix(WSExpression)
 max : (((E, E) -> Boolean), %) -> E if % has ATFINAG
 max : % -> E if % has ATFINAG and E has ORDSET
 member? : (E, %) -> Boolean if % has ATFINAG and E has BASTYPE
 min : % -> E if % has ATFINAG and E has ORDSET
 new : (NonNegativeInteger, NonNegativeInteger, E) -> %
 nullSpace : % -> List(WSVector(E)) if E has INTDOM
 nullity : % -> NonNegativeInteger if E has INTDOM
 positivePower : (%, Integer) -> % if E has SRNG
 qnew : (NonNegativeInteger, NonNegativeInteger) -> %
 randomComplexMatrix : (WSList(WSComplex), WSList(WSInteger)) -> WSMatrix(WSComplex)
 randomRealMatrix : (WSList(WSReal), WSList(WSInteger)) -> WSMatrix(WSReal)
 setelt! : (%, Integer, List(Segment(Integer)), %) -> %
 setelt! : (%, List(Segment(Integer)), Integer, %) -> %
 setelt! : (%, List(Integer), List(Integer), %) -> %
 setelt! : (%, Segment(Integer), Segment(Integer), %) -> %
 setelt! : (%, List(Integer), Segment(Integer), %) -> %
 setelt! : (%, Segment(Integer), List(Integer), %) -> %
 setelt! : (%, Segment(Integer), List(Segment(Integer)), %) -> %
 setelt! : (%, List(Segment(Integer)), Segment(Integer), %) -> %
 setelt! : (%, List(Segment(Integer)), List(Segment(Integer)), %) -> %
 subMatrix : (%, Integer, Integer, Integer, Integer) -> %
 total : % -> WSVector(E) if WSVector(E) has WSNUM
 vertSplit : (%, List(NonNegativeInteger)) -> List(%)
 zero : (NonNegativeInteger, NonNegativeInteger) -> %
```

---
[Back to Index](../index.md)
