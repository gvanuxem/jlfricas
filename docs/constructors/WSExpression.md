# WSExpression

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS expressions using the MathLink Julia package. It supports the Eltable category (interface) so, fo r example using Fibonacci polynomials fibonacci(12,jWSExpr x) => 3 75 77 79 411 6 x + 35 x 2+ 56 x 2+ 36 x 2+ 10 x 2+ x %.5 => 10*x^9

**WSExpression is a domain constructor.**  
**Abbreviation for WSExpression is WSEXPR**  
**520 names for 823 operations in this domain.**

## Signatures

```fricas
 0 : () -> %    1 : () -> %
 #? : % -> WSInteger    ?*? : (%, %) -> %
 ?*? : (Integer, %) -> %    ?*? : (NonNegativeInteger, %) -> %
 ?*? : (PositiveInteger, %) -> %    ?*? : (NMInteger, %) -> JLObject
 ?+? : (%, %) -> %    -? : % -> %
 ?-? : (%, %) -> %    ?/? : (%, %) -> %
 ?<? : (%, %) -> Boolean    ?<=? : (%, %) -> Boolean
 ?=? : (%, %) -> Boolean    ?>? : (%, %) -> Boolean
 ?>=? : (%, %) -> Boolean    Beta : (%, %) -> %
 Beta : (%, %, %) -> %    Chi : % -> %
 Ci : % -> %    D : (%, %) -> %
 D : (%, %, NonNegativeInteger) -> %    D : (%, List(%)) -> %
 D : (%, List(%), List(NonNegativeInteger)) -> %    D : (%, List(Symbol)) -> %
 D : (%, List(Symbol), List(NonNegativeInteger)) -> %    D : (%, (% -> %)) -> %
 D : (%, (% -> %), NonNegativeInteger) -> %    D : (%, Symbol) -> %
 D : (%, Symbol, NonNegativeInteger) -> %    Ei : % -> %
 EiEn : (%, %) -> %    Gamma : % -> %
 Gamma : (%, %) -> %    Gamma : (%, %, %) -> %
 Shi : % -> %    Si : % -> %
 ?^? : (%, %) -> %    ?^? : (%, Fraction(Integer)) -> %
 ?^? : (%, Integer) -> %    ?^? : (%, NonNegativeInteger) -> %
 ?^? : (%, PositiveInteger) -> %    ?^? : (%, WSRational) -> %
 abs : % -> %    accountingForm : % -> %
 accountingForm : (%, %) -> %    acos : % -> %
 acosh : % -> %    acot : % -> %
 acoth : % -> %    acsc : % -> %
 acsch : % -> %    airyAi : % -> %
 airyAiPrime : % -> %    airyAiZero : % -> %
 airyAiZero : (%, %) -> %    airyBi : % -> %
 airyBiPrime : % -> %    airyBiZero : % -> %
 airyBiZero : (%, %) -> %    algtower : % -> List(Kernel(%))
 algtower : List(%) -> List(Kernel(%))    angerJ : (%, %) -> %
 angerJ : (%, %, %) -> %    annihilate? : (%, %) -> Boolean
 antiCommutator : (%, %) -> %    apart : % -> %
 apart : (%, %) -> %    append : (%, %) -> %
 applyQuote : (Symbol, %) -> %    applyQuote : (Symbol, %, %) -> %
 applyQuote : (Symbol, %, %, %) -> %    applyQuote : (Symbol, %, %, %, %) -> %
 applyQuote : (Symbol, List(%)) -> %    argument : % -> %
 asec : % -> %    asech : % -> %
 asin : % -> %    asinh : % -> %
 associates? : (%, %) -> Boolean    associator : (%, %, %) -> %
 assuming : (%, %) -> %    atan : % -> %
 atan : (%, %) -> %    atanh : % -> %
 barnesG : % -> %    baseForm : (%, %) -> %
 basis : () -> Vector(%)    belong? : BasicOperator -> Boolean
 besselI : (%, %) -> %    besselJ : (%, %) -> %
 besselJZero : (%, %) -> %    besselK : (%, %) -> %
 besselY : (%, %) -> %    besselYZero : (%, %) -> %
 betaRegularized : (%, %, %) -> %    binomial : (%, %) -> %
 box : % -> %    cancel : % -> %
 catalan : () -> %    ceiling : % -> %
 characteristic : () -> NonNegativeInteger    charlierC : (%, %, %) -> %
 chebyshevT : (%, %) -> %    chebyshevU : (%, %) -> %
 coefficient : (%, %) -> %    coefficient : (%, %, %) -> %
 coefficientList : (%, %) -> %    coefficientRules : % -> %
 coefficientRules : (%, %) -> %    coerce : % -> %
 coerce : Complex(Integer) -> %    coerce : Equation(%) -> %
 coerce : Float -> %    coerce : Fraction(%) -> %
 coerce : Fraction(Integer) -> %    coerce : Fraction(Polynomial(%)) -> %
 coerce : Fraction(Polynomial(Fraction(%))) -> %    coerce : Integer -> %
 coerce : Kernel(%) -> %    coerce : List(%) -> %
 coerce : Polynomial(%) -> %    coerce : Polynomial(Fraction(%)) -> %
 coerce : String -> %    coerce : Symbol -> %
 coerce : WSSymbol -> %    coerce : % -> JLObject
 coerce : % -> OutputForm    coerce : % -> WSExpression
 coerce : % -> WSInteger    coerce : % -> WSRational
 collect : (%, %) -> %    collect : (%, WSList(%)) -> %
 commutator : (%, %) -> %    complex : (%, %) -> %
 complexExpand : % -> %    complexExpand : (%, %) -> %
 conjugate : % -> %    convert : Factored(%) -> %
 convert : SparseUnivariatePolynomial(%) -> %    convert : Vector(%) -> %
 convert : % -> SparseUnivariatePolynomial(%)    convert : % -> String
 convert : % -> Vector(%)    coordinates : Vector(%) -> Matrix(%)
 coordinates : (Vector(%), Vector(%)) -> Matrix(%)    coordinates : % -> Vector(%)
 coordinates : (%, Vector(%)) -> Vector(%)    cos : % -> %
 cosh : % -> %    cot : % -> %
 coth : % -> %    coulombF : (%, %, %) -> %
 coulombG : (%, %, %) -> %    coulombH1 : (%, %, %) -> %
 coulombH2 : (%, %, %) -> %    csc : % -> %
 csch : % -> %    dSolve : (%, %, %) -> %
 dSolve : (Equation(%), %, %) -> %    dSolveValue : (%, %, %) -> %
 dSolveValue : (Equation(%), %, %) -> %    dawson : % -> %
 decimalForm : % -> %    decimalForm : (%, %) -> %
 decompose : (%, %) -> WSList(%)    dedekindEta : % -> %
 defined? : % -> Boolean    definingPolynomial : % -> %
 degree : () -> %    delete : (%, WSList(WSInteger)) -> %
 denominator : % -> %    derivative : (BasicOperator, %) -> %
 derivative : (BasicOperator, %, %) -> %    differentiate : (%, %) -> %
 differentiate : (%, %, NonNegativeInteger) -> %    differentiate : (%, List(%)) -> %
 differentiate : (%, List(Symbol)) -> %    differentiate : (%, (% -> %)) -> %
 differentiate : (%, Symbol) -> %    differentiate : (%, Symbol, NonNegativeInteger) -> %
 digamma : % -> %    digamma : (%, %) -> %
 dilog : % -> %    dimensions : % -> WSList(WSInteger)
 diracDelta : % -> %    dirichletEta : % -> %
 dirichletL : (%, %, %) -> %    discriminant : () -> %
 discriminant : (%, %) -> %    discriminant : Vector(%) -> %
 distribute : % -> %    distribute : (%, %) -> %
 divide : (%, %) -> Record(quotient: %,remainder: %)    ellipticE : % -> %
 ellipticE : (%, %) -> %    ellipticF : (%, %) -> %
 ellipticK : % -> %    ellipticPi : (%, %) -> %
 ellipticPi : (%, %, %) -> %    ellipticTheta : (%, %, %) -> %
 ellipticThetaPrime : (%, %, %) -> %    elt : (%, Integer) -> %
 elt : (BasicOperator, %) -> %    elt : (BasicOperator, %, %) -> %
 elt : (BasicOperator, %, %, %) -> %    elt : (BasicOperator, %, %, %, %) -> %
 elt : (BasicOperator, %, %, %, %, %) -> %    elt : (BasicOperator, %, %, %, %, %, %) -> %
 elt : (BasicOperator, %, %, %, %, %, %, %) -> %    elt : (BasicOperator, List(%)) -> %
 engineeringForm : % -> %    engineeringForm : (%, %) -> %
 erf : % -> %    erf : (%, %) -> %
 erfc : % -> %    erfi : % -> %
 euclideanSize : % -> NonNegativeInteger    eulerE : WSInteger -> %
 eulerE : (WSInteger, %) -> %    eulerGamma : () -> %
 eulerPhi : WSInteger -> %    eval : (%, %, %) -> %
 eval : (%, BasicOperator, (% -> %)) -> %    eval : (%, BasicOperator, (List(%) -> %)) -> %
 eval : (%, Equation(%)) -> %    eval : (%, Kernel(%), %) -> %
 eval : (%, List(%), List(%)) -> %    eval : (%, List(BasicOperator), List((% -> %))) -> %
 eval : (%, List(Equation(%))) -> %    eval : (%, List(Kernel(%)), List(%)) -> %
 eval : (%, List(Symbol), List((% -> %))) -> %    eval : (%, List(Symbol), List((List(%) -> %))) -> %
 eval : (%, Symbol, (% -> %)) -> %    eval : (%, Symbol, (List(%) -> %)) -> %
 exactNumber? : % -> Boolean    exp : () -> %
 exp : % -> %    expToTrig : % -> %
 expand : % -> %    expand : (%, %) -> %
 expandDenominator : % -> %    expandNumerator : % -> %
 exponent : (%, %) -> %    exponent : (%, %, %) -> %
 ?exquo? : (%, %) -> Union(%,"failed")    extendedExpand : % -> %
 extendedSimplify : % -> %    extendedSimplify : (%, %) -> %
 extract : (%, NonNegativeInteger) -> %    extract : (%, WSExpression) -> %
 factor : % -> %    factor : (%, %) -> %
 factor : % -> Factored(%)    factorList : % -> WSList(WSList(%))
 factorPolynomial : % -> %    factorSquareFree : % -> %
 factorSquareFreeList : % -> WSList(WSList(%))    factorTerms : % -> %
 factorTerms : (%, %) -> %    factorTerms : (%, WSList(%)) -> %
 factorTermsList : % -> WSList(%)    factorTermsList : (%, %) -> WSList(%)
 factorial : % -> %    factorials : % -> %
 factorials : (%, Symbol) -> %    fibonacci : (%, %) -> %
 findInstance : (%, %) -> WSList(WSList(%))    findInstance : (%, %, %) -> WSList(WSList(%))
 findInstance : (%, %, %, %) -> WSList(WSList(%))    findInstance : (Equation(%), %) -> WSList(WSList(%))
 findRoot : (%, %) -> %    first : % -> %
 floor : % -> %    fourier : % -> %
 fourier : (%, %) -> %    fourier : WSList(%) -> WSList(%)
 fourier : (WSList(%), WSList(%)) -> WSList(%)    fractionPart : % -> %
 freeOf? : (%, %) -> Boolean    freeOf? : (%, Symbol) -> Boolean
 fresnelC : % -> %    fresnelS : % -> %
 fromCoefficientRules : (%, %) -> %    functionExpand : % -> %
 functionExpand : (%, %) -> %    gammaRegularized : (%, %) -> %
 gcd : (%, %) -> %    gcd : List(%) -> %
 gegenbauerC : (%, %) -> %    gegenbauerC : (%, %, %) -> %
 generator : () -> %    goldenRatio : () -> %
 groebnerBasis : (%, %) -> WSList(%)    groebnerBasis : (%, %, %) -> WSList(%)
 ground : % -> %    ground? : % -> Boolean
 gudermannian : % -> %    guessGeneratingFunction : (%, %) -> %
 guessGeneratingFunction : (WSList(%), %) -> %    guessSequenceFunction : % -> %
 guessSequenceFunction : (%, %) -> %    guessSequenceFunction : WSList(WSInteger) -> %
 hahnQ : (%, %, %, %, %) -> %    hahnR : (%, %, %, %, %) -> %
 hahnS : (%, %, %, %, %) -> %    hahn_p : (%, %, %, %, %, %) -> %
 hankelH1 : (%, %) -> %    hankelH2 : (%, %) -> %
 haversine : % -> %    height : % -> NonNegativeInteger
 hermiteH : (%, %) -> %    hornerForm : (%, %) -> %
 hurwitzLerchPhi : (%, %, %) -> %    hurwitzZeta : (%, %) -> %
 hyperFactorial : % -> %    hypergeometric0F1 : (%, %) -> %
 hypergeometric0F1Regularized : (%, %) -> %    hypergeometric1F1 : (%, %, %) -> %
 hypergeometric1F1Regularized : (%, %, %) -> %    hypergeometricU : (%, %, %) -> %
 imag : % -> %    imaginary : () -> %
 insert : (%, %, WSInteger) -> %    integer? : % -> Boolean
 integral : (%, SegmentBinding(%)) -> %    integral : (%, Symbol) -> %
 integrate : (%, %) -> %    integrate : (%, %, Segment(Integer)) -> %
 integrate : (%, Symbol) -> %    interpolatingPolynomial : (%, %) -> %
 intersection : (%, %) -> %    inv : % -> %
 inverseBetaRegularized : (%, %, %) -> %    inverseErf : % -> %
 inverseErfc : % -> %    inverseFourier : % -> %
 inverseFourier : (%, %) -> %    inverseFourier : WSList(%) -> %
 inverseFourier : (WSList(%), WSList(%)) -> WSList(%)    inverseGammaRegularized : (%, %) -> %
 inverseGudermannian : % -> %    inverseHaversine : % -> %
 inverseJacobiCn : (%, %) -> %    inverseJacobiSn : (%, %) -> %
 irreducible? : % -> Boolean    irreducible? : (%, %) -> Boolean
 is? : (%, BasicOperator) -> Boolean    is? : (%, Symbol) -> Boolean
 isPlus : % -> Union(List(%),"failed")    isTimes : % -> Union(List(%),"failed")
 jWSAggregate : List(%) -> %    jWSAssociation : WSList(%) -> %
 jWSData : () -> %    jWSData : % -> %
 jWSData : (%, %) -> %    jWSData : (%, %, %) -> %
 jWSData : String -> %    jWSData : (String, String) -> %
 jWSData : (String, String, String) -> %    jWSEqual : (%, %) -> %
 jWSExpr : DoubleFloat -> %    jWSExpr : Float -> %
 jWSExpr : Fraction(Integer) -> %    jWSExpr : Integer -> %
 jWSExpr : JLFloat -> %    jWSExpr : JLFloat64 -> %
 jWSExpr : List(%) -> %    jWSExpr : String -> %
 jWSExpr : Symbol -> %    jWSGreater : (%, %) -> %
 jWSGreaterEqual : (%, %) -> %    jWSInterpret : String -> %
 jWSInterpret : (String, String) -> %    jWSInterpret : (String, String, String) -> %
 jWSLess : (%, %) -> %    jWSLessEqual : (%, %) -> %
 jWSNotEqual : (%, %) -> %    jWSQuantity : % -> %
 jWSQuantity : (%, %) -> %    jWSRule : (%, %) -> %
 jWSRule : Equation(%) -> %    jWSTable : (%, %) -> WSList(%)
 jWSTable : (%, %, %) -> WSList(WSList(%))    jacobiAmplitude : (%, %) -> %
 jacobiCn : (%, %) -> %    jacobiDn : (%, %) -> %
 jacobiP : (%, %, %, %) -> %    jacobiSn : (%, %) -> %
 jacobiTheta : (%, %) -> %    jacobiTheta : (WSInteger, %, %) -> %
 jacobiZeta : (%, %) -> %    jlAbout : % -> Void
 jlApply : (String, %) -> JLObject    jlApply : (String, %, %) -> JLObject
 jlApply : (String, %, %, %) -> JLObject    jlApply : (String, %, %, %, %) -> JLObject
 jlApply : (String, %, %, %, %, %) -> JLObject    jlDisplay : % -> Void
 jlDisplay : WSExpression -> WSExpression    jlDisplay : (WSExpression, WSExpression) -> WSExpression
 jlDump : JLObject -> Void    jlEval : % -> %
 jlEval : (%, String) -> %    jlEval : (%, String, String) -> %
 jlEval : (%, String, String, String) -> %    jlFieldNames : % -> JLObject
 jlGetField : (%, JLSymbol) -> JLObject    jlGetJuliaIndex : % -> String
 jlGetProperty : (%, JLSymbol) -> JLObject    jlGreedyEval : Boolean -> Void
 jlHead : % -> WSSymbol    jlId : % -> JLInt64
 jlObject : () -> String    jlPropertyNames : % -> JLObject
 jlRef : % -> SExpression    jlSymbolic : % -> String
 jlText : (%, String) -> List(String)    jlType : % -> Symbol
 jlWSAccuracy : % -> %    jlWSDefined? : String -> Boolean
 jlWSPrecision : % -> %    jlWSSetAccuracy : (%, %) -> %
 jlWSSetOptions : (%, %) -> %    jlWSSetPrecision : (%, %) -> %
 jlimref : String -> %    jlref : String -> %
 join : (%, %) -> %    kelvinBei : (%, %) -> %
 kelvinBer : (%, %) -> %    kelvinKei : (%, %) -> %
 kelvinKer : (%, %) -> %    kernel : (BasicOperator, %) -> %
 kernel : (BasicOperator, List(%)) -> %    kernels : % -> List(Kernel(%))
 kernels : List(%) -> List(Kernel(%))    key? : (%, %) -> Boolean
 keys : % -> %    kleinInvariantJ : % -> %
 krawtchoukK : (%, %, %, %) -> %    kummerM : (%, %, %) -> %
 kummerU : (%, %, %) -> %    laguerreL : (%, %) -> %
 laguerreL : (%, %, %) -> %    lambertW : % -> %
 lambertW : (WSInteger, %) -> %    last : % -> %
 latex : % -> String    lcm : (%, %) -> %
 lcm : List(%) -> %    leftPower : (%, NonNegativeInteger) -> %
 leftPower : (%, PositiveInteger) -> %    leftRecip : % -> Union(%,"failed")
 legendreP : (%, %) -> %    legendreP : (%, %, %) -> %
 legendreQ : (%, %) -> %    legendreQ : (%, %, %) -> %
 length : % -> %    length : % -> WSInteger
 lerchPhi : (%, %, %) -> %    level : (%, %) -> WSList(%)
 level : (%, %, Boolean) -> WSList(%)    li : % -> %
 lift : % -> SparseUnivariatePolynomial(%)    limit : (%, %) -> %
 log : % -> %    log10 : % -> %
 log2 : % -> %    logBarnesG : % -> %
 logGamma : % -> %    lommelS1 : (%, %, %) -> %
 lommelS2 : (%, %, %) -> %    lookup : (%, %) -> %
 lookup : (%, %, %) -> %    machineNumber? : % -> Boolean
 mainKernel : % -> Union(Kernel(%),"failed")    map : ((% -> %), %) -> %
 map : ((% -> %), Kernel(%)) -> %    mathieuC : (%, %, %) -> %
 mathieuCPrime : (%, %, %) -> %    mathieuCharacteristicA : (%, %) -> %
 mathieuCharacteristicB : (%, %) -> %    mathieuCharacteristicExponent : (%, %) -> %
 mathieuS : (%, %, %) -> %    mathieuSPrime : (%, %, %) -> %
 matrixForm : % -> %    maxLimit : (%, %) -> %
 maximize : (%, %) -> %    maximize : (%, %, %) -> %
 maximize : (%, Symbol) -> %    meixnerM : (%, %, %, %) -> %
 meixnerP : (%, %, %, %) -> %    member? : (%, %) -> Boolean
 minLimit : (%, %) -> %    minPoly : Kernel(%) -> SparseUnivariatePolynomial(%)
 minimalPolynomial : (%, %) -> %    minimalPolynomial : (%, %, %) -> %
 minimalPolynomial : % -> SparseUnivariatePolynomial(%)    minimize : (%, %) -> %
 minimize : (%, %, %) -> %    minimize : (%, Symbol) -> %
 missing? : % -> Boolean    modularLambda : % -> %
 monomialList : % -> %    mutable? : % -> Boolean
 negative? : % -> Boolean    norm : % -> %
 normal : % -> %    normal : (%, %) -> %
 nothing? : % -> Boolean    nthRoot : (%, Integer) -> %
 number? : % -> Boolean    numberForm : % -> %
 numberForm : (%, %) -> %    numerDenom : % -> WSList(%)
 numerator : % -> %    numeric : % -> WSExpression
 numeric : (%, PositiveInteger) -> WSExpression    numeric? : % -> Boolean
 numericDSolve : (%, %, %) -> %    numericDSolve : (%, %, %, %) -> %
 numericDSolve : (Equation(%), %, %) -> %    numericDSolveValue : (%, %, %) -> %
 numericDSolveValue : (%, %, %, %) -> %    numericDSolveValue : (Equation(%), %, %) -> %
 numericIntegrate : (%, %) -> %    numericIntegrate : (%, %, Segment(Integer)) -> %
 numericMaximize : (%, %) -> %    numericMaximize : (%, %, %) -> %
 numericMaximize : (%, Symbol) -> %    numericMinimize : (%, %) -> %
 numericMinimize : (%, %, %) -> %    numericMinimize : (%, Symbol) -> %
 numericProduct : (%, %) -> %    numericProduct : (%, %, Segment(Integer)) -> %
 numericSolve : (%, %) -> %    numericSolve : (Equation(%), %) -> %
 numericSum : (%, %) -> %    numericSum : (%, %, Segment(Integer)) -> %
 one? : % -> Boolean    operator : BasicOperator -> BasicOperator
 operators : % -> List(BasicOperator)    opposite? : (%, %) -> Boolean
 padeApproximant : (%, %) -> %    parabolicCylinderD : (%, %) -> %
 paren : % -> %    part : (%, WSInteger) -> %
 percentForm : % -> %    percentForm : (%, %) -> %
 permutation : (%, %) -> %    pi : () -> %
 plenaryPower : (%, PositiveInteger) -> %    pochhammer : (%, %) -> %
 polygamma : (%, %) -> %    polylog : (%, %) -> %
 polylog : (%, %, %) -> %    polynomial? : (%, %) -> Boolean
 polynomial? : (%, WSList(%)) -> Boolean    polynomialExpression? : (%, %) -> Boolean
 polynomialExpression? : (%, WSList(%)) -> Boolean    polynomialExtendedGCD : (%, %, %) -> %
 polynomialGCD : (%, %) -> %    polynomialGCD : (%, %, %) -> %
 polynomialLCM : (%, %) -> %    polynomialLCM : (%, %, %) -> %
 polynomialMod : (%, %) -> %    polynomialQuotient : (%, %, %) -> %
 polynomialQuotientRemainder : (%, %, %) -> WSList(%)    polynomialReduce : (%, %, %) -> %
 polynomialRemainder : (%, %, %) -> %    positive? : % -> Boolean
 positiveInfinity : () -> %    powerExpand : % -> %
 powerExpand : (%, %) -> %    prepend : (%, %) -> %
 prime? : % -> Boolean    product : (%, %) -> %
 product : (%, %, Segment(Integer)) -> %    product : (%, SegmentBinding(%)) -> %
 product : (%, Symbol) -> %    qBinomial : (%, %, %) -> %
 qFactorial : (%, %) -> %    qGamma : (%, %) -> %
 qPochhammer : (%, %) -> %    qPochhammer : (%, %, %) -> %
 qPolyGamma : (%, %) -> %    qPolyGamma : (%, %, %) -> %
 qelt : (%, Integer) -> %    qsetelt : (%, Integer, %) -> %
 qsetelt! : (%, Integer, %) -> %    quantityForm : (%, %) -> %
 quantityForm : (%, WSList(%)) -> %    quantityMagnitude : % -> %
 quantityUnit : % -> %    ?quo? : (%, %) -> %
 racahR : (%, %, %, %, %, %) -> %    ramanujanTau : % -> %
 ramanujanTauL : % -> %    ramanujanTauTheta : % -> %
 ramanujanTauZ : % -> %    rank : () -> PositiveInteger
 rational? : % -> Boolean    rationalApproximation : % -> %
 rationalApproximation : (%, %) -> %    rationalExpression? : (%, %) -> Boolean
 rationalExpression? : (%, WSList(%)) -> Boolean    real : % -> %
 real? : % -> Boolean    realNumeric? : % -> Boolean
 realNumericSolve : (%, %) -> %    realNumericSolve : (Equation(%), %) -> %
 recip : % -> Union(%,"failed")    reduce : (%, %) -> %
 reduce : (%, %, %) -> %    reduce : (Equation(%), %) -> %
 reduce : (Equation(%), %, %) -> %    reduce : SparseUnivariatePolynomial(%) -> %
 reducedSystem : Matrix(%) -> Matrix(%)    refine : (%, %) -> %
 regularRepresentation : % -> Matrix(%)    regularRepresentation : (%, Vector(%)) -> Matrix(%)
 ?rem? : (%, %) -> %    removeDuplicates : % -> %
 replace : (%, %) -> %    replace : (%, %, %) -> %
 replaceAll : (%, %) -> %    replaceAt : (%, %, %) -> %
 replacePart : (%, %) -> %    replaceRepeated : (%, %) -> %
 represents : Vector(%) -> %    represents : (Vector(%), Vector(%)) -> %
 residue : (%, %) -> %    residueSum : (%, %) -> %
 rest : % -> %    resultant : (%, %, %) -> %
 retract : % -> %    retract : % -> Expression(Float)
 retract : % -> Expression(Integer)    retract : % -> Fraction(Polynomial(%))
 retract : % -> Kernel(%)    retract : % -> Polynomial(%)
 retract : % -> Symbol    retractIfCan : % -> Union(%,"failed")
 retractIfCan : % -> Union(DoubleFloat,"failed")    retractIfCan : % -> Union(Expression(Float),"failed")
 retractIfCan : % -> Union(Expression(Integer),"failed")    retractIfCan : % -> Union(JLFloat64,"failed")
 retractIfCan : % -> Union(Kernel(%),"failed")    retractIfCan : % -> Union(Polynomial(%),"failed")
 retractIfCan : % -> Union(Symbol,"failed")    reverse : % -> %
 reverse : (%, WSInteger) -> %    reverse : (%, WSList(WSInteger)) -> %
 riemannSiegelTheta : % -> %    riemannSiegelZ : % -> %
 riemannZeta : % -> %    riemannZeta : (%, %) -> %
 riffle : (%, %) -> %    riffle : (%, %, %) -> %
 rightPower : (%, NonNegativeInteger) -> %    rightPower : (%, PositiveInteger) -> %
 rightRecip : % -> Union(%,"failed")    rootOf : % -> %
 rootOf : (%, Symbol) -> %    rootOf : Polynomial(%) -> %
 rootOf : SparseUnivariatePolynomial(%) -> %    rootOf : (SparseUnivariatePolynomial(%), Symbol) -> %
 rootReduce : % -> %    rootsOf : % -> List(%)
 rootsOf : (%, Symbol) -> List(%)    rootsOf : Polynomial(%) -> List(%)
 rootsOf : SparseUnivariatePolynomial(%) -> List(%)    round : % -> %
 sample : () -> %    scientificForm : % -> %
 scientificForm : (%, %) -> %    sec : % -> %
 sech : % -> %    select : (%, %) -> %
 select : (%, %, %) -> %    series : (%, %) -> %
 setIntersection : (%, %) -> %    setelt : (%, Integer, %) -> %
 setelt! : (%, Integer, %) -> %    siegelTheta : (%, %) -> %
 siegelTheta : (%, %, %) -> %    sign : % -> %
 simplify : % -> %    simplify : (%, %) -> %
 sin : % -> %    sinc : % -> %
 sinh : % -> %    sizeLess? : (%, %) -> Boolean
 smaller? : (%, %) -> Boolean    solve : (%, %) -> WSList(WSList(%))
 solve : (%, %, %) -> WSList(WSList(%))    solve : (Equation(%), %) -> WSList(WSList(%))
 solve : (Equation(%), %, %) -> WSList(WSList(%))    sort : % -> %
 sorted? : % -> Boolean    sphericalBesselJ : (%, %) -> %
 sphericalBesselY : (%, %) -> %    sphericalHankelH1 : (%, %) -> %
 sphericalHankelH2 : (%, %) -> %    sphericalHarmonicY : (%, %, %, %) -> %
 sqrt : % -> %    squareFree : % -> Factored(%)
 squareFreePart : % -> %    stieltjesGamma : % -> %
 stieltjesGamma : (%, %) -> %    string : % -> String
 struveH : (%, %) -> %    struveL : (%, %) -> %
 subResultants : (%, %, %) -> %    subst : (%, Equation(%)) -> %
 subst : (%, List(Equation(%))) -> %    subst : (%, List(Kernel(%)), List(%)) -> %
 subtractIfCan : (%, %) -> Union(%,"failed")    sum : (%, %) -> %
 sum : (%, %, Segment(Integer)) -> %    sum : (%, Symbol) -> %
 summation : (%, SegmentBinding(%)) -> %    summation : (%, Symbol) -> %
 symmetricPolynomial : (%, WSList(%)) -> %    symmetricReduction : (%, WSList(%)) -> WSList(%)
 take : (%, Integer) -> %    take : (%, WSList(WSInteger)) -> %
 tan : % -> %    tanh : % -> %
 toExpression : String -> %    toExpression : (String, %) -> %
 toExpression : (String, %, %) -> %    toString : % -> String
 toString : (%, %) -> String    together : % -> %
 tower : % -> List(Kernel(%))    tower : List(%) -> List(Kernel(%))
 trace : % -> %    traceMatrix : () -> Matrix(%)
 traceMatrix : Vector(%) -> Matrix(%)    traditionalForm : % -> %
 trigExpand : % -> %    trigFactor : % -> %
 trigFactorList : % -> WSList(%)    trigReduce : % -> %
 trigToExp : % -> %    union : (%, %) -> %
 unit? : % -> Boolean    unitCanonical : % -> %
 unitStep : % -> %    values : % -> %
 variables : % -> List(Symbol)    variables : List(%) -> List(Symbol)
 variables : % -> WSList(%)    weberE : (%, %) -> %
 weberE : (%, %, %) -> %    weierstrassP : (%, %, %) -> %
 weierstrassPInverse : (%, %, %) -> %    weierstrassPPrime : (%, %, %) -> %
 weierstrassSigma : (%, %, %) -> %    weierstrassZeta : (%, %, %) -> %
 whittakerM : (%, %, %) -> %    whittakerW : (%, %, %) -> %
 wilsonW : (%, %, %, %, %, %) -> %    zernikeR : (%, %, %) -> %
 zero? : % -> Boolean    zeroOf : % -> %
 zeroOf : (%, Symbol) -> %    zeroOf : Polynomial(%) -> %
 zeroOf : SparseUnivariatePolynomial(%) -> %    zeroOf : (SparseUnivariatePolynomial(%), Symbol) -> %
 zerosOf : % -> List(%)    zerosOf : (%, Symbol) -> List(%)
 zerosOf : Polynomial(%) -> List(%)    zerosOf : SparseUnivariatePolynomial(%) -> List(%)
 ?~=? : (%, %) -> Boolean
 ?/? : (SparseMultivariatePolynomial(%,Kernel(%)), SparseMultivariatePolynomial(%,Kernel(%))) -> %
 characteristicPolynomial : % -> SparseUnivariatePolynomial(%)
 coerce : SparseMultivariatePolynomial(%,Kernel(%)) -> %
 definingPolynomial : () -> SparseUnivariatePolynomial(%)
 denom : % -> SparseMultivariatePolynomial(%,Kernel(%))
 derivationCoordinates : (Vector(%), (% -> %)) -> Matrix(%)
 differentiate : (%, List(%), List(NonNegativeInteger)) -> %
 differentiate : (%, List(Symbol), List(NonNegativeInteger)) -> %
 differentiate : (%, (% -> %), NonNegativeInteger) -> %
 elt : (BasicOperator, %, %, %, %, %, %, %, %) -> %
 elt : (BasicOperator, %, %, %, %, %, %, %, %, %) -> %
 eval : (%, List(BasicOperator), List((List(%) -> %))) -> %
 eval : (%, List(Symbol), List(NonNegativeInteger), List((% -> %))) -> %
 eval : (%, List(Symbol), List(NonNegativeInteger), List((List(%) -> %))) -> %
 eval : (%, Symbol, NonNegativeInteger, (% -> %)) -> %
 eval : (%, Symbol, NonNegativeInteger, (List(%) -> %)) -> %
 expressIdealMember : (List(%), %) -> Union(List(%),"failed")
 extendedEuclidean : (%, %) -> Record(coef1: %,coef2: %,generator: %)
 extendedEuclidean : (%, %, %) -> Union(Record(coef1: %,coef2: %),"failed")
 factorPolynomial : SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if % has PFECAT
 factorSquareFreePolynomial : SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if % has PFECAT
 findInstance : (Equation(%), %, %) -> WSList(WSList(%))
 findInstance : (Equation(%), %, %, %) -> WSList(WSList(%))
 gcdPolynomial : (SparseUnivariatePolynomial(%), SparseUnivariatePolynomial(%)) -> SparseUnivariatePolynomial(%)
 isExpt : % -> Union(Record(var: Kernel(%),exponent: Integer),"failed")
 isExpt : (%, BasicOperator) -> Union(Record(var: Kernel(%),exponent: Integer),"failed")
 isExpt : (%, Symbol) -> Union(Record(var: Kernel(%),exponent: Integer),"failed")
 isMult : % -> Union(Record(coef: Integer,var: Kernel(%)),"failed")
 isPower : % -> Union(Record(val: %,exponent: Integer),"failed")
 lcmCoef : (%, %) -> Record(llcm_res: %,coeff1: %,coeff2: %)
 multiEuclidean : (List(%), %) -> Union(List(%),"failed")
 numer : % -> SparseMultivariatePolynomial(%,Kernel(%))
 principalIdeal : List(%) -> Record(coef: List(%),generator: %)
 reduce : Fraction(SparseUnivariatePolynomial(%)) -> Union(%,"failed")
 reducedSystem : (Matrix(%), Vector(%)) -> Record(mat: Matrix(%),vec: Vector(%))
 retract : % -> Fraction(Integer) if % has RETRACT(FRAC(INT))
 retractIfCan : % -> Union(Fraction(Integer),"failed") if % has RETRACT(FRAC(INT))
 retractIfCan : % -> Union(Fraction(Polynomial(%)),"failed")
 rootSum : (%, SparseUnivariatePolynomial(%), Symbol) -> %
 rootsOf : (SparseUnivariatePolynomial(%), Symbol) -> List(%)
 solveLinearPolynomialEquation : (List(SparseUnivariatePolynomial(%)), SparseUnivariatePolynomial(%)) -> Union(List(SparseUnivariatePolynomial(%)),"failed") if % has PFECAT
 squareFreePolynomial : SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if % has PFECAT
 symmetricReduction : (%, WSList(%), WSList(%)) -> WSList(%)
 unitNormal : % -> Record(unit: %,canonical: %,associate: %)
 univariate : (%, Kernel(%)) -> Fraction(SparseUnivariatePolynomial(%))
 zerosOf : (SparseUnivariatePolynomial(%), Symbol) -> List(%)
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`--finiteField`](#finitefield) | Operation defined in WSExpression |
| [`--unitStep`](#unitstep) | weberE(v,n,z) is the associated Weber E function. |
| [`EiEn`](#eien) | EiEn(n,z) returns the exponential integral En(z). |
| [`Gamma`](#gamma) | Gamma(a,z1,z2) computes the generalized incomplete Gamma function. |
| [`^`](#op) | ^ is the exponentiation by a rational. |
| [`accountingForm`](#accountingform) | accountingForm(x,n) returns the accounting printed representation of x. |
| [`airyAiZero`](#airyaizero) | airyAiZero(n) is the n-th zero of the Airy function \spad{Ai(z)}. |
| [`airyBiZero`](#airybizero) | airyBiZero(n) is the n-th zero of the Airy function \spad{Bi(z)}. |
| [`angerJ`](#angerj) | angerJ(v, n, z) is the associated Anger J function. |
| [`apart`](#apart) | apart(expr) converts a rational expression as a sum of terms, reducing denominator(s). |
| [`assuming`](#assuming) | assuming(assumption(s), expr) uses the assumptions for use of expr with refine, simplify a... |
| [`atan`](#atan) | atan(x,y) computes the arc tangent of y/x. |
| [`barnesG`](#barnesg) | barnesG(z) computes the Barnes G-function of z. |
| [`baseForm`](#baseform) | baseForm(x, n) returns the printed representation of x in base b. |
| [`besselJZero`](#besseljzero) | besselJZero(n,x) returns the n-th zero of the Bessel J n-th function. |
| [`besselYZero`](#besselyzero) | besselYZero(n,x) returns the n-th zero of the Bessel Y n-th function. |
| [`betaRegularized`](#betaregularized) | betaRegularized(x,a,b) computes the regularized incomplete Beta function. |
| [`cancel`](#cancel) | cancel(expr) cancels common factors in numerators and denominators of the rational express... |
| [`catalan`](#catalan) | catalan() returns Catalan's constant. |
| [`ceiling`](#ceiling) | ceiling(x) returns the smallest integer greater than or equal to x. |
| [`chebyshevT`](#chebyshevt) | chebyshevT(n, x) returns the Chebyshev polynomial of the first kind or evaluates it at x i... |
| [`chebyshevU`](#chebyshevu) | chebyshevU(n, x) returns Chebyshev polynomial of the second kind or evaluates it at x if x... |
| [`coefficient`](#coefficient) | coefficient(p,expr) returns the coefficient of expr in p. \example{x:= jWSExpr x} \example... |
| [`coefficientList`](#coefficientlist) | coefficientList(p,expr) returns the list of coefficients of expr in p. |
| [`coefficientRules`](#coefficientrules) | coefficientRules(p) returns the coefficients and exponents of p as WS rules. |
| [`coerce`](#coerce) | coerce(z) coerces the integer z to a WSExpression. Convenience function. |
| [`collect`](#collect) | collect(expr, var) collects same power terms with respect to variable var. |
| [`complexExpand`](#complexexpand) | complexExpand(expr) expands expr assuming variables are real. |
| [`coulombF`](#coulombf) | coulombF(l,eta,ro) is the regular Coulomb wave function. |
| [`coulombG`](#coulombg) | coulombG(l,eta,ro) is the irregular Coulomb wave function. |
| [`coulombH1`](#coulombh1) | coulombH1(l,eta,ro) is the incoming irregular Coulomb wave function H^(+). |
| [`coulombH2`](#coulombh2) | coulombH2(l,eta,ro) is the incoming irregular Coulomb wave function H^(-). |
| [`dSolve`](#dsolve) | dSolve(expr, funcs, vars) solves the (list of) differential equation(s) expr for the funct... |
| [`dSolveValue`](#dsolvevalue) | dSolveValue(expr,funcs, vars) returns the value determined by the differential equation(s)... |
| [`dawson`](#dawson) | dawson(x) computes the Dawson integral of x. |
| [`decimalForm`](#decimalform) | decimalForm(x) returns the printed representation of x in decimal form i.e. without scient... |
| [`decompose`](#decompose) | decompose(poly, x) is a polynomial decomposition function, here, related to x. |
| [`dedekindEta`](#dedekindeta) | dedekindEta(tau) computes the Dedekind modular elliptic eta. |
| [`defined?`](#defined) | defined?(sym) checks whether or not sym is a WS symbol. |
| [`degree`](#degree) | degree() returns conversion factor from degrees to radians, π/180. |
| [`denominator`](#denominator) | denominator(expr) returns the denominator of expr. |
| [`derivative`](#derivative) | derivative(func,n) returns the derivative of order n of func. \example{fprime:=derivative(... |
| [`digamma`](#digamma) | digamma(n,z) is the n-th derivative of the digamma function. |
| [`dirichletEta`](#dirichleteta) | dirichletEta(z) computes the Dirichlet eta. |
| [`dirichletL`](#dirichletl) | dirichletL(k,j,s) returns Dirichlet L-function of s, modulus k, index j. |
| [`discriminant`](#discriminant) | discriminant(p, x) returns the discriminant of p with respect to x. |
| [`distribute`](#distribute) | distribute(expr) distributes expr over addition. For illustration: \example{distribute(jWS... |
| [`ellipticE`](#elliptice) | ellipticE(x) computes the complete elliptic integral of the second kind. |
| [`ellipticF`](#ellipticf) | ellipticF(phi,m) computes the elliptic integral of the first kind. |
| [`ellipticK`](#elliptick) | ellipticK(m) computes the complete elliptic integral of the first kind. |
| [`ellipticPi`](#ellipticpi) | ellipticPi(n,m) computes the complete elliptic integral of the third kind. |
| [`ellipticTheta`](#elliptictheta) | ellipticTheta(a, u, q) computes the theta function, a ranges from 1 to 4. |
| [`ellipticThetaPrime`](#ellipticthetaprime) | ellipticThetaPrime(a, u, q) computes the derivative of the theta function, a ranges from 1... |
| [`engineeringForm`](#engineeringform) | engineeringForm(x) returns the printed representation of x in engineering form. |
| [`erf`](#erf) | erf(x,x1) computes the generalized error function. |
| [`erfc`](#erfc) | erfc(x) computes the complementary error function. |
| [`eulerE`](#eulere) | eulerE(n) returns the Euler number En. |
| [`eulerGamma`](#eulergamma) | eulerGamma() returns Euler's constant Gamma(γ). |
| [`eulerPhi`](#eulerphi) | eulerPhi(n) is the totient function, i.e. the number of integers that are relatively prime... |
| [`exactNumber?`](#exactnumber) | exactNumber?(x) checks whether or not x is an exact number. |
| [`exp`](#exp) | exp() returns ℯ (%e or exp(1)). |
| [`expToTrig`](#exptotrig) | expToTrig(expr) returns expr with exponentials converted to (hyperbolic) trigonometric fun... |
| [`expand`](#expand) | expand(expr) puts out products and positive powers of integers of the expression expr. |
| [`expandDenominator`](#expanddenominator) | expandDenominator(expr) expands denominators of rational expression expr. |
| [`expandNumerator`](#expandnumerator) | expandNumerator(expr) expands numerators of rational expression expr. |
| [`exponent`](#exponent) | exponent(p,expr) returns the maximum exponent of p for expr. \example{x:= jWSExpr x;y := j... |
| [`extendedExpand`](#extendedexpand) | extendedExpand(expr) puts out all products and positive powers of integers. |
| [`extendedSimplify`](#extendedsimplify) | extendedSimplify(expr) is the extended version of simplify. This is the full version of si... |
| [`extract`](#extract) | extract(expr,i) returns the i-th element of expr seen as a list. |
| [`factor`](#factor) | factor(expr) factors the expression or polynomial expr. |
| [`factorList`](#factorlist) | factorList(expr) factors the expression or polynomial expr, but returns the result as a li... |
| [`factorPolynomial`](#factorpolynomial) | factorPolynomial(p) factorizes the polynomial p. For example: \example{x := jWSExpr x} \ex... |
| [`factorSquareFree`](#factorsquarefree) | factorSquareFree(expr) factors the expression or polynomial expr in square free factors. |
| [`factorSquareFreeList`](#factorsquarefreelist) | factorSquareFreeList(expr) factors the expression or polynomial expr in square free factor... |
| [`factorTerms`](#factorterms) | factorTerms(p) factors out numerical factors of the expression or polynomial expr. |
| [`factorTermsList`](#factortermslist) | factorTermsList(expr) is the counterpart of factorTerms but here returned as a list of pai... |
| [`fibonacci`](#fibonacci) | fibonacci(n, x) returns the Fibonacci polynomial or evaluates it at x if x is a number. |
| [`findInstance`](#findinstance) | findInstance(expr,lvars) tries to find an instance of the equation in expr. |
| [`findRoot`](#findroot) | findRoot(expr,start) tries to find the root of expr starting at start. \example{x:= jWSExp... |
| [`floor`](#floor) | floor(x) returns the greatest integer less than or equal to x |
| [`fourier`](#fourier) | fourier(expr) returns the discrete Fourier transform from a list of numbers. |
| [`fromCoefficientRules`](#fromcoefficientrules) | fromCoefficientRules(list, vars) constructs the polynomial from the list of coefficients a... |
| [`functionExpand`](#functionexpand) | functionExpand(expr) tries to expand functions in expr to more elementary functions. For e... |
| [`gammaRegularized`](#gammaregularized) | gammaRegularized(a,x) computes the regularized incomplete Gamma function. |
| [`gegenbauerC`](#gegenbauerc) | gegenbauerC(n,x) returns the renormalized form of the Gegenbauer polynomial or evaluates i... |
| [`goldenRatio`](#goldenratio) | goldenRatio() returns the golden ratio. |
| [`groebnerBasis`](#groebnerbasis) | groebnerBasis(lpoly, lvar) computes a Groebner basis from the list of polynomials lpoly re... |
| [`gudermannian`](#gudermannian) | gudermannian(z) computes the Gudermannian of z. |
| [`guessGeneratingFunction`](#guessgeneratingfunction) | guessGeneratingFunction(l,x) finds the generating function applied to x from the list of c... |
| [`guessSequenceFunction`](#guesssequencefunction) | guessSequenceFunction(l) finds the sequence from the list of coefficients l. For example: ... |
| [`haversine`](#haversine) | haversine(z) computes the Haversine of z. |
| [`hermiteH`](#hermiteh) | hermiteH(n, x) returns the Hermite polynomial or evaluates it at x if x is a number. |
| [`hornerForm`](#hornerform) | hornerForm(expr, x) returns the Horner form of expr (minimizing multiplications). |
| [`hurwitzLerchPhi`](#hurwitzlerchphi) | hurwitzLerchPhi(z,s,a) computes the Hurwitz–Lerch transcendent phi function. |
| [`hurwitzZeta`](#hurwitzzeta) | hurwitzZeta(s,a) computes the Hurwitz zeta. |
| [`hyperFactorial`](#hyperfactorial) | hyperFactorial(n) computes the hyperfactorial of n. |
| [`hypergeometric0F1`](#hypergeometric0f1) | hypergeometric0F1(a,z) is the hypergeometric 0F1. |
| [`hypergeometric0F1Regularized`](#hypergeometric0f1regularized) | hypergeometric0F1Regularized(a,z) is the regularized hypergeometric 0F1. |
| [`hypergeometric1F1`](#hypergeometric1f1) | hypergeometric1F1(a,b,z) is the Kummer confluent hypergeometric function 1F1. |
| [`hypergeometric1F1Regularized`](#hypergeometric1f1regularized) | hypergeometric1F1Regularized(a,b,z) is the regularized confluent hypergeometric function 1... |
| [`hypergeometricU`](#hypergeometricu) | hypergeometricU(a,b,z) is the confluent hypergeometric function U. |
| [`integer?`](#integer) | integer?(i) checks whether or not i is an integer. |
| [`integrate`](#integrate) | integrate(expr, opts\|var) integrates expr with respect to opt or var as options. For examp... |
| [`interpolatingPolynomial`](#interpolatingpolynomial) | interpolatingPolynomial(lpoly,x) interpolates the list of polynomials lpoly with respect t... |
| [`inverseBetaRegularized`](#inversebetaregularized) | inverseBetaRegularized(s,a,b) computes the inverse Beta regularized function. |
| [`inverseErf`](#inverseerf) | inverseErf(x) computes the inverse error function of x. |
| [`inverseErfc`](#inverseerfc) | inverseErfc(x) computes the inverse complementary error function of x. |
| [`inverseFourier`](#inversefourier) | inverseFourier(expr) returns the discrete inverse Fourier transform from a list of numbers... |
| [`inverseGammaRegularized`](#inversegammaregularized) | inverseGammaRegularized(a,s) computes the inverse Gamma regularized function. |
| [`inverseGudermannian`](#inversegudermannian) | inverseGudermannian(z) computes the inverse Gudermannian. |
| [`inverseHaversine`](#inversehaversine) | inverseHaversine(z) computes the inverse Haversine. |
| [`inverseJacobiCn`](#inversejacobicn) | inverseJacobiCn(nu, m) computes the inverse Jacobi CN elliptic function. |
| [`inverseJacobiSn`](#inversejacobisn) | inverseJacobiSn(nu, m) computes the inverse Jacobi SN elliptic function. |
| [`irreducible?`](#irreducible) | irreducible?(p) checks whether or not p is irreducible. |
| [`jWSAssociation`](#jwsassociation) | jWSAssociation(rules) returns the associations (key->value) created from the rules. |
| [`jWSData`](#jwsdata) | jWSData() returns the list of WS symbols. Note: Currently unprintable. |
| [`jWSEqual`](#jwsequal) | jWSEqual(lhs,rhs) returns the Julia WS equality lhs == rhs. |
| [`jWSExpr`](#jwsexpr) | jWSExpr(sym) coerces sym to a WSExpression. For example: x := jWSExpr x |
| [`jWSGreater`](#jwsgreater) | jWSGreater(lhs,rhs) returns the Julia WS inequality lhs > rhs. |
| [`jWSGreaterEqual`](#jwsgreaterequal) | jWSGreaterEqual(lhs,rhs) returns the Julia WS inequality lhs >= rhs. |
| [`jWSLess`](#jwsless) | jWSLess(lhs,rhs) returns the Julia WS inequality lhs < rhs. |
| [`jWSLessEqual`](#jwslessequal) | jWSLessEqual(lhs,rhs) returns the Julia WS inequality lhs <= rhs. |
| [`jWSNotEqual`](#jwsnotequal) | jWSNotEqual(lhs,rhs) returns the Julia WS inequality lhs != rhs. |
| [`jWSQuantity`](#jwsquantity) | jWSQuantity(jWSString(u)) returns quantity unit u of 1. For example: \example{jWSQuantity ... |
| [`jWSRule`](#jwsrule) | jWSRule(lhs,rhs) returns the Julia WS rule lhs->rhs. |
| [`jWSTable`](#jwstable) | jWSTable(expr, range) applies the expr to the defined range. |
| [`jacobiAmplitude`](#jacobiamplitude) | jacobiAmplitude(u,m) computes the amplitude function am. |
| [`jacobiP`](#jacobip) | jacobiP(n, a, b, x) returns the Jacobi polynomial or evaluates it at x if x is a number. |
| [`jacobiTheta`](#jacobitheta) | jacobiTheta(n, z, m) are the Jacobi Theta functions. |
| [`jacobiZeta`](#jacobizeta) | jacobiZeta(ϕ,m) computes the Jacobi Zeta function. |
| [`jlDisplay`](#jldisplay) | jlDisplay(expr) returns the traditional form of expr. This is equivalent to: jWSExpr "Form... |
| [`jlEval`](#jleval) | jlEval(expr, param) evaluates expression expr with param as parameter(s). See also `eval` ... |
| [`jlGreedyEval`](#jlgreedyeval) | jlGreedyEval(bool) toggles automatic arithmetic operations. Plus[a, a] can become Times[2,... |
| [`jlWSAccuracy`](#jlwsaccuracy) | jlWSAccuracy(expr) get accuracy of expr. |
| [`jlWSDefined?`](#jlwsdefined) | jlWSDefined?(sym) checks whether or not the symbol sym is defined in the WS language. For ... |
| [`jlWSPrecision`](#jlwsprecision) | jlWSPrecision get precision of expr. |
| [`jlWSSetAccuracy`](#jlwssetaccuracy) | jlWSSetAccuracy(expr, acc) sets accuracy of expr to acc. |
| [`jlWSSetOptions`](#jlwssetoptions) | jlWSSetOptions(type, opts) sets some internal engine options. |
| [`jlWSSetPrecision`](#jlwssetprecision) | jlWSSetPrecision(expr, prec) sets precision of expr to prec. |
| [`key?`](#key) | key?(assoc,key) checks whether or not key exists in the association assoc. |
| [`keys`](#keys) | keys(expr) returns the key elements in expr if any. |
| [`kleinInvariantJ`](#kleininvariantj) | kleinInvariantJ(tau) computes the Klein's absolute invariant. |
| [`laguerreL`](#laguerrel) | laguerreL(n, x) returns the Laguerre polynomial or evaluates it at x if x is a number. For... |
| [`lambertW`](#lambertw) | lambertW(k,z) returns the k-th solution to the LambertW function. |
| [`legendreP`](#legendrep) | legendreP(n, x) returns the Legendre polynomial of the first kind or evaluates it at x if ... |
| [`legendreQ`](#legendreq) | legendreQ(n, x) returns the Legendre function of the second kind or evaluates it at x if x... |
| [`length`](#length) | length(expr) returns the length of expr seen as a list. |
| [`lerchPhi`](#lerchphi) | lerchPhi(z,s,a) returns Lerch's transcendent phi of arguments. |
| [`level`](#level) | level(expr, lev) returns the list of expression expr at level lev. |
| [`limit`](#limit) | limit(expr, params) returns the limit, eventually nested or multivariate, of expr. For exa... |
| [`log10`](#log10) | log10(x) computes the logarithm of x in base 10. |
| [`log2`](#log2) | log2(x) computes the logarithm of x in base 2. |
| [`logBarnesG`](#logbarnesg) | logBarnesG(x) is the logarithm of the Barnes G-function. |
| [`logGamma`](#loggamma) | logGamma(z) returns the log-Gamma of z. |
| [`lookup`](#lookup) | lookup(assocs,keys) returns value(s) associated to key(s). |
| [`machineNumber?`](#machinenumber) | machineNumber?(expr) checks whether or not expr is a CPU/GPU supported number. |
| [`mathieuC`](#mathieuc) | mathieuC(a,q,z) is the even Mathieu function with characteristic a and parameter q. |
| [`mathieuCPrime`](#mathieucprime) | mathieuCPrime(a,q,z) is the derivative of the even Mathieu function. |
| [`mathieuCharacteristicA`](#mathieucharacteristica) | mathieuCharacteristicA(r,q) returns the characteristic for even Mathieu function. |
| [`mathieuCharacteristicB`](#mathieucharacteristicb) | mathieuCharacteristicB(r,q) returns the characteristic for odd Mathieu function. |
| [`mathieuCharacteristicExponent`](#mathieucharacteristicexponent) | mathieuCharacteristicExponent(a,q) returns the characteristic exponent of the Mathieu func... |
| [`mathieuS`](#mathieus) | mathieuS(b,q,z) is the odd Mathieu function with characteristic b and parameter q. |
| [`mathieuSPrime`](#mathieusprime) | mathieuSPrime(b,q,z) is the derivative of the odd Mathieu function. |
| [`matrixForm`](#matrixform) | matrixForm(mat) returns a pretty-printable form of mat i.e. its WS 'MatrixForm'. |
| [`maxLimit`](#maxlimit) | maxLimit(expr, params) returns the max limit, eventually nested or multivariate, of expr. |
| [`maximize`](#maximize) | maximize(expr, vars) is the WS symbolic maximization function. expr can contain constraint... |
| [`member?`](#member) | member?(list, expr) checks if expr is in list. |
| [`minLimit`](#minlimit) | minLimit(expr, params) returns the min limit, eventually nested or multivariate, of expr. |
| [`minimalPolynomial`](#minimalpolynomial) | minimalPolynomial(expr,var) returns the minimal polynomial in the variable var of the expr... |
| [`minimize`](#minimize) | minimize(expr, vars) is the WS symbolic minimization function. expr can contain constraint... |
| [`missing?`](#missing) | missing?(data) checks whether or not data is Missing. |
| [`modularLambda`](#modularlambda) | modularLambda() computes the lambda modular function. |
| [`monomialList`](#monomiallist) | monomialList(p) returns the list of monomials in p. |
| [`negative?`](#negative) | negative?(expr) checks whether or not expr is negative. |
| [`normal`](#normal) | normal(expr) converts expr to a normal expression from different expression types. Can be ... |
| [`number?`](#number) | number?(expr) checks whether or not expr is a number. |
| [`numberForm`](#numberform) | numberForm(x) returns the default printed representation of x. |
| [`numerDenom`](#numerdenom) | numerDenom(expr) returns the numerator and denominator of expr. |
| [`numerator`](#numerator) | numerator(expr) returns the numerator of expr. |
| [`numeric?`](#numeric) | numeric?(x) checks whether or not x is or would yield a number. |
| [`numericDSolve`](#numericdsolve) | numericDSolve(expr,fun,xrange) solves numerically the differential equation(s) in expr for... |
| [`numericDSolveValue`](#numericdsolvevalue) | numericDSolveValue(expr,fun,xrange) returns the numerical value solution of the differenti... |
| [`numericIntegrate`](#numericintegrate) | numericIntegrate(expr, opt\|var) integrates numerically expr with respect to opt or var as ... |
| [`numericMaximize`](#numericmaximize) | numericMaximize(expr, vars) maximizes numerically the expression function expr with respec... |
| [`numericMinimize`](#numericminimize) | numericMinimize(expr, vars) minimizes numerically the expression function expr with respec... |
| [`numericProduct`](#numericproduct) | numericProduct(f(n),range) returns an evaluated numerical approximation of the sum f(imin)... |
| [`numericSolve`](#numericsolve) | numericSolve(eq, vars) returns the solution(s) to the equation eq. |
| [`numericSum`](#numericsum) | numericSum(f(n),range) returns an evaluated numerical approximation of the sum f(imin) + .... |
| [`padeApproximant`](#padeapproximant) | padeApproximant(expr, "{x,x0, {n,m}"}) returns the Padé approximant at x0. |
| [`parabolicCylinderD`](#paraboliccylinderd) | parabolicCylinderD(nu,x) computes the parabolic cylinder function D of x. |
| [`percentForm`](#percentform) | percentForm(x) returns the printed representation of x in percent form. For example: \exam... |
| [`pochhammer`](#pochhammer) | pochhammer(a,n) returns the Pochhammer symbol. |
| [`polylog`](#polylog) | polylog(n,p,x) is the Nielsen generalized polylogarithm function. |
| [`polynomial?`](#polynomial) | polynomial?(p,x) checks whether or not p is a polynomial in x. |
| [`polynomialExpression?`](#polynomialexpression) | polynomialExpression?(p,x) checks whether or not p is a polynomial expression in x. |
| [`polynomialExtendedGCD`](#polynomialextendedgcd) | polynomialExtendedGCD(p1, p2, x) returns the greatest common divisor of p1 and p2 consider... |
| [`polynomialGCD`](#polynomialgcd) | polynomialGCD(p1, p2) returns the greatest common divisor of p1 and p2. |
| [`polynomialLCM`](#polynomiallcm) | polynomialLCM(p1,p2) returns the least common divisor of p1 and p2. |
| [`polynomialMod`](#polynomialmod) | polynomialMod(p,mod) reduces modulo p the integer coefficients of the polynomial p. |
| [`polynomialQuotient`](#polynomialquotient) | polynomialQuotient(p1, p2, x) returns the quotient of p1 and p2 in x. |
| [`polynomialQuotientRemainder`](#polynomialquotientremainder) | polynomialQuotientRemainder(p1,p2,var) returns the quotient and remainder of p1 and p2 in ... |
| [`polynomialReduce`](#polynomialreduce) | polynomialReduce(poly,lpoly,lvar) returns a minimal representation of the polynomial poly ... |
| [`polynomialRemainder`](#polynomialremainder) | polynomialRemainder(p1,p2, x) returns the remainder of p1 and p2 in x. |
| [`positive?`](#positive) | positive?(expr) checks whether or not expr is positive. |
| [`positiveInfinity`](#positiveinfinity) | positiveInfinity() returns positive infinity (∞). |
| [`powerExpand`](#powerexpand) | powerExpand(expr) expands powers in expr assuming no branch cut. |
| [`product`](#product) | product(f(n),range) returns the product f(imin) * ... * f(imax) defined by the list range,... |
| [`qBinomial`](#qbinomial) | qBinomial(n,m,q) returns the q-analog of binomial coefficient. |
| [`qFactorial`](#qfactorial) | qFactorial(x,q) returns the q-analog of factorial of x. |
| [`qGamma`](#qgamma) | qGamma(x,q) returns the q-analog of Euler Gamma of x. |
| [`qPochhammer`](#qpochhammer) | qPochhammer(x,q) returns the q-Pochhammer symbol of x. |
| [`qPolyGamma`](#qpolygamma) | qPolyGamma(x,q) returns the q-Digamma of x. |
| [`quantityForm`](#quantityform) | quantityForm(expr,form) returns expr as a quantity with format form. |
| [`quantityMagnitude`](#quantitymagnitude) | quantityMagnitude(val) returns magnitude of val. |
| [`quantityUnit`](#quantityunit) | quantityUnit(val) returns unit of val. |
| [`ramanujanTau`](#ramanujantau) | ramanujanTau(n) returns the Ramanujan tau of n. |
| [`ramanujanTauL`](#ramanujantaul) | ramanujanTauL(s) computes the Ramanujan tau Dirichlet L-function of s. |
| [`ramanujanTauTheta`](#ramanujantautheta) | ramanujanTauTheta(z) returns the Ramanujan tau theta of z. |
| [`ramanujanTauZ`](#ramanujantauz) | ramanujanTauZ(t) computes the Ramanujan tau Z-function of t. |
| [`rational?`](#rational) | rational?(q) checks whether or not q is a rational number. |
| [`rationalApproximation`](#rationalapproximation) | rationalApproximation(expr) tries to find a rational approximation of the expression expr. |
| [`rationalExpression?`](#rationalexpression) | rationalExpression?(p,x) checks whether or not p is a rational expression in x. |
| [`real?`](#real) | real?(x) checks whether or not x represents a real number. |
| [`realNumeric?`](#realnumeric) | realNumeric?(x) checks whether or not x represents a real value (numeric). |
| [`realNumericSolve`](#realnumericsolve) | realNumericSolve(eq, vars) returns the real solution(s) to the equation eq. |
| [`reduce`](#reduce) | reduce(expr,lvars) tries to reduce the equation in expr. |
| [`refine`](#refine) | refine(expr, assums) refines the expression expr with assumptions assums. |
| [`replace`](#replace) | replace(expr, rule) applies rule(s) to expr. |
| [`replaceAll`](#replaceall) | replaceAll(expr, rule) applies rule(s) to expr. |
| [`replaceAt`](#replaceat) | replaceAt(expr, part, n) replaces the n-th element of expr using rule(s). |
| [`replacePart`](#replacepart) | replacePart(expr, part) replaces expr using rule(s) expressing position(s). |
| [`replaceRepeated`](#replacerepeated) | replaceRepeated(expr, rule) applies rule(s) to expr, but repeatedly. |
| [`residue`](#residue) | residue(expr, {x,x0}) returns the residue of expr at x0. |
| [`residueSum`](#residuesum) | residueSum(expr, var) returns the residue of expr. \example{residueSum(Gamma(x),x)} |
| [`resultant`](#resultant) | resultant(p1,p2,x) returns the resultant of p1 and p2. |
| [`retract`](#retract) | retract(expr) tries to retract expr to an Expression(Integer). Throws an error otherwise. |
| [`retractIfCan`](#retractifcan) | retractIfCan(expr) retracts expr to a JLFloat64 if it can be retracted to a 64 bits machin... |
| [`riemannSiegelTheta`](#riemannsiegeltheta) | riemannSiegelTheta(t) returns the Riemann-Siegel theta function of t. |
| [`riemannSiegelZ`](#riemannsiegelz) | riemannSiegelZ(t) computes the Riemann-Siegel Z function of t. |
| [`riemannZeta`](#riemannzeta) | riemannZeta(s,a) is the generalized Riemann zeta function. |
| [`rootReduce`](#rootreduce) | rootReduce(expr) reduces root functions. |
| [`round`](#round) | round(x) returns the integer closest to x. |
| [`scientificForm`](#scientificform) | scientificForm(x) returns the printed representation of x in scientific form. |
| [`select`](#select) | select(expr, form) selects elements of expr if form(element) is true. |
| [`series`](#series) | series(expr, opt) returns a series from expr. \example{x:=jWSExpr(x);a:=jWSExpr(a);} \exam... |
| [`siegelTheta`](#siegeltheta) | siegelTheta(tau, s) computes the Siegel theta function. |
| [`simplify`](#simplify) | simplify(expr) simplifies the expr. \example{x:=jWSExpr("x"); simplify(sqrt(x^2)^2)} |
| [`sinc`](#sinc) | sinc(x) computes the unnormalized sinc of x, sin(x)/x and 0 if x = 0. |
| [`solve`](#solve) | solve(eq, vars) tries to solve the equation eq. |
| [`sphericalBesselJ`](#sphericalbesselj) | sphericalBesselJ(n,z) returns the spherical Bessel of the first kind of z. |
| [`sphericalBesselY`](#sphericalbessely) | sphericalBesselY(n,z) returns the spherical Bessel of the second kind of z. |
| [`sphericalHankelH1`](#sphericalhankelh1) | sphericalHankelH1(n,z) returns the spherical Hankel function of the first kind of z. |
| [`sphericalHankelH2`](#sphericalhankelh2) | sphericalHankelH2(n,z) returns the spherical Hankel function of the second kind of z. |
| [`sphericalHarmonicY`](#sphericalharmonicy) | sphericalHarmonicY(l, m, theta, phi) returns the spherical harmonic Y function or evaluate... |
| [`stieltjesGamma`](#stieltjesgamma) | stieltjesGamma(n) returns the n-th Stieltjes constant. |
| [`subResultants`](#subresultants) | subResultants(p1,p2,x) returns the subresultant of p1 and p2 with respect to x. |
| [`sum`](#sum) | sum(f(n),range) returns the sum f(imin) + ... + f(imax) defined by the list range, for exa... |
| [`symmetricPolynomial`](#symmetricpolynomial) | symmetricPolynomial(n,lvars) returns the n-th elementary symmetric polynomial with respect... |
| [`symmetricReduction`](#symmetricreduction) | symmetricReduction(f,lvars) returns a pair of polynomials representing f = p+q where p is ... |
| [`toExpression`](#toexpression) | toExpression(expr) converts expr to a WS expression and evaluates it. |
| [`toString`](#tostring) | toString(expr, form) returns the string representation of expr with WS language format for... |
| [`together`](#together) | together(expr) puts together terms over a common denominator cancelling common factors. |
| [`traditionalForm`](#traditionalform) | traditionalForm(expr) returns a traditional form of expr i.e. its WS 'TraditionalForm'. |
| [`trigExpand`](#trigexpand) | trigExpand(expr) tries to expand (hyperbolic) trigonometric functions in expr. |
| [`trigFactor`](#trigfactor) | trigFactor(expr) factors (hyperbolic) trigonometric functions in expr. |
| [`trigFactorList`](#trigfactorlist) | trigFactorList(expr) returns a list of factors of (hyperbolic) trigonometric functions in ... |
| [`trigReduce`](#trigreduce) | trigReduce(expr) reduces power and products of trigonometric functions. |
| [`trigToExp`](#trigtoexp) | trigToExp(expr) returns expr with (hyperbolic) trigonometric functions converted to, event... |
| [`values`](#values) | values(expr) returns the values elements in expr. |
| [`variables`](#variables) | variables(p) returns the list of variables in p. |
| [`weberE`](#webere) | weberE(v,n,z) is the associated Weber E function. |
| [`weierstrassP`](#weierstrassp) | weierstrassP(g2, g3, z) is the Weierstrass P function. |
| [`weierstrassPInverse`](#weierstrasspinverse) | weierstrassPInverse(g2, g3, z) is the inverse of Weierstrass P function, defined by the fo... |
| [`weierstrassPPrime`](#weierstrasspprime) | weierstrassPPrime(g2, g3, z) is the derivative of the Weierstrass P function. |
| [`weierstrassSigma`](#weierstrasssigma) | weierstrassSigma(g2, g3, z) is the Weierstrass sigma function. |
| [`weierstrassZeta`](#weierstrasszeta) | weierstrassZeta(g2, g3, z) is the Weierstrass Zeta function. |
| [`whittakerM`](#whittakerm) | whittakerM(k,m,x) computes the Whittaker function M of x. |
| [`whittakerW`](#whittakerw) | whittakerW(k,m,z) computes the Whittaker function W of z. |
| [`zernikeR`](#zerniker) | zernikeR(n, m, x) returns the Zernike radial polynomial or evaluates it at x if x is a num... |
| [`zero?`](#zero) | zero? x tries to determine if x is 0. For example: \example{expr:=0$WSEXPR/1*sqrt(17::WSEX... |

### Detailed Documentation

#### `--finiteField` <a id="finitefield"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L854)\]

- **Signature**: `(%, %) -> %`

#### `--unitStep` <a id="unitstep"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L158)\]

weberE(v,n,z) is the associated Weber E function.

- **Signature**: `% -> % -- TODO: implement`

#### `EiEn` <a id="eien"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L209)\]

EiEn(n,z) returns the exponential integral En(z).

- **Signature**: `(%,%) -> %`

#### `Gamma` <a id="gamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L215)\]

Gamma(a,z1,z2) computes the generalized incomplete Gamma function.

- **Signature**: `(%, %, %) -> %`

#### `^` <a id="op"></a>

^ is the exponentiation by a rational.

- **Signature**: `(%, WSRational) -> %`

#### `accountingForm` <a id="accountingform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1078)\]

##### `accountingForm` : `% -> %`

accountingForm(x,n) returns the accounting printed representation of x.

##### `accountingForm` : `(%, %) -> %`

accountingForm(x,n) returns the accounting printed representation of x with n digits of precision.

#### `airyAiZero` <a id="airyaizero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L146)\]

##### `airyAiZero` : `% -> %`

airyAiZero(n) is the n-th zero of the Airy function \spad{Ai(z)}.

##### `airyAiZero` : `(%, %) -> %`

airyAiZero(n,x) is the n-th zero of the Airy function \spad{Ai(z)} less than x.

#### `airyBiZero` <a id="airybizero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L151)\]

##### `airyBiZero` : `% -> %`

airyBiZero(n) is the n-th zero of the Airy function \spad{Bi(z)}.

##### `airyBiZero` : `(%, %) -> %`

airyBiZero(n,x) is the n-th zero of the Airy function \spad{Bi(z)} less than x.

#### `angerJ` <a id="angerj"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L120)\]

angerJ(v, n, z) is the associated Anger J function.

- **Signature**: `(%, %, %) -> %`

#### `apart` <a id="apart"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L910)\]

##### `apart` : `% -> %`

apart(expr) converts a rational expression as a sum of terms, reducing denominator(s).

##### `apart` : `(%, %) -> %`

apart(expr, vars) converts a rational expression as a sum of terms as the one arg apart does but only for vars (the others are considered as constants).

#### `assuming` <a id="assuming"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L890)\]

assuming(assumption(s), expr) uses the assumptions for use of expr with refine, simplify and integrate for example. The assumption(s) are not always supported by MathLink. Use assumptions with 'refine' etc. directly instead.

- **Signature**: `(%, %) -> %`

#### `atan` <a id="atan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L98)\]

atan(x,y) computes the arc tangent of y/x.

- **Signature**: `(%, %) -> %`

#### `barnesG` <a id="barnesg"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L229)\]

barnesG(z) computes the Barnes G-function of z.

- **Signature**: `% -> %`

#### `baseForm` <a id="baseform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1041)\]

baseForm(x, n) returns the printed representation of x in base b.

- **Signature**: `(%, %) -> %`

#### `besselJZero` <a id="besseljzero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L128)\]

besselJZero(n,x) returns the n-th zero of the Bessel J n-th function.

- **Signature**: `(%, %) -> %`

#### `besselYZero` <a id="besselyzero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L131)\]

besselYZero(n,x) returns the n-th zero of the Bessel Y n-th function.

- **Signature**: `(%, %) -> %`

#### `betaRegularized` <a id="betaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L211)\]

betaRegularized(x,a,b) computes the regularized incomplete Beta function.

- **Signature**: `(%, %, %) -> %`

#### `cancel` <a id="cancel"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L922)\]

cancel(expr) cancels common factors in numerators and denominators of the rational expression expr.

- **Signature**: `% -> %`

#### `catalan` <a id="catalan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L88)\]

catalan() returns Catalan's constant.

- **Signature**: `() -> %`

#### `ceiling` <a id="ceiling"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L78)\]

ceiling(x) returns the smallest integer greater than or equal to x.

- **Signature**: `% -> %`

#### `chebyshevT` <a id="chebyshevt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L258)\]

chebyshevT(n, x) returns the Chebyshev polynomial of the first kind or evaluates it at x if x is a number.

- **Signature**: `(%, %) -> %`

#### `chebyshevU` <a id="chebyshevu"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L261)\]

chebyshevU(n, x) returns Chebyshev polynomial of the second kind or evaluates it at x if x is a number.

- **Signature**: `(%, %) -> %`

#### `coefficient` <a id="coefficient"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L708)\]

##### `coefficient` : `(%, %) -> %`

coefficient(p,expr) returns the coefficient of expr in p. \example{x:= jWSExpr x} \example{coefficient((x - y)^4, x * y^3)}

##### `coefficient` : `(%, %, %) -> %`

coefficient(p, expr, n) returns the coefficient of expr^n in p.

#### `coefficientList` <a id="coefficientlist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L714)\]

coefficientList(p,expr) returns the list of coefficients of expr in p.

- **Signature**: `(%, %) -> %`

#### `coefficientRules` <a id="coefficientrules"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L716)\]

##### `coefficientRules` : `% -> %`

coefficientRules(p) returns the coefficients and exponents of p as WS rules.

##### `coefficientRules` : `(%, %) -> %`

coefficientRules(p,vars) returns the coefficients and exponents of p with respect to var(s) as WS rules.

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1128)\]

##### `coerce` : `Integer  -> %`

coerce(z) coerces the integer z to a WSExpression. Convenience function.

##### `coerce` : `Complex(Integer) -> % -- for example, %i operations`

coerce(gi) coerces gi to a WSExpression. Convenience function.

##### `coerce` : `Fraction(Integer)  -> %`

coerce(q) coerces the rational q to a WSExpression. Convenience function.

##### `coerce` : `Float  -> %`

coerce(f) coerces the floating point number f to a WSExpression. Convenience function.

##### `coerce` : `Equation(%) -> %`

coerce(eq) coerces the equation eq to a WSExpression equation.

##### `coerce` : `String  -> %`

coerce(str) coerces the string str to a WSExpression evaluating str as a WS Language Expression. For example: \example{expr := "Sqrt[x]"::WSEXPR;jlEval(expr,"x=2.0")}

##### `coerce` : `Symbol -> %`

coerce(sym) coerces sym to a WSExpression.

##### `coerce` : `WSSymbol -> %`

coerce(sym) coerces sym to a WSExpression.

##### `coerce` : `List(%) -> %`

coerce(list) coerces list of WSExpression.

##### `coerce` : `% -> WSInteger`

coerce(expr) coerces expr to a WSInteger if possible.

##### `coerce` : `% -> WSRational`

coerce(expr) coerces expr to a WSRational if possible.

#### `collect` <a id="collect"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L904)\]

##### `collect` : `(%, %) -> %`

collect(expr, var) collects same power terms with respect to variable var.

##### `collect` : `(%, WSL(%)) -> %`

collect(expr, vars) collects same power terms with respect to variables in vars.

#### `complexExpand` <a id="complexexpand"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L942)\]

##### `complexExpand` : `% -> %`

complexExpand(expr) expands expr assuming variables are real.

##### `complexExpand` : `(%, %) -> %`

complexExpand(expr, cvars) expands expr assuming all but cvars variables are real.

#### `coulombF` <a id="coulombf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L299)\]

coulombF(l,eta,ro) is the regular Coulomb wave function.

- **Signature**: `(%, %, %) -> %`

#### `coulombG` <a id="coulombg"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L301)\]

coulombG(l,eta,ro) is the irregular Coulomb wave function.

- **Signature**: `(%, %, %) -> %`

#### `coulombH1` <a id="coulombh1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L303)\]

coulombH1(l,eta,ro) is the incoming irregular Coulomb wave function H^(+).

- **Signature**: `(%, %, %) -> %`

#### `coulombH2` <a id="coulombh2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L305)\]

coulombH2(l,eta,ro) is the incoming irregular Coulomb wave function H^(-).

- **Signature**: `(%, %, %) -> %`

#### `dSolve` <a id="dsolve"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L586)\]

##### `dSolve` : `(%, %, %) -> %`

dSolve(expr, funcs, vars) solves the (list of) differential equation(s) expr for the function(s) funcs with independent variable(s) vars. \example{x:=jWSExpr x;} \example{fx:=derivative(operator('f),0,x)} \example{fprimex:=derivative(operator('f),1,x)} \example{dSolve(jWSEqual(fprimex + fx , a *sin(x)),fx,x)}

##### `dSolve` : `(Equation(%), %, %)  -> %`

dSolve(eq, func,var) solves the differential equation eq for the function(s) funcs with independent variable(s) vars. \example{x:=jWSExpr x;} \example{fx:=derivative(operator('f),0,x)} \example{fprimex:=derivative(operator('f),1,x)} \example{dSolve(fprimex + fx = a * sin(x)/cos(x),fx,x)}

#### `dSolveValue` <a id="dsolvevalue"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L600)\]

##### `dSolveValue` : `(%, %, %) -> %`

dSolveValue(expr,funcs, vars) returns the value determined by the differential equation(s) in expr for the function(s) funcs with independent variable(s) vars. \example{x:=jWSExpr x;} \example{f:=derivative(operator('f),0)} \example{f0:=derivative(operator('f),0,0)} \example{fx:=derivative(operator('f),0,x)} \example{fprimex:=derivative(operator('f),1,x)} \example{dSolveValue(jWSExpr([jWSEqual(fprimex + fx , a *sin(x)/cos(x)), jWSEqual(f0,0)]),f,x)}

##### `dSolveValue` : `(Equation(%), %, %)  -> %`

dSolveValue(eq, func,var) returns the value determined by the differential equation eq for the function func with independent variable var.

#### `dawson` <a id="dawson"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L104)\]

dawson(x) computes the Dawson integral of x.

- **Signature**: `% -> %`

#### `decimalForm` <a id="decimalform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1050)\]

##### `decimalForm` : `% -> %`

decimalForm(x) returns the printed representation of x in decimal form i.e. without scientific notation.

##### `decimalForm` : `(%, %) -> %`

decimalForm(x, expr) returns the printed representation of x in decimal form with expr as specification (number of digits of precision or a 2-list of number of digits and the number of digits after the decimal point).

#### `decompose` <a id="decompose"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L836)\]

decompose(poly, x) is a polynomial decomposition function, here, related to x.

- **Signature**: `(%, %) -> WSList(%)`

#### `dedekindEta` <a id="dedekindeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L374)\]

dedekindEta(tau) computes the Dedekind modular elliptic eta.

- **Signature**: `% -> %`

#### `defined?` <a id="defined"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L35)\]

defined?(sym) checks whether or not sym is a WS symbol.

- **Signature**: `% -> Boolean`

#### `degree` <a id="degree"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L82)\]

degree() returns conversion factor from degrees to radians, π/180.

- **Signature**: `() -> %`

#### `denominator` <a id="denominator"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L672)\]

denominator(expr) returns the denominator of expr.

- **Signature**: `% -> %`

#### `derivative` <a id="derivative"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L578)\]

##### `derivative` : `(BasicOperator, %) -> %`

derivative(func,n) returns the derivative of order n of func. \example{fprime:=derivative(operator('f),1)}

##### `derivative` : `(BasicOperator, %, %) -> %`

derivative(func, n, var) returns the derivative of order n of func applied to var. \example{x := jWSExpr x} \example{fprimex:=derivative(operator('f),1,x)}

#### `digamma` <a id="digamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L126)\]

digamma(n,z) is the n-th derivative of the digamma function.

- **Signature**: `(%, %) -> %`

#### `dirichletEta` <a id="dirichleteta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L376)\]

dirichletEta(z) computes the Dirichlet eta.

- **Signature**: `% -> %`

#### `dirichletL` <a id="dirichletl"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L161)\]

dirichletL(k,j,s) returns Dirichlet L-function of s, modulus k, index j.

- **Signature**: `(%, %, %) ->  %`

#### `discriminant` <a id="discriminant"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L775)\]

discriminant(p, x) returns the discriminant of p with respect to x.

- **Signature**: `(%, %) -> %`

#### `distribute` <a id="distribute"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L928)\]

##### `distribute` : `% -> %`

distribute(expr) distributes expr over addition. For illustration: \example{distribute(jWSExpr "(x + y) * (a + b + c)")}

##### `distribute` : `(%, %) -> %`

distribute(f,g) distributes f over g.

#### `ellipticE` <a id="elliptice"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L362)\]

##### `ellipticE` : `% -> %`

ellipticE(x) computes the complete elliptic integral of the second kind.

##### `ellipticE` : `(%, %)-> %`

ellipticE(phi,m) computes the elliptic integral of the second kind.

#### `ellipticF` <a id="ellipticf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L360)\]

ellipticF(phi,m) computes the elliptic integral of the first kind.

- **Signature**: `(%, %) -> %`

#### `ellipticK` <a id="elliptick"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L357)\]

ellipticK(m) computes the complete elliptic integral of the first kind.

- **Signature**: `% -> %`

#### `ellipticPi` <a id="ellipticpi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L366)\]

##### `ellipticPi` : `(%, %)-> %`

ellipticPi(n,m) computes the complete elliptic integral of the third kind.

##### `ellipticPi` : `(%, %, %)-> %`

ellipticPi(n,phi,m) computes the elliptic integral of the third kind.

#### `ellipticTheta` <a id="elliptictheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L347)\]

ellipticTheta(a, u, q) computes the theta function, a ranges from 1 to 4.

- **Signature**: `(%, %, %) -> %`

#### `ellipticThetaPrime` <a id="ellipticthetaprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L350)\]

ellipticThetaPrime(a, u, q) computes the derivative of the theta function, a ranges from 1 to 4.

- **Signature**: `(%, %, %) -> %`

#### `engineeringForm` <a id="engineeringform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1064)\]

##### `engineeringForm` : `% -> %`

engineeringForm(x) returns the printed representation of x in engineering form.

##### `engineeringForm` : `(%, %) -> %`

engineeringForm(x,n) returns the printed representation of x in engineering form with n digits of precision.

#### `erf` <a id="erf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L100)\]

erf(x,x1) computes the generalized error function.

- **Signature**: `(%, %) -> %`

#### `erfc` <a id="erfc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L102)\]

erfc(x) computes the complementary error function.

- **Signature**: `% -> %`

#### `eulerE` <a id="eulere"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L110)\]

##### `eulerE` : `WSInteger -> %`

eulerE(n) returns the Euler number En.

##### `eulerE` : `(WSInteger , %) -> %`

eulerE(n,z) returns the Euler E polynomial of degree n.

#### `eulerGamma` <a id="eulergamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L84)\]

eulerGamma() returns Euler's constant Gamma(γ).

- **Signature**: `() -> %`

#### `eulerPhi` <a id="eulerphi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L107)\]

eulerPhi(n) is the totient function, i.e. the number of integers that are relatively prime to n in the range [1,n].

- **Signature**: `WSInteger -> %`

#### `exactNumber?` <a id="exactnumber"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L51)\]

exactNumber?(x) checks whether or not x is an exact number.

- **Signature**: `% -> Boolean`

#### `exp` <a id="exp"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L80)\]

exp() returns ℯ (%e or exp(1)).

- **Signature**: `() -> %`

#### `expToTrig` <a id="exptotrig"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L972)\]

expToTrig(expr) returns expr with exponentials converted to (hyperbolic) trigonometric functions.

- **Signature**: `% -> %`

#### `expand` <a id="expand"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L895)\]

##### `expand` : `% -> %`

expand(expr) puts out products and positive powers of integers of the expression expr.

##### `expand` : `(%, %) -> %`

expand(expr, opt) is the expand version with excluded pattern-s or any other options available (for example "Modulus->p").

#### `expandDenominator` <a id="expanddenominator"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L919)\]

expandDenominator(expr) expands denominators of rational expression expr.

- **Signature**: `% -> %`

#### `expandNumerator` <a id="expandnumerator"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L917)\]

expandNumerator(expr) expands numerators of rational expression expr.

- **Signature**: `% -> %`

#### `exponent` <a id="exponent"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L697)\]

##### `exponent` : `(%, %) -> %`

exponent(p,expr) returns the maximum exponent of p for expr. \example{x:= jWSExpr x;y := jWSExpr y} \example{p:=(x^2-2)^3*(y*x^3+x^11*y^7)*(y^5+x*y^2+x^11+y)} \example{exponent(%,(x^2-2))}

##### `exponent` : `(%, %, %) -> %`

exponent(p, expr, map) applies map to the exponents related to expr and returns it. By default map = "Max". \example{x:= jWSExpr x;y := jWSExpr y} \example{p:=expand((x^2-2)^3*(y*x^3+x^11*y^7)*(y^5+x*y^2+x^11+y))} \example{exponent(p,x,"Min")}

#### `extendedExpand` <a id="extendedexpand"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L901)\]

extendedExpand(expr) puts out all products and positive powers of integers.

- **Signature**: `% -> %`

#### `extendedSimplify` <a id="extendedsimplify"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L876)\]

##### `extendedSimplify` : `% -> %`

extendedSimplify(expr) is the extended version of simplify. This is the full version of simplify. \example{x:= jWSExpr x} \example{expr := Gamma(x)/Gamma(x-1)} Compare with simplify(expr). \example{extendedSimplify(expr)}

##### `extendedSimplify` : `(%, %) -> %`

extendedSimplify(expr, assumptions) is the extended version of simplify with respect to assumptions or ExcludedForms. This is the full version.

#### `extract` <a id="extract"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1017)\]

extract(expr,i) returns the i-th element of expr seen as a list.

- **Signature**: `(%, NonNegativeInteger) -> %`

#### `factor` <a id="factor"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L797)\]

##### `factor` : `% -> %`

factor(expr) factors the expression or polynomial expr.

##### `factor` : `(%, %) -> %`

factor(expr, opt) factors the expression or polynomial expr. For example: \example{x := jWSExpr x;} \example{factor(1 + x^2, "GaussianIntegers -> True")}

#### `factorList` <a id="factorlist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L823)\]

factorList(expr) factors the expression or polynomial expr, but returns the result as a list of pairs (factor, exponent).

- **Signature**: `% -> WSList(WSList(%))`

#### `factorPolynomial` <a id="factorpolynomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L790)\]

factorPolynomial(p) factorizes the polynomial p. For example: \example{x := jWSExpr x} \example{p:=expand(chebyshevT(7,x)* chebyshevU(9,x))} \example{factorPolynomial p}

- **Signature**: `% -> %`

#### `factorSquareFree` <a id="factorsquarefree"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L804)\]

factorSquareFree(expr) factors the expression or polynomial expr in square free factors.

- **Signature**: `% -> %`

#### `factorSquareFreeList` <a id="factorsquarefreelist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L826)\]

factorSquareFreeList(expr) factors the expression or polynomial expr in square free factors but returns the result as a list of pairs (factor, exponent).

- **Signature**: `% -> WSList(WSList(%))`

#### `factorTerms` <a id="factorterms"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L807)\]

##### `factorTerms` : `% -> %`

factorTerms(p) factors out numerical factors of the expression or polynomial expr.

##### `factorTerms` : `(%, %) -> %`

factorTerms(p, var) factors out numerical factors of the expression or polynomial expr without those related to var.

##### `factorTerms` : `(%, WSL(%)) -> %`

factorTerms(p, vars) factors the expression or polynomial expr by pulling out numerical factors without those related to var(s).

#### `factorTermsList` <a id="factortermslist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L816)\]

##### `factorTermsList` : `% -> WSList(%)`

factorTermsList(expr) is the counterpart of factorTerms but here returned as a list of pairs (numerical factor, polynomial factor).

##### `factorTermsList` : `(%, %) -> WSList(%)`

factorTermsList(expr, vars) is the counterpart of factorTerms but here returned as a list of pairs (numerical factor, polynomial factor). The numerical factors related to var(s) are not factored.

#### `fibonacci` <a id="fibonacci"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L233)\]

fibonacci(n, x) returns the Fibonacci polynomial or evaluates it at x if x is a number.

- **Signature**: `(%, %) -> %`

#### `findInstance` <a id="findinstance"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L652)\]

##### `findInstance` : `(Equation(%), %) -> WSL(WSL(%))`

findInstance(expr,lvars) tries to find an instance of the equation in expr.

##### `findInstance` : `(%, %) -> WSL(WSL(%))`

findInstance(expr,lvars) tries to find an instance of the (in)equation in expr.

##### `findInstance` : `(Equation(%), %, %) -> WSL(WSL(%))`

findInstance(expr,lvars,dom) tries to find an instance of the equation in expr.

##### `findInstance` : `(Equation(%), %, %, %) -> WSL(WSL(%))`

findInstance(expr,lvars,dom,n) tries to find n instance(s) to the equation in expr.

##### `findInstance` : `(%, %, %) -> WSL(WSL(%))`

findInstance(expr,lvars,dom) tries to find an instance to the equation in expr.

##### `findInstance` : `(%, %, %, %) -> WSL(WSL(%))`

findInstance(expr,lvars,dom, n) tries to find n instance(s) to the (in)equation in expr.

#### `findRoot` <a id="findroot"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L849)\]

findRoot(expr,start) tries to find the root of expr starting at start. \example{x:= jWSExpr x} \example{findRoot(sin(x) + cos(x), "\{x, 0\}")}

- **Signature**: `(%, %) -> %`

#### `floor` <a id="floor"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L76)\]

floor(x) returns the greatest integer less than or equal to x

- **Signature**: `% -> %`

#### `fourier` <a id="fourier"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L549)\]

##### `fourier` : `% -> %`

fourier(expr) returns the discrete Fourier transform from a list of numbers.

##### `fourier` : `(%, %) -> %`

fourier(expr, pos) returns the elements of the discrete Fourier transform from a list of numbers with position(s) in the list pos.

##### `fourier` : `WSL(%) -> WSL(%)`

fourier(list) returns the discrete Fourier transform from the list of numbers.

##### `fourier` : `(WSL(%), WSL(%)) ->WSL(%)`

fourier(list, lpos) returns the elements of the discrete Fourier transform from a list of numbers with position(s) in the list lpos.

#### `fromCoefficientRules` <a id="fromcoefficientrules"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L722)\]

fromCoefficientRules(list, vars) constructs the polynomial from the list of coefficients and exponents rules. \example{x:= jWSExpr x;y := jWSExpr y} \example{coefficientRules((x + y)^2+x^11,jWSExpr [x,y])} \example{fromCoefficientRules(%, jWSExpr [x,y])}

- **Signature**: `(%, %) -> %`

#### `functionExpand` <a id="functionexpand"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L950)\]

##### `functionExpand` : `% -> %`

functionExpand(expr) tries to expand functions in expr to more elementary functions. For example: \example{functionExpand sphericalBesselJ(3,8)}

##### `functionExpand` : `(%, %) -> %`

functionExpand(expr,assumptions) tries to expand functions in expr to more elementary functions assuming that assumptions are satisfied.

#### `gammaRegularized` <a id="gammaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L213)\]

gammaRegularized(a,x) computes the regularized incomplete Gamma function.

- **Signature**: `(%, %) -> %`

#### `gegenbauerC` <a id="gegenbauerc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L252)\]

##### `gegenbauerC` : `(%, %) -> %`

gegenbauerC(n,x) returns the renormalized form of the Gegenbauer polynomial or evaluates it at x if x is a number.

##### `gegenbauerC` : `(%, %, %) -> %`

gegenbauerC(n,lambda,x) returns the Gegenbauer polynomial or evaluates it at x if x is a number.

#### `goldenRatio` <a id="goldenratio"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L90)\]

goldenRatio() returns the golden ratio.

- **Signature**: `() -> %`

#### `groebnerBasis` <a id="groebnerbasis"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L777)\]

##### `groebnerBasis` : `(%, %) -> WSL(%)`

groebnerBasis(lpoly, lvar) computes a Groebner basis from the list of polynomials lpoly relative to the list of vars lvars.

##### `groebnerBasis` : `(%, %, %) -> WSL(%)`

groebnerBasis(lpoly, lvar, opt) computes a Groebner basis from the list of polynomials lpoly relative to the list of variables in lvars without variables in opt. Opt can also give the modulus to compute it: "Modulus -> p".

#### `gudermannian` <a id="gudermannian"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L122)\]

gudermannian(z) computes the Gudermannian of z.

- **Signature**: `% -> %`

#### `guessGeneratingFunction` <a id="guessgeneratingfunction"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L382)\]

##### `guessGeneratingFunction` : `(WSList(%), %) -> %`

guessGeneratingFunction(l,x) finds the generating function applied to x from the list of coefficients l. Or from the list of lists l (list of pairs as list (n-th, coef-th)). For example: \example{guessGeneratingFunction([1,2,4,8],x)}

##### `guessGeneratingFunction` : `(%, %) -> %`

guessGeneratingFunction(l,x) finds the generating function applied to x from the list of coefficients l. Or from the list of lists l (list of pairs as list (n-th, coef-th)). For example: \example{guessGeneratingFunction(jWSExpr("{1,2,4,8}"),x)}

#### `guessSequenceFunction` <a id="guesssequencefunction"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L394)\]

##### `guessSequenceFunction` : `WSList(WSInteger) -> %`

guessSequenceFunction(l) finds the sequence from the list of coefficients l. For example: \example{guessSequenceFunction(jWSExpr("{1,2,4,8}"))}

##### `guessSequenceFunction` : `% -> %`

guessSequenceFunction(l) finds the sequence from the list of coefficients l Or from the list of lists l (list of pairs as list (n-th, coef-th)). For example: \example{guessSequenceFunction(jWSExpr("{1,2,4,8}"))}

##### `guessSequenceFunction` : `(%, %) -> %`

guessSequenceFunction(l,x) finds the sequence function applied to x from the list of coefficients l. For example: \example{guessSequenceFunction([1,2,4,jWSInt 8]::WSList(WSInteger),x)}

#### `haversine` <a id="haversine"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L116)\]

haversine(z) computes the Haversine of z.

- **Signature**: `% -> %`

#### `hermiteH` <a id="hermiteh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L264)\]

hermiteH(n, x) returns the Hermite polynomial or evaluates it at x if x is a number.

- **Signature**: `(%, %) -> %`

#### `hornerForm` <a id="hornerform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L934)\]

hornerForm(expr, x) returns the Horner form of expr (minimizing multiplications).

- **Signature**: `(%, %) -> %`

#### `hurwitzLerchPhi` <a id="hurwitzlerchphi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L199)\]

hurwitzLerchPhi(z,s,a) computes the Hurwitz–Lerch transcendent phi function.

- **Signature**: `(%, %, %) -> %`

#### `hurwitzZeta` <a id="hurwitzzeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L197)\]

hurwitzZeta(s,a) computes the Hurwitz zeta.

- **Signature**: `(%, %) -> %`

#### `hyperFactorial` <a id="hyperfactorial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L231)\]

hyperFactorial(n) computes the hyperfactorial of n.

- **Signature**: `% -> %`

#### `hypergeometric0F1` <a id="hypergeometric0f1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L281)\]

hypergeometric0F1(a,z) is the hypergeometric 0F1.

- **Signature**: `(%, %) -> %`

#### `hypergeometric0F1Regularized` <a id="hypergeometric0f1regularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L283)\]

hypergeometric0F1Regularized(a,z) is the regularized hypergeometric 0F1.

- **Signature**: `(%, %) -> %`

#### `hypergeometric1F1` <a id="hypergeometric1f1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L285)\]

hypergeometric1F1(a,b,z) is the Kummer confluent hypergeometric function 1F1.

- **Signature**: `(%, %, %) -> %`

#### `hypergeometric1F1Regularized` <a id="hypergeometric1f1regularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L288)\]

hypergeometric1F1Regularized(a,b,z) is the regularized confluent hypergeometric function 1F1.

- **Signature**: `(%, %, %) -> %`

#### `hypergeometricU` <a id="hypergeometricu"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L291)\]

hypergeometricU(a,b,z) is the confluent hypergeometric function U.

- **Signature**: `(%, %, %) -> %`

#### `integer?` <a id="integer"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L42)\]

integer?(i) checks whether or not i is an integer.

- **Signature**: `% -> Boolean`

#### `integrate` <a id="integrate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L499)\]

##### `integrate` : `(%, %) -> %`

integrate(expr, opts|var) integrates expr with respect to opt or var as options. For example: \example{x:=jWSExpr x;integrate(1/(x^4-1),x)} \example{opt:=jWSList [x,-1,1]} \example{integrate(cos(x),opt)} => 2 sin(1) \example{integrate(cos(x),"\{x,-1.0,1.0\}")} => 1.68294

##### `integrate` : `(%, %, Segment(Integer)) -> %`

integrate(expr, var, seg) is the definite integration of expr with respect to var using segment seg.

##### `integrate` : `(%, Symbol) -> %`

integrate(expr, var) is the indefinite integration of expr with respect to var.

#### `interpolatingPolynomial` <a id="interpolatingpolynomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L839)\]

interpolatingPolynomial(lpoly,x) interpolates the list of polynomials lpoly with respect to x.

- **Signature**: `(%, %) -> %`

#### `inverseBetaRegularized` <a id="inversebetaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L217)\]

inverseBetaRegularized(s,a,b) computes the inverse Beta regularized function.

- **Signature**: `(%, %, %) -> %`

#### `inverseErf` <a id="inverseerf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L204)\]

inverseErf(x) computes the inverse error function of x.

- **Signature**: `% -> %`

#### `inverseErfc` <a id="inverseerfc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L206)\]

inverseErfc(x) computes the inverse complementary error function of x.

- **Signature**: `% -> %`

#### `inverseFourier` <a id="inversefourier"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L563)\]

##### `inverseFourier` : `% -> %`

inverseFourier(expr) returns the discrete inverse Fourier transform from a list of numbers.

##### `inverseFourier` : `(%, %) -> %`

inverseFourier(expr, pos) returns the elements of the discrete inverse Fourier transform from a list of numbers with position(s) in the list pos.

##### `inverseFourier` : `WSL(%) -> %`

inverseFourier(expr) returns the discrete inverse Fourier transform from a list of numbers.

##### `inverseFourier` : `(WSL(%), WSL(%)) -> WSL(%)`

inverseFourier(list, lpos) returns the elements of the discrete inverse Fourier transform from a list of numbers with position(s) in the list lpos.

#### `inverseGammaRegularized` <a id="inversegammaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L219)\]

inverseGammaRegularized(a,s) computes the inverse Gamma regularized function.

- **Signature**: `(%, %) -> %`

#### `inverseGudermannian` <a id="inversegudermannian"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L124)\]

inverseGudermannian(z) computes the inverse Gudermannian.

- **Signature**: `% -> %`

#### `inverseHaversine` <a id="inversehaversine"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L118)\]

inverseHaversine(z) computes the inverse Haversine.

- **Signature**: `% -> %`

#### `inverseJacobiCn` <a id="inversejacobicn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L345)\]

inverseJacobiCn(nu, m) computes the inverse Jacobi CN elliptic function.

- **Signature**: `(%, %) -> %`

#### `inverseJacobiSn` <a id="inversejacobisn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L343)\]

inverseJacobiSn(nu, m) computes the inverse Jacobi SN elliptic function.

- **Signature**: `(%, %) -> %`

#### `irreducible?` <a id="irreducible"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L830)\]

##### `irreducible?` : `% -> Boolean`

irreducible?(p) checks whether or not p is irreducible.

##### `irreducible?` : `(%, %) -> Boolean`

irreducible?(p) checks whether or not p is irreducible over Gaussian rationals or algebraic extensions.

#### `jWSAssociation` <a id="jwsassociation"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1183)\]

jWSAssociation(rules) returns the associations (key->value) created from the rules.

- **Signature**: `WSList(%) -> %`

#### `jWSData` <a id="jwsdata"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1168)\]

##### `jWSData` : `() -> %`

jWSData() returns the list of WS symbols. Note: Currently unprintable.

##### `jWSData` : `String -> %`

jWSData(sym) returns the entity(ies) associated to sym(s).

##### `jWSData` : `(String, String) -> %`

jWSData(sym, prop) returns the property of sym.

##### `jWSData` : `(String, String, String) -> %`

jWSData(sym, prop, ann) returns the annotation for the property of sym.

##### `jWSData` : `% -> %`

jWSData(sym) returns the entity(ies) associated to sym(s).

##### `jWSData` : `(%, %) -> %`

jWSData(sym, prop) returns the property of sym.

##### `jWSData` : `(%, %, %) -> %`

jWSData(sym, prop, ann) returns the annotation for the property of sym.

#### `jWSEqual` <a id="jwsequal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1198)\]

jWSEqual(lhs,rhs) returns the Julia WS equality lhs == rhs.

- **Signature**: `(%,  %) -> %`

#### `jWSExpr` <a id="jwsexpr"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1218)\]

##### `jWSExpr` : `Symbol -> %`

jWSExpr(sym) coerces sym to a WSExpression. For example: x := jWSExpr x

##### `jWSExpr` : `Integer -> %`

jWSExpr(z) returns the Integer z as a WSExpression.

##### `jWSExpr` : `Fraction Integer -> %`

jWSExpr(q) returns the Fraction(Integer) q as a WSExpression.

##### `jWSExpr` : `DoubleFloat -> %`

jWSExpr(r) returns the DoubleFloat as a WSExpression.

##### `jWSExpr` : `JLFloat64 -> %`

jWSExpr(r) returns the JLFloat64 as a WSExpression.

##### `jWSExpr` : `Float -> %`

jWSExpr(r) returns the Float r as a WSExpression.

##### `jWSExpr` : `JLFloat -> %`

jWSExpr(r) returns the JLFloat r as a WSExpression.

##### `jWSExpr` : `List(%) -> %`

jWSExpr(list) returns the list of WSExpression as a WSExpression.

##### `jWSExpr` : `String -> %`

jWSExpr(str) constructs str as a WSExpression evaluating str as a WS Language expression. For example: \example{jWSExpr "Factorial[5]"} \example{jWSExpr "3.14159"} \example{jlWSDateString(jWSExpr "Tomorrow")} \example{toString jWSExpr "TextSentences[WikipediaData[_"Sun_"]][[;; 40]]"} Example: jWSExpr "Probability[x < 1, x \[Distributed] NormalDistribution[]]"

#### `jWSGreater` <a id="jwsgreater"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1206)\]

jWSGreater(lhs,rhs) returns the Julia WS inequality lhs > rhs.

- **Signature**: `(%,  %) -> %`

#### `jWSGreaterEqual` <a id="jwsgreaterequal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1208)\]

jWSGreaterEqual(lhs,rhs) returns the Julia WS inequality lhs >= rhs.

- **Signature**: `(%,  %) -> %`

#### `jWSLess` <a id="jwsless"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1202)\]

jWSLess(lhs,rhs) returns the Julia WS inequality lhs < rhs.

- **Signature**: `(%,  %) -> %`

#### `jWSLessEqual` <a id="jwslessequal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1204)\]

jWSLessEqual(lhs,rhs) returns the Julia WS inequality lhs <= rhs.

- **Signature**: `(%,  %) -> %`

#### `jWSNotEqual` <a id="jwsnotequal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1200)\]

jWSNotEqual(lhs,rhs) returns the Julia WS inequality lhs != rhs.

- **Signature**: `(%,  %) -> %`

#### `jWSQuantity` <a id="jwsquantity"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1210)\]

##### `jWSQuantity` : `% -> %`

jWSQuantity(jWSString(u)) returns quantity unit u of 1. For example: \example{jWSQuantity jWSString "Meter"}

##### `jWSQuantity` : `(%, %) -> %`

jWSQuantity(x,jWSString(u)) returns quantity unit u of x. For example: \example{jWSQuantity(1.2, jWSString "Meter")}

#### `jWSRule` <a id="jwsrule"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1190)\]

##### `jWSRule` : `(%,  %) -> %`

jWSRule(lhs,rhs) returns the Julia WS rule lhs->rhs.

##### `jWSRule` : `Equation(%) -> %`

jWSRule(eq) returns the Julia WS rule lhs->rhs for the equation eq. For example: \example{x := jWSExpr x} \example{p := 1/2 * legendreQ(5,x)} \example{replaceAll(p, jWSRule(x = jWSExpr "1.55555556444883838383833777333333333"))}

#### `jWSTable` <a id="jwstable"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1186)\]

##### `jWSTable` : `(%, %) -> WSList(%)`

jWSTable(expr, range) applies the expr to the defined range.

##### `jWSTable` : `(%, %, %) -> WSList(WSList(%))`

jWSTable(expr, range1, range2) applies the expr to the defined ranges.

#### `jacobiAmplitude` <a id="jacobiamplitude"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L341)\]

jacobiAmplitude(u,m) computes the amplitude function am.

- **Signature**: `(%, %) -> %`

#### `jacobiP` <a id="jacobip"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L278)\]

jacobiP(n, a, b, x) returns the Jacobi polynomial or evaluates it at x if x is a number.

- **Signature**: `(%, %, %, %) -> %`

#### `jacobiTheta` <a id="jacobitheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L221)\]

jacobiTheta(n, z, m) are the Jacobi Theta functions.

- **Signature**: `(WSInteger, %, %) -> %`

#### `jacobiZeta` <a id="jacobizeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L371)\]

jacobiZeta(ϕ,m) computes the Jacobi Zeta function.

- **Signature**: `(%, %)-> %`

#### `jlDisplay` <a id="jldisplay"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1033)\]

##### `jlDisplay` : `WSExpression -> WSExpression`

jlDisplay(expr) returns the traditional form of expr. This is equivalent to: jWSExpr "Format[Sin[x]]" => sin(x)

##### `jlDisplay` : `(WSExpression, WSExpression) -> WSExpression`

jlDisplay(expr, form) returns the `form` form of expr resulting for example in: "Format[Sin[x], TeXForm]" => \sin x

#### `jlEval` <a id="jleval"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L995)\]

##### `jlEval` : `(%, String) -> %`

jlEval(expr, param) evaluates expression expr with param as parameter(s). See also `eval` or `replaceAll`. For example: \example{x:=jWSExpr("x");jlEval(sqrt(x),"x=2.0")}

##### `jlEval` : `(%, String, String) -> %`

jlEval(expr, param1, param2) evaluates expression expr with param1 and param2 as parameters. See also `eval` or `replaceAll`. \example{a:=jWSExpr("a");b:=jWSExpr("b");} \example{jlEval(sqrt(a^2+b^2),"a=1.0","b=1.0")}

##### `jlEval` : `(%, String, String, String) -> %`

jlEval(expr, param11, param2, param3) evaluates expression expr with param1, param2 and param3 as parameters. See also `eval` or `replaceAll`.

#### `jlGreedyEval` <a id="jlgreedyeval"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L992)\]

jlGreedyEval(bool) toggles automatic arithmetic operations. Plus[a, a] can become Times[2, a] using or not Julia `weval`.

- **Signature**: `Boolean -> Void`

#### `jlWSAccuracy` <a id="jlwsaccuracy"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1159)\]

jlWSAccuracy(expr) get accuracy of expr.

- **Signature**: `% -> %`

#### `jlWSDefined?` <a id="jlwsdefined"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L66)\]

jlWSDefined?(sym) checks whether or not the symbol sym is defined in the WS language. For example: \example{jlWSDefined? "Sin"} => true

- **Signature**: `String -> Boolean`

#### `jlWSPrecision` <a id="jlwsprecision"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1157)\]

jlWSPrecision get precision of expr.

- **Signature**: `% -> %`

#### `jlWSSetAccuracy` <a id="jlwssetaccuracy"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1163)\]

jlWSSetAccuracy(expr, acc) sets accuracy of expr to acc.

- **Signature**: `(%, %) -> %`

#### `jlWSSetOptions` <a id="jlwssetoptions"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1165)\]

jlWSSetOptions(type, opts) sets some internal engine options.

- **Signature**: `(%, %) -> %`

#### `jlWSSetPrecision` <a id="jlwssetprecision"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1161)\]

jlWSSetPrecision(expr, prec) sets precision of expr to prec.

- **Signature**: `(%, %) -> %`

#### `key?` <a id="key"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L61)\]

key?(assoc,key) checks whether or not key exists in the association assoc.

- **Signature**: `(%, %) -> Boolean`

#### `keys` <a id="keys"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1019)\]

keys(expr) returns the key elements in expr if any.

- **Signature**: `% -> %`

#### `kleinInvariantJ` <a id="kleininvariantj"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L378)\]

kleinInvariantJ(tau) computes the Klein's absolute invariant.

- **Signature**: `% -> %`

#### `laguerreL` <a id="laguerrel"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L267)\]

##### `laguerreL` : `(%, %) -> %`

laguerreL(n, x) returns the Laguerre polynomial or evaluates it at x if x is a number. For example: \example{laguerreL(5, jWSExpr x)}

##### `laguerreL` : `(%, %, %) -> %`

laguerreL(n, a, x) returns the generalized Laguerre polynomial or evaluates it at x if x is a number.

#### `lambertW` <a id="lambertw"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L114)\]

lambertW(k,z) returns the k-th solution to the LambertW function.

- **Signature**: `(WSInteger, %) -> %`

#### `legendreP` <a id="legendrep"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L236)\]

##### `legendreP` : `(%, %) -> %`

legendreP(n, x) returns the Legendre polynomial of the first kind or evaluates it at x if x is a number.

##### `legendreP` : `(%, %, %) -> %`

legendreP(n, m, x) returns the associated Legendre polynomial of the first type or evaluates it at x if x is a number.

#### `legendreQ` <a id="legendreq"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L239)\]

##### `legendreQ` : `(%, %) -> %`

legendreQ(n, x) returns the Legendre function of the second kind or evaluates it at x if x is a number. \example{legendreQ(3,jWSExpr x)}

##### `legendreQ` : `(%, %, %) -> %`

legendreQ(n, m, x) returns the associated Legendre function of the second kind or evaluates it at x if x is a number.

#### `length` <a id="length"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1010)\]

length(expr) returns the length of expr seen as a list.

- **Signature**: `% -> %`

#### `lerchPhi` <a id="lerchphi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L164)\]

lerchPhi(z,s,a) returns Lerch's transcendent phi of arguments.

- **Signature**: `(%, %, %) -> %`

#### `level` <a id="level"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1012)\]

##### `level` : `(%, %) -> WSL(%)`

level(expr, lev) returns the list of expression expr at level lev.

##### `level` : `(%, %, Boolean) -> WSL(%)`

level(expr, lev, head) returns the list of expression expr at level lev with heads if head is true.

#### `limit` <a id="limit"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L520)\]

limit(expr, params) returns the limit, eventually nested or multivariate, of expr. For example: \example{x:=jWSExpr x; limit(sin(x)-sin(x-1/x),"x->Infinity")}

- **Signature**: `(%, %) -> %`

#### `log10` <a id="log10"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L96)\]

log10(x) computes the logarithm of x in base 10.

- **Signature**: `% -> %`

#### `log2` <a id="log2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L94)\]

log2(x) computes the logarithm of x in base 2.

- **Signature**: `% -> %`

#### `logBarnesG` <a id="logbarnesg"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L227)\]

logBarnesG(x) is the logarithm of the Barnes G-function.

- **Signature**: `% -> %`

#### `logGamma` <a id="loggamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L225)\]

logGamma(z) returns the log-Gamma of z.

- **Signature**: `% -> %`

#### `lookup` <a id="lookup"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1023)\]

##### `lookup` : `(%, %) -> %`

lookup(assocs,keys) returns value(s) associated to key(s).

##### `lookup` : `(%, %, %) -> %`

lookup(assocs,keys, defaultval) returns value(s) associated to key(s) if key(s) exist(s), otherwise defaultval

#### `machineNumber?` <a id="machinenumber"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L48)\]

machineNumber?(expr) checks whether or not expr is a CPU/GPU supported number.

- **Signature**: `% -> Boolean`

#### `mathieuC` <a id="mathieuc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L322)\]

mathieuC(a,q,z) is the even Mathieu function with characteristic a and parameter q.

- **Signature**: `(%, %, %) -> %`

#### `mathieuCPrime` <a id="mathieucprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L328)\]

mathieuCPrime(a,q,z) is the derivative of the even Mathieu function.

- **Signature**: `(%, %, %) -> %`

#### `mathieuCharacteristicA` <a id="mathieucharacteristica"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L332)\]

mathieuCharacteristicA(r,q) returns the characteristic for even Mathieu function.

- **Signature**: `(%, %) -> %`

#### `mathieuCharacteristicB` <a id="mathieucharacteristicb"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L335)\]

mathieuCharacteristicB(r,q) returns the characteristic for odd Mathieu function.

- **Signature**: `(%, %) -> %`

#### `mathieuCharacteristicExponent` <a id="mathieucharacteristicexponent"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L338)\]

mathieuCharacteristicExponent(a,q) returns the characteristic exponent of the Mathieu function.

- **Signature**: `(%, %) -> %`

#### `mathieuS` <a id="mathieus"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L325)\]

mathieuS(b,q,z) is the odd Mathieu function with characteristic b and parameter q.

- **Signature**: `(%, %, %) -> %`

#### `mathieuSPrime` <a id="mathieusprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L330)\]

mathieuSPrime(b,q,z) is the derivative of the odd Mathieu function.

- **Signature**: `(%, %, %) -> %`

#### `matrixForm` <a id="matrixform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1084)\]

matrixForm(mat) returns a pretty-printable form of mat i.e. its WS 'MatrixForm'.

- **Signature**: `% -> %`

#### `maxLimit` <a id="maxlimit"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L528)\]

maxLimit(expr, params) returns the max limit, eventually nested or multivariate, of expr.

- **Signature**: `(%, %) -> %`

#### `maximize` <a id="maximize"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L475)\]

##### `maximize` : `(%, %) -> %`

maximize(expr, vars) is the WS symbolic maximization function. expr can contain constraints if it is a WS list of constraints with function to maximize as the first element. Global optimization function otherwise.

##### `maximize` : `(%, Symbol) -> %`

maximize(expr, sym) symbolically maximizes expression function expr with respect to sym. expr can contain constraints if it is a WS list of constraints with function to maximize as the first element. Global optimization function otherwise.

##### `maximize` : `(%, %, %) -> %`

maximize(expr, vars, dom) is the WS symbolic maximization function. dom restricts the domain of variables, for example, Integers.

#### `member?` <a id="member"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L59)\]

member?(list, expr) checks if expr is in list.

- **Signature**: `(%, %) -> Boolean`

#### `minLimit` <a id="minlimit"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L525)\]

minLimit(expr, params) returns the min limit, eventually nested or multivariate, of expr.

- **Signature**: `(%, %) -> %`

#### `minimalPolynomial` <a id="minimalpolynomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L843)\]

##### `minimalPolynomial` : `(%, %) -> %`

minimalPolynomial(expr,var) returns the minimal polynomial in the variable var of the expression expr.

##### `minimalPolynomial` : `(%, %, %) -> %`

minimalPolynomial(expr,var, elem) returns the minimal polynomial in the variable var of the expression expr.

#### `minimize` <a id="minimize"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L447)\]

##### `minimize` : `(%, %) -> %`

minimize(expr, vars) is the WS symbolic minimization function. expr can contain constraints if it is a WS list of constraints with function to minimize as the first element. Global optimization function otherwise.

##### `minimize` : `(%, Symbol) -> %`

minimize(expr, sym) symbolically minimizes expression function expr with respect to sym. expr can contain constraints if it is a WS list of constraints with function to minimize as the first element. Global optimization function otherwise.

##### `minimize` : `(%, %, %) -> %`

minimize(expr, vars, dom) is the WS symbolic minimization function. dom restricts the domain of variables, for example, Integers.

#### `missing?` <a id="missing"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L64)\]

missing?(data) checks whether or not data is Missing.

- **Signature**: `% -> Boolean`

#### `modularLambda` <a id="modularlambda"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L380)\]

modularLambda() computes the lambda modular function.

- **Signature**: `% -> %`

#### `monomialList` <a id="monomiallist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L728)\]

monomialList(p) returns the list of monomials in p.

- **Signature**: `% -> %`

#### `negative?` <a id="negative"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L57)\]

negative?(expr) checks whether or not expr is negative.

- **Signature**: `% -> Boolean`

#### `normal` <a id="normal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L857)\]

##### `normal` : `% -> %`

normal(expr) converts expr to a normal expression from different expression types. Can be applied to a power series for example. For example: \example{x:=jWSExpr x} \example{s:=series(exp(x),jWSExpr "\{x,0,10\}")} \example{normal(s)::EXPR INT}

##### `normal` : `(%, %) -> %`

normal(expr, list(Head)||Head) converts objects in expr to a normal expression form from different expression types, with Head, or a list of Head-s.

#### `number?` <a id="number"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L46)\]

number?(expr) checks whether or not expr is a number.

- **Signature**: `% -> Boolean`

#### `numberForm` <a id="numberform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1043)\]

##### `numberForm` : `% -> %`

numberForm(x) returns the default printed representation of x.

##### `numberForm` : `(%, %) -> %`

numberForm(x, expr) returns the approximate printed representation of x with expr as specification (number of digits of precision or a 2-list of number of digits and the number of digits after the decimal point).

#### `numerDenom` <a id="numerdenom"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L674)\]

numerDenom(expr) returns the numerator and denominator of expr.

- **Signature**: `% -> WSL(%)`

#### `numerator` <a id="numerator"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L670)\]

numerator(expr) returns the numerator of expr.

- **Signature**: `% -> %`

#### `numeric?` <a id="numeric"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L53)\]

numeric?(x) checks whether or not x is or would yield a number.

- **Signature**: `% -> Boolean`

#### `numericDSolve` <a id="numericdsolve"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L614)\]

##### `numericDSolve` : `(%, %, %) -> %`

numericDSolve(expr,fun,xrange) solves numerically the differential equation(s) in expr for the function fun, in the range xrange. Other combinations of parameters are also available.

##### `numericDSolve` : `(Equation(%), %, %) -> %`

numericDSolve(eq,fun,xrange) solves numerically the differential equation eq for the function fun, in the range xrange.

##### `numericDSolve` : `(%, %, %, %) -> %`

numericDSolve(expr,fun,xrange,yrange) solves numerically the differential equation(s) in expr for the function fun, in the ranges xrange and yrange. Other combinations of parameters are also available (see documentation).

#### `numericDSolveValue` <a id="numericdsolvevalue"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L625)\]

##### `numericDSolveValue` : `(%, %, %) -> %`

numericDSolveValue(expr,fun,xrange) returns the numerical value solution of the differential equation(s) in expr for the function fun, in the range xrange. Other combinations of parameters are also available (see documentation).

##### `numericDSolveValue` : `(Equation(%), %, %) -> %`

numericDSolveValue(eq,fun,xrange) returns the numerical solution of the differential equation eq for the function fun, in the range xrange.

##### `numericDSolveValue` : `(%, %, %, %) -> %`

numericDSolveValue(expr,fun,xrange,yrange) returns the numerical solution of the differential equation(s) in expr for the function fun, in the ranges xrange and yrange. Other combinations of parameters are also available (see documentation).

#### `numericIntegrate` <a id="numericintegrate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L514)\]

##### `numericIntegrate` : `(%, %) -> %`

numericIntegrate(expr, opt|var) integrates numerically expr with respect to opt or var as options.

##### `numericIntegrate` : `(%, %, Segment(Integer)) -> %`

numericIntegrate(expr, var, seg) integrates expr using segment seg with respect to var.

#### `numericMaximize` <a id="numericmaximize"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L488)\]

##### `numericMaximize` : `(%, %) -> %`

numericMaximize(expr, vars) maximizes numerically the expression function expr with respect to vars.

##### `numericMaximize` : `(%, Symbol) -> %`

numericMaximize(expr, sym) maximizes numerically the expression function expr with respect to sym.

##### `numericMaximize` : `(%, %, %) -> %`

numericMaximize(expr, vars, dom) maximizes numerically the expression function expr with respect to vars and vars restricted to the domain dom.

#### `numericMinimize` <a id="numericminimize"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L460)\]

##### `numericMinimize` : `(%, %) -> %`

numericMinimize(expr, vars) minimizes numerically the expression function expr with respect to vars. For example, global optimization from the SIAM 100 digits challenge: \example{x := jWSExpr(x);y:=jWSExpr y;} \example{expr := exp(sin(50*x))+sin(60*exp(y))+ sin(70*sin(x))+ sin(sin(80*y))-sin(10*(x+y))+(x^2+y^2)/4} \example{numericMinimize(expr, jWSList [x,y])}

##### `numericMinimize` : `(%, Symbol) -> %`

numericMinimize(expr, sym) minimizes numerically the expression function expr with respect to sym.

##### `numericMinimize` : `(%, %, %) -> %`

numericMinimize(expr, vars, dom) minimizes numerically the expression function expr with respect to vars and vars restricted to the domain dom.

#### `numericProduct` <a id="numericproduct"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L438)\]

##### `numericProduct` : `(%, %) -> %`

numericProduct(f(n),range) returns an evaluated numerical approximation of the sum f(imin) + ... + f(imax) defined by the list range, for example \example{jWSExpr("\{i, imin, imax\}")}. See Wolfram language specifications.

##### `numericProduct` : `(%, %, Segment(Integer)) -> %`

numericProduct(f(n),n, a..b) returns an evaluated numerical approximation of the product f(a) * ... * f(b).

#### `numericSolve` <a id="numericsolve"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L540)\]

##### `numericSolve` : `(Equation(%), %) -> %`

numericSolve(eq, vars) returns the solution(s) to the equation eq.

##### `numericSolve` : `(%, %) -> %`

numericSolve(expr, vars) returns the solution(s) to the expression expr.

#### `numericSum` <a id="numericsum"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L430)\]

##### `numericSum` : `(%, %) -> %`

numericSum(f(n),range) returns an evaluated numerical approximation of the sum f(imin) + ... + f(imax) defined by the list range, for example \example{jWSExpr("\{i, imin, imax\}")}. See Wolfram language specifications.

##### `numericSum` : `(%, %, Segment(Integer)) -> %`

numericSum(f(n),n, a..b) returns an evaluated numerical approximation of the sum f(a) + ... + f(b).

#### `padeApproximant` <a id="padeapproximant"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L739)\]

padeApproximant(expr, "{x,x0, {n,m}"}) returns the Padé approximant at x0.

- **Signature**: `(%, %) -> %`

#### `parabolicCylinderD` <a id="paraboliccylinderd"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L297)\]

parabolicCylinderD(nu,x) computes the parabolic cylinder function D of x.

- **Signature**: `(%, %) -> %`

#### `percentForm` <a id="percentform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1070)\]

##### `percentForm` : `% -> %`

percentForm(x) returns the printed representation of x in percent form. For example: \example{percentForm jWSExpr 0.50}

##### `percentForm` : `(%, %) -> %`

percentForm(x,n) returns the printed representation of x in percent with n digits of precision.

#### `pochhammer` <a id="pochhammer"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L223)\]

pochhammer(a,n) returns the Pochhammer symbol.

- **Signature**: `(%, %) -> %`

#### `polylog` <a id="polylog"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L166)\]

polylog(n,p,x) is the Nielsen generalized polylogarithm function.

- **Signature**: `(%, %, %) -> %`

#### `polynomial?` <a id="polynomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L678)\]

##### `polynomial?` : `(%, %) -> Boolean`

polynomial?(p,x) checks whether or not p is a polynomial in x.

##### `polynomial?` : `(%, WSL(%)) -> Boolean`

polynomial?(p,vlist) checks whether or not p is a polynomial in the list of variables vlist.

#### `polynomialExpression?` <a id="polynomialexpression"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L683)\]

##### `polynomialExpression?` : `(%, %) -> Boolean`

polynomialExpression?(p,x) checks whether or not p is a polynomial expression in x.

##### `polynomialExpression?` : `(%, WSL(%)) -> Boolean`

polynomialExpression?(p,vlist) checks whether or not p is a polynomial expression in the list of variables vlist.

#### `polynomialExtendedGCD` <a id="polynomialextendedgcd"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L759)\]

polynomialExtendedGCD(p1, p2, x) returns the greatest common divisor of p1 and p2 considered as univariate polynomials in x

- **Signature**: `(%, %, %) -> %`

#### `polynomialGCD` <a id="polynomialgcd"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L753)\]

##### `polynomialGCD` : `(%, %) -> %`

polynomialGCD(p1, p2) returns the greatest common divisor of p1 and p2.

##### `polynomialGCD` : `(%, %, %) -> %`

polynomialGCD(p1, p2, opt) returns the greatest common divisor of p1 and p2 with options opt, for example Modulus->p.

#### `polynomialLCM` <a id="polynomiallcm"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L762)\]

##### `polynomialLCM` : `(%, %) -> %`

polynomialLCM(p1,p2) returns the least common divisor of p1 and p2.

##### `polynomialLCM` : `(%, %, %) -> %`

polynomialLCM(p1,p2,opt) returns the least common divisor of p1 and p2 with options opt, for example an Extension rule.

#### `polynomialMod` <a id="polynomialmod"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L767)\]

polynomialMod(p,mod) reduces modulo p the integer coefficients of the polynomial p.

- **Signature**: `(%, %) -> %`

#### `polynomialQuotient` <a id="polynomialquotient"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L731)\]

polynomialQuotient(p1, p2, x) returns the quotient of p1 and p2 in x.

- **Signature**: `(%, %, %) -> %`

#### `polynomialQuotientRemainder` <a id="polynomialquotientremainder"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L735)\]

polynomialQuotientRemainder(p1,p2,var) returns the quotient and remainder of p1 and p2 in x.

- **Signature**: `(%, %, %) -> WSList(%)`

#### `polynomialReduce` <a id="polynomialreduce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L785)\]

polynomialReduce(poly,lpoly,lvar) returns a minimal representation of the polynomial poly in terms of the polynomial list lpoly with respect to the list of variables lvar.

- **Signature**: `(%, %, %) -> %`

#### `polynomialRemainder` <a id="polynomialremainder"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L733)\]

polynomialRemainder(p1,p2, x) returns the remainder of p1 and p2 in x.

- **Signature**: `(%, %, %) -> %`

#### `positive?` <a id="positive"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L55)\]

positive?(expr) checks whether or not expr is positive.

- **Signature**: `% -> Boolean`

#### `positiveInfinity` <a id="positiveinfinity"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L86)\]

positiveInfinity() returns positive infinity (∞).

- **Signature**: `() -> %`

#### `powerExpand` <a id="powerexpand"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L937)\]

##### `powerExpand` : `% -> %`

powerExpand(expr) expands powers in expr assuming no branch cut.

##### `powerExpand` : `(%, %) -> %`

powerExpand(expr, sym) expands powers in expr with respect to sym, assuming no branch cut.

#### `product` <a id="product"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L422)\]

##### `product` : `(%, %) -> %`

product(f(n),range) returns the product f(imin) * ... * f(imax) defined by the list range, for example \example{jWSExpr("\{i, imin, imax\}")}. See Wolfram language specifications.

##### `product` : `(%, %, Segment(Integer)) -> %`

product(f(n),n, a..b) returns the product f(a) * ... * f(b).

##### `product` : `(%, Symbol) -> %`

product(f(n),n) returns the indefinite product of f(n).

#### `qBinomial` <a id="qbinomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L313)\]

qBinomial(n,m,q) returns the q-analog of binomial coefficient.

- **Signature**: `(%, %, %) -> %`

#### `qFactorial` <a id="qfactorial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L311)\]

qFactorial(x,q) returns the q-analog of factorial of x.

- **Signature**: `(%, %) -> %`

#### `qGamma` <a id="qgamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L315)\]

qGamma(x,q) returns the q-analog of Euler Gamma of x.

- **Signature**: `(%, %) -> %`

#### `qPochhammer` <a id="qpochhammer"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L307)\]

##### `qPochhammer` : `(%, %) -> %`

qPochhammer(x,q) returns the q-Pochhammer symbol of x.

##### `qPochhammer` : `(%, %, %) -> %`

qPochhammer(x,q,n) returns the q-Pochhammer symbol of x.

#### `qPolyGamma` <a id="qpolygamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L317)\]

##### `qPolyGamma` : `(%, %)-> %`

qPolyGamma(x,q) returns the q-Digamma of x.

##### `qPolyGamma` : `(%, %, %) -> %`

qPolyGamma(n,x,q) returns the n-th derivative of the q-digamma function of x.

#### `quantityForm` <a id="quantityform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1090)\]

##### `quantityForm` : `(%, %) -> %`

quantityForm(expr,form) returns expr as a quantity with format form.

##### `quantityForm` : `(%, WSL(%)) -> %`

quantityForm(expr,lform) returns expr as a quantity with a list of formats lform.

#### `quantityMagnitude` <a id="quantitymagnitude"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1030)\]

quantityMagnitude(val) returns magnitude of val.

- **Signature**: `% -> %`

#### `quantityUnit` <a id="quantityunit"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1028)\]

quantityUnit(val) returns unit of val.

- **Signature**: `% -> %`

#### `ramanujanTau` <a id="ramanujantau"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L181)\]

ramanujanTau(n) returns the Ramanujan tau of n.

- **Signature**: `% -> %`

#### `ramanujanTauL` <a id="ramanujantaul"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L183)\]

ramanujanTauL(s) computes the Ramanujan tau Dirichlet L-function of s.

- **Signature**: `% -> %`

#### `ramanujanTauTheta` <a id="ramanujantautheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L185)\]

ramanujanTauTheta(z) returns the Ramanujan tau theta of z.

- **Signature**: `% -> %`

#### `ramanujanTauZ` <a id="ramanujantauz"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L187)\]

ramanujanTauZ(t) computes the Ramanujan tau Z-function of t.

- **Signature**: `% -> %`

#### `rational?` <a id="rational"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L44)\]

rational?(q) checks whether or not q is a rational number.

- **Signature**: `% -> Boolean`

#### `rationalApproximation` <a id="rationalapproximation"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L986)\]

##### `rationalApproximation` : `% -> %`

rationalApproximation(expr) tries to find a rational approximation of the expression expr.

##### `rationalApproximation` : `(%, %) -> %`

rationalApproximation(expr, dx) tries to find a rational approximation of the expression expr within tolerance dx.

#### `rationalExpression?` <a id="rationalexpression"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L689)\]

##### `rationalExpression?` : `(%, %) -> Boolean`

rationalExpression?(p,x) checks whether or not p is a rational expression in x.

##### `rationalExpression?` : `(%, WSL(%)) -> Boolean`

rationalExpression?(p,vlist) checks whether or not p is a rational expression in the list of variables vlist.

#### `real?` <a id="real"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L37)\]

real?(x) checks whether or not x represents a real number.

- **Signature**: `% -> Boolean`

#### `realNumeric?` <a id="realnumeric"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L39)\]

realNumeric?(x) checks whether or not x represents a real value (numeric).

- **Signature**: `% -> Boolean`

#### `realNumericSolve` <a id="realnumericsolve"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L544)\]

##### `realNumericSolve` : `(Equation(%), %) -> %`

realNumericSolve(eq, vars) returns the real solution(s) to the equation eq.

##### `realNumericSolve` : `(%, %) -> %`

realNumericSolve(expr, vars) returns the real solution(s) to the expression expr.

#### `reduce` <a id="reduce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L644)\]

##### `reduce` : `(Equation(%), %) -> %`

reduce(expr,lvars) tries to reduce the equation in expr.

##### `reduce` : `(%, %) -> %`

reduce(expr,lvars) tries to reduce the (in)equation in expr.

##### `reduce` : `(Equation(%), %, %) -> %`

reduce(expr,lvars,dom) tries to reduce the equation in expr.

##### `reduce` : `(%, %, %) -> %`

reduce(expr,lvars,dom) tries to reduce the (in)equation in expr.

#### `refine` <a id="refine"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L887)\]

refine(expr, assums) refines the expression expr with assumptions assums.

- **Signature**: `(%, %) -> %`

#### `replace` <a id="replace"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1096)\]

##### `replace` : `(%, %) -> %`

replace(expr, rule) applies rule(s) to expr.

##### `replace` : `(%, %, %) -> %`

replace(expr, rule, lev) applies rule to expr with level lev.

#### `replaceAll` <a id="replaceall"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1104)\]

replaceAll(expr, rule) applies rule(s) to expr.

- **Signature**: `(%, %) -> %`

#### `replaceAt` <a id="replaceat"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1102)\]

replaceAt(expr, part, n) replaces the n-th element of expr using rule(s).

- **Signature**: `(%, %, %) -> %`

#### `replacePart` <a id="replacepart"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1100)\]

replacePart(expr, part) replaces expr using rule(s) expressing position(s).

- **Signature**: `(%, %) -> %`

#### `replaceRepeated` <a id="replacerepeated"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1106)\]

replaceRepeated(expr, rule) applies rule(s) to expr, but repeatedly.

- **Signature**: `(%, %) -> %`

#### `residue` <a id="residue"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L639)\]

residue(expr, {x,x0}) returns the residue of expr at x0.

- **Signature**: `(%, %) -> %`

#### `residueSum` <a id="residuesum"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L641)\]

residueSum(expr, var) returns the residue of expr. \example{residueSum(Gamma(x),x)}

- **Signature**: `(%, %) -> %`

#### `resultant` <a id="resultant"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L770)\]

resultant(p1,p2,x) returns the resultant of p1 and p2.

- **Signature**: `(%, %, %) -> %`

#### `retract` <a id="retract"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1120)\]

##### `retract` : `% -> Expression(Integer)`

retract(expr) tries to retract expr to an Expression(Integer). Throws an error otherwise.

##### `retract` : `% -> Expression(Float)`

retract(expr) tries to retract expr to an Expression(Integer). Throws an error otherwise.

#### `retractIfCan` <a id="retractifcan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1112)\]

##### `retractIfCan` : `% -> Union(JLFloat64, "failed")`

retractIfCan(expr) retracts expr to a JLFloat64 if it can be retracted to a 64 bits machine float.

##### `retractIfCan` : `% -> Union(DoubleFloat, "failed")`

retractIfCan(expr) retracts expr to a DoubleFloat if it can be retracted to a Lisp machine float.

##### `retractIfCan` : `% -> Union(Expression(Integer), "failed")`

retractIfCan(expr) tries to retract expr to an Expression(Integer).

##### `retractIfCan` : `% -> Union(Expression(Float), "failed")`

retractIfCan(expr) tries to retract expr to an Expression(Float).

#### `riemannSiegelTheta` <a id="riemannsiegeltheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L189)\]

riemannSiegelTheta(t) returns the Riemann-Siegel theta function of t.

- **Signature**: `% -> %`

#### `riemannSiegelZ` <a id="riemannsiegelz"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L191)\]

riemannSiegelZ(t) computes the Riemann-Siegel Z function of t.

- **Signature**: `% -> %`

#### `riemannZeta` <a id="riemannzeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L202)\]

riemannZeta(s,a) is the generalized Riemann zeta function.

- **Signature**: `(%, %) -> %`

#### `rootReduce` <a id="rootreduce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L960)\]

rootReduce(expr) reduces root functions.

- **Signature**: `% -> %`

#### `round` <a id="round"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L74)\]

round(x) returns the integer closest to x.

- **Signature**: `% -> %`

#### `scientificForm` <a id="scientificform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1058)\]

##### `scientificForm` : `% -> %`

scientificForm(x) returns the printed representation of x in scientific form.

##### `scientificForm` : `(%, %) -> %`

scientificForm(x,n) returns the printed representation of x in scientific form with n digits of precision.

#### `select` <a id="select"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1108)\]

##### `select` : `(%, %) -> %`

select(expr, form) selects elements of expr if form(element) is true.

##### `select` : `(%, %, %) -> %`

select(expr, form, n) selects the n first elements of expr if form(element) is true.

#### `series` <a id="series"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L407)\]

series(expr, opt) returns a series from expr. \example{x:=jWSExpr(x);a:=jWSExpr(a);} \example{opt:=jWSList [x,pi()$WSEXPR/4,7]} \example{series(sin(a*x),opt)} \example{series(cos(x),"\{x, 0, 12\}")} \example{series(inverseErfc(x),"\{x,0,3\}")}

- **Signature**: `(%, %) -> %`

#### `siegelTheta` <a id="siegeltheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L353)\]

##### `siegelTheta` : `(%, %) -> %`

siegelTheta(tau, s) computes the Siegel theta function.

##### `siegelTheta` : `(%, %, %) -> %`

siegelTheta(nu, tau, s) computes the Siegel theta function.

#### `simplify` <a id="simplify"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L868)\]

##### `simplify` : `% -> %`

simplify(expr) simplifies the expr. \example{x:=jWSExpr("x"); simplify(sqrt(x^2)^2)}

##### `simplify` : `(%, %) -> %`

simplify(expr, assumptions) simplifies the expression expr assuming that assumptions are satisfied. For example: \example{x:=jWSExpr("x"); simplify(sqrt(x^2), "x>0")}

#### `sinc` <a id="sinc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L92)\]

sinc(x) computes the unnormalized sinc of x, sin(x)/x and 0 if x = 0.

- **Signature**: `% -> %`

#### `solve` <a id="solve"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L532)\]

##### `solve` : `(Equation(%), %) -> WSL(WSL(%))`

solve(eq, vars) tries to solve the equation eq.

##### `solve` : `(%, %) -> WSL(WSL(%))`

solve(expr, vars) tries to solve the expression expr.

##### `solve` : `(Equation(%), %, %) -> WSL(WSL(%))`

solve(expr, vars, dom) tries to solve the expression expr.

##### `solve` : `(%, %, %) -> WSL(WSL(%))`

solve(expr, vars, dom) tries to solve the expression expr.

#### `sphericalBesselJ` <a id="sphericalbesselj"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L134)\]

sphericalBesselJ(n,z) returns the spherical Bessel of the first kind of z.

- **Signature**: `(% , %)-> %`

#### `sphericalBesselY` <a id="sphericalbessely"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L137)\]

sphericalBesselY(n,z) returns the spherical Bessel of the second kind of z.

- **Signature**: `(% , %)-> %`

#### `sphericalHankelH1` <a id="sphericalhankelh1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L140)\]

sphericalHankelH1(n,z) returns the spherical Hankel function of the first kind of z.

- **Signature**: `(% , %)-> %`

#### `sphericalHankelH2` <a id="sphericalhankelh2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L143)\]

sphericalHankelH2(n,z) returns the spherical Hankel function of the second kind of z.

- **Signature**: `(% , %)-> %`

#### `sphericalHarmonicY` <a id="sphericalharmonicy"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L249)\]

sphericalHarmonicY(l, m, theta, phi) returns the spherical harmonic Y function or evaluates it.

- **Signature**: `(%, %, %, %) -> %`

#### `stieltjesGamma` <a id="stieltjesgamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L193)\]

##### `stieltjesGamma` : `% -> %`

stieltjesGamma(n) returns the n-th Stieltjes constant.

##### `stieltjesGamma` : `(%, %) -> %`

stieltjesGamma(n,a) returns the generalized n-th Stieltjes constant.

#### `subResultants` <a id="subresultants"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L772)\]

subResultants(p1,p2,x) returns the subresultant of p1 and p2 with respect to x.

- **Signature**: `(%, %, %) -> %`

#### `sum` <a id="sum"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L414)\]

##### `sum` : `(%, %) -> %`

sum(f(n),range) returns the sum f(imin) + ... + f(imax) defined by the list range, for example \example{jWSExpr("\{i, imin, imax\}")}. See Wolfram Language specifications.

##### `sum` : `(%, %, Segment(Integer)) -> %`

sum(f(n),n, a..b) returns the sum f(a) + ... + f(b).

##### `sum` : `(%, Symbol) -> %`

sum(f(n),n) returns the indefinite sum of f(n).

#### `symmetricPolynomial` <a id="symmetricpolynomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L742)\]

symmetricPolynomial(n,lvars) returns the n-th elementary symmetric polynomial with respect to variables in lvars.

- **Signature**: `(%, WSL(%)) -> %`

#### `symmetricReduction` <a id="symmetricreduction"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L745)\]

##### `symmetricReduction` : `(%, WSL(%)) -> WSL(%)`

symmetricReduction(f,lvars) returns a pair of polynomials representing f = p+q where p is a symmetric polynomial, q the remainder.

##### `symmetricReduction` : `(%, WSL(%), WSL(%)) -> WSL(%)`

symmetricReduction(f, lvars, replnt) returns a pair of polynomials representing f = p+q where p is a symmetric polynomial, q the remainder where variables in p replaced by the ones in replnt.

#### `toExpression` <a id="toexpression"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L978)\]

##### `toExpression` : `String -> %`

toExpression(expr) converts expr to a WS expression and evaluates it.

##### `toExpression` : `(String, %) -> %`

toExpression(expr, form) converts expr to a WS expression and evaluates it with output in the format form.

##### `toExpression` : `(String, %, %) -> %`

toExpression(expr, form, h) converts expr to a WS expression and evaluates it with output in the format form but wrapping the head with h. `Hold` for example.

#### `toString` <a id="tostring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L975)\]

toString(expr, form) returns the string representation of expr with WS language format form.

- **Signature**: `(%, %) -> String`

#### `together` <a id="together"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L925)\]

together(expr) puts together terms over a common denominator cancelling common factors.

- **Signature**: `% -> %`

#### `traditionalForm` <a id="traditionalform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1087)\]

traditionalForm(expr) returns a traditional form of expr i.e. its WS 'TraditionalForm'.

- **Signature**: `% -> %`

#### `trigExpand` <a id="trigexpand"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L947)\]

trigExpand(expr) tries to expand (hyperbolic) trigonometric functions in expr.

- **Signature**: `% -> %`

#### `trigFactor` <a id="trigfactor"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L963)\]

trigFactor(expr) factors (hyperbolic) trigonometric functions in expr.

- **Signature**: `% -> %`

#### `trigFactorList` <a id="trigfactorlist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L966)\]

trigFactorList(expr) returns a list of factors of (hyperbolic) trigonometric functions in expr.

- **Signature**: `% -> WSL(%)`

#### `trigReduce` <a id="trigreduce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L958)\]

trigReduce(expr) reduces power and products of trigonometric functions.

- **Signature**: `% -> %`

#### `trigToExp` <a id="trigtoexp"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L969)\]

trigToExp(expr) returns expr with (hyperbolic) trigonometric functions converted to, eventually complex, exponentials.

- **Signature**: `% -> %`

#### `values` <a id="values"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1021)\]

values(expr) returns the values elements in expr.

- **Signature**: `% -> %`

#### `variables` <a id="variables"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L695)\]

variables(p) returns the list of variables in p.

- **Signature**: `% -> WSL(%)`

#### `weberE` <a id="webere"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L156)\]

weberE(v,n,z) is the associated Weber E function.

- **Signature**: `(%, %, %) -> %`

#### `weierstrassP` <a id="weierstrassp"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L168)\]

weierstrassP(g2, g3, z) is the Weierstrass P function.

- **Signature**: `(%, %, %) -> %`

#### `weierstrassPInverse` <a id="weierstrasspinverse"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L177)\]

weierstrassPInverse(g2, g3, z) is the inverse of Weierstrass P function, defined by the formula \spad{WeierstrassP(g2, g3, WeierstrassPInverse(g2, g3, z)) = z}.

- **Signature**: `(%, %, %) -> %`

#### `weierstrassPPrime` <a id="weierstrasspprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L170)\]

weierstrassPPrime(g2, g3, z) is the derivative of the Weierstrass P function.

- **Signature**: `(%, %, %) -> %`

#### `weierstrassSigma` <a id="weierstrasssigma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L173)\]

weierstrassSigma(g2, g3, z) is the Weierstrass sigma function.

- **Signature**: `(%, %, %) -> %`

#### `weierstrassZeta` <a id="weierstrasszeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L175)\]

weierstrassZeta(g2, g3, z) is the Weierstrass Zeta function.

- **Signature**: `(%, %, %) -> %`

#### `whittakerM` <a id="whittakerm"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L293)\]

whittakerM(k,m,x) computes the Whittaker function M of x.

- **Signature**: `(%, %, %) -> %`

#### `whittakerW` <a id="whittakerw"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L295)\]

whittakerW(k,m,z) computes the Whittaker function W of z.

- **Signature**: `(%, %, %) -> %`

#### `zernikeR` <a id="zerniker"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L275)\]

zernikeR(n, m, x) returns the Zernike radial polynomial or evaluates it at x if x is a number.

- **Signature**: `(%, %, %) -> %`

#### `zero?` <a id="zero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L31)\]

zero? x tries to determine if x is 0. For example: \example{expr:=0$WSEXPR/1*sqrt(17::WSEXPR); zero? expr}

- **Signature**: `% -> Boolean`
---
[Back to Index](../index.md)
