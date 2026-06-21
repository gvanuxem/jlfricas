# WSExpression

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1)\] &nbsp;|&nbsp; **Group**: WS — Wolfram/MathLink

## Description

Julia Wolfram Symbolic expressions using the MathLink Julia package. It supports the Eltable category (interface) so, for example using Fibonacci polynomials fibonacci(12,jWSExpr x) => 3 75 77 79 411 6 x + 35 x 2+ 56 x 2+ 36 x 2+ 10 x 2+ x %.5 => 10*x^9

**WSExpression is a domain constructor.**  
**Abbreviation for WSExpression is WSEXPR**  
**This constructor is exposed in this frame.**  
**520 names for 823 operations in this domain.**

## Signatures

```fricas
--- Operations ---

 0 : () -> %                                            1 : () -> %
 #? : % -> WSInteger                                    ?*? : (%, %) -> %
 ?*? : (Integer, %) -> %                                ?*? : (NonNegativeInteger, %) -> %
 ?*? : (PositiveInteger, %) -> %                        ?*? : (NMInteger, %) -> JLObject
 ?+? : (%, %) -> %                                      -? : % -> %
 ?-? : (%, %) -> %                                      ?/? : (%, %) -> %
 ?<? : (%, %) -> Boolean                                ?<=? : (%, %) -> Boolean
 ?=? : (%, %) -> Boolean                                ?>? : (%, %) -> Boolean
 ?>=? : (%, %) -> Boolean                               Beta : (%, %) -> %
 Beta : (%, %, %) -> %                                  Chi : % -> %
 Ci : % -> %                                            D : (%, %) -> %
 D : (%, %, NonNegativeInteger) -> %                    D : (%, List(%)) -> %
 D : (%, List(%), List(NonNegativeInteger)) -> %        D : (%, List(Symbol)) -> %
 D : (%, (% -> %)) -> %                                 D : (%, (% -> %), NonNegativeInteger) -> %
 D : (%, Symbol) -> %                                   D : (%, Symbol, NonNegativeInteger) -> %
 Ei : % -> %                                            EiEn : (%, %) -> %
 Gamma : % -> %                                         Gamma : (%, %) -> %
 Gamma : (%, %, %) -> %                                 Shi : % -> %
 Si : % -> %                                            ?^? : (%, %) -> %
 ?^? : (%, Fraction(Integer)) -> %                      ?^? : (%, Integer) -> %
 ?^? : (%, NonNegativeInteger) -> %                     ?^? : (%, PositiveInteger) -> %
 ?^? : (%, WSRational) -> %                             abs : % -> %
 accountingForm : % -> %                                accountingForm : (%, %) -> %
 acos : % -> %                                          acosh : % -> %
 acot : % -> %                                          acoth : % -> %
 acsc : % -> %                                          acsch : % -> %
 airyAi : % -> %                                        airyAiPrime : % -> %
 airyAiZero : % -> %                                    airyAiZero : (%, %) -> %
 airyBi : % -> %                                        airyBiPrime : % -> %
 airyBiZero : % -> %                                    airyBiZero : (%, %) -> %
 algtower : % -> List(Kernel(%))                        algtower : List(%) -> List(Kernel(%))
 angerJ : (%, %) -> %                                   angerJ : (%, %, %) -> %
 annihilate? : (%, %) -> Boolean                        antiCommutator : (%, %) -> %
 apart : % -> %                                         apart : (%, %) -> %
 append : (%, %) -> %                                   applyQuote : (Symbol, %) -> %
 applyQuote : (Symbol, %, %) -> %                       applyQuote : (Symbol, %, %, %) -> %
 applyQuote : (Symbol, %, %, %, %) -> %                 applyQuote : (Symbol, List(%)) -> %
 argument : % -> %                                      asec : % -> %
 asech : % -> %                                         asin : % -> %
 asinh : % -> %                                         associates? : (%, %) -> Boolean
 associator : (%, %, %) -> %                            assuming : (%, %) -> %
 atan : % -> %                                          atan : (%, %) -> %
 atanh : % -> %                                         barnesG : % -> %
 baseForm : (%, %) -> %                                 basis : () -> Vector(%)
 belong? : BasicOperator -> Boolean                     besselI : (%, %) -> %
 besselJ : (%, %) -> %                                  besselJZero : (%, %) -> %
 besselK : (%, %) -> %                                  besselY : (%, %) -> %
 besselYZero : (%, %) -> %                              betaRegularized : (%, %, %) -> %
 binomial : (%, %) -> %                                 box : % -> %
 cancel : % -> %                                        catalan : () -> %
 ceiling : % -> %                                       characteristic : () -> NonNegativeInteger
 charlierC : (%, %, %) -> %                             chebyshevT : (%, %) -> %
 chebyshevU : (%, %) -> %                               coefficient : (%, %) -> %
 coefficient : (%, %, %) -> %                           coefficientList : (%, %) -> %
 coefficientRules : % -> %                              coefficientRules : (%, %) -> %
 coerce : % -> %                                        coerce : Complex(Integer) -> %
 coerce : Equation(%) -> %                              coerce : Float -> %
 coerce : Fraction(%) -> %                              coerce : Fraction(Integer) -> %
 coerce : Fraction(Polynomial(%)) -> %                  coerce : Fraction(Polynomial(Fraction(%))) -> %
 coerce : Integer -> %                                  coerce : Kernel(%) -> %
 coerce : List(%) -> %                                  coerce : Polynomial(%) -> %
 coerce : Polynomial(Fraction(%)) -> %                  coerce : String -> %
 coerce : Symbol -> %                                   coerce : WSSymbol -> %
 coerce : % -> JLObject                                 coerce : % -> OutputForm
 coerce : % -> WSExpression                             coerce : % -> WSInteger
 coerce : % -> WSRational                               collect : (%, %) -> %
 collect : (%, WSList(%)) -> %                          commutator : (%, %) -> %
 complex : (%, %) -> %                                  complexExpand : % -> %
 complexExpand : (%, %) -> %                            conjugate : % -> %
 convert : Factored(%) -> %                             convert : SparseUnivariatePolynomial(%) -> %
 convert : Vector(%) -> %                               convert : % -> SparseUnivariatePolynomial(%)
 convert : % -> String                                  convert : % -> Vector(%)
 coordinates : Vector(%) -> Matrix(%)                   coordinates : % -> Vector(%)
 coordinates : (%, Vector(%)) -> Vector(%)              cos : % -> %
 cosh : % -> %                                          cot : % -> %
 coth : % -> %                                          coulombF : (%, %, %) -> %
 coulombG : (%, %, %) -> %                              coulombH1 : (%, %, %) -> %
 coulombH2 : (%, %, %) -> %                             csc : % -> %
 csch : % -> %                                          dSolve : (%, %, %) -> %
 dSolve : (Equation(%), %, %) -> %                      dSolveValue : (%, %, %) -> %
 dSolveValue : (Equation(%), %, %) -> %                 dawson : % -> %
 decimalForm : % -> %                                   decimalForm : (%, %) -> %
 decompose : (%, %) -> WSList(%)                        dedekindEta : % -> %
 defined? : % -> Boolean                                definingPolynomial : % -> %
 degree : () -> %                                       delete : (%, WSList(WSInteger)) -> %
 denominator : % -> %                                   derivative : (BasicOperator, %) -> %
 derivative : (BasicOperator, %, %) -> %                differentiate : (%, %) -> %
 differentiate : (%, %, NonNegativeInteger) -> %        differentiate : (%, List(%)) -> %
 differentiate : (%, List(Symbol)) -> %                 differentiate : (%, (% -> %)) -> %
 differentiate : (%, Symbol) -> %                       digamma : % -> %
 digamma : (%, %) -> %                                  dilog : % -> %
 dimensions : % -> WSList(WSInteger)                    diracDelta : % -> %
 dirichletEta : % -> %                                  dirichletL : (%, %, %) -> %
 discriminant : () -> %                                 discriminant : (%, %) -> %
 discriminant : Vector(%) -> %                          distribute : % -> %
 distribute : (%, %) -> %                               ellipticE : % -> %
 ellipticE : (%, %) -> %                                ellipticF : (%, %) -> %
 ellipticK : % -> %                                     ellipticPi : (%, %) -> %
 ellipticPi : (%, %, %) -> %                            ellipticTheta : (%, %, %) -> %
 ellipticThetaPrime : (%, %, %) -> %                    elt : (%, Integer) -> %
 elt : (BasicOperator, %) -> %                          elt : (BasicOperator, %, %) -> %
 elt : (BasicOperator, %, %, %) -> %                    elt : (BasicOperator, %, %, %, %) -> %
 elt : (BasicOperator, %, %, %, %, %) -> %              elt : (BasicOperator, %, %, %, %, %, %) -> %
 elt : (BasicOperator, List(%)) -> %                    engineeringForm : % -> %
 engineeringForm : (%, %) -> %                          erf : % -> %
 erf : (%, %) -> %                                      erfc : % -> %
 erfi : % -> %                                          euclideanSize : % -> NonNegativeInteger
 eulerE : WSInteger -> %                                eulerE : (WSInteger, %) -> %
 eulerGamma : () -> %                                   eulerPhi : WSInteger -> %
 eval : (%, %, %) -> %                                  eval : (%, BasicOperator, (% -> %)) -> %
 eval : (%, BasicOperator, (List(%) -> %)) -> %         eval : (%, Equation(%)) -> %
 eval : (%, Kernel(%), %) -> %                          eval : (%, List(%), List(%)) -> %
 eval : (%, List(Equation(%))) -> %                     eval : (%, List(Kernel(%)), List(%)) -> %
 eval : (%, List(Symbol), List((% -> %))) -> %          eval : (%, Symbol, (% -> %)) -> %
 eval : (%, Symbol, (List(%) -> %)) -> %                exactNumber? : % -> Boolean
 exp : () -> %                                          exp : % -> %
 expToTrig : % -> %                                     expand : % -> %
 expand : (%, %) -> %                                   expandDenominator : % -> %
 expandNumerator : % -> %                               exponent : (%, %) -> %
 exponent : (%, %, %) -> %                              ?exquo? : (%, %) -> Union(%,"failed")
 extendedExpand : % -> %                                extendedSimplify : % -> %
 extendedSimplify : (%, %) -> %                         extract : (%, NonNegativeInteger) -> %
 extract : (%, WSExpression) -> %                       factor : % -> %
 factor : (%, %) -> %                                   factor : % -> Factored(%)
 factorList : % -> WSList(WSList(%))                    factorPolynomial : % -> %
 factorSquareFree : % -> %                              factorSquareFreeList : % -> WSList(WSList(%))
 factorTerms : % -> %                                   factorTerms : (%, %) -> %
 factorTerms : (%, WSList(%)) -> %                      factorTermsList : % -> WSList(%)
 factorTermsList : (%, %) -> WSList(%)                  factorial : % -> %
 factorials : % -> %                                    factorials : (%, Symbol) -> %
 fibonacci : (%, %) -> %                                findInstance : (%, %) -> WSList(WSList(%))
 findInstance : (%, %, %) -> WSList(WSList(%))          findRoot : (%, %) -> %
 first : % -> %                                         floor : % -> %
 fourier : % -> %                                       fourier : (%, %) -> %
 fourier : WSList(%) -> WSList(%)                       fourier : (WSList(%), WSList(%)) -> WSList(%)
 fractionPart : % -> %                                  freeOf? : (%, %) -> Boolean
 freeOf? : (%, Symbol) -> Boolean                       fresnelC : % -> %
 fresnelS : % -> %                                      fromCoefficientRules : (%, %) -> %
 functionExpand : % -> %                                functionExpand : (%, %) -> %
 gammaRegularized : (%, %) -> %                         gcd : (%, %) -> %
 gcd : List(%) -> %                                     gegenbauerC : (%, %) -> %
 gegenbauerC : (%, %, %) -> %                           generator : () -> %
 goldenRatio : () -> %                                  groebnerBasis : (%, %) -> WSList(%)
 groebnerBasis : (%, %, %) -> WSList(%)                 ground : % -> %
 ground? : % -> Boolean                                 gudermannian : % -> %
 guessGeneratingFunction : (%, %) -> %                  guessGeneratingFunction : (WSList(%), %) -> %
 guessSequenceFunction : % -> %                         guessSequenceFunction : (%, %) -> %
 guessSequenceFunction : WSList(WSInteger) -> %         hahnQ : (%, %, %, %, %) -> %
 hahnR : (%, %, %, %, %) -> %                           hahnS : (%, %, %, %, %) -> %
 hahn_p : (%, %, %, %, %, %) -> %                       hankelH1 : (%, %) -> %
 hankelH2 : (%, %) -> %                                 haversine : % -> %
 height : % -> NonNegativeInteger                       hermiteH : (%, %) -> %
 hornerForm : (%, %) -> %                               hurwitzLerchPhi : (%, %, %) -> %
 hurwitzZeta : (%, %) -> %                              hyperFactorial : % -> %
 hypergeometric0F1 : (%, %) -> %                        hypergeometric0F1Regularized : (%, %) -> %
 hypergeometric1F1 : (%, %, %) -> %                     hypergeometric1F1Regularized : (%, %, %) -> %
 hypergeometricU : (%, %, %) -> %                       imag : % -> %
 imaginary : () -> %                                    insert : (%, %, WSInteger) -> %
 integer? : % -> Boolean                                integral : (%, SegmentBinding(%)) -> %
 integral : (%, Symbol) -> %                            integrate : (%, %) -> %
 integrate : (%, %, Segment(Integer)) -> %              integrate : (%, Symbol) -> %
 interpolatingPolynomial : (%, %) -> %                  intersection : (%, %) -> %
 inv : % -> %                                           inverseBetaRegularized : (%, %, %) -> %
 inverseErf : % -> %                                    inverseErfc : % -> %
 inverseFourier : % -> %                                inverseFourier : (%, %) -> %
 inverseFourier : WSList(%) -> %                        inverseGammaRegularized : (%, %) -> %
 inverseGudermannian : % -> %                           inverseHaversine : % -> %
 inverseJacobiCn : (%, %) -> %                          inverseJacobiSn : (%, %) -> %
 irreducible? : % -> Boolean                            irreducible? : (%, %) -> Boolean
 is? : (%, BasicOperator) -> Boolean                    is? : (%, Symbol) -> Boolean
 isPlus : % -> Union(List(%),"failed")                  isTimes : % -> Union(List(%),"failed")
 jWSAggregate : List(%) -> %                            jWSAssociation : WSList(%) -> %
 jWSData : () -> %                                      jWSData : % -> %
 jWSData : (%, %) -> %                                  jWSData : (%, %, %) -> %
 jWSData : String -> %                                  jWSData : (String, String) -> %
 jWSData : (String, String, String) -> %                jWSEqual : (%, %) -> %
 jWSExpr : DoubleFloat -> %                             jWSExpr : Float -> %
 jWSExpr : Fraction(Integer) -> %                       jWSExpr : Integer -> %
 jWSExpr : JLFloat -> %                                 jWSExpr : JLFloat64 -> %
 jWSExpr : List(%) -> %                                 jWSExpr : String -> %
 jWSExpr : Symbol -> %                                  jWSGreater : (%, %) -> %
 jWSGreaterEqual : (%, %) -> %                          jWSInterpret : String -> %
 jWSInterpret : (String, String) -> %                   jWSInterpret : (String, String, String) -> %
 jWSLess : (%, %) -> %                                  jWSLessEqual : (%, %) -> %
 jWSNotEqual : (%, %) -> %                              jWSQuantity : % -> %
 jWSQuantity : (%, %) -> %                              jWSRule : (%, %) -> %
 jWSRule : Equation(%) -> %                             jWSTable : (%, %) -> WSList(%)
 jWSTable : (%, %, %) -> WSList(WSList(%))              jacobiAmplitude : (%, %) -> %
 jacobiCn : (%, %) -> %                                 jacobiDn : (%, %) -> %
 jacobiP : (%, %, %, %) -> %                            jacobiSn : (%, %) -> %
 jacobiTheta : (%, %) -> %                              jacobiTheta : (WSInteger, %, %) -> %
 jacobiZeta : (%, %) -> %                               jlAbout : % -> Void
 jlApply : (String, %) -> JLObject                      jlApply : (String, %, %) -> JLObject
 jlApply : (String, %, %, %) -> JLObject                jlApply : (String, %, %, %, %) -> JLObject
 jlApply : (String, %, %, %, %, %) -> JLObject          jlDisplay : % -> Void
 jlDisplay : WSExpression -> WSExpression               jlDump : JLObject -> Void
 jlEval : % -> %                                        jlEval : (%, String) -> %
 jlEval : (%, String, String) -> %                      jlEval : (%, String, String, String) -> %
 jlFieldNames : % -> JLObject                           jlGetField : (%, JLSymbol) -> JLObject
 jlGetJuliaIndex : % -> String                          jlGetProperty : (%, JLSymbol) -> JLObject
 jlGreedyEval : Boolean -> Void                         jlHead : % -> WSSymbol
 jlId : % -> JLInt64                                    jlObject : () -> String
 jlPropertyNames : % -> JLObject                        jlRef : % -> SExpression
 jlSymbolic : % -> String                               jlText : (%, String) -> List(String)
 jlType : % -> Symbol                                   jlWSAccuracy : % -> %
 jlWSDefined? : String -> Boolean                       jlWSPrecision : % -> %
 jlWSSetAccuracy : (%, %) -> %                          jlWSSetOptions : (%, %) -> %
 jlWSSetPrecision : (%, %) -> %                         jlimref : String -> %
 jlref : String -> %                                    join : (%, %) -> %
 kelvinBei : (%, %) -> %                                kelvinBer : (%, %) -> %
 kelvinKei : (%, %) -> %                                kelvinKer : (%, %) -> %
 kernel : (BasicOperator, %) -> %                       kernel : (BasicOperator, List(%)) -> %
 kernels : % -> List(Kernel(%))                         kernels : List(%) -> List(Kernel(%))
 key? : (%, %) -> Boolean                               keys : % -> %
 kleinInvariantJ : % -> %                               krawtchoukK : (%, %, %, %) -> %
 kummerM : (%, %, %) -> %                               kummerU : (%, %, %) -> %
 laguerreL : (%, %) -> %                                laguerreL : (%, %, %) -> %
 lambertW : % -> %                                      lambertW : (WSInteger, %) -> %
 last : % -> %                                          latex : % -> String
 lcm : (%, %) -> %                                      lcm : List(%) -> %
 leftPower : (%, NonNegativeInteger) -> %               leftPower : (%, PositiveInteger) -> %
 leftRecip : % -> Union(%,"failed")                     legendreP : (%, %) -> %
 legendreP : (%, %, %) -> %                             legendreQ : (%, %) -> %
 legendreQ : (%, %, %) -> %                             length : % -> %
 length : % -> WSInteger                                lerchPhi : (%, %, %) -> %
 level : (%, %) -> WSList(%)                            level : (%, %, Boolean) -> WSList(%)
 li : % -> %                                            lift : % -> SparseUnivariatePolynomial(%)
 limit : (%, %) -> %                                    log : % -> %
 log10 : % -> %                                         log2 : % -> %
 logBarnesG : % -> %                                    logGamma : % -> %
 lommelS1 : (%, %, %) -> %                              lommelS2 : (%, %, %) -> %
 lookup : (%, %) -> %                                   lookup : (%, %, %) -> %
 machineNumber? : % -> Boolean                          mainKernel : % -> Union(Kernel(%),"failed")
 map : ((% -> %), %) -> %                               map : ((% -> %), Kernel(%)) -> %
 mathieuC : (%, %, %) -> %                              mathieuCPrime : (%, %, %) -> %
 mathieuCharacteristicA : (%, %) -> %                   mathieuCharacteristicB : (%, %) -> %
 mathieuCharacteristicExponent : (%, %) -> %            mathieuS : (%, %, %) -> %
 mathieuSPrime : (%, %, %) -> %                         matrixForm : % -> %
 maxLimit : (%, %) -> %                                 maximize : (%, %) -> %
 maximize : (%, %, %) -> %                              maximize : (%, Symbol) -> %
 meixnerM : (%, %, %, %) -> %                           meixnerP : (%, %, %, %) -> %
 member? : (%, %) -> Boolean                            minLimit : (%, %) -> %
 minimalPolynomial : (%, %) -> %                        minimalPolynomial : (%, %, %) -> %
 minimize : (%, %) -> %                                 minimize : (%, %, %) -> %
 minimize : (%, Symbol) -> %                            missing? : % -> Boolean
 modularLambda : % -> %                                 monomialList : % -> %
 mutable? : % -> Boolean                                negative? : % -> Boolean
 norm : % -> %                                          normal : % -> %
 normal : (%, %) -> %                                   nothing? : % -> Boolean
 nthRoot : (%, Integer) -> %                            number? : % -> Boolean
 numberForm : % -> %                                    numberForm : (%, %) -> %
 numerDenom : % -> WSList(%)                            numerator : % -> %
 numeric : % -> WSExpression                            numeric : (%, PositiveInteger) -> WSExpression
 numeric? : % -> Boolean                                numericDSolve : (%, %, %) -> %
 numericDSolve : (%, %, %, %) -> %                      numericDSolve : (Equation(%), %, %) -> %
 numericDSolveValue : (%, %, %) -> %                    numericDSolveValue : (%, %, %, %) -> %
 numericDSolveValue : (Equation(%), %, %) -> %          numericIntegrate : (%, %) -> %
 numericIntegrate : (%, %, Segment(Integer)) -> %       numericMaximize : (%, %) -> %
 numericMaximize : (%, %, %) -> %                       numericMaximize : (%, Symbol) -> %
 numericMinimize : (%, %) -> %                          numericMinimize : (%, %, %) -> %
 numericMinimize : (%, Symbol) -> %                     numericProduct : (%, %) -> %
 numericProduct : (%, %, Segment(Integer)) -> %         numericSolve : (%, %) -> %
 numericSolve : (Equation(%), %) -> %                   numericSum : (%, %) -> %
 numericSum : (%, %, Segment(Integer)) -> %             one? : % -> Boolean
 operator : BasicOperator -> BasicOperator              operators : % -> List(BasicOperator)
 opposite? : (%, %) -> Boolean                          padeApproximant : (%, %) -> %
 parabolicCylinderD : (%, %) -> %                       paren : % -> %
 part : (%, WSInteger) -> %                             percentForm : % -> %
 percentForm : (%, %) -> %                              permutation : (%, %) -> %
 pi : () -> %                                           plenaryPower : (%, PositiveInteger) -> %
 pochhammer : (%, %) -> %                               polygamma : (%, %) -> %
 polylog : (%, %) -> %                                  polylog : (%, %, %) -> %
 polynomial? : (%, %) -> Boolean                        polynomial? : (%, WSList(%)) -> Boolean
 polynomialExpression? : (%, %) -> Boolean              polynomialExpression? : (%, WSList(%)) -> Boolean
 polynomialExtendedGCD : (%, %, %) -> %                 polynomialGCD : (%, %) -> %
 polynomialGCD : (%, %, %) -> %                         polynomialLCM : (%, %) -> %
 polynomialLCM : (%, %, %) -> %                         polynomialMod : (%, %) -> %
 polynomialQuotient : (%, %, %) -> %                    polynomialReduce : (%, %, %) -> %
 polynomialRemainder : (%, %, %) -> %                   positive? : % -> Boolean
 positiveInfinity : () -> %                             powerExpand : % -> %
 powerExpand : (%, %) -> %                              prepend : (%, %) -> %
 prime? : % -> Boolean                                  product : (%, %) -> %
 product : (%, %, Segment(Integer)) -> %                product : (%, SegmentBinding(%)) -> %
 product : (%, Symbol) -> %                             qBinomial : (%, %, %) -> %
 qFactorial : (%, %) -> %                               qGamma : (%, %) -> %
 qPochhammer : (%, %) -> %                              qPochhammer : (%, %, %) -> %
 qPolyGamma : (%, %) -> %                               qPolyGamma : (%, %, %) -> %
 qelt : (%, Integer) -> %                               qsetelt : (%, Integer, %) -> %
 qsetelt! : (%, Integer, %) -> %                        quantityForm : (%, %) -> %
 quantityForm : (%, WSList(%)) -> %                     quantityMagnitude : % -> %
 quantityUnit : % -> %                                  ?quo? : (%, %) -> %
 racahR : (%, %, %, %, %, %) -> %                       ramanujanTau : % -> %
 ramanujanTauL : % -> %                                 ramanujanTauTheta : % -> %
 ramanujanTauZ : % -> %                                 rank : () -> PositiveInteger
 rational? : % -> Boolean                               rationalApproximation : % -> %
 rationalApproximation : (%, %) -> %                    rationalExpression? : (%, %) -> Boolean
 rationalExpression? : (%, WSList(%)) -> Boolean        real : % -> %
 real? : % -> Boolean                                   realNumeric? : % -> Boolean
 realNumericSolve : (%, %) -> %                         realNumericSolve : (Equation(%), %) -> %
 recip : % -> Union(%,"failed")                         reduce : (%, %) -> %
 reduce : (%, %, %) -> %                                reduce : (Equation(%), %) -> %
 reduce : (Equation(%), %, %) -> %                      reduce : SparseUnivariatePolynomial(%) -> %
 reducedSystem : Matrix(%) -> Matrix(%)                 refine : (%, %) -> %
 regularRepresentation : % -> Matrix(%)                 ?rem? : (%, %) -> %
 removeDuplicates : % -> %                              replace : (%, %) -> %
 replace : (%, %, %) -> %                               replaceAll : (%, %) -> %
 replaceAt : (%, %, %) -> %                             replacePart : (%, %) -> %
 replaceRepeated : (%, %) -> %                          represents : Vector(%) -> %
 represents : (Vector(%), Vector(%)) -> %               residue : (%, %) -> %
 residueSum : (%, %) -> %                               rest : % -> %
 resultant : (%, %, %) -> %                             retract : % -> %
 retract : % -> Expression(Float)                       retract : % -> Expression(Integer)
 retract : % -> Fraction(Polynomial(%))                 retract : % -> Kernel(%)
 retract : % -> Polynomial(%)                           retract : % -> Symbol
 retractIfCan : % -> Union(%,"failed")                  retractIfCan : % -> Union(DoubleFloat,"failed")
 retractIfCan : % -> Union(JLFloat64,"failed")          retractIfCan : % -> Union(Kernel(%),"failed")
 retractIfCan : % -> Union(Polynomial(%),"failed")      retractIfCan : % -> Union(Symbol,"failed")
 reverse : % -> %                                       reverse : (%, WSInteger) -> %
 reverse : (%, WSList(WSInteger)) -> %                  riemannSiegelTheta : % -> %
 riemannSiegelZ : % -> %                                riemannZeta : % -> %
 riemannZeta : (%, %) -> %                              riffle : (%, %) -> %
 riffle : (%, %, %) -> %                                rightPower : (%, NonNegativeInteger) -> %
 rightPower : (%, PositiveInteger) -> %                 rightRecip : % -> Union(%,"failed")
 rootOf : % -> %                                        rootOf : (%, Symbol) -> %
 rootOf : Polynomial(%) -> %                            rootOf : SparseUnivariatePolynomial(%) -> %
 rootReduce : % -> %                                    rootsOf : % -> List(%)
 rootsOf : (%, Symbol) -> List(%)                       rootsOf : Polynomial(%) -> List(%)
 round : % -> %                                         sample : () -> %
 scientificForm : % -> %                                scientificForm : (%, %) -> %
 sec : % -> %                                           sech : % -> %
 select : (%, %) -> %                                   select : (%, %, %) -> %
 series : (%, %) -> %                                   setIntersection : (%, %) -> %
 setelt : (%, Integer, %) -> %                          setelt! : (%, Integer, %) -> %
 siegelTheta : (%, %) -> %                              siegelTheta : (%, %, %) -> %
 sign : % -> %                                          simplify : % -> %
 simplify : (%, %) -> %                                 sin : % -> %
 sinc : % -> %                                          sinh : % -> %
 sizeLess? : (%, %) -> Boolean                          smaller? : (%, %) -> Boolean
 solve : (%, %) -> WSList(WSList(%))                    solve : (%, %, %) -> WSList(WSList(%))
 solve : (Equation(%), %) -> WSList(WSList(%))          sort : % -> %
 sorted? : % -> Boolean                                 sphericalBesselJ : (%, %) -> %
 sphericalBesselY : (%, %) -> %                         sphericalHankelH1 : (%, %) -> %
 sphericalHankelH2 : (%, %) -> %                        sphericalHarmonicY : (%, %, %, %) -> %
 sqrt : % -> %                                          squareFree : % -> Factored(%)
 squareFreePart : % -> %                                stieltjesGamma : % -> %
 stieltjesGamma : (%, %) -> %                           string : % -> String
 struveH : (%, %) -> %                                  struveL : (%, %) -> %
 subResultants : (%, %, %) -> %                         subst : (%, Equation(%)) -> %
 subst : (%, List(Equation(%))) -> %                    subst : (%, List(Kernel(%)), List(%)) -> %
 subtractIfCan : (%, %) -> Union(%,"failed")            sum : (%, %) -> %
 sum : (%, %, Segment(Integer)) -> %                    sum : (%, Symbol) -> %
 summation : (%, SegmentBinding(%)) -> %                summation : (%, Symbol) -> %
 symmetricPolynomial : (%, WSList(%)) -> %              symmetricReduction : (%, WSList(%)) -> WSList(%)
 take : (%, Integer) -> %                               take : (%, WSList(WSInteger)) -> %
 tan : % -> %                                           tanh : % -> %
 toExpression : String -> %                             toExpression : (String, %) -> %
 toExpression : (String, %, %) -> %                     toString : % -> String
 toString : (%, %) -> String                            together : % -> %
 tower : % -> List(Kernel(%))                           tower : List(%) -> List(Kernel(%))
 trace : % -> %                                         traceMatrix : () -> Matrix(%)
 traceMatrix : Vector(%) -> Matrix(%)                   traditionalForm : % -> %
 trigExpand : % -> %                                    trigFactor : % -> %
 trigFactorList : % -> WSList(%)                        trigReduce : % -> %
 trigToExp : % -> %                                     union : (%, %) -> %
 unit? : % -> Boolean                                   unitCanonical : % -> %
 unitStep : % -> %                                      values : % -> %
 variables : % -> List(Symbol)                          variables : List(%) -> List(Symbol)
 variables : % -> WSList(%)                             weberE : (%, %) -> %
 weberE : (%, %, %) -> %                                weierstrassP : (%, %, %) -> %
 weierstrassPInverse : (%, %, %) -> %                   weierstrassPPrime : (%, %, %) -> %
 weierstrassSigma : (%, %, %) -> %                      weierstrassZeta : (%, %, %) -> %
 whittakerM : (%, %, %) -> %                            whittakerW : (%, %, %) -> %
 wilsonW : (%, %, %, %, %, %) -> %                      zernikeR : (%, %, %) -> %
 zero? : % -> Boolean                                   zeroOf : % -> %
 zeroOf : (%, Symbol) -> %                              zeroOf : Polynomial(%) -> %
 zeroOf : SparseUnivariatePolynomial(%) -> %            zerosOf : % -> List(%)
 zerosOf : (%, Symbol) -> List(%)                       zerosOf : Polynomial(%) -> List(%)
 ?~=? : (%, %) -> Boolean
 ?/? : (SparseMultivariatePolynomial(%,Kernel(%)), SparseMultivariatePolynomial(%,Kernel(%))) -> %
 D : (%, List(Symbol), List(NonNegativeInteger)) -> %
 characteristicPolynomial : % -> SparseUnivariatePolynomial(%)
 coerce : SparseMultivariatePolynomial(%,Kernel(%)) -> %
 coordinates : (Vector(%), Vector(%)) -> Matrix(%)
 definingPolynomial : () -> SparseUnivariatePolynomial(%)
 denom : % -> SparseMultivariatePolynomial(%,Kernel(%))
 derivationCoordinates : (Vector(%), (% -> %)) -> Matrix(%)
 differentiate : (%, List(%), List(NonNegativeInteger)) -> %
 differentiate : (%, List(Symbol), List(NonNegativeInteger)) -> %
 differentiate : (%, (% -> %), NonNegativeInteger) -> %
 differentiate : (%, Symbol, NonNegativeInteger) -> %
 divide : (%, %) -> Record(quotient: %,remainder: %)
 elt : (BasicOperator, %, %, %, %, %, %, %) -> %
 elt : (BasicOperator, %, %, %, %, %, %, %, %) -> %
 elt : (BasicOperator, %, %, %, %, %, %, %, %, %) -> %
 eval : (%, List(BasicOperator), List((% -> %))) -> %
 eval : (%, List(BasicOperator), List((List(%) -> %))) -> %
 eval : (%, List(Symbol), List((List(%) -> %))) -> %
 eval : (%, List(Symbol), List(NonNegativeInteger), List((% -> %))) -> %
 eval : (%, List(Symbol), List(NonNegativeInteger), List((List(%) -> %))) -> %
 eval : (%, Symbol, NonNegativeInteger, (% -> %)) -> %
 eval : (%, Symbol, NonNegativeInteger, (List(%) -> %)) -> %
 expressIdealMember : (List(%), %) -> Union(List(%),"failed")
 extendedEuclidean : (%, %) -> Record(coef1: %,coef2: %,generator: %)
 extendedEuclidean : (%, %, %) -> Union(Record(coef1: %,coef2: %),"failed")
 factorPolynomial : SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if % has PFECAT
 factorSquareFreePolynomial : SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if % has PFECAT
 findInstance : (%, %, %, %) -> WSList(WSList(%))
 findInstance : (Equation(%), %) -> WSList(WSList(%))
 findInstance : (Equation(%), %, %) -> WSList(WSList(%))
 findInstance : (Equation(%), %, %, %) -> WSList(WSList(%))
 gcdPolynomial : (SparseUnivariatePolynomial(%), SparseUnivariatePolynomial(%)) -> SparseUnivariatePolynomial(%)
 inverseFourier : (WSList(%), WSList(%)) -> WSList(%)
 isExpt : % -> Union(Record(var: Kernel(%),exponent: Integer),"failed")
 isExpt : (%, BasicOperator) -> Union(Record(var: Kernel(%),exponent: Integer),"failed")
 isExpt : (%, Symbol) -> Union(Record(var: Kernel(%),exponent: Integer),"failed")
 isMult : % -> Union(Record(coef: Integer,var: Kernel(%)),"failed")
 isPower : % -> Union(Record(val: %,exponent: Integer),"failed")
 jlDisplay : (WSExpression, WSExpression) -> WSExpression
 lcmCoef : (%, %) -> Record(llcm_res: %,coeff1: %,coeff2: %)
 minPoly : Kernel(%) -> SparseUnivariatePolynomial(%)
 minimalPolynomial : % -> SparseUnivariatePolynomial(%)
 multiEuclidean : (List(%), %) -> Union(List(%),"failed")
 numer : % -> SparseMultivariatePolynomial(%,Kernel(%))
 polynomialQuotientRemainder : (%, %, %) -> WSList(%)
 principalIdeal : List(%) -> Record(coef: List(%),generator: %)
 reduce : Fraction(SparseUnivariatePolynomial(%)) -> Union(%,"failed")
 reducedSystem : (Matrix(%), Vector(%)) -> Record(mat: Matrix(%),vec: Vector(%))
 regularRepresentation : (%, Vector(%)) -> Matrix(%)
 retract : % -> Fraction(Integer) if % has RETRACT(FRAC(INT))
 retractIfCan : % -> Union(Expression(Float),"failed")
 retractIfCan : % -> Union(Expression(Integer),"failed")
 retractIfCan : % -> Union(Fraction(Integer),"failed") if % has RETRACT(FRAC(INT))
 retractIfCan : % -> Union(Fraction(Polynomial(%)),"failed")
 rootOf : (SparseUnivariatePolynomial(%), Symbol) -> %
 rootSum : (%, SparseUnivariatePolynomial(%), Symbol) -> %
 rootsOf : SparseUnivariatePolynomial(%) -> List(%)
 rootsOf : (SparseUnivariatePolynomial(%), Symbol) -> List(%)
 solve : (Equation(%), %, %) -> WSList(WSList(%))
 solveLinearPolynomialEquation : (List(SparseUnivariatePolynomial(%)), SparseUnivariatePolynomial(%)) -> Union(List(SparseUnivariatePolynomial(%)),"failed") if % has PFECAT
 squareFreePolynomial : SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if % has PFECAT
 symmetricReduction : (%, WSList(%), WSList(%)) -> WSList(%)
 unitNormal : % -> Record(unit: %,canonical: %,associate: %)
 univariate : (%, Kernel(%)) -> Fraction(SparseUnivariatePolynomial(%))
 zeroOf : (SparseUnivariatePolynomial(%), Symbol) -> %
 zerosOf : SparseUnivariatePolynomial(%) -> List(%)
 zerosOf : (SparseUnivariatePolynomial(%), Symbol) -> List(%)
```

---
[Back to Index](../index.md)
