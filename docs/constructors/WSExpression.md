# WSExpression

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS expressions using the MathLink Julia package. It supports the Eltable category (interface) so, for example using Fibonacci polynomials fib:=fibonacci(12,jWSExpression x) => 3 75 77 79 411 6 x + 35 x 2+ 56 x 2+ 36 x 2+ 10 x 2+ x fib.5 => 10*x^9

**WSExpression is a domain constructor.**  
**Abbreviation for WSExpression is WSEXPR**  
**522 names for 828 operations in this domain.**

## Signatures

```fricas
 0 : () -> %    1 : () -> %
 #? : % -> WSInteger    ?*? : (%, %) -> %
 ?*? : (Integer, %) -> %    ?*? : (NonNegativeInteger, %) -> %
 ?*? : (PositiveInteger, %) -> %    ?*? : (NMInteger, %) -> JLObject
 ?+? : (%, %) -> %    -? : % -> %
 ?-? : (%, %) -> %    ?/? : (%, %) -> %
 ?/? : (SparseMultivariatePolynomial(%,Kernel(%)), SparseMultivariatePolynomial(%,Kernel(%))) -> %    ?<? : (%, %) -> Boolean
 ?<=? : (%, %) -> Boolean    ?=? : (%, %) -> Boolean
 ?>? : (%, %) -> Boolean    ?>=? : (%, %) -> Boolean
 Beta : (%, %) -> %    Beta : (%, %, %) -> %
 Chi : % -> %    Ci : % -> %
 D : (%, %) -> %    D : (%, %, NonNegativeInteger) -> %
 D : (%, List(%)) -> %    D : (%, List(%), List(NonNegativeInteger)) -> %
 D : (%, List(Symbol)) -> %    D : (%, List(Symbol), List(NonNegativeInteger)) -> %
 D : (%, (% -> %)) -> %    D : (%, (% -> %), NonNegativeInteger) -> %
 D : (%, Symbol) -> %    D : (%, Symbol, NonNegativeInteger) -> %
 Ei : % -> %    EiEn : (%, %) -> %
 Gamma : % -> %    Gamma : (%, %) -> %
 Gamma : (%, %, %) -> %    Shi : % -> %
 Si : % -> %    ?^? : (%, %) -> %
 ?^? : (%, Fraction(Integer)) -> %    ?^? : (%, Integer) -> %
 ?^? : (%, NonNegativeInteger) -> %    ?^? : (%, PositiveInteger) -> %
 ?^? : (%, WSRational) -> %    abs : % -> %
 accountingForm : % -> %    accountingForm : (%, %) -> %
 acos : % -> %    acosh : % -> %
 acot : % -> %    acoth : % -> %
 acsc : % -> %    acsch : % -> %
 airyAi : % -> %    airyAiPrime : % -> %
 airyAiZero : % -> %    airyAiZero : (%, %) -> %
 airyBi : % -> %    airyBiPrime : % -> %
 airyBiZero : % -> %    airyBiZero : (%, %) -> %
 algtower : % -> List(Kernel(%))    algtower : List(%) -> List(Kernel(%))
 angerJ : (%, %) -> %    angerJ : (%, %, %) -> %
 annihilate? : (%, %) -> Boolean    antiCommutator : (%, %) -> %
 apart : % -> %    apart : (%, %) -> %
 append : (%, %) -> %    applyQuote : (Symbol, %) -> %
 applyQuote : (Symbol, %, %) -> %    applyQuote : (Symbol, %, %, %) -> %
 applyQuote : (Symbol, %, %, %, %) -> %    applyQuote : (Symbol, List(%)) -> %
 argument : % -> %    asec : % -> %
 asech : % -> %    asin : % -> %
 asinh : % -> %    associates? : (%, %) -> Boolean
 associator : (%, %, %) -> %    assuming : (%, %) -> %
 atan : % -> %    atan : (%, %) -> %
 atanh : % -> %    barnesG : % -> %
 baseForm : (%, %) -> %    basis : () -> Vector(%)
 belong? : BasicOperator -> Boolean    besselI : (%, %) -> %
 besselJ : (%, %) -> %    besselJZero : (%, %) -> %
 besselK : (%, %) -> %    besselY : (%, %) -> %
 besselYZero : (%, %) -> %    betaRegularized : (%, %, %) -> %
 binomial : (%, %) -> %    box : % -> %
 cancel : % -> %    catalan : () -> %
 ceiling : % -> %    characteristic : () -> NonNegativeInteger
 characteristicPolynomial : % -> SparseUnivariatePolynomial(%)    charlierC : (%, %, %) -> %
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
 coerce : SparseMultivariatePolynomial(%,Kernel(%)) -> %    coerce : String -> %
 coerce : Symbol -> %    coerce : WSSymbol -> %
 coerce : % -> JLObject    coerce : % -> OutputForm
 coerce : % -> WSExpression    coerce : % -> WSInteger
 coerce : % -> WSRational    collect : (%, %) -> %
 collect : (%, WSList(%)) -> %    commutator : (%, %) -> %
 complex : (%, %) -> %    complexExpand : % -> %
 complexExpand : (%, %) -> %    conjugate : % -> %
 convert : Factored(%) -> %    convert : Polynomial(Float) -> %
 convert : Polynomial(Fraction(Integer)) -> %    convert : Polynomial(Integer) -> %
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
 definingPolynomial : () -> SparseUnivariatePolynomial(%)    degree : () -> %
 delete : (%, WSList(WSInteger)) -> %    denom : % -> SparseMultivariatePolynomial(%,Kernel(%))
 denominator : % -> %    derivationCoordinates : (Vector(%), (% -> %)) -> Matrix(%)
 derivative : (BasicOperator, %) -> %    derivative : (BasicOperator, %, %) -> %
 differentiate : (%, %) -> %    differentiate : (%, %, NonNegativeInteger) -> %
 differentiate : (%, List(%)) -> %    differentiate : (%, List(%), List(NonNegativeInteger)) -> %
 differentiate : (%, List(Symbol)) -> %    differentiate : (%, List(Symbol), List(NonNegativeInteger)) -> %
 differentiate : (%, (% -> %)) -> %    differentiate : (%, (% -> %), NonNegativeInteger) -> %
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
 elt : (BasicOperator, %, %, %, %, %, %, %) -> %    elt : (BasicOperator, %, %, %, %, %, %, %, %) -> %
 elt : (BasicOperator, %, %, %, %, %, %, %, %, %) -> %    elt : (BasicOperator, List(%)) -> %
 engineeringForm : % -> %    engineeringForm : (%, %) -> %
 erf : % -> %    erf : (%, %) -> %
 erfc : % -> %    erfi : % -> %
 euclideanSize : % -> NonNegativeInteger    eulerE : WSInteger -> %
 eulerE : (WSInteger, %) -> %    eulerGamma : () -> %
 eulerPhi : WSInteger -> %    eval : (%, %, %) -> %
 eval : (%, BasicOperator, (% -> %)) -> %    eval : (%, BasicOperator, (List(%) -> %)) -> %
 eval : (%, Equation(%)) -> %    eval : (%, Kernel(%), %) -> %
 eval : (%, List(%), List(%)) -> %    eval : (%, List(BasicOperator), List((% -> %))) -> %
 eval : (%, List(BasicOperator), List((List(%) -> %))) -> %    eval : (%, List(Equation(%))) -> %
 eval : (%, List(Kernel(%)), List(%)) -> %    eval : (%, List(Symbol), List((% -> %))) -> %
 eval : (%, List(Symbol), List((List(%) -> %))) -> %    eval : (%, List(Symbol), List(NonNegativeInteger), List((% -> %))) -> %
 eval : (%, List(Symbol), List(NonNegativeInteger), List((List(%) -> %))) -> %    eval : (%, Symbol, (% -> %)) -> %
 eval : (%, Symbol, (List(%) -> %)) -> %    eval : (%, Symbol, NonNegativeInteger, (% -> %)) -> %
 eval : (%, Symbol, NonNegativeInteger, (List(%) -> %)) -> %    exactNumber? : % -> Boolean
 exp : () -> %    exp : % -> %
 expToTrig : % -> %    expand : % -> %
 expand : (%, %) -> %    expandDenominator : % -> %
 expandNumerator : % -> %    exponent : (%, %) -> %
 exponent : (%, %, %) -> %    expressIdealMember : (List(%), %) -> Union(List(%),"failed")
 ?exquo? : (%, %) -> Union(%,"failed")    extendedEuclidean : (%, %) -> Record(coef1: %,coef2: %,generator: %)
 extendedEuclidean : (%, %, %) -> Union(Record(coef1: %,coef2: %),"failed")    extendedExpand : % -> %
 extendedSimplify : % -> %    extendedSimplify : (%, %) -> %
 extract : (%, NonNegativeInteger) -> %    extract : (%, WSExpression) -> %
 factor : % -> %    factor : (%, %) -> %
 factor : % -> Factored(%)    factorInteger : % -> %
 factorList : % -> WSList(WSList(%))    factorPolynomial : % -> %
 factorPolynomial : SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if % has PFECAT    factorSquareFree : % -> %
 factorSquareFreeList : % -> WSList(WSList(%))    factorSquareFreePolynomial : SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if % has PFECAT
 factorTerms : % -> %    factorTerms : (%, %) -> %
 factorTerms : (%, WSList(%)) -> %    factorTermsList : % -> WSList(%)
 factorTermsList : (%, %) -> WSList(%)    factorial : % -> %
 factorials : % -> %    factorials : (%, Symbol) -> %
 fibonacci : (%, %) -> %    findInstance : (%, %) -> WSList(WSList(%))
 findInstance : (%, %, %) -> WSList(WSList(%))    findInstance : (%, %, %, %) -> WSList(WSList(%))
 findInstance : (Equation(%), %) -> WSList(WSList(%))    findInstance : (Equation(%), %, %) -> WSList(WSList(%))
 findInstance : (Equation(%), %, %, %) -> WSList(WSList(%))    findRoot : (%, %) -> %
 first : % -> %    floor : % -> %
 fourier : % -> %    fourier : (%, %) -> %
 fourier : WSList(%) -> WSList(%)    fourier : (WSList(%), WSList(%)) -> WSList(%)
 fractionPart : % -> %    freeOf? : (%, %) -> Boolean
 freeOf? : (%, Symbol) -> Boolean    fresnelC : % -> %
 fresnelS : % -> %    fromCoefficientRules : (%, %) -> %
 functionExpand : % -> %    functionExpand : (%, %) -> %
 gammaRegularized : (%, %) -> %    gcd : (%, %) -> %
 gcd : List(%) -> %    gcdPolynomial : (SparseUnivariatePolynomial(%), SparseUnivariatePolynomial(%)) -> SparseUnivariatePolynomial(%)
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
 isExpt : % -> Union(Record(var: Kernel(%),exponent: Integer),"failed")    isExpt : (%, BasicOperator) -> Union(Record(var: Kernel(%),exponent: Integer),"failed")
 isExpt : (%, Symbol) -> Union(Record(var: Kernel(%),exponent: Integer),"failed")    isMult : % -> Union(Record(coef: Integer,var: Kernel(%)),"failed")
 isPlus : % -> Union(List(%),"failed")    isPower : % -> Union(Record(val: %,exponent: Integer),"failed")
 isTimes : % -> Union(List(%),"failed")    jWSAggregate : List(%) -> %
 jWSAssociation : WSList(%) -> %    jWSData : () -> %
 jWSData : % -> %    jWSData : (%, %) -> %
 jWSData : (%, %, %) -> %    jWSData : String -> %
 jWSData : (String, String) -> %    jWSData : (String, String, String) -> %
 jWSEqual : (%, %) -> %    jWSExpression : DoubleFloat -> %
 jWSExpression : Float -> %    jWSExpression : Fraction(Integer) -> %
 jWSExpression : Integer -> %    jWSExpression : JLFloat -> %
 jWSExpression : JLFloat64 -> %    jWSExpression : List(%) -> %
 jWSExpression : String -> %    jWSExpression : Symbol -> %
 jWSGreater : (%, %) -> %    jWSGreaterEqual : (%, %) -> %
 jWSInterpret : String -> %    jWSInterpret : (String, String) -> %
 jWSInterpret : (String, String, String) -> %    jWSLess : (%, %) -> %
 jWSLessEqual : (%, %) -> %    jWSNotEqual : (%, %) -> %
 jWSQuantity : % -> %    jWSQuantity : (%, %) -> %
 jWSRule : (%, %) -> %    jWSRule : Equation(%) -> %
 jWSTable : (%, %) -> WSList(%)    jWSTable : (%, %, %) -> WSList(WSList(%))
 jacobiAmplitude : (%, %) -> %    jacobiCn : (%, %) -> %
 jacobiDn : (%, %) -> %    jacobiP : (%, %, %, %) -> %
 jacobiSn : (%, %) -> %    jacobiTheta : (%, %) -> %
 jacobiTheta : (WSInteger, %, %) -> %    jacobiZeta : (%, %) -> %
 jlAbout : % -> Void    jlApply : (String, %) -> JLObject
 jlApply : (String, %, %) -> JLObject    jlApply : (String, %, %, %) -> JLObject
 jlApply : (String, %, %, %, %) -> JLObject    jlApply : (String, %, %, %, %, %) -> JLObject
 jlDisplay : % -> Void    jlDisplay : WSExpression -> WSExpression
 jlDisplay : (WSExpression, WSExpression) -> WSExpression    jlDump : JLObject -> Void
 jlEval : % -> %    jlEval : (%, String) -> %
 jlEval : (%, String, String) -> %    jlEval : (%, String, String, String) -> %
 jlFieldNames : % -> JLObject    jlGetField : (%, JLSymbol) -> JLObject
 jlGetJuliaIndex : % -> String    jlGetProperty : (%, JLSymbol) -> JLObject
 jlHead : % -> WSSymbol    jlId : % -> Integer
 jlNames : % -> JLObject    jlObject : () -> String
 jlPropertyNames : % -> JLObject    jlRef : % -> SExpression
 jlSymbolic : % -> String    jlText : (%, String) -> List(String)
 jlType : % -> Symbol    jlWSAccuracy : % -> %
 jlWSDefined? : String -> Boolean    jlWSGreedyEval : Boolean -> Void
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
 lcm : List(%) -> %    lcmCoef : (%, %) -> Record(llcm_res: %,coeff1: %,coeff2: %)
 leftPower : (%, NonNegativeInteger) -> %    leftPower : (%, PositiveInteger) -> %
 leftRecip : % -> Union(%,"failed")    legendreP : (%, %) -> %
 legendreP : (%, %, %) -> %    legendreQ : (%, %) -> %
 legendreQ : (%, %, %) -> %    length : % -> %
 length : % -> WSInteger    lerchPhi : (%, %, %) -> %
 level : (%, %) -> WSList(%)    level : (%, %, Boolean) -> WSList(%)
 li : % -> %    lift : % -> SparseUnivariatePolynomial(%)
 limit : (%, %) -> %    log : % -> %
 log10 : % -> %    log2 : % -> %
 logBarnesG : % -> %    logGamma : % -> %
 lommelS1 : (%, %, %) -> %    lommelS2 : (%, %, %) -> %
 lookup : (%, %) -> %    lookup : (%, %, %) -> %
 machineNumber? : % -> Boolean    mainKernel : % -> Union(Kernel(%),"failed")
 map : ((% -> %), %) -> %    map : ((% -> %), Kernel(%)) -> %
 mathieuC : (%, %, %) -> %    mathieuCPrime : (%, %, %) -> %
 mathieuCharacteristicA : (%, %) -> %    mathieuCharacteristicB : (%, %) -> %
 mathieuCharacteristicExponent : (%, %) -> %    mathieuS : (%, %, %) -> %
 mathieuSPrime : (%, %, %) -> %    matrixForm : % -> %
 maxLimit : (%, %) -> %    maximize : (%, %) -> %
 maximize : (%, %, %) -> %    maximize : (%, Symbol) -> %
 meixnerM : (%, %, %, %) -> %    meixnerP : (%, %, %, %) -> %
 member? : (%, %) -> Boolean    minLimit : (%, %) -> %
 minPoly : Kernel(%) -> SparseUnivariatePolynomial(%)    minimalPolynomial : (%, %) -> %
 minimalPolynomial : (%, %, %) -> %    minimalPolynomial : % -> SparseUnivariatePolynomial(%)
 minimize : (%, %) -> %    minimize : (%, %, %) -> %
 minimize : (%, Symbol) -> %    missing? : % -> Boolean
 modularLambda : % -> %    monomialList : % -> %
 multiEuclidean : (List(%), %) -> Union(List(%),"failed")    mutable? : % -> Boolean
 negative? : % -> Boolean    norm : % -> %
 normal : % -> %    normal : (%, %) -> %
 nothing? : % -> Boolean    nthRoot : (%, Integer) -> %
 number? : % -> Boolean    numberForm : % -> %
 numberForm : (%, %) -> %    numer : % -> SparseMultivariatePolynomial(%,Kernel(%))
 numerDenom : % -> WSList(%)    numerator : % -> %
 numeric : % -> WSExpression    numeric : (%, PositiveInteger) -> WSExpression
 numeric? : % -> Boolean    numericDSolve : (%, %, %) -> %
 numericDSolve : (%, %, %, %) -> %    numericDSolve : (Equation(%), %, %) -> %
 numericDSolveValue : (%, %, %) -> %    numericDSolveValue : (%, %, %, %) -> %
 numericDSolveValue : (Equation(%), %, %) -> %    numericIntegrate : (%, %) -> %
 numericIntegrate : (%, %, Segment(Integer)) -> %    numericMaximize : (%, %) -> %
 numericMaximize : (%, %, %) -> %    numericMaximize : (%, Symbol) -> %
 numericMinimize : (%, %) -> %    numericMinimize : (%, %, %) -> %
 numericMinimize : (%, Symbol) -> %    numericProduct : (%, %) -> %
 numericProduct : (%, %, Segment(Integer)) -> %    numericSolve : (%, %) -> %
 numericSolve : (Equation(%), %) -> %    numericSum : (%, %) -> %
 numericSum : (%, %, Segment(Integer)) -> %    one? : % -> Boolean
 operator : BasicOperator -> BasicOperator    operators : % -> List(BasicOperator)
 opposite? : (%, %) -> Boolean    padeApproximant : (%, %) -> %
 parabolicCylinderD : (%, %) -> %    paren : % -> %
 part : (%, WSInteger) -> %    percentForm : % -> %
 percentForm : (%, %) -> %    permutation : (%, %) -> %
 pi : () -> %    plenaryPower : (%, PositiveInteger) -> %
 pochhammer : (%, %) -> %    polygamma : (%, %) -> %
 polylog : (%, %) -> %    polylog : (%, %, %) -> %
 polynomial? : (%, %) -> Boolean    polynomial? : (%, WSList(%)) -> Boolean
 polynomialExpression? : (%, %) -> Boolean    polynomialExpression? : (%, WSList(%)) -> Boolean
 polynomialExtendedGCD : (%, %, %) -> %    polynomialGCD : (%, %) -> %
 polynomialGCD : (%, %, %) -> %    polynomialLCM : (%, %) -> %
 polynomialLCM : (%, %, %) -> %    polynomialMod : (%, %) -> %
 polynomialQuotient : (%, %, %) -> %    polynomialQuotientRemainder : (%, %, %) -> WSList(%)
 polynomialReduce : (%, %, %) -> %    polynomialRemainder : (%, %, %) -> %
 positive? : % -> Boolean    positiveInfinity : () -> %
 powerExpand : % -> %    powerExpand : (%, %) -> %
 prepend : (%, %) -> %    prime? : % -> Boolean
 principalIdeal : List(%) -> Record(coef: List(%),generator: %)    product : (%, %) -> %
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
 reduce : Fraction(SparseUnivariatePolynomial(%)) -> Union(%,"failed")    reducedSystem : Matrix(%) -> Matrix(%)
 reducedSystem : (Matrix(%), Vector(%)) -> Record(mat: Matrix(%),vec: Vector(%))    refine : (%, %) -> %
 regularRepresentation : % -> Matrix(%)    regularRepresentation : (%, Vector(%)) -> Matrix(%)
 ?rem? : (%, %) -> %    removeDuplicates : % -> %
 replace : (%, %) -> %    replace : (%, %, %) -> %
 replaceAll : (%, %) -> %    replaceAt : (%, %, %) -> %
 replacePart : (%, %) -> %    replaceRepeated : (%, %) -> %
 represents : Vector(%) -> %    represents : (Vector(%), Vector(%)) -> %
 residue : (%, %) -> %    residueSum : (%, %) -> %
 rest : % -> %    resultant : (%, %, %) -> %
 retract : % -> %    retract : % -> Expression(Float)
 retract : % -> Expression(Integer)    retract : % -> Fraction(Integer) if % has RETRACT(FRAC(INT))
 retract : % -> Fraction(Polynomial(%))    retract : % -> Kernel(%)
 retract : % -> Polynomial(%)    retract : % -> Symbol
 retractIfCan : % -> Union(%,"failed")    retractIfCan : % -> Union(DoubleFloat,"failed")
 retractIfCan : % -> Union(Expression(Float),"failed")    retractIfCan : % -> Union(Expression(Integer),"failed")
 retractIfCan : % -> Union(Fraction(Integer),"failed") if % has RETRACT(FRAC(INT))    retractIfCan : % -> Union(Fraction(Polynomial(%)),"failed")
 retractIfCan : % -> Union(JLFloat64,"failed")    retractIfCan : % -> Union(Kernel(%),"failed")
 retractIfCan : % -> Union(Polynomial(%),"failed")    retractIfCan : % -> Union(Symbol,"failed")
 reverse : % -> %    reverse : (%, WSInteger) -> %
 reverse : (%, WSList(WSInteger)) -> %    riemannSiegelTheta : % -> %
 riemannSiegelZ : % -> %    riemannZeta : % -> %
 riemannZeta : (%, %) -> %    riffle : (%, %) -> %
 riffle : (%, %, %) -> %    rightPower : (%, NonNegativeInteger) -> %
 rightPower : (%, PositiveInteger) -> %    rightRecip : % -> Union(%,"failed")
 rootOf : % -> %    rootOf : (%, Symbol) -> %
 rootOf : Polynomial(%) -> %    rootOf : SparseUnivariatePolynomial(%) -> %
 rootOf : (SparseUnivariatePolynomial(%), Symbol) -> %    rootReduce : % -> %
 rootSum : (%, SparseUnivariatePolynomial(%), Symbol) -> %    rootsOf : % -> List(%)
 rootsOf : (%, Symbol) -> List(%)    rootsOf : Polynomial(%) -> List(%)
 rootsOf : SparseUnivariatePolynomial(%) -> List(%)    rootsOf : (SparseUnivariatePolynomial(%), Symbol) -> List(%)
 round : % -> %    sample : () -> %
 scientificForm : % -> %    scientificForm : (%, %) -> %
 sec : % -> %    sech : % -> %
 select : (%, %) -> %    select : (%, %, %) -> %
 series : (%, %) -> %    setIntersection : (%, %) -> %
 setelt : (%, Integer, %) -> %    setelt! : (%, Integer, %) -> %
 siegelTheta : (%, %) -> %    siegelTheta : (%, %, %) -> %
 sign : % -> %    simplify : % -> %
 simplify : (%, %) -> %    sin : % -> %
 sinc : % -> %    sinh : % -> %
 sizeLess? : (%, %) -> Boolean    smaller? : (%, %) -> Boolean
 solve : (%, %) -> WSList(WSList(%))    solve : (%, %, %) -> WSList(WSList(%))
 solve : (Equation(%), %) -> WSList(WSList(%))    solve : (Equation(%), %, %) -> WSList(WSList(%))
 solveLinearPolynomialEquation : (List(SparseUnivariatePolynomial(%)), SparseUnivariatePolynomial(%)) -> Union(List(SparseUnivariatePolynomial(%)),"failed") if % has PFECAT    sort : % -> %
 sorted? : % -> Boolean    sphericalBesselJ : (%, %) -> %
 sphericalBesselY : (%, %) -> %    sphericalHankelH1 : (%, %) -> %
 sphericalHankelH2 : (%, %) -> %    sphericalHarmonicY : (%, %, %, %) -> %
 sqrt : % -> %    squareFree : % -> Factored(%)
 squareFreePart : % -> %    squareFreePolynomial : SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if % has PFECAT
 stieltjesGamma : % -> %    stieltjesGamma : (%, %) -> %
 string : % -> String    struveH : (%, %) -> %
 struveL : (%, %) -> %    subResultants : (%, %, %) -> %
 subst : (%, Equation(%)) -> %    subst : (%, List(Equation(%))) -> %
 subst : (%, List(Kernel(%)), List(%)) -> %    subtractIfCan : (%, %) -> Union(%,"failed")
 sum : (%, %) -> %    sum : (%, %, Segment(Integer)) -> %
 sum : (%, Symbol) -> %    summation : (%, SegmentBinding(%)) -> %
 summation : (%, Symbol) -> %    symmetricPolynomial : (%, WSList(%)) -> %
 symmetricReduction : (%, WSList(%)) -> WSList(%)    symmetricReduction : (%, WSList(%), WSList(%)) -> WSList(%)
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
 unitNormal : % -> Record(unit: %,canonical: %,associate: %)    unitStep : % -> %
 univariate : (%, Kernel(%)) -> Fraction(SparseUnivariatePolynomial(%))    values : % -> %
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
 zerosOf : (SparseUnivariatePolynomial(%), Symbol) -> List(%)    ?~=? : (%, %) -> Boolean
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`#`](#op-hash) | #(agg) returns the length of agg. 0 if it is a scalar. |
| [`*`](#op-mul) | Operation defined in WSExpression |
| [`+`](#op-add) | Operation defined in WSExpression |
| [`/`](#op-div) | Operation defined in WSExpression |
| [`0`](#0) | 0 is a distinguished element, in AbelianMonoid it is the additive identity element, in Mag... |
| [`1`](#1) | 1 returns the unit element, denoted by 1. |
| [`<`](#op-lt) | Operation defined in WSExpression |
| [`<=`](#op-le) | Operation defined in WSExpression |
| [`>`](#op-gt) | Operation defined in WSExpression |
| [`>=`](#op-ge) | Operation defined in WSExpression |
| [`Beta`](#beta) | Beta(x, y) is Gamma(x) * Gamma(y)/Gamma(x+y). |
| [`Chi`](#chi) | Chi(x) returns the hyperbolic cosine integral of x, the integral of cosh(x) / x dx. |
| [`Ci`](#ci) | Ci(x) returns the cosine integral of x, the integral of cos(x) / x dx. |
| [`D`](#d) | D(x, v) computes the partial derivative of x with respect to v. |
| [`Ei`](#ei) | Ei(x) returns the exponential integral of x, the integral of exp(x)/x dx. |
| [`EiEn`](#eien) | EiEn(n,z) returns the exponential integral En(z). |
| [`Gamma`](#gamma) | Gamma(a,z1,z2) computes the generalized incomplete Gamma function. |
| [`Shi`](#shi) | Shi(x) returns the hyperbolic sine integral of x, the integral of sinh(x) / x dx. |
| [`Si`](#si) | Si(x) returns the sine integral of x, the integral of sin(x) / x dx. |
| [`^`](#op-pow) | ^ is the exponentiation by a rational. |
| [`abs`](#abs) | abs(x) returns the absolute value of x. |
| [`accountingForm`](#accountingform) | accountingForm(x,n) returns the accounting printed representation of x. |
| [`acos`](#acos) | acos(x) returns the arc-cosine of x. When evaluated into some subset of the complex number... |
| [`acosh`](#acosh) | acosh(x) returns the hyperbolic arc-cosine of x. |
| [`acot`](#acot) | acot(x) returns the arc-cotangent of x. |
| [`acoth`](#acoth) | acoth(x) returns the hyperbolic arc-cotangent of x. |
| [`acsc`](#acsc) | acsc(x) returns the arc-cosecant of x. |
| [`acsch`](#acsch) | acsch(x) returns the hyperbolic arc-cosecant of x. |
| [`airyAi`](#airyai) | airyAi(x) is the Airy function Ai(x). |
| [`airyAiPrime`](#airyaiprime) | airyAiPrime(x) is the derivative of the Airy function Ai(x). |
| [`airyAiZero`](#airyaizero) | airyAiZero(n) is the n-th zero of the Airy function Ai(z). |
| [`airyBi`](#airybi) | airyBi(x) is the Airy function Bi(x). |
| [`airyBiPrime`](#airybiprime) | airyBiPrime(x) is the derivative of the Airy function Bi(x). |
| [`airyBiZero`](#airybizero) | airyBiZero(n) is the n-th zero of the Airy function Bi(z). |
| [`algtower`](#algtower) | algtower(f) is algtower([f]) |
| [`angerJ`](#angerj) | angerJ(v, n, z) is the associated Anger J function. |
| [`annihilate?`](#annihilate) | annihilate?(x,y) holds when the product of x and y is 0. |
| [`antiCommutator`](#anticommutator) | antiCommutator(a, b) returns a*b+b*a. |
| [`apart`](#apart) | apart(expr) converts a rational expression as a sum of terms, reducing denominator(s). |
| [`append`](#append) | append(l, elt) appends elt to the list l. |
| [`applyQuote`](#applyquote) | applyQuote(foo, x) returns 'foo(x). |
| [`argument`](#argument) | argument(x) returns the angle made by (1, 0) and x. |
| [`asec`](#asec) | asec(x) returns the arc-secant of x. |
| [`asech`](#asech) | asech(x) returns the hyperbolic arc-secant of x. |
| [`asin`](#asin) | asin(x) returns the arc-sine of x. When evaluated into some subset of the complex numbers,... |
| [`asinh`](#asinh) | asinh(x) returns the hyperbolic arc-sine of x. |
| [`associates?`](#associates) | associates?(x, y) tests whether x and y are associates, differ by a unit factor. |
| [`associator`](#associator) | associator(a, b, c) returns (a*b)*c-a*(b*c). |
| [`assuming`](#assuming) | assuming(assumption(s), expr) uses the assumptions for use of expr with refine, simplify a... |
| [`atan`](#atan) | atan(x,y) computes the arc tangent of y/x. |
| [`atanh`](#atanh) | atanh(x) returns the hyperbolic arc-tangent of x. |
| [`barnesG`](#barnesg) | barnesG(z) computes the Barnes G-function of z. |
| [`baseForm`](#baseform) | baseForm(x, n) returns the printed representation of x in base b. |
| [`basis`](#basis) | basis() returns the fixed R-module basis. |
| [`belong?`](#belong) | belong?(op) tests if % accepts op as applicable to its elements. |
| [`besselI`](#besseli) | besselI(v, z) is the modified Bessel function of the first kind. |
| [`besselJ`](#besselj) | besselJ(v, z) is the Bessel function of the first kind. |
| [`besselJZero`](#besseljzero) | besselJZero(n,x) returns the n-th zero of the Bessel J n-th function. |
| [`besselK`](#besselk) | besselK(v, z) is the modified Bessel function of the second kind. |
| [`besselY`](#bessely) | besselY(v, z) is the Bessel function of the second kind. |
| [`besselYZero`](#besselyzero) | besselYZero(n,x) returns the n-th zero of the Bessel Y n-th function. |
| [`betaRegularized`](#betaregularized) | betaRegularized(x,a,b) computes the regularized incomplete Beta function. |
| [`binomial`](#binomial) | binomial(n, r) returns the (n, r) binomial coefficient (often denoted in the literature by... |
| [`box`](#box) | box(f) returns f with a 'box' around it that prevents f from being evaluated when operator... |
| [`cancel`](#cancel) | cancel(expr) cancels common factors in numerators and denominators of the rational express... |
| [`catalan`](#catalan) | catalan() returns Catalan's constant. |
| [`ceiling`](#ceiling) | ceiling(x) returns the smallest integer greater than or equal to x. |
| [`characteristic`](#characteristic) | characteristic() returns the characteristic of the ring. |
| [`characteristicPolynomial`](#characteristicpolynomial) | characteristicPolynomial(a) returns the characteristic polynomial of the regular represent... |
| [`charlierC`](#charlierc) | charlierC(n, a, z) is the Charlier polynomial. |
| [`chebyshevT`](#chebyshevt) | chebyshevT(n, x) returns the Chebyshev polynomial of the first kind or evaluates it at x i... |
| [`chebyshevU`](#chebyshevu) | chebyshevU(n, x) returns Chebyshev polynomial of the second kind or evaluates it at x if x... |
| [`coefficient`](#coefficient) | coefficient(p,expr) returns the coefficient of expr in p.... |
| [`coefficientList`](#coefficientlist) | coefficientList(p,expr) returns the list of coefficients of expr in p. |
| [`coefficientRules`](#coefficientrules) | coefficientRules(p) returns the coefficients and exponents of p as WS rules. |
| [`coerce`](#coerce) | coerce(z) coerces the integer z to a WSExpression. Convenience function. |
| [`collect`](#collect) | collect(expr, var) collects same power terms with respect to variable var. |
| [`commutator`](#commutator) | commutator(a, b) returns a*b-b*a. |
| [`complex`](#complex) | complex(x, y) constructs x + %i*y. |
| [`complexExpand`](#complexexpand) | complexExpand(expr) expands expr assuming variables are real. |
| [`conjugate`](#conjugate) | conjugate(x + %i y) returns x - %i y. |
| [`convert`](#convert) | convert(p) converts p to a WSExpression. |
| [`coordinates`](#coordinates) | coordinates([v1, ..., vm]) returns the coordinates of the vi's with respect to the fixed b... |
| [`cos`](#cos) | cos(x) returns the cosine of x. |
| [`cosh`](#cosh) | cosh(x) returns the hyperbolic cosine of x. |
| [`cot`](#cot) | cot(x) returns the cotangent of x. |
| [`coth`](#coth) | coth(x) returns the hyperbolic cotangent of x. |
| [`coulombF`](#coulombf) | coulombF(l,eta,ro) is the regular Coulomb wave function. |
| [`coulombG`](#coulombg) | coulombG(l,eta,ro) is the irregular Coulomb wave function. |
| [`coulombH1`](#coulombh1) | coulombH1(l,eta,ro) is the incoming irregular Coulomb wave function H^(+). |
| [`coulombH2`](#coulombh2) | coulombH2(l,eta,ro) is the incoming irregular Coulomb wave function H^(-). |
| [`csc`](#csc) | csc(x) returns the cosecant of x. |
| [`csch`](#csch) | csch(x) returns the hyperbolic cosecant of x. |
| [`dSolve`](#dsolve) | dSolve(expr, funcs, vars) solves the (list of) differential equation(s) expr for the funct... |
| [`dSolveValue`](#dsolvevalue) | dSolveValue(expr,funcs, vars) returns the value determined by the differential equation(s)... |
| [`dawson`](#dawson) | dawson(x) computes the Dawson integral of x. |
| [`decimalForm`](#decimalform) | decimalForm(x) returns the printed representation of x in decimal form i.e. without scient... |
| [`decompose`](#decompose) | decompose(poly, x) is a polynomial decomposition function, here, related to x. |
| [`dedekindEta`](#dedekindeta) | dedekindEta(tau) computes the Dedekind modular elliptic eta. |
| [`defined?`](#defined) | defined?(sym) checks whether or not sym is a WS symbol. |
| [`definingPolynomial`](#definingpolynomial) | definingPolynomial(x) returns an expression p such that p(x) = 0. |
| [`degree`](#degree) | degree() returns conversion factor from degrees to radians, π/180. |
| [`delete`](#delete) | delete(l, inds) deletes element(s) of the list l at index(es) inds. |
| [`denom`](#denom) | denom(f) returns the denominator of f viewed as a polynomial in the kernels over R. |
| [`denominator`](#denominator) | denominator(expr) returns the denominator of expr. |
| [`derivationCoordinates`](#derivationcoordinates) | derivationCoordinates(b, ') returns M such that b' = M b. |
| [`derivative`](#derivative) | derivative(func,n) returns the derivative of order n of func.... |
| [`differentiate`](#differentiate) | differentiate(x, v) computes the partial derivative of x with respect to v. |
| [`digamma`](#digamma) | digamma(n,z) is the n-th derivative of the digamma function. |
| [`dilog`](#dilog) | dilog(x) returns the dilogarithm of x, the integral of log(x) / (1 - x) dx. |
| [`dimensions`](#dimensions) | dimensions(agg) returns dimensions of agg. |
| [`diracDelta`](#diracdelta) | diracDelta(x) is unit mass at zeros of x. |
| [`dirichletEta`](#dirichleteta) | dirichletEta(z) computes the Dirichlet eta. |
| [`dirichletL`](#dirichletl) | dirichletL(k,j,s) returns Dirichlet L-function of s, modulus k, index j. |
| [`discriminant`](#discriminant) | discriminant(p, x) returns the discriminant of p with respect to x. |
| [`distribute`](#distribute) | distribute(expr) distributes expr over addition. For illustration:... |
| [`divide`](#divide) | divide(x, y) divides x by y producing a record containing a quotient and remainder, where ... |
| [`ellipticE`](#elliptice) | ellipticE(x) computes the complete elliptic integral of the second kind. |
| [`ellipticF`](#ellipticf) | ellipticF(phi,m) computes the elliptic integral of the first kind. |
| [`ellipticK`](#elliptick) | ellipticK(m) computes the complete elliptic integral of the first kind. |
| [`ellipticPi`](#ellipticpi) | ellipticPi(n,m) computes the complete elliptic integral of the third kind. |
| [`ellipticTheta`](#elliptictheta) | ellipticTheta(a, u, q) computes the theta function, a ranges from 1 to 4. |
| [`ellipticThetaPrime`](#ellipticthetaprime) | ellipticThetaPrime(a, u, q) computes the derivative of the theta function, a ranges from 1... |
| [`elt`](#elt) | elt(op, x) or op(x) applies the unary operator op to x. |
| [`engineeringForm`](#engineeringform) | engineeringForm(x) returns the printed representation of x in engineering form. |
| [`erf`](#erf) | erf(x,x1) computes the generalized error function. |
| [`erfc`](#erfc) | erfc(x) computes the complementary error function. |
| [`erfi`](#erfi) | erfi(x) denotes -%i*erf(%i*x) |
| [`euclideanSize`](#euclideansize) | euclideanSize(x) returns the euclidean size of the element x. Error: if x is zero. |
| [`eulerE`](#eulere) | eulerE(n) returns the Euler number En. |
| [`eulerGamma`](#eulergamma) | eulerGamma() returns Euler's constant Gamma(γ). |
| [`eulerPhi`](#eulerphi) | eulerPhi(n) is the totient function, i.e. the number of integers that are relatively prime... |
| [`eval`](#eval) | eval(f, x, v) replaces x by v in f. |
| [`exactNumber?`](#exactnumber) | exactNumber?(x) checks whether or not x is an exact number. |
| [`exp`](#exp) | exp() returns ℯ (%e or exp(1)). |
| [`expToTrig`](#exptotrig) | expToTrig(expr) returns expr with exponentials converted to (hyperbolic) trigonometric fun... |
| [`expand`](#expand) | expand(expr) puts out products and positive powers of integers of the expression expr. |
| [`expandDenominator`](#expanddenominator) | expandDenominator(expr) expands denominators of rational expression expr. |
| [`expandNumerator`](#expandnumerator) | expandNumerator(expr) expands numerators of rational expression expr. |
| [`exponent`](#exponent) | exponent(p,expr) returns the maximum exponent of p for expr.... |
| [`expressIdealMember`](#expressidealmember) | expressIdealMember([f1, ..., fn], h) returns a representation of h as a linear combination... |
| [`exquo`](#exquo) | exquo(a, b) either returns an element c such that c*b=a or "failed" if no such element can... |
| [`extendedEuclidean`](#extendedeuclidean) | extendedEuclidean(x, y) returns a record rec where rec.coef1*x+rec.coef2*y = rec.generator... |
| [`extendedExpand`](#extendedexpand) | extendedExpand(expr) puts out all products and positive powers of integers. |
| [`extendedSimplify`](#extendedsimplify) | extendedSimplify(expr) is the extended version of simplify. This is the full version of si... |
| [`extract`](#extract) | extract(expr,i) returns the i-th element of expr seen as a list. |
| [`factor`](#factor) | factor(expr) factors the expression or polynomial expr. |
| [`factorInteger`](#factorinteger) | factorInteger(n) factorizes the integer n into its prime factors. For example:... |
| [`factorList`](#factorlist) | factorList(expr) factors the expression or polynomial expr, but returns the result as a li... |
| [`factorPolynomial`](#factorpolynomial) | factorPolynomial(p) factorizes the polynomial p. For example:... |
| [`factorSquareFree`](#factorsquarefree) | factorSquareFree(expr) factors the expression or polynomial expr in square free factors. |
| [`factorSquareFreeList`](#factorsquarefreelist) | factorSquareFreeList(expr) factors the expression or polynomial expr in square free factor... |
| [`factorSquareFreePolynomial`](#factorsquarefreepolynomial) | factorSquareFreePolynomial(p) factors the univariate polynomial p into irreducibles where ... |
| [`factorTerms`](#factorterms) | factorTerms(p) factors out numerical factors of the expression or polynomial expr. |
| [`factorTermsList`](#factortermslist) | factorTermsList(expr) is the counterpart of factorTerms but here returned as a list of pai... |
| [`factorial`](#factorial) | factorial(n) computes the factorial of n (denoted in the literature by n!) Note: n! = n (n... |
| [`factorials`](#factorials) | factorials(f) rewrites the permutations and binomials in f in terms of factorials. |
| [`fibonacci`](#fibonacci) | fibonacci(n, x) returns the Fibonacci polynomial or evaluates it at x if x is a number. |
| [`findInstance`](#findinstance) | findInstance(expr,lvars) tries to find an instance of the equation in expr. |
| [`findRoot`](#findroot) | findRoot(expr,start) tries to find the root of expr starting at start.... |
| [`first`](#first) | first(agg) returns the first element of agg. |
| [`floor`](#floor) | floor(x) returns the greatest integer less than or equal to x |
| [`fourier`](#fourier) | fourier(expr) returns the discrete Fourier transform from a list of numbers. |
| [`fractionPart`](#fractionpart) | fractionPart(x) returns the fractional part of x. Note: fractionPart(x) = x - floor(x). |
| [`freeOf?`](#freeof) | freeOf?(x, y) tests if x does not contain any occurrence of y, where y is a single kernel. |
| [`fresnelC`](#fresnelc) | fresnelC(x) is the Fresnel integral C, defined by C(x) = integrate(cos(%pi*t^2/2), t=0..x) |
| [`fresnelS`](#fresnels) | fresnelS(x) is the Fresnel integral S, defined by S(x) = integrate(sin(%pi*t^2/2), t=0..x) |
| [`fromCoefficientRules`](#fromcoefficientrules) | fromCoefficientRules(list, vars) constructs the polynomial from the list of coefficients a... |
| [`functionExpand`](#functionexpand) | functionExpand(expr) tries to expand functions in expr to more elementary functions. For e... |
| [`gammaRegularized`](#gammaregularized) | gammaRegularized(a,x) computes the regularized incomplete Gamma function. |
| [`gcd`](#gcd) | gcd(x, y) returns the greatest common divisor of x and y. |
| [`gcdPolynomial`](#gcdpolynomial) | gcdPolynomial(p, q) returns the greatest common divisor (gcd) of univariate polynomials ov... |
| [`gegenbauerC`](#gegenbauerc) | gegenbauerC(n,x) returns the renormalized form of the Gegenbauer polynomial or evaluates i... |
| [`generator`](#generator) | generator() returns the generator for this domain. |
| [`goldenRatio`](#goldenratio) | goldenRatio() returns the golden ratio. |
| [`groebnerBasis`](#groebnerbasis) | groebnerBasis(lpoly, lvar) computes a Groebner basis from the list of polynomials lpoly re... |
| [`ground`](#ground) | ground(f) returns f as an element of R. An error occurs if f is not an element of R. |
| [`ground?`](#ground) | ground?(f) tests if f is an element of R. |
| [`gudermannian`](#gudermannian) | gudermannian(z) computes the Gudermannian of z. |
| [`guessGeneratingFunction`](#guessgeneratingfunction) | guessGeneratingFunction(l,x) finds the generating function applied to x from the list of c... |
| [`guessSequenceFunction`](#guesssequencefunction) | guessSequenceFunction(l) finds the sequence from the list of coefficients l. For example:... |
| [`hahnQ`](#hahnq) | hahnQ(n, a, b, N, z) s the Hahn polynomial. |
| [`hahnR`](#hahnr) | hahnR(n, c, d, N, z) is the dual Hahn polynomial. |
| [`hahnS`](#hahns) | hahnS(n, a, b, c, z) is the continuous dual Hahn polynomial. |
| [`hahn_p`](#hahn_p) | hahn_p(n, a, b, bar_a, bar_b, z) is the continuous Hahn polynomial. |
| [`hankelH1`](#hankelh1) | hankelH1(v, z) is first Hankel function (Bessel function of the third kind). |
| [`hankelH2`](#hankelh2) | hankelH2(v, z) is the second Hankel function (Bessel function of the third kind). |
| [`haversine`](#haversine) | haversine(z) computes the Haversine of z. |
| [`height`](#height) | height(f) returns the highest nesting level appearing in f. Constants have height 0. Symbo... |
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
| [`imag`](#imag) | imag(x) returns imaginary part of x. |
| [`imaginary`](#imaginary) | imaginary() = sqrt(-1) = %i. |
| [`insert`](#insert) | insert(l, elt, ind) inserts elt to the list l at index ind. |
| [`integer?`](#integer) | integer?(i) checks whether or not i is an integer. |
| [`integral`](#integral) | integral(f, x = a..b) returns the formal definite integral of f dx for x between a and b. |
| [`integrate`](#integrate) | integrate(expr, opts\|var) integrates expr with respect to opt or var as options. For examp... |
| [`interpolatingPolynomial`](#interpolatingpolynomial) | interpolatingPolynomial(lpoly,x) interpolates the list of polynomials lpoly with respect t... |
| [`intersection`](#intersection) | intersection(agg1, agg2) is the intersection operator. |
| [`inv`](#inv) | inv x returns the multiplicative inverse of x. Error: if x is 0. |
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
| [`is?`](#is) | is?(x, op) tests if x is a kernel and if its operator is op. |
| [`isExpt`](#isexpt) | isExpt(p) returns [x, n] if p = x^n and n ~= 0. |
| [`isMult`](#ismult) | isMult(p) returns [n, x] if p = n * x and n ~= 0. |
| [`isPlus`](#isplus) | isPlus(p) returns [m1, ..., mn] if p = m1 +...+ mn and n > 1. |
| [`isPower`](#ispower) | isPower(p) returns [x, n] if p = x^n and n ~= 0. |
| [`isTimes`](#istimes) | isTimes(p) returns [a1, ..., an] if p = a1*...*an and n > 1. |
| [`jWSAggregate`](#jwsaggregate) | jWSAggregate(list) constructs agg to a WSAggregate. |
| [`jWSAssociation`](#jwsassociation) | jWSAssociation(rules) returns the associations (key->value) created from the rules. |
| [`jWSData`](#jwsdata) | jWSData() returns the list of WS symbols. Note: Currently unprintable. |
| [`jWSEqual`](#jwsequal) | jWSEqual(lhs,rhs) returns the Julia WS equality lhs == rhs. |
| [`jWSExpression`](#jwsexpression) | jWSExpression(sym) coerces sym to a WSExpression. For example: x := jWSExpression x |
| [`jWSGreater`](#jwsgreater) | jWSGreater(lhs,rhs) returns the Julia WS inequality lhs > rhs. |
| [`jWSGreaterEqual`](#jwsgreaterequal) | jWSGreaterEqual(lhs,rhs) returns the Julia WS inequality lhs >= rhs. |
| [`jWSInterpret`](#jwsinterpret) | jWSInterpret(form) interprets form. |
| [`jWSLess`](#jwsless) | jWSLess(lhs,rhs) returns the Julia WS inequality lhs < rhs. |
| [`jWSLessEqual`](#jwslessequal) | jWSLessEqual(lhs,rhs) returns the Julia WS inequality lhs <= rhs. |
| [`jWSNotEqual`](#jwsnotequal) | jWSNotEqual(lhs,rhs) returns the Julia WS inequality lhs != rhs. |
| [`jWSQuantity`](#jwsquantity) | jWSQuantity(jWSString(u)) returns quantity unit u of 1. For example:... |
| [`jWSRule`](#jwsrule) | jWSRule(lhs,rhs) returns the Julia WS rule lhs->rhs. |
| [`jWSTable`](#jwstable) | jWSTable(expr, range) applies the expr to the defined range. |
| [`jacobiAmplitude`](#jacobiamplitude) | jacobiAmplitude(u,m) computes the amplitude function am. |
| [`jacobiCn`](#jacobicn) | jacobiCn(z, m) is the Jacobi elliptic cn function, defined by jacobiCn(z, m)^2 + jacobiSn(... |
| [`jacobiDn`](#jacobidn) | jacobiDn(z, m) is the Jacobi elliptic dn function, defined by jacobiDn(z, m)^2 + m*jacobiS... |
| [`jacobiP`](#jacobip) | jacobiP(n, a, b, x) returns the Jacobi polynomial or evaluates it at x if x is a number. |
| [`jacobiSn`](#jacobisn) | jacobiSn(z, m) is the Jacobi elliptic sn function, defined by the formula jacobiSn(ellipti... |
| [`jacobiTheta`](#jacobitheta) | jacobiTheta(n, z, m) are the Jacobi Theta functions. |
| [`jacobiZeta`](#jacobizeta) | jacobiZeta(ϕ,m) computes the Jacobi Zeta function. |
| [`jlAbout`](#jlabout) | jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia.... |
| [`jlApply`](#jlapply) | jlApply(func, obj) applies the function func with obj as parameter and returns the result ... |
| [`jlDisplay`](#jldisplay) | jlDisplay(expr) returns the traditional form of expr. This is equivalent to: jWSExpression... |
| [`jlDump`](#jldump) | jlDump(obj) dumps (shows) the Julia object (internal structure with type). |
| [`jlEval`](#jleval) | jlEval(expr, param) evaluates expression expr with param as parameter(s). See also `eval` ... |
| [`jlFieldNames`](#jlfieldnames) | jlFieldNames(obj) returns the field names of obj. |
| [`jlGetField`](#jlgetfield) | jlGetField(obj, sym) returns the property/element sym of obj. |
| [`jlGetJuliaIndex`](#jlgetjuliaindex) | jlGetJuliaIndex(obj) returns the string that allows access to the Julia indexed dictionary... |
| [`jlGetProperty`](#jlgetproperty) | jlGetProperty(obj, sym) returns the property/element sym of obj. |
| [`jlHead`](#jlhead) | jlHead(expr) returns the Head type of expr. |
| [`jlId`](#jlid) | jlId(obj) returns the Julia indexed dictionary index referencing the object obj. |
| [`jlNames`](#jlnames) | jlNames(obj) returns the names of obj depending of the type of obj. |
| [`jlObject`](#jlobject) | jlObject() returns the internal Julia name of the Julia module used. For example:... |
| [`jlPropertyNames`](#jlpropertynames) | jlPropertyNames(obj) returns the property/element names of obj. |
| [`jlRef`](#jlref) | jlRef(obj) returns the internal Lisp representation of the Julia object obj. |
| [`jlSymbolic`](#jlsymbolic) | jlSymbolic(expr) returns the symbolic 'FullForm'. |
| [`jlText`](#jltext) | jlText(obj, mimest) returns the text representation of obj as a list of String lines with ... |
| [`jlType`](#jltype) | jlType(obj) returns the Julia type of obj. |
| [`jlWSAccuracy`](#jlwsaccuracy) | jlWSAccuracy(expr) get accuracy of expr. |
| [`jlWSDefined?`](#jlwsdefined) | jlWSDefined?(sym) checks whether or not the symbol sym is defined in the WS language. For ... |
| [`jlWSGreedyEval`](#jlwsgreedyeval) | jlWSGreedyEval(bool) toggles automatic arithmetic operations. Plus[a, a] can become Times[... |
| [`jlWSPrecision`](#jlwsprecision) | jlWSPrecision get precision of expr. |
| [`jlWSSetAccuracy`](#jlwssetaccuracy) | jlWSSetAccuracy(expr, acc) sets accuracy of expr to acc. |
| [`jlWSSetOptions`](#jlwssetoptions) | jlWSSetOptions(type, opts) sets some internal engine options. |
| [`jlWSSetPrecision`](#jlwssetprecision) | jlWSSetPrecision(expr, prec) sets precision of expr to prec. |
| [`jlimref`](#jlimref) | jlimref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia im... |
| [`jlref`](#jlref) | jlRef(obj) returns the internal Lisp representation of the Julia object obj. |
| [`join`](#join) | join(agg1, agg2) joins the two aggregates agg1 and agg2. |
| [`kelvinBei`](#kelvinbei) | kelvinBei(v, z) is the Kelvin bei function defined by equality kelvinBei(v, z) = imag(bess... |
| [`kelvinBer`](#kelvinber) | kelvinBer(v, z) is the Kelvin ber function defined by equality kelvinBer(v, z) = real(bess... |
| [`kelvinKei`](#kelvinkei) | kelvinKei(v, z) is the Kelvin kei function defined by equality kelvinKei(v, z) = imag(exp(... |
| [`kelvinKer`](#kelvinker) | kelvinKer(v, z) is the Kelvin kei function defined by equality kelvinKer(v, z) = real(exp(... |
| [`kernel`](#kernel) | kernel(op, x) constructs op(x) without evaluating it. |
| [`kernels`](#kernels) | kernels(f) returns the list of all the top-level kernels appearing in f, but not the ones ... |
| [`key?`](#key) | key?(assoc,key) checks whether or not key exists in the association assoc. |
| [`keys`](#keys) | keys(expr) returns the key elements in expr if any. |
| [`kleinInvariantJ`](#kleininvariantj) | kleinInvariantJ(tau) computes the Klein's absolute invariant. |
| [`krawtchoukK`](#krawtchoukk) | krawtchoukK(n, p, N, z) is the Krawtchouk polynomial. |
| [`kummerM`](#kummerm) | kummerM(mu, nu, z) is the Kummer M function. |
| [`kummerU`](#kummeru) | kummerU(mu, nu, z) is the Kummer U function. |
| [`laguerreL`](#laguerrel) | laguerreL(n, x) returns the Laguerre polynomial or evaluates it at x if x is a number. For... |
| [`lambertW`](#lambertw) | lambertW(k,z) returns the k-th solution to the LambertW function. |
| [`last`](#last) | last(agg) returns the last element of agg. |
| [`latex`](#latex) | latex(s) returns a LaTeX-printable output representation of s. |
| [`lcm`](#lcm) | lcm(x, y) returns the least common multiple of x and y. |
| [`lcmCoef`](#lcmcoef) | lcmCoef(c1, c2) computes (llcm_res, coeff1, coeff2) such that llcm_res is least left commo... |
| [`leftPower`](#leftpower) | leftPower(a, n) returns the n-th left power of a, leftPower(a, n) := a * leftPower(a, n-1)... |
| [`leftRecip`](#leftrecip) | leftRecip(a) returns an element, which is a left inverse of a, or "failed" if such an elem... |
| [`legendreP`](#legendrep) | legendreP(n, x) returns the Legendre polynomial of the first kind or evaluates it at x if ... |
| [`legendreQ`](#legendreq) | legendreQ(n, x) returns the Legendre function of the second kind or evaluates it at x if x... |
| [`length`](#length) | length(expr) returns the length of expr seen as a list. |
| [`lerchPhi`](#lerchphi) | lerchPhi(z,s,a) returns Lerch's transcendent phi of arguments. |
| [`level`](#level) | level(expr, lev) returns the list of expression expr at level lev. |
| [`li`](#li) | li(x) returns the logarithmic integral of x, the integral of dx / log(x). |
| [`lift`](#lift) | lift(z) returns a minimal degree univariate polynomial up such that z=reduce up. |
| [`limit`](#limit) | limit(expr, params) returns the limit, eventually nested or multivariate, of expr. For exa... |
| [`log`](#log) | log(x) returns the natural logarithm of x. When evaluated into some subset of the complex ... |
| [`log10`](#log10) | log10(x) computes the logarithm of x in base 10. |
| [`log2`](#log2) | log2(x) computes the logarithm of x in base 2. |
| [`logBarnesG`](#logbarnesg) | logBarnesG(x) is the logarithm of the Barnes G-function. |
| [`logGamma`](#loggamma) | logGamma(z) returns the log-Gamma of z. |
| [`lommelS1`](#lommels1) | lommelS1(mu, nu, z) is the Lommel s function. |
| [`lommelS2`](#lommels2) | lommelS2(mu, nu, z) is the Lommel S function. |
| [`lookup`](#lookup) | lookup(assocs,keys) returns value(s) associated to key(s). |
| [`machineNumber?`](#machinenumber) | machineNumber?(expr) checks whether or not expr is a CPU/GPU supported number. |
| [`mainKernel`](#mainkernel) | mainKernel(f) returns a kernel of f with maximum nesting level, or "failed" if f has no ke... |
| [`map`](#map) | map(f, k) returns op(f(x1), ..., f(xn)) where k = op(x1, ..., xn). |
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
| [`meixnerM`](#meixnerm) | meixnerM(n, b, c, z) is the Meixner polynomial. |
| [`meixnerP`](#meixnerp) | meixnerP(n, phi, lambda, z) is the Meixner-Pollaczek polynomial. |
| [`member?`](#member) | member?(list, expr) checks if expr is in list. |
| [`minLimit`](#minlimit) | minLimit(expr, params) returns the min limit, eventually nested or multivariate, of expr. |
| [`minPoly`](#minpoly) | minPoly(k) returns p such that p(k) = 0. |
| [`minimalPolynomial`](#minimalpolynomial) | minimalPolynomial(expr,var) returns the minimal polynomial in the variable var of the expr... |
| [`minimize`](#minimize) | minimize(expr, vars) is the WS symbolic minimization function. expr can contain constraint... |
| [`missing?`](#missing) | missing?(data) checks whether or not data is Missing. |
| [`modularLambda`](#modularlambda) | modularLambda(tau) computes the lambda modular function. |
| [`monomialList`](#monomiallist) | monomialList(p) returns the list of monomials in p. |
| [`multiEuclidean`](#multieuclidean) | multiEuclidean([f1, ..., fn], z) returns a list of coefficients [a1, ..., an] such that z ... |
| [`mutable?`](#mutable) | mutable?(obj) checks whether or not obj is mutable. |
| [`negative?`](#negative) | negative?(expr) checks whether or not expr is negative. |
| [`norm`](#norm) | norm(x) returns x * conjugate(x) |
| [`normal`](#normal) | normal(expr) converts expr to a normal expression from different expression types. Can be ... |
| [`nothing?`](#nothing) | nothing?(obj) checks whether or not obj is nothing. |
| [`nthRoot`](#nthroot) | nthRoot(x, n) returns the nth root of x. |
| [`number?`](#number) | number?(expr) checks whether or not expr is a number. |
| [`numberForm`](#numberform) | numberForm(x) returns the default printed representation of x. |
| [`numer`](#numer) | numer(f) returns the numerator of f viewed as a polynomial in the kernels over R if R is a... |
| [`numerDenom`](#numerdenom) | numerDenom(expr) returns the numerator and denominator of expr. |
| [`numerator`](#numerator) | numerator(expr) returns the numerator of expr. |
| [`numeric`](#numeric) | numeric(expr) returns numerical expr if possible. |
| [`numeric?`](#numeric) | numeric?(x) checks whether or not x is or would yield a number. |
| [`numericDSolve`](#numericdsolve) | numericDSolve(expr,fun,xrange) solves numerically the differential equation(s) in expr for... |
| [`numericDSolveValue`](#numericdsolvevalue) | numericDSolveValue(expr,fun,xrange) returns the numerical value solution of the differenti... |
| [`numericIntegrate`](#numericintegrate) | numericIntegrate(expr, opt\|var) integrates numerically expr with respect to opt or var as ... |
| [`numericMaximize`](#numericmaximize) | numericMaximize(expr, vars) maximizes numerically the expression function expr with respec... |
| [`numericMinimize`](#numericminimize) | numericMinimize(expr, vars) minimizes numerically the expression function expr with respec... |
| [`numericProduct`](#numericproduct) | numericProduct(f(n),range) returns an evaluated numerical approximation of the sum f(imin)... |
| [`numericSolve`](#numericsolve) | numericSolve(eq, vars) returns the solution(s) to the equation eq. |
| [`numericSum`](#numericsum) | numericSum(f(n),range) returns an evaluated numerical approximation of the sum f(imin) + .... |
| [`one?`](#one) | one?(a) tests whether a is the unit 1. |
| [`operator`](#operator) | operator(op) returns a copy of op with the domain-dependent properties appropriate for %. |
| [`operators`](#operators) | operators(f) returns all the basic operators appearing in f, no matter what their levels a... |
| [`opposite?`](#opposite) | opposite?(x,y) holds if the sum of x and y is 0. |
| [`padeApproximant`](#padeapproximant) | padeApproximant(expr, "x,x0, n,m") returns the Padé approximant at x0. |
| [`parabolicCylinderD`](#paraboliccylinderd) | parabolicCylinderD(nu,x) computes the parabolic cylinder function D of x. |
| [`paren`](#paren) | paren(f) returns (f). This prevents f from being evaluated when operators are applied to i... |
| [`part`](#part) | part(agg,i) returns the i-th element. |
| [`percentForm`](#percentform) | percentForm(x) returns the printed representation of x in percent form. For example:... |
| [`permutation`](#permutation) | permutation(n, m) returns the number of permutations of n objects taken m at a time. Note:... |
| [`pi`](#pi) | pi() returns the constant pi. |
| [`plenaryPower`](#plenarypower) | plenaryPower(a, n) is recursively defined to be plenaryPower(a, n-1)*plenaryPower(a, n-1) ... |
| [`pochhammer`](#pochhammer) | pochhammer(a,n) returns the Pochhammer symbol. |
| [`polygamma`](#polygamma) | polygamma(k, x) is the k-th derivative of digamma(x), (often written psi(k, x) in the lite... |
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
| [`prepend`](#prepend) | prepend(l, elt) prepends elt to the list l. |
| [`prime?`](#prime) | prime?(x) tests if x can never be written as the product of two non-units of the ring, x i... |
| [`principalIdeal`](#principalideal) | principalIdeal([f1, ..., fn]) returns a record whose generator component is a generator of... |
| [`product`](#product) | product(f(n),range) returns the product f(imin) * ... * f(imax) defined by the list range,... |
| [`qBinomial`](#qbinomial) | qBinomial(n,m,q) returns the q-analog of binomial coefficient. |
| [`qFactorial`](#qfactorial) | qFactorial(x,q) returns the q-analog of factorial of x. |
| [`qGamma`](#qgamma) | qGamma(x,q) returns the q-analog of Euler Gamma of x. |
| [`qPochhammer`](#qpochhammer) | qPochhammer(x,q) returns the q-Pochhammer symbol of x. |
| [`qPolyGamma`](#qpolygamma) | qPolyGamma(x,q) returns the q-Digamma of x. |
| [`qelt`](#qelt) | qelt(agg,i) returns the i-th element. No checks are done at the FriCAS level. |
| [`qsetelt`](#qsetelt) | qsetelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem. No c... |
| [`qsetelt!`](#qsetelt) | qsetelt!(l,i,elem) returns l with i-th element replaced by elem. No checks are done at the... |
| [`quantityForm`](#quantityform) | quantityForm(expr,form) returns expr as a quantity with format form. |
| [`quantityMagnitude`](#quantitymagnitude) | quantityMagnitude(val) returns magnitude of val. |
| [`quantityUnit`](#quantityunit) | quantityUnit(val) returns unit of val. |
| [`quo`](#quo) | x quo y is the same as divide(x, y).quotient. See divide from EuclideanDomain. |
| [`racahR`](#racahr) | racahR(n, a, b, c, d, z) is the Racah polynomial. |
| [`ramanujanTau`](#ramanujantau) | ramanujanTau(n) returns the Ramanujan tau of n. |
| [`ramanujanTauL`](#ramanujantaul) | ramanujanTauL(s) computes the Ramanujan tau Dirichlet L-function of s. |
| [`ramanujanTauTheta`](#ramanujantautheta) | ramanujanTauTheta(z) returns the Ramanujan tau theta of z. |
| [`ramanujanTauZ`](#ramanujantauz) | ramanujanTauZ(t) computes the Ramanujan tau Z-function of t. |
| [`rank`](#rank) | rank() returns the rank of the algebra. |
| [`rational?`](#rational) | rational?(q) checks whether or not q is a rational number. |
| [`rationalApproximation`](#rationalapproximation) | rationalApproximation(expr) tries to find a rational approximation of the expression expr. |
| [`rationalExpression?`](#rationalexpression) | rationalExpression?(p,x) checks whether or not p is a rational expression in x. |
| [`real`](#real) | real(x) returns real part of x. |
| [`real?`](#real) | real?(x) checks whether or not x represents a real number. |
| [`realNumeric?`](#realnumeric) | realNumeric?(x) checks whether or not x represents a real value (numeric). |
| [`realNumericSolve`](#realnumericsolve) | realNumericSolve(eq, vars) returns the real solution(s) to the equation eq. |
| [`recip`](#recip) | recip(a) returns an element, which is both a left and a right inverse of a, or "failed" if... |
| [`reduce`](#reduce) | reduce(expr,lvars) tries to reduce the equation in expr. |
| [`reducedSystem`](#reducedsystem) | reducedSystem(A) returns a matrix B such that A x = 0 and B x = 0 have the same solutions ... |
| [`refine`](#refine) | refine(expr, assums) refines the expression expr with assumptions assums. |
| [`regularRepresentation`](#regularrepresentation) | regularRepresentation(a) returns the matrix m of the linear map defined by left multiplica... |
| [`rem`](#rem) | x rem y is the same as divide(x, y).remainder. See divide from EuclideanDomain. |
| [`removeDuplicates`](#removeduplicates) | removeDuplicates(agg) removes duplicate elements. |
| [`replace`](#replace) | replace(expr, rule) applies rule(s) to expr. |
| [`replaceAll`](#replaceall) | replaceAll(expr, rule) applies rule(s) to expr. |
| [`replaceAt`](#replaceat) | replaceAt(expr, part, n) replaces the n-th element of expr using rule(s). |
| [`replacePart`](#replacepart) | replacePart(expr, part) replaces expr using rule(s) expressing position(s). |
| [`replaceRepeated`](#replacerepeated) | replaceRepeated(expr, rule) applies rule(s) to expr, but repeatedly. |
| [`represents`](#represents) | represents([a1, .., an]) returns a1*v1 + ... + an*vn, where v1, ..., vn are the elements o... |
| [`residue`](#residue) | residue(expr, x,x0) returns the residue of expr at x0. |
| [`residueSum`](#residuesum) | residueSum(expr, var) returns the residue of expr. |
| [`rest`](#rest) | rest(agg) returns agg without the first element. |
| [`resultant`](#resultant) | resultant(p1,p2,x) returns the resultant of p1 and p2. |
| [`retract`](#retract) | retract(expr) tries to retract expr to an Expression(Integer). Throws an error otherwise. |
| [`retractIfCan`](#retractifcan) | retractIfCan(expr) retracts expr to a JLFloat64 if it can be retracted to a 64 bits machin... |
| [`reverse`](#reverse) | reverse(agg) reverses the elements of agg. |
| [`riemannSiegelTheta`](#riemannsiegeltheta) | riemannSiegelTheta(t) returns the Riemann-Siegel theta function of t. |
| [`riemannSiegelZ`](#riemannsiegelz) | riemannSiegelZ(t) computes the Riemann-Siegel Z function of t. |
| [`riemannZeta`](#riemannzeta) | riemannZeta(s,a) is the generalized Riemann zeta function. |
| [`riffle`](#riffle) | riffle(agg, elts) riffles (interleaves) element(s) elts inserts them. |
| [`rightPower`](#rightpower) | rightPower(a, n) returns the n-th right power of a, rightPower(a, n) := rightPower(a, n-1)... |
| [`rightRecip`](#rightrecip) | rightRecip(a) returns an element, which is a right inverse of a, or "failed" if such an el... |
| [`rootOf`](#rootof) | rootOf(p) returns y such that p(y) = 0. Error: if p has more than one variable y. |
| [`rootReduce`](#rootreduce) | rootReduce(expr) reduces root functions. |
| [`rootSum`](#rootsum) | Operation defined in WSExpression |
| [`rootsOf`](#rootsof) | rootsOf(p, y) returns [y1, ..., yn] such that p(yi) = 0; Note: the returned values y1, ...... |
| [`round`](#round) | round(x) returns the integer closest to x. |
| [`sample`](#sample) | sample yields a value of type % |
| [`scientificForm`](#scientificform) | scientificForm(x) returns the printed representation of x in scientific form. |
| [`sec`](#sec) | sec(x) returns the secant of x. |
| [`sech`](#sech) | sech(x) returns the hyperbolic secant of x. |
| [`select`](#select) | select(expr, form) selects elements of expr if form(element) is true. |
| [`series`](#series) | series(expr, opt) returns a series from expr.... |
| [`setIntersection`](#setintersection) | setIntersection(agg1, agg2) is the intersection set operator. |
| [`setelt`](#setelt) | setelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem. |
| [`setelt!`](#setelt) | setelt!(l,i,elem) returns l with i-th element replaced by elem. |
| [`siegelTheta`](#siegeltheta) | siegelTheta(tau, s) computes the Siegel theta function. |
| [`sign`](#sign) | sign(x) returns the sign of x. |
| [`simplify`](#simplify) | simplify(expr) simplifies the expr.... |
| [`sin`](#sin) | sin(x) returns the sine of x. |
| [`sinc`](#sinc) | sinc(x) computes the unnormalized sinc of x, sin(x)/x and 0 if x = 0. |
| [`sinh`](#sinh) | sinh(x) returns the hyperbolic sine of x. |
| [`sizeLess?`](#sizeless) | sizeLess?(x, y) tests whether x is strictly smaller than y with respect to the euclideanSi... |
| [`smaller?`](#smaller) | smaller?(x, y) is a strict ordering on depending on representatives of elements of the set... |
| [`solve`](#solve) | solve(eq, vars) tries to solve the equation eq. |
| [`solveLinearPolynomialEquation`](#solvelinearpolynomialequation) | solveLinearPolynomialEquation([f1, ..., fn], g) (where the fi are relatively prime to each... |
| [`sort`](#sort) | sort(agg) returns agg in sorted order. For complex numbers, sorts them by their real part ... |
| [`sorted?`](#sorted) | sorted?(agg) checks whether agg is sorted or not. |
| [`sphericalBesselJ`](#sphericalbesselj) | sphericalBesselJ(n,z) returns the spherical Bessel of the first kind of z. |
| [`sphericalBesselY`](#sphericalbessely) | sphericalBesselY(n,z) returns the spherical Bessel of the second kind of z. |
| [`sphericalHankelH1`](#sphericalhankelh1) | sphericalHankelH1(n,z) returns the spherical Hankel function of the first kind of z. |
| [`sphericalHankelH2`](#sphericalhankelh2) | sphericalHankelH2(n,z) returns the spherical Hankel function of the second kind of z. |
| [`sphericalHarmonicY`](#sphericalharmonicy) | sphericalHarmonicY(l, m, theta, phi) returns the spherical harmonic Y function or evaluate... |
| [`sqrt`](#sqrt) | sqrt(x) returns the square root of x. The branch cut lies along the negative real axis, co... |
| [`squareFree`](#squarefree) | squareFree(x) returns the square-free factorization of x such that the factors are pairwis... |
| [`squareFreePart`](#squarefreepart) | squareFreePart(x) returns a product of prime factors of x each taken with multiplicity one... |
| [`squareFreePolynomial`](#squarefreepolynomial) | squareFreePolynomial(p) returns the square-free factorization of the univariate polynomial... |
| [`stieltjesGamma`](#stieltjesgamma) | stieltjesGamma(n) returns the n-th Stieltjes constant. |
| [`string`](#string) | string(jt) returns the string representation of jt. |
| [`struveH`](#struveh) | struveH(v, z) is the Struve H function. |
| [`struveL`](#struvel) | struveL(v, z) is the Struve L function defined by the formula struveL(v, z) = -%i^exp(-v*%... |
| [`subResultants`](#subresultants) | subResultants(p1,p2,x) returns the subresultant of p1 and p2 with respect to x. |
| [`subst`](#subst) | subst(f, k = g) replaces the kernel k by g formally in f. |
| [`subtractIfCan`](#subtractifcan) | subtractIfCan(x, y) returns an element z such that z+y=x or "failed" if no such element ex... |
| [`sum`](#sum) | sum(f(n),range) returns the sum f(imin) + ... + f(imax) defined by the list range, for exa... |
| [`summation`](#summation) | summation(f(n), n = a..b) returns f(a) + ... + f(b) as a formal sum. |
| [`symmetricPolynomial`](#symmetricpolynomial) | symmetricPolynomial(n,lvars) returns the n-th elementary symmetric polynomial with respect... |
| [`symmetricReduction`](#symmetricreduction) | symmetricReduction(f,lvars) returns a pair of polynomials representing f = p+q where p is ... |
| [`take`](#take) | take(l,i) returns the first i elements. |
| [`tan`](#tan) | tan(x) returns the tangent of x. |
| [`tanh`](#tanh) | tanh(x) returns the hyperbolic tangent of x. |
| [`toExpression`](#toexpression) | toExpression(expr) converts expr to a WS expression and evaluates it. |
| [`toString`](#tostring) | toString(expr, form) returns the string representation of expr with WS language format for... |
| [`together`](#together) | together(expr) puts together terms over a common denominator cancelling common factors. |
| [`tower`](#tower) | tower(f) returns all the kernels appearing in f, no matter what their levels are. |
| [`trace`](#trace) | trace(a) returns the trace of the regular representation of a with respect to any basis. |
| [`traceMatrix`](#tracematrix) | traceMatrix() is the n-by-n matrix ( Tr(vi * vj) ), where v1, ..., vn are the elements of ... |
| [`traditionalForm`](#traditionalform) | traditionalForm(expr) returns a traditional form of expr i.e. its WS 'TraditionalForm'. |
| [`trigExpand`](#trigexpand) | trigExpand(expr) tries to expand (hyperbolic) trigonometric functions in expr. |
| [`trigFactor`](#trigfactor) | trigFactor(expr) factors (hyperbolic) trigonometric functions in expr. |
| [`trigFactorList`](#trigfactorlist) | trigFactorList(expr) returns a list of factors of (hyperbolic) trigonometric functions in ... |
| [`trigReduce`](#trigreduce) | trigReduce(expr) reduces power and products of trigonometric functions. |
| [`trigToExp`](#trigtoexp) | trigToExp(expr) returns expr with (hyperbolic) trigonometric functions converted to, event... |
| [`union`](#union) | union(agg1, agg2) is the union set operator. Elements are sorted on output. |
| [`unit?`](#unit) | unit?(x) tests whether x is a unit, is invertible. |
| [`unitCanonical`](#unitcanonical) | unitCanonical(x) returns unitNormal(x).canonical. |
| [`unitNormal`](#unitnormal) | unitNormal(x) tries to choose a canonical element from the associate class of x. The attri... |
| [`unitStep`](#unitstep) | unitStep(x) is 0 for x less than 0, 1 for x bigger or equal 0. |
| [`univariate`](#univariate) | univariate(f, k) returns f viewed as a univariate fraction in k. |
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
| [`wilsonW`](#wilsonw) | wilsonW(n, a, b, c, d, z) is the Wilson polynomial. |
| [`zernikeR`](#zerniker) | zernikeR(n, m, x) returns the Zernike radial polynomial or evaluates it at x if x is a num... |
| [`zero?`](#zero) | zero? x tries to determine if x is 0. For example:... |
| [`zeroOf`](#zeroof) | zeroOf(p) returns y such that p(y) = 0. The value y is expressed in terms of radicals if p... |
| [`zerosOf`](#zerosof) | zerosOf(p) returns [y1, ..., yn] such that p(yi) = 0. The yi's are expressed in radicals i... |
| [`~=`](#op-neq) | Operation defined in WSExpression |

### Detailed Documentation

#### `#` <a id="op-hash"></a>

#(agg) returns the length of agg. 0 if it is a scalar.

- **Signature**: `% -> WSInteger`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `*` <a id="op-mul"></a>

##### `*` : `(%, %) -> %`

Operation defined in WSExpression.

##### `*` : `(Integer, %) -> %`

Operation defined in WSExpression.

##### `*` : `(NonNegativeInteger, %) -> %`

Operation defined in WSExpression.

##### `*` : `(PositiveInteger, %) -> %`

Operation defined in WSExpression.

##### `*` : `(NMInteger, %) -> JLObject`

Operation defined in WSExpression.

#### `+` <a id="op-add"></a>

Operation defined in WSExpression.

- **Signature**: `(%, %) -> %`

#### `/` <a id="op-div"></a>

##### `/` : `(%, %) -> %`

Operation defined in WSExpression.

##### `/` : `(SparseMultivariatePolynomial(%,Kernel(%)), SparseMultivariatePolynomial(%,Kernel(%))) -> %`

Operation defined in WSExpression.

#### `0` <a id="0"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1302)\]

0 is a distinguished element, in AbelianMonoid it is the additive identity element, in MagmaWithZero it is multiplicative zero.

- **Signature**: `() -> %`
- **From**: `SetWithZero`

#### `1` <a id="1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1303)\]

1 returns the unit element, denoted by 1.

- **Signature**: `() -> %`
- **From**: `MagmaWithUnit`

#### `<` <a id="op-lt"></a>

Operation defined in WSExpression.

- **Signature**: `(%, %) -> Boolean`

#### `<=` <a id="op-le"></a>

Operation defined in WSExpression.

- **Signature**: `(%, %) -> Boolean`

#### `>` <a id="op-gt"></a>

Operation defined in WSExpression.

- **Signature**: `(%, %) -> Boolean`

#### `>=` <a id="op-ge"></a>

Operation defined in WSExpression.

- **Signature**: `(%, %) -> Boolean`

#### `Beta` <a id="beta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1536)\]

##### `Beta` : `(%, %) -> %`

Beta(x, y) is Gamma(x) * Gamma(y)/Gamma(x+y).

- **From**: `SpecialFunctionCategory`

##### `Beta` : `(%, %, %) -> %`

Beta(x, a, b) is the incomplete Beta function.

- **From**: `SpecialFunctionCategory`

#### `Chi` <a id="chi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1431)\]

Chi(x) returns the hyperbolic cosine integral of x, the integral of cosh(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `Ci` <a id="ci"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1430)\]

Ci(x) returns the cosine integral of x, the integral of cos(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `D` <a id="d"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1638)\]

##### `D` : `(%, S) -> %`

D(x, v) computes the partial derivative of x with respect to v.

- **From**: `PartialDifferentialRing(S)`

##### `D` : `(%, S, NonNegativeInteger) -> %`

D(x, s, n) computes multiple partial derivatives, n-th derivative of x with respect to s.

- **From**: `PartialDifferentialRing(S)`

##### `D` : `(%, List(S)) -> %`

D(x, [s1, ..., sn]) computes successive partial derivatives, D(...D(x, s1)..., sn).

- **From**: `PartialDifferentialRing(S)`

##### `D` : `(%, List(S), List(NonNegativeInteger)) -> %`

D(x, [s1, ..., sn], [n1, ..., nn]) computes multiple partial derivatives, D(...D(x, s1, n1)..., sn, nn).

- **From**: `PartialDifferentialRing(S)`

##### `D` : `(%, (R -> R)) -> %`

D(x, deriv) differentiates x extending the derivation deriv on R.

- **From**: `DifferentialExtension(R)`

##### `D` : `(%, (R -> R), NonNegativeInteger) -> %`

D(x, deriv, n) differentiate x n times using a derivation which extends deriv on R.

- **From**: `DifferentialExtension(R)`

##### `D` : `(%, %) -> %`

Operation defined in WSExpression.

##### `D` : `(%, %, NonNegativeInteger) -> %`

Operation defined in WSExpression.

##### `D` : `(%, List(%)) -> %`

Operation defined in WSExpression.

##### `D` : `(%, List(%), List(NonNegativeInteger)) -> %`

Operation defined in WSExpression.

##### `D` : `(%, List(Symbol)) -> %`

Operation defined in WSExpression.

##### `D` : `(%, List(Symbol), List(NonNegativeInteger)) -> %`

Operation defined in WSExpression.

##### `D` : `(%, (% -> %)) -> %`

Operation defined in WSExpression.

##### `D` : `(%, (% -> %), NonNegativeInteger) -> %`

Operation defined in WSExpression.

##### `D` : `(%, Symbol) -> %`

Operation defined in WSExpression.

##### `D` : `(%, Symbol, NonNegativeInteger) -> %`

Operation defined in WSExpression.

#### `Ei` <a id="ei"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1432)\]

Ei(x) returns the exponential integral of x, the integral of exp(x)/x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `EiEn` <a id="eien"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L221)\]

EiEn(n,z) returns the exponential integral En(z).

- **Signature**: `(%, %) -> %`

#### `Gamma` <a id="gamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L227)\]

##### `Gamma` : `(%, %, %) -> %`

Gamma(a,z1,z2) computes the generalized incomplete Gamma function.

##### `Gamma` : `% -> %`

Gamma(x) is the Euler Gamma function.

- **From**: `SpecialFunctionCategory`

##### `Gamma` : `(%, %) -> %`

Gamma(a, x) is the incomplete Gamma function.

- **From**: `SpecialFunctionCategory`

#### `Shi` <a id="shi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1429)\]

Shi(x) returns the hyperbolic sine integral of x, the integral of sinh(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `Si` <a id="si"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1428)\]

Si(x) returns the sine integral of x, the integral of sin(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `^` <a id="op-pow"></a>

##### `^` : `(%, WSRational) -> %`

^ is the exponentiation by a rational.

##### `^` : `(%, %) -> %`

Operation defined in WSExpression.

##### `^` : `(%, Fraction(Integer)) -> %`

Operation defined in WSExpression.

##### `^` : `(%, Integer) -> %`

Operation defined in WSExpression.

##### `^` : `(%, NonNegativeInteger) -> %`

Operation defined in WSExpression.

##### `^` : `(%, PositiveInteger) -> %`

Operation defined in WSExpression.

#### `abs` <a id="abs"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1381)\]

##### `abs` : `% -> %`

abs(x) returns the absolute value of x.

- **From**: `SpecialFunctionCategory`

##### `abs` : `% -> R`

abs(x) returns the absolute value of x = sqrt(norm(x)).

- **From**: `ComplexCategory(R)`

#### `accountingForm` <a id="accountingform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1094)\]

##### `accountingForm` : `% -> %`

accountingForm(x,n) returns the accounting printed representation of x.

##### `accountingForm` : `(%, %) -> %`

accountingForm(x,n) returns the accounting printed representation of x with n digits of precision.

#### `acos` <a id="acos"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1402)\]

acos(x) returns the arc-cosine of x. When evaluated into some subset of the complex numbers, one branch cut for acos lies along the negative real axis to the left of -1 (inclusive), continuous with the upper half plane, the other along the positive real axis to the right of 1 (inclusive), continuous with the lower half plane.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `acosh` <a id="acosh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1417)\]

acosh(x) returns the hyperbolic arc-cosine of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `acot` <a id="acot"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1407)\]

acot(x) returns the arc-cotangent of x.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `acoth` <a id="acoth"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1421)\]

acoth(x) returns the hyperbolic arc-cotangent of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `acsc` <a id="acsc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1406)\]

acsc(x) returns the arc-cosecant of x.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `acsch` <a id="acsch"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1420)\]

acsch(x) returns the hyperbolic arc-cosecant of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `airyAi` <a id="airyai"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1476)\]

airyAi(x) is the Airy function Ai(x).

- **Signature**: `% -> %`
- **From**: `SpecialFunctionCategory`

#### `airyAiPrime` <a id="airyaiprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1482)\]

airyAiPrime(x) is the derivative of the Airy function Ai(x).

- **Signature**: `% -> %`
- **From**: `SpecialFunctionCategory`

#### `airyAiZero` <a id="airyaizero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L158)\]

##### `airyAiZero` : `% -> %`

airyAiZero(n) is the n-th zero of the Airy function Ai(z).

##### `airyAiZero` : `(%, %) -> %`

airyAiZero(n,x) is the n-th zero of the Airy function Ai(z) less than x.

#### `airyBi` <a id="airybi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1479)\]

airyBi(x) is the Airy function Bi(x).

- **Signature**: `% -> %`
- **From**: `SpecialFunctionCategory`

#### `airyBiPrime` <a id="airybiprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1483)\]

airyBiPrime(x) is the derivative of the Airy function Bi(x).

- **Signature**: `% -> %`
- **From**: `SpecialFunctionCategory`

#### `airyBiZero` <a id="airybizero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L163)\]

##### `airyBiZero` : `% -> %`

airyBiZero(n) is the n-th zero of the Airy function Bi(z).

##### `airyBiZero` : `(%, %) -> %`

airyBiZero(n,x) is the n-th zero of the Airy function Bi(z) less than x.

#### `algtower` <a id="algtower"></a>

##### `algtower` : `% -> List(K)`

algtower(f) is algtower([f])

- **From**: `FunctionSpace2(R,K)`

##### `algtower` : `List(%) -> List(K)`

algtower([f1, ..., fn]) returns list of kernels [ak1, ..., akl] such that each toplevel algebraic kernel in one of f1, ..., fn or in arguments of ak1, ..., akl is one of ak1, ..., akl.

- **From**: `FunctionSpace2(R,K)`

##### `algtower` : `% -> List(Kernel(%))`

Operation defined in WSExpression.

##### `algtower` : `List(%) -> List(Kernel(%))`

Operation defined in WSExpression.

#### `angerJ` <a id="angerj"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L132)\]

##### `angerJ` : `(%, %, %) -> %`

angerJ(v, n, z) is the associated Anger J function.

##### `angerJ` : `(%, %) -> %`

angerJ(v, z) is the Anger J function.

- **From**: `SpecialFunctionCategory`

#### `annihilate?` <a id="annihilate"></a>

annihilate?(x,y) holds when the product of x and y is 0.

- **Signature**: `(%, %) -> Boolean`
- **From**: `Rng`

#### `antiCommutator` <a id="anticommutator"></a>

antiCommutator(a, b) returns a*b+b*a.

- **Signature**: `(%, %) -> %`
- **From**: `NonAssociativeSemiRng`

#### `apart` <a id="apart"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L926)\]

##### `apart` : `% -> %`

apart(expr) converts a rational expression as a sum of terms, reducing denominator(s).

##### `apart` : `(%, %) -> %`

apart(expr, vars) converts a rational expression as a sum of terms as the one arg apart does but only for vars (the others are considered as constants).

#### `append` <a id="append"></a>

##### `append` : `(%, E) -> %`

append(l, elt) appends elt to the list l.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `append` : `(%, %) -> %`

Operation defined in WSExpression.

#### `applyQuote` <a id="applyquote"></a>

##### `applyQuote` : `(Symbol, %) -> %`

applyQuote(foo, x) returns 'foo(x).

- **From**: `FunctionSpace2(R,K)`

##### `applyQuote` : `(Symbol, %, %) -> %`

applyQuote(foo, x, y) returns 'foo(x, y).

- **From**: `FunctionSpace2(R,K)`

##### `applyQuote` : `(Symbol, %, %, %) -> %`

applyQuote(foo, x, y, z) returns 'foo(x, y, z).

- **From**: `FunctionSpace2(R,K)`

##### `applyQuote` : `(Symbol, %, %, %, %) -> %`

applyQuote(foo, x, y, z, t) returns 'foo(x, y, z, t).

- **From**: `FunctionSpace2(R,K)`

##### `applyQuote` : `(Symbol, List(%)) -> %`

applyQuote(foo, [x1, ..., xn]) returns 'foo(x1, ..., xn).

- **From**: `FunctionSpace2(R,K)`

#### `argument` <a id="argument"></a>

##### `argument` : `% -> R`

argument(x) returns the angle made by (1, 0) and x.

- **From**: `ComplexCategory(R)`

##### `argument` : `% -> %`

Operation defined in WSExpression.

#### `asec` <a id="asec"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1405)\]

asec(x) returns the arc-secant of x.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `asech` <a id="asech"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1419)\]

asech(x) returns the hyperbolic arc-secant of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `asin` <a id="asin"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1401)\]

asin(x) returns the arc-sine of x. When evaluated into some subset of the complex numbers, one branch cut for asin lies along the negative real axis to the left of -1 (inclusive), continuous with the upper half plane, the other along the positive real axis to the right of 1 (inclusive), continuous with the lower half plane.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `asinh` <a id="asinh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1416)\]

asinh(x) returns the hyperbolic arc-sine of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `associates?` <a id="associates"></a>

associates?(x, y) tests whether x and y are associates, differ by a unit factor.

- **Signature**: `(%, %) -> Boolean`
- **From**: `EntireRing`

#### `associator` <a id="associator"></a>

associator(a, b, c) returns (a*b)*c-a*(b*c).

- **Signature**: `(%, %, %) -> %`
- **From**: `NonAssociativeRng`

#### `assuming` <a id="assuming"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L906)\]

assuming(assumption(s), expr) uses the assumptions for use of expr with refine, simplify and integrate for example. The assumption(s) are not always supported by MathLink. Use assumptions with 'refine' etc. directly instead.

- **Signature**: `(%, %) -> %`

#### `atan` <a id="atan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L110)\]

##### `atan` : `(%, %) -> %`

atan(x,y) computes the arc tangent of y/x.

##### `atan` : `% -> %`

atan(x) returns the arc-tangent of x. When evaluated into some subset of the complex numbers, one branch cut for atan lies along the positive imaginary axis above %i (exclusive), continuous with the left half plane, the other along the negative imaginary axis below -%i (exclusive) continuous with the right half plane. The domain does not contain %i and -%i.

- **From**: `ArcTrigonometricFunctionCategory`

#### `atanh` <a id="atanh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1418)\]

atanh(x) returns the hyperbolic arc-tangent of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `barnesG` <a id="barnesg"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L241)\]

barnesG(z) computes the Barnes G-function of z.

- **Signature**: `% -> %`

#### `baseForm` <a id="baseform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1057)\]

baseForm(x, n) returns the printed representation of x in base b.

- **Signature**: `(%, %) -> %`

#### `basis` <a id="basis"></a>

basis() returns the fixed R-module basis.

- **Signature**: `() -> Vector(%)`
- **From**: `FramedModule(R)`

#### `belong?` <a id="belong"></a>

belong?(op) tests if % accepts op as applicable to its elements.

- **Signature**: `BasicOperator -> Boolean`
- **From**: `ExpressionSpace2(K)`

#### `besselI` <a id="besseli"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1491)\]

besselI(v, z) is the modified Bessel function of the first kind.

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `besselJ` <a id="besselj"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1487)\]

besselJ(v, z) is the Bessel function of the first kind.

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `besselJZero` <a id="besseljzero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L140)\]

besselJZero(n,x) returns the n-th zero of the Bessel J n-th function.

- **Signature**: `(%, %) -> %`

#### `besselK` <a id="besselk"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1492)\]

besselK(v, z) is the modified Bessel function of the second kind.

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `besselY` <a id="bessely"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1489)\]

besselY(v, z) is the Bessel function of the second kind.

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `besselYZero` <a id="besselyzero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L143)\]

besselYZero(n,x) returns the n-th zero of the Bessel Y n-th function.

- **Signature**: `(%, %) -> %`

#### `betaRegularized` <a id="betaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L223)\]

betaRegularized(x,a,b) computes the regularized incomplete Beta function.

- **Signature**: `(%, %, %) -> %`

#### `binomial` <a id="binomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1535)\]

binomial(n, r) returns the (n, r) binomial coefficient (often denoted in the literature by C(n, r)). Note: C(n, r) = n!/(r!(n-r)!) where n >= r >= 0.

- **Signature**: `(%, %) -> %`
- **From**: `CombinatorialFunctionCategory`

#### `box` <a id="box"></a>

box(f) returns f with a 'box' around it that prevents f from being evaluated when operators are applied to it. For example, log(1) returns 0, but log(box 1) returns the formal kernel log(1).

- **Signature**: `% -> %`
- **From**: `ExpressionSpace2(K)`

#### `cancel` <a id="cancel"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L938)\]

cancel(expr) cancels common factors in numerators and denominators of the rational expression expr.

- **Signature**: `% -> %`

#### `catalan` <a id="catalan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L100)\]

catalan() returns Catalan's constant.

- **Signature**: `() -> %`

#### `ceiling` <a id="ceiling"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L90)\]

ceiling(x) returns the smallest integer greater than or equal to x.

- **Signature**: `% -> %`

#### `characteristic` <a id="characteristic"></a>

characteristic() returns the characteristic of the ring.

- **Signature**: `() -> NonNegativeInteger`
- **From**: `NonAssociativeRing`

#### `characteristicPolynomial` <a id="characteristicpolynomial"></a>

##### `characteristicPolynomial` : `% -> UP`

characteristicPolynomial(a) returns the characteristic polynomial of the regular representation of a with respect to any basis.

- **From**: `FiniteRankAlgebra(R,UP)`

##### `characteristicPolynomial` : `% -> SparseUnivariatePolynomial(%)`

Operation defined in WSExpression.

#### `charlierC` <a id="charlierc"></a>

charlierC(n, a, z) is the Charlier polynomial.

- **Signature**: `(%, %, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `chebyshevT` <a id="chebyshevt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L270)\]

chebyshevT(n, x) returns the Chebyshev polynomial of the first kind or evaluates it at x if x is a number.

- **Signature**: `(%, %) -> %`

#### `chebyshevU` <a id="chebyshevu"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L273)\]

chebyshevU(n, x) returns Chebyshev polynomial of the second kind or evaluates it at x if x is a number.

- **Signature**: `(%, %) -> %`

#### `coefficient` <a id="coefficient"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L720)\]

##### `coefficient` : `(%, %) -> %`

coefficient(p,expr) returns the coefficient of expr in p.

```fricas
x:= jWSExpression x
coefficient((x - y)^4, x * y^3)
```

##### `coefficient` : `(%, %, %) -> %`

coefficient(p, expr, n) returns the coefficient of expr^n in p.

#### `coefficientList` <a id="coefficientlist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L726)\]

coefficientList(p,expr) returns the list of coefficients of expr in p.

- **Signature**: `(%, %) -> %`

#### `coefficientRules` <a id="coefficientrules"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L728)\]

##### `coefficientRules` : `% -> %`

coefficientRules(p) returns the coefficients and exponents of p as WS rules.

##### `coefficientRules` : `(%, %) -> %`

coefficientRules(p,vars) returns the coefficients and exponents of p with respect to var(s) as WS rules.

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1144)\]

##### `coerce` : `Integer -> %`

coerce(z) coerces the integer z to a WSExpression. Convenience function.

##### `coerce` : `Complex(Integer) -> % -- for example, %i operations`

coerce(gi) coerces gi to a WSExpression. Convenience function.

##### `coerce` : `Fraction(Integer) -> %`

coerce(q) coerces the rational q to a WSExpression. Convenience function.

##### `coerce` : `Float -> %`

coerce(f) coerces the floating point number f to a WSExpression. Convenience function.

##### `coerce` : `Equation(%) -> %`

coerce(eq) coerces the equation eq to a WSExpression equation.

##### `coerce` : `String -> %`

coerce(str) coerces the string str to a WSExpression evaluating str as a WS Language Expression. For example:

```fricas
expr := "Sqrt[x]"::WSEXPR;jlEval(expr,"x=2.0")
```

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

##### `coerce` : `R -> %`

coerce(r) maps the ring element r to a member of the algebra.

- **From**: `Algebra(R)`

##### `coerce` : `S -> %`

coerce(a) transforms a into an element of %.

- **From**: `CoercibleFrom(S)`

##### `coerce` : `Fraction(R) -> %`

coerce(q) returns q as an element of %.

- **From**: `FunctionSpace2(R,K)`

##### `coerce` : `Fraction(Polynomial(Fraction(R))) -> %`

coerce(f) returns f as an element of %.

- **From**: `FunctionSpace2(R,K)`

##### `coerce` : `List(E) -> %`

coerce(list) tries to coerce list to a WSAggregate.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `coerce` : `Polynomial(Fraction(R)) -> %`

coerce(p) returns p as an element of %.

- **From**: `FunctionSpace2(R,K)`

##### `coerce` : `% -> S`

coerce(a) transforms a into an element of S.

- **From**: `CoercibleTo(S)`

##### `coerce` : `% -> JLObject`

coerce(obj) coerces obj to JLObject. Convenience function.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `coerce` : `% -> WSExpression`

coerce(expr) returns the WSExpression representation of expr.

- **From**: [`WSObject`](WSObject.md)

##### `coerce` : `% -> %`

Operation defined in WSExpression.

##### `coerce` : `Complex(Integer) -> %`

Operation defined in WSExpression.

##### `coerce` : `Fraction(%) -> %`

Operation defined in WSExpression.

##### `coerce` : `Fraction(Polynomial(%)) -> %`

Operation defined in WSExpression.

##### `coerce` : `Fraction(Polynomial(Fraction(%))) -> %`

Operation defined in WSExpression.

##### `coerce` : `Kernel(%) -> %`

Operation defined in WSExpression.

##### `coerce` : `Polynomial(%) -> %`

Operation defined in WSExpression.

##### `coerce` : `Polynomial(Fraction(%)) -> %`

Operation defined in WSExpression.

##### `coerce` : `SparseMultivariatePolynomial(%,Kernel(%)) -> %`

Operation defined in WSExpression.

##### `coerce` : `% -> OutputForm`

Operation defined in WSExpression.

#### `collect` <a id="collect"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L920)\]

##### `collect` : `(%, %) -> %`

collect(expr, var) collects same power terms with respect to variable var.

##### `collect` : `(%, WSList(%)) -> %`

collect(expr, vars) collects same power terms with respect to variables in vars.

#### `commutator` <a id="commutator"></a>

commutator(a, b) returns a*b-b*a.

- **Signature**: `(%, %) -> %`
- **From**: `NonAssociativeRng`

#### `complex` <a id="complex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1327)\]

##### `complex` : `(R, R) -> %`

complex(x, y) constructs x + %i*y.

- **From**: `ComplexCategory(R)`

##### `complex` : `(%, %) -> %`

Operation defined in WSExpression.

#### `complexExpand` <a id="complexexpand"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L958)\]

##### `complexExpand` : `% -> %`

complexExpand(expr) expands expr assuming variables are real.

##### `complexExpand` : `(%, %) -> %`

complexExpand(expr, cvars) expands expr assuming all but cvars variables are real.

#### `conjugate` <a id="conjugate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1384)\]

conjugate(x + %i y) returns x - %i y.

- **Signature**: `% -> %`
- **From**: `ComplexCategory(R)`

#### `convert` <a id="convert"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1173)\]

##### `convert` : `Polynomial(Integer) -> %`

convert(p) converts p to a WSExpression.

##### `convert` : `Polynomial(Fraction(Integer)) -> %`

convert(p) converts p to a WSExpression.

##### `convert` : `Polynomial(Float) -> %`

convert(p) converts p to a WSExpression.

##### `convert` : `UP -> %`

convert(up) converts the univariate polynomial up to an algebra element, reducing by the definingPolynomial() if necessary.

- **From**: `MonogenicAlgebra(R,UP)`

##### `convert` : `Factored(%) -> %`

convert(f1^e1 ... fm^em) returns (f1)^e1 ... (fm)^em as an element of %, using formal kernels created using a paren from ExpressionSpace.

- **From**: `FunctionSpace2(R,K)`

##### `convert` : `Vector(R) -> %`

convert([a1, .., an]) returns a1*v1 + ... + an*vn, where v1, ..., vn are the elements of the fixed basis.

- **From**: `FramedModule(R)`

##### `convert` : `% -> S`

convert(a) transforms a into an element of S.

- **From**: `ConvertibleTo(S)`

##### `convert` : `% -> Vector(R)`

convert(a) returns the coordinates of a with respect to the fixed R-module basis.

- **From**: `FramedModule(R)`

##### `convert` : `SparseUnivariatePolynomial(%) -> %`

Operation defined in WSExpression.

##### `convert` : `Vector(%) -> %`

Operation defined in WSExpression.

##### `convert` : `% -> SparseUnivariatePolynomial(%)`

Operation defined in WSExpression.

##### `convert` : `% -> String`

Operation defined in WSExpression.

##### `convert` : `% -> Vector(%)`

Operation defined in WSExpression.

#### `coordinates` <a id="coordinates"></a>

##### `coordinates` : `Vector(%) -> Matrix(R)`

coordinates([v1, ..., vm]) returns the coordinates of the vi's with respect to the fixed basis. The coordinates of vi are contained in the ith row of the matrix returned by this function.

- **From**: `FramedModule(R)`

##### `coordinates` : `(Vector(%), Vector(%)) -> Matrix(R)`

coordinates([v1, ..., vm], basis) returns the coordinates of the vi's with respect to the basis basis. The coordinates of vi are contained in the ith row of the matrix returned by this function.

- **From**: `FiniteRankAlgebra(R,UP)`

##### `coordinates` : `% -> Vector(R)`

coordinates(a) returns the coordinates of a with respect to the fixed R-module basis.

- **From**: `FramedModule(R)`

##### `coordinates` : `(%, Vector(%)) -> Vector(R)`

coordinates(a, basis) returns the coordinates of a with respect to the basis basis.

- **From**: `FiniteRankAlgebra(R,UP)`

##### `coordinates` : `Vector(%) -> Matrix(%)`

Operation defined in WSExpression.

##### `coordinates` : `(Vector(%), Vector(%)) -> Matrix(%)`

Operation defined in WSExpression.

##### `coordinates` : `% -> Vector(%)`

Operation defined in WSExpression.

##### `coordinates` : `(%, Vector(%)) -> Vector(%)`

Operation defined in WSExpression.

#### `cos` <a id="cos"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1394)\]

cos(x) returns the cosine of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `cosh` <a id="cosh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1410)\]

cosh(x) returns the hyperbolic cosine of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `cot` <a id="cot"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1398)\]

cot(x) returns the cotangent of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `coth` <a id="coth"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1414)\]

coth(x) returns the hyperbolic cotangent of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `coulombF` <a id="coulombf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L311)\]

coulombF(l,eta,ro) is the regular Coulomb wave function.

- **Signature**: `(%, %, %) -> %`

#### `coulombG` <a id="coulombg"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L313)\]

coulombG(l,eta,ro) is the irregular Coulomb wave function.

- **Signature**: `(%, %, %) -> %`

#### `coulombH1` <a id="coulombh1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L315)\]

coulombH1(l,eta,ro) is the incoming irregular Coulomb wave function H^(+).

- **Signature**: `(%, %, %) -> %`

#### `coulombH2` <a id="coulombh2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L317)\]

coulombH2(l,eta,ro) is the incoming irregular Coulomb wave function H^(-).

- **Signature**: `(%, %, %) -> %`

#### `csc` <a id="csc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1397)\]

csc(x) returns the cosecant of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `csch` <a id="csch"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1413)\]

csch(x) returns the hyperbolic cosecant of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `dSolve` <a id="dsolve"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L598)\]

##### `dSolve` : `(%, %, %) -> %`

dSolve(expr, funcs, vars) solves the (list of) differential equation(s) expr for the function(s) funcs with independent variable(s) vars.

```fricas
x:=jWSExpression x;
fx:=derivative(operator('f),0,x)
fprimex:=derivative(operator('f),1,x)
dSolve(jWSEqual(fprimex + fx , a *sin(x)),fx,x)
```

##### `dSolve` : `(Equation(%), %, %) -> %`

dSolve(eq, func,var) solves the differential equation eq for the function(s) funcs with independent variable(s) vars.

```fricas
x:=jWSExpression x;
fx:=derivative(operator('f),0,x)
fprimex:=derivative(operator('f),1,x)
dSolve(fprimex + fx = a * sin(x)/cos(x),fx,x)
```

#### `dSolveValue` <a id="dsolvevalue"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L612)\]

##### `dSolveValue` : `(%, %, %) -> %`

dSolveValue(expr,funcs, vars) returns the value determined by the differential equation(s) in expr for the function(s) funcs with independent variable(s) vars.

```fricas
x:=jWSExpression x;
f:=derivative(operator('f),0)
f0:=derivative(operator('f),0,0)
fx:=derivative(operator('f),0,x)
fprimex:=derivative(operator('f),1,x)
dSolveValue(jWSExpression([jWSEqual(fprimex + fx , a *sin(x)/cos(x)), jWSEqual(f0,0)]),f,x)
```

##### `dSolveValue` : `(Equation(%), %, %) -> %`

dSolveValue(eq, func,var) returns the value determined by the differential equation eq for the function func with independent variable var.

#### `dawson` <a id="dawson"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L116)\]

dawson(x) computes the Dawson integral of x.

- **Signature**: `% -> %`

#### `decimalForm` <a id="decimalform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1066)\]

##### `decimalForm` : `% -> %`

decimalForm(x) returns the printed representation of x in decimal form i.e. without scientific notation.

##### `decimalForm` : `(%, %) -> %`

decimalForm(x, expr) returns the printed representation of x in decimal form with expr as specification (number of digits of precision or a 2-list of number of digits and the number of digits after the decimal point).

#### `decompose` <a id="decompose"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L852)\]

decompose(poly, x) is a polynomial decomposition function, here, related to x.

- **Signature**: `(%, %) -> WSList(%)`

#### `dedekindEta` <a id="dedekindeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L386)\]

dedekindEta(tau) computes the Dedekind modular elliptic eta.

- **Signature**: `% -> %`

#### `defined?` <a id="defined"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L47)\]

defined?(sym) checks whether or not sym is a WS symbol.

- **Signature**: `% -> Boolean`

#### `definingPolynomial` <a id="definingpolynomial"></a>

##### `definingPolynomial` : `% -> %`

definingPolynomial(x) returns an expression p such that p(x) = 0.

- **From**: `ExpressionSpace2(K)`

##### `definingPolynomial` : `() -> UP`

definingPolynomial() returns the minimal polynomial which generator() satisfies.

- **From**: `MonogenicAlgebra(R,UP)`

##### `definingPolynomial` : `() -> SparseUnivariatePolynomial(%)`

Operation defined in WSExpression.

#### `degree` <a id="degree"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L94)\]

degree() returns conversion factor from degrees to radians, π/180.

- **Signature**: `() -> %`

#### `delete` <a id="delete"></a>

delete(l, inds) deletes element(s) of the list l at index(es) inds.

- **Signature**: `(%, WSList(WSInteger)) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `denom` <a id="denom"></a>

##### `denom` : `% -> SparseMultivariatePolynomial(R,K)`

denom(f) returns the denominator of f viewed as a polynomial in the kernels over R.

- **From**: `FunctionSpace2(R,K)`

##### `denom` : `% -> SparseMultivariatePolynomial(%,Kernel(%))`

Operation defined in WSExpression.

#### `denominator` <a id="denominator"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L684)\]

denominator(expr) returns the denominator of expr.

- **Signature**: `% -> %`

#### `derivationCoordinates` <a id="derivationcoordinates"></a>

##### `derivationCoordinates` : `(Vector(%), (R -> R)) -> Matrix(R)`

derivationCoordinates(b, ') returns M such that b' = M b.

- **From**: `MonogenicAlgebra(R,UP)`

##### `derivationCoordinates` : `(Vector(%), (% -> %)) -> Matrix(%)`

Operation defined in WSExpression.

#### `derivative` <a id="derivative"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L590)\]

##### `derivative` : `(BasicOperator, %) -> %`

derivative(func,n) returns the derivative of order n of func.

```fricas
fprime:=derivative(operator('f),1)
```

##### `derivative` : `(BasicOperator, %, %) -> %`

derivative(func, n, var) returns the derivative of order n of func applied to var.

```fricas
x := jWSExpression x
fprimex:=derivative(operator('f),1,x)
```

#### `differentiate` <a id="differentiate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1640)\]

##### `differentiate` : `(%, S) -> %`

differentiate(x, v) computes the partial derivative of x with respect to v.

- **From**: `PartialDifferentialRing(S)`

##### `differentiate` : `(%, S, NonNegativeInteger) -> %`

differentiate(x, s, n) computes multiple partial derivatives, n-th derivative of x with respect to s.

- **From**: `PartialDifferentialRing(S)`

##### `differentiate` : `(%, List(S)) -> %`

differentiate(x, [s1, ...sn]) computes successive partial derivatives, differentiate(...differentiate(x, s1)..., sn).

- **From**: `PartialDifferentialRing(S)`

##### `differentiate` : `(%, List(S), List(NonNegativeInteger)) -> %`

differentiate(x, [s1, ..., sn], [n1, ..., nn]) computes multiple partial derivatives,

- **From**: `PartialDifferentialRing(S)`

##### `differentiate` : `(%, (R -> R)) -> %`

differentiate(x, deriv) differentiates x extending the derivation deriv on R.

- **From**: `DifferentialExtension(R)`

##### `differentiate` : `(%, (R -> R), NonNegativeInteger) -> %`

differentiate(x, deriv, n) differentiate x n times using a derivation which extends deriv on R.

- **From**: `DifferentialExtension(R)`

##### `differentiate` : `(%, %) -> %`

Operation defined in WSExpression.

##### `differentiate` : `(%, %, NonNegativeInteger) -> %`

Operation defined in WSExpression.

##### `differentiate` : `(%, List(%)) -> %`

Operation defined in WSExpression.

##### `differentiate` : `(%, List(%), List(NonNegativeInteger)) -> %`

Operation defined in WSExpression.

##### `differentiate` : `(%, List(Symbol)) -> %`

Operation defined in WSExpression.

##### `differentiate` : `(%, List(Symbol), List(NonNegativeInteger)) -> %`

Operation defined in WSExpression.

##### `differentiate` : `(%, (% -> %)) -> %`

Operation defined in WSExpression.

##### `differentiate` : `(%, (% -> %), NonNegativeInteger) -> %`

Operation defined in WSExpression.

##### `differentiate` : `(%, Symbol) -> %`

Operation defined in WSExpression.

##### `differentiate` : `(%, Symbol, NonNegativeInteger) -> %`

Operation defined in WSExpression.

#### `digamma` <a id="digamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L138)\]

##### `digamma` : `(%, %) -> %`

digamma(n,z) is the n-th derivative of the digamma function.

##### `digamma` : `% -> %`

digamma(x) is the logarithmic derivative of Gamma(x) (often written psi(x) in the literature).

- **From**: `SpecialFunctionCategory`

#### `dilog` <a id="dilog"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1437)\]

dilog(x) returns the dilogarithm of x, the integral of log(x) / (1 - x) dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `dimensions` <a id="dimensions"></a>

dimensions(agg) returns dimensions of agg.

- **Signature**: `% -> WSList(WSInteger)`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `diracDelta` <a id="diracdelta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1514)\]

diracDelta(x) is unit mass at zeros of x.

- **Signature**: `% -> %`
- **From**: `SpecialFunctionCategory`

#### `dirichletEta` <a id="dirichleteta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L388)\]

dirichletEta(z) computes the Dirichlet eta.

- **Signature**: `% -> %`

#### `dirichletL` <a id="dirichletl"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L173)\]

dirichletL(k,j,s) returns Dirichlet L-function of s, modulus k, index j.

- **Signature**: `(%, %, %) -> %`

#### `discriminant` <a id="discriminant"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L787)\]

##### `discriminant` : `(%, %) -> %`

discriminant(p, x) returns the discriminant of p with respect to x.

##### `discriminant` : `() -> R`

discriminant() = determinant(traceMatrix()).

- **From**: `FramedAlgebra(R,UP)`

##### `discriminant` : `Vector(%) -> R`

discriminant([v1, .., vn]) returns determinant(traceMatrix([v1, .., vn])).

- **From**: `FiniteRankAlgebra(R,UP)`

##### `discriminant` : `() -> %`

Operation defined in WSExpression.

##### `discriminant` : `Vector(%) -> %`

Operation defined in WSExpression.

#### `distribute` <a id="distribute"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L944)\]

##### `distribute` : `% -> %`

distribute(expr) distributes expr over addition. For illustration:

```fricas
distribute(jWSExpression "(x + y) * (a + b + c)")
```

##### `distribute` : `(%, %) -> %`

distribute(f,g) distributes f over g.

#### `divide` <a id="divide"></a>

divide(x, y) divides x by y producing a record containing a quotient and remainder, where the remainder is smaller (see sizeLess? from EuclideanDomain) than the divisor y.

- **Signature**: `(%, %) -> Record(quotient: %,remainder: %)`
- **From**: `EuclideanDomain`

#### `ellipticE` <a id="elliptice"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L374)\]

##### `ellipticE` : `% -> %`

ellipticE(x) computes the complete elliptic integral of the second kind.

##### `ellipticE` : `(%, %) -> %`

ellipticE(phi,m) computes the elliptic integral of the second kind.

#### `ellipticF` <a id="ellipticf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L372)\]

ellipticF(phi,m) computes the elliptic integral of the first kind.

- **Signature**: `(%, %) -> %`

#### `ellipticK` <a id="elliptick"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L369)\]

ellipticK(m) computes the complete elliptic integral of the first kind.

- **Signature**: `% -> %`

#### `ellipticPi` <a id="ellipticpi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L378)\]

##### `ellipticPi` : `(%, %) -> %`

ellipticPi(n,m) computes the complete elliptic integral of the third kind.

##### `ellipticPi` : `(%, %, %) -> %`

ellipticPi(n,phi,m) computes the elliptic integral of the third kind.

#### `ellipticTheta` <a id="elliptictheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L359)\]

ellipticTheta(a, u, q) computes the theta function, a ranges from 1 to 4.

- **Signature**: `(%, %, %) -> %`

#### `ellipticThetaPrime` <a id="ellipticthetaprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L362)\]

ellipticThetaPrime(a, u, q) computes the derivative of the theta function, a ranges from 1 to 4.

- **Signature**: `(%, %, %) -> %`

#### `elt` <a id="elt"></a>

##### `elt` : `(BasicOperator, %) -> %`

elt(op, x) or op(x) applies the unary operator op to x.

- **From**: `ExpressionSpace2(K)`

##### `elt` : `(BasicOperator, %, %) -> %`

elt(op, x, y) or op(x, y) applies the binary operator op to x and y.

- **From**: `ExpressionSpace2(K)`

##### `elt` : `(BasicOperator, %, %, %) -> %`

elt(op, x, y, z) or op(x, y, z) applies the ternary operator op to x, y and z.

- **From**: `ExpressionSpace2(K)`

##### `elt` : `(BasicOperator, %, %, %, %) -> %`

elt(op, x, y, z, t) or op(x, y, z, t) applies the 4-ary operator op to x, y, z and t.

- **From**: `ExpressionSpace2(K)`

##### `elt` : `(BasicOperator, %, %, %, %, %) -> %`

elt(op, x, y, z, t, s) applies the 5-ary operator op to x, y, z, t and s

- **From**: `ExpressionSpace2(K)`

##### `elt` : `(BasicOperator, %, %, %, %, %, %) -> %`

elt(op, x, y, z, t, s, r) applies the 6-ary operator op to x, y, z, t, s and r

- **From**: `ExpressionSpace2(K)`

##### `elt` : `(BasicOperator, %, %, %, %, %, %, %) -> %`

elt(op, x, y, z, t, s, r, q) applies the 7-ary operator op to x, y, z, t, s, r and q

- **From**: `ExpressionSpace2(K)`

##### `elt` : `(BasicOperator, %, %, %, %, %, %, %, %) -> %`

elt(op, x, y, z, t, s, r, q, p) applies the 8-ary operator op to x, y, z, t, s, r, q and p

- **From**: `ExpressionSpace2(K)`

##### `elt` : `(BasicOperator, %, %, %, %, %, %, %, %, %) -> %`

elt(op, x, y, z, t, s, r, q, p, o) applies the 9-ary operator op to x, y, z, t, s, r, q, p and o

- **From**: `ExpressionSpace2(K)`

##### `elt` : `(BasicOperator, List(%)) -> %`

elt(op, [x1, ..., xn]) or op([x1, ..., xn]) applies the n-ary operator op to x1, ..., xn.

- **From**: `ExpressionSpace2(K)`

##### `elt` : `(%, Integer) -> E`

elt(agg,i) returns the i-th element.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `elt` : `(%, Integer) -> %`

Operation defined in WSExpression.

#### `engineeringForm` <a id="engineeringform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1080)\]

##### `engineeringForm` : `% -> %`

engineeringForm(x) returns the printed representation of x in engineering form.

##### `engineeringForm` : `(%, %) -> %`

engineeringForm(x,n) returns the printed representation of x in engineering form with n digits of precision.

#### `erf` <a id="erf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L112)\]

##### `erf` : `(%, %) -> %`

erf(x,x1) computes the generalized error function.

##### `erf` : `% -> %`

erf(x) returns the error function of x, 2 / sqrt(%pi) times the integral of exp(-x^2) dx.

- **From**: `LiouvillianFunctionCategory`

#### `erfc` <a id="erfc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L114)\]

erfc(x) computes the complementary error function.

- **Signature**: `% -> %`

#### `erfi` <a id="erfi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1426)\]

erfi(x) denotes -%i*erf(%i*x)

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `euclideanSize` <a id="euclideansize"></a>

euclideanSize(x) returns the euclidean size of the element x. Error: if x is zero.

- **Signature**: `% -> NonNegativeInteger`
- **From**: `EuclideanDomain`

#### `eulerE` <a id="eulere"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L122)\]

##### `eulerE` : `WSInteger -> %`

eulerE(n) returns the Euler number En.

##### `eulerE` : `(WSInteger, %) -> %`

eulerE(n,z) returns the Euler E polynomial of degree n.

#### `eulerGamma` <a id="eulergamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L96)\]

eulerGamma() returns Euler's constant Gamma(γ).

- **Signature**: `() -> %`

#### `eulerPhi` <a id="eulerphi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L119)\]

eulerPhi(n) is the totient function, i.e. the number of integers that are relatively prime to n in the range [1,n].

- **Signature**: `WSInteger -> %`

#### `eval` <a id="eval"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1966)\]

##### `eval` : `(%, A, B) -> %`

eval(f, x, v) replaces x by v in f.

- **From**: `InnerEvalable(A,B)`

##### `eval` : `(%, BasicOperator, %, Symbol) -> %`

eval(x, s, f, y) replaces every s(a) in x by f(y) with y replaced by a for any a.

- **From**: `FunctionSpace2(R,K)`

##### `eval` : `(%, BasicOperator, (%% -> %%)) -> %`

eval(x, s, f) replaces every s(a) in x by f(a) for any a.

- **From**: `ExpressionSpace2(K)`

##### `eval` : `(%, BasicOperator, (List(%%) -> %%)) -> %`

eval(x, s, f) replaces every s(a1, .., am) in x by f(a1, .., am) for any a1, ..., am.

- **From**: `ExpressionSpace2(K)`

##### `eval` : `(%, Equation(R)) -> %`

eval(f, x = v) replaces x by v in f.

- **From**: `Evalable(R)`

##### `eval` : `(%, List(A), List(B)) -> %`

eval(f, [x1, ..., xn], [v1, ..., vn]) replaces xi by vi in f.

- **From**: `InnerEvalable(A,B)`

##### `eval` : `(%, List(BasicOperator), List(%), Symbol) -> %`

eval(x, [s1, ..., sm], [f1, ..., fm], y) replaces every si(a) in x by fi(y) with y replaced by a for any a.

- **From**: `FunctionSpace2(R,K)`

##### `eval` : `(%, List(BasicOperator), List((%% -> %%))) -> %`

eval(x, [s1, ..., sm], [f1, ..., fm]) replaces every si(a) in x by fi(a) for any a.

- **From**: `ExpressionSpace2(K)`

##### `eval` : `(%, List(BasicOperator), List((List(%%) -> %%))) -> %`

eval(x, [s1, ..., sm], [f1, ..., fm]) replaces every si(a1, ..., an) in x by fi(a1, ..., an) for any a1, ..., an.

- **From**: `ExpressionSpace2(K)`

##### `eval` : `(%, List(Equation(R))) -> %`

eval(f, [x1 = v1, ..., xn = vn]) replaces xi by vi in f.

- **From**: `Evalable(R)`

##### `eval` : `(%, List(Symbol), List(NonNegativeInteger), List((%% -> %%))) -> %`

eval(x, [s1, ..., sm], [n1, ..., nm], [f1, ..., fm]) replaces every si(a)^ni in x by fi(a) for any a.

- **From**: `FunctionSpace2(R,K)`

##### `eval` : `(%, List(Symbol), List(NonNegativeInteger), List((List(%%) -> %%))) -> %`

eval(x, [s1, ..., sm], [n1, ..., nm], [f1, ..., fm]) replaces every si(a1, ..., an)^ni in x by fi(a1, ..., an) for any a1, ..., am.

- **From**: `FunctionSpace2(R,K)`

##### `eval` : `(%, Symbol, NonNegativeInteger, (%% -> %%)) -> %`

eval(x, s, n, f) replaces every s(a)^n in x by f(a) for any a.

- **From**: `FunctionSpace2(R,K)`

##### `eval` : `(%, Symbol, NonNegativeInteger, (List(%%) -> %%)) -> %`

eval(x, s, n, f) replaces every s(a1, ..., am)^n in x by f(a1, ..., am) for any a1, ..., am.

- **From**: `FunctionSpace2(R,K)`

##### `eval` : `(%, %, %) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, BasicOperator, (% -> %)) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, BasicOperator, (List(%) -> %)) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, Equation(%)) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, Kernel(%), %) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, List(%), List(%)) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, List(BasicOperator), List((% -> %))) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, List(BasicOperator), List((List(%) -> %))) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, List(Equation(%))) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, List(Kernel(%)), List(%)) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, List(Symbol), List((% -> %))) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, List(Symbol), List((List(%) -> %))) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, List(Symbol), List(NonNegativeInteger), List((% -> %))) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, List(Symbol), List(NonNegativeInteger), List((List(%) -> %))) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, Symbol, (% -> %)) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, Symbol, (List(%) -> %)) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, Symbol, NonNegativeInteger, (% -> %)) -> %`

Operation defined in WSExpression.

##### `eval` : `(%, Symbol, NonNegativeInteger, (List(%) -> %)) -> %`

Operation defined in WSExpression.

#### `exactNumber?` <a id="exactnumber"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L63)\]

exactNumber?(x) checks whether or not x is an exact number.

- **Signature**: `% -> Boolean`

#### `exp` <a id="exp"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L92)\]

##### `exp` : `() -> %`

exp() returns ℯ (%e or exp(1)).

##### `exp` : `% -> %`

exp(x) returns %e to the power x.

- **From**: `ElementaryFunctionCategory`

#### `expToTrig` <a id="exptotrig"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L988)\]

expToTrig(expr) returns expr with exponentials converted to (hyperbolic) trigonometric functions.

- **Signature**: `% -> %`

#### `expand` <a id="expand"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L911)\]

##### `expand` : `% -> %`

expand(expr) puts out products and positive powers of integers of the expression expr.

##### `expand` : `(%, %) -> %`

expand(expr, opt) is the expand version with excluded pattern-s or any other options available (for example "Modulus->p").

#### `expandDenominator` <a id="expanddenominator"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L935)\]

expandDenominator(expr) expands denominators of rational expression expr.

- **Signature**: `% -> %`

#### `expandNumerator` <a id="expandnumerator"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L933)\]

expandNumerator(expr) expands numerators of rational expression expr.

- **Signature**: `% -> %`

#### `exponent` <a id="exponent"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L709)\]

##### `exponent` : `(%, %) -> %`

exponent(p,expr) returns the maximum exponent of p for expr.

```fricas
x:= jWSExpression x;y := jWSExpression y
p:=(x^2-2)^3*(y*x^3+x^11*y^7)*(y^5+x*y^2+x^11+y)
exponent(%,(x^2-2))
```

##### `exponent` : `(%, %, %) -> %`

exponent(p, expr, map) applies map to the exponents related to expr and returns it. By default map = "Max".

```fricas
x:= jWSExpression x;y := jWSExpression y
p:=expand((x^2-2)^3*(y*x^3+x^11*y^7)*(y^5+x*y^2+x^11+y))
exponent(p,x,"Min")
```

#### `expressIdealMember` <a id="expressidealmember"></a>

expressIdealMember([f1, ..., fn], h) returns a representation of h as a linear combination of the fi or "failed" if h is not in the ideal generated by the fi.

- **Signature**: `(List(%), %) -> Union(List(%),"failed")`
- **From**: `PrincipalIdealDomain`

#### `exquo` <a id="exquo"></a>

##### `exquo` : `(%, %) -> Union(%,"failed")`

exquo(a, b) either returns an element c such that c*b=a or "failed" if no such element can be found.

- **From**: `EntireRing`

##### `exquo` : `(%, R) -> Union(%,"failed")`

exquo(x, r) returns the exact quotient of x by r, or "failed" if r does not divide x exactly.

- **From**: `ComplexCategory(R)`

#### `extendedEuclidean` <a id="extendedeuclidean"></a>

##### `extendedEuclidean` : `(%, %) -> Record(coef1: %,coef2: %,generator: %)`

extendedEuclidean(x, y) returns a record rec where rec.coef1*x+rec.coef2*y = rec.generator and rec.generator is a gcd of x and y. The gcd is unique only up to associates if canonicalUnitNormal is not asserted. principalIdeal provides a version of this operation which accepts an arbitrary length list of arguments.

- **From**: `EuclideanDomain`

##### `extendedEuclidean` : `(%, %, %) -> Union(Record(coef1: %,coef2: %),"failed")`

extendedEuclidean(x, y, z) either returns a record rec where rec.coef1*x+rec.coef2*y=z or returns "failed" if z cannot be expressed as a linear combination of x and y.

- **From**: `EuclideanDomain`

#### `extendedExpand` <a id="extendedexpand"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L917)\]

extendedExpand(expr) puts out all products and positive powers of integers.

- **Signature**: `% -> %`

#### `extendedSimplify` <a id="extendedsimplify"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L892)\]

##### `extendedSimplify` : `% -> %`

extendedSimplify(expr) is the extended version of simplify. This is the full version of simplify.

```fricas
x:= jWSExpression x
expr := Gamma(x)/Gamma(x-1)
```

Compare with simplify(expr).

```fricas
extendedSimplify(expr)
```

##### `extendedSimplify` : `(%, %) -> %`

extendedSimplify(expr, assumptions) is the extended version of simplify with respect to assumptions or ExcludedForms. This is the full version.

#### `extract` <a id="extract"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1033)\]

##### `extract` : `(%, NonNegativeInteger) -> %`

extract(expr,i) returns the i-th element of expr seen as a list.

##### `extract` : `(%, WSExpression) -> %`

extract(agg, parts) extracts parts of agg.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `factor` <a id="factor"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L813)\]

##### `factor` : `% -> %`

factor(expr) factors the expression or polynomial expr.

##### `factor` : `(%, %) -> %`

factor(expr, opt) factors the expression or polynomial expr. For example:

```fricas
x := jWSExpression x;
factor(1 + x^2, "GaussianIntegers -> True")
```

##### `factor` : `% -> Factored(%)`

factor(x) returns the factorization of x into irreducibles.

- **From**: `UniqueFactorizationDomain`

#### `factorInteger` <a id="factorinteger"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L802)\]

factorInteger(n) factorizes the integer n into its prime factors. For example:

```fricas
n := jWSExpression 70421676397833365421106577172389167104000000000000
factorInteger n
```

- **Signature**: `% -> %`

#### `factorList` <a id="factorlist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L839)\]

factorList(expr) factors the expression or polynomial expr, but returns the result as a list of pairs (factor, exponent).

- **Signature**: `% -> WSList(WSList(%))`

#### `factorPolynomial` <a id="factorpolynomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L807)\]

##### `factorPolynomial` : `% -> %`

factorPolynomial(p) factorizes the polynomial p. For example:

```fricas
x := jWSExpression x
p:=expand(chebyshevT(7,x)* chebyshevU(9,x))
factorPolynomial p
```

##### `factorPolynomial` : `SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%))`

factorPolynomial(p) returns the factorization into irreducibles of the univariate polynomial p.

- **From**: `PolynomialFactorizationExplicit`

##### `factorPolynomial` : `SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if % has PFECAT`

Operation defined in WSExpression.

#### `factorSquareFree` <a id="factorsquarefree"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L820)\]

factorSquareFree(expr) factors the expression or polynomial expr in square free factors.

- **Signature**: `% -> %`

#### `factorSquareFreeList` <a id="factorsquarefreelist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L842)\]

factorSquareFreeList(expr) factors the expression or polynomial expr in square free factors but returns the result as a list of pairs (factor, exponent).

- **Signature**: `% -> WSList(WSList(%))`

#### `factorSquareFreePolynomial` <a id="factorsquarefreepolynomial"></a>

##### `factorSquareFreePolynomial` : `SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%))`

factorSquareFreePolynomial(p) factors the univariate polynomial p into irreducibles where p is known to be square free and primitive with respect to its main variable.

- **From**: `PolynomialFactorizationExplicit`

##### `factorSquareFreePolynomial` : `SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if % has PFECAT`

Operation defined in WSExpression.

#### `factorTerms` <a id="factorterms"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L823)\]

##### `factorTerms` : `% -> %`

factorTerms(p) factors out numerical factors of the expression or polynomial expr.

##### `factorTerms` : `(%, %) -> %`

factorTerms(p, var) factors out numerical factors of the expression or polynomial expr without those related to var.

##### `factorTerms` : `(%, WSList(%)) -> %`

factorTerms(p, vars) factors the expression or polynomial expr by pulling out numerical factors without those related to var(s).

#### `factorTermsList` <a id="factortermslist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L832)\]

##### `factorTermsList` : `% -> WSList(%)`

factorTermsList(expr) is the counterpart of factorTerms but here returned as a list of pairs (numerical factor, polynomial factor).

##### `factorTermsList` : `(%, %) -> WSList(%)`

factorTermsList(expr, vars) is the counterpart of factorTerms but here returned as a list of pairs (numerical factor, polynomial factor). The numerical factors related to var(s) are not factored.

#### `factorial` <a id="factorial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1574)\]

factorial(n) computes the factorial of n (denoted in the literature by n!) Note: n! = n (n-1)! when n > 0; also, 0! = 1.

- **Signature**: `% -> %`
- **From**: `CombinatorialFunctionCategory`

#### `factorials` <a id="factorials"></a>

##### `factorials` : `% -> %`

factorials(f) rewrites the permutations and binomials in f in terms of factorials.

- **From**: `CombinatorialOpsCategory`

##### `factorials` : `(%, Symbol) -> %`

factorials(f, x) rewrites the permutations and binomials in f involving x in terms of factorials.

- **From**: `CombinatorialOpsCategory`

#### `fibonacci` <a id="fibonacci"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L245)\]

fibonacci(n, x) returns the Fibonacci polynomial or evaluates it at x if x is a number.

- **Signature**: `(%, %) -> %`

#### `findInstance` <a id="findinstance"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L664)\]

##### `findInstance` : `(Equation(%), %) -> WSList(WSList(%))`

findInstance(expr,lvars) tries to find an instance of the equation in expr.

##### `findInstance` : `(%, %) -> WSList(WSList(%))`

findInstance(expr,lvars) tries to find an instance of the (in)equation in expr.

##### `findInstance` : `(Equation(%), %, %) -> WSList(WSList(%))`

findInstance(expr,lvars,dom) tries to find an instance of the equation in expr.

##### `findInstance` : `(Equation(%), %, %, %) -> WSList(WSList(%))`

findInstance(expr,lvars,dom,n) tries to find n instance(s) to the equation in expr.

##### `findInstance` : `(%, %, %) -> WSList(WSList(%))`

findInstance(expr,lvars,dom) tries to find an instance to the equation in expr.

##### `findInstance` : `(%, %, %, %) -> WSList(WSList(%))`

findInstance(expr,lvars,dom, n) tries to find n instance(s) to the (in)equation in expr.

#### `findRoot` <a id="findroot"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L865)\]

findRoot(expr,start) tries to find the root of expr starting at start.

```fricas
x:= jWSExpression x
findRoot(sin(x) + cos(x), "{x, 0}")
```

- **Signature**: `(%, %) -> %`

#### `first` <a id="first"></a>

##### `first` : `% -> E`

first(agg) returns the first element of agg.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `first` : `% -> %`

Operation defined in WSExpression.

#### `floor` <a id="floor"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L88)\]

floor(x) returns the greatest integer less than or equal to x

- **Signature**: `% -> %`

#### `fourier` <a id="fourier"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L561)\]

##### `fourier` : `% -> %`

fourier(expr) returns the discrete Fourier transform from a list of numbers.

##### `fourier` : `(%, %) -> %`

fourier(expr, pos) returns the elements of the discrete Fourier transform from a list of numbers with position(s) in the list pos.

##### `fourier` : `WSList(%) -> WSList(%)`

fourier(list) returns the discrete Fourier transform from the list of numbers.

##### `fourier` : `(WSList(%), WSList(%)) ->WSList(%)`

fourier(list, lpos) returns the elements of the discrete Fourier transform from a list of numbers with position(s) in the list lpos.

##### `fourier` : `(WSList(%), WSList(%)) -> WSList(%)`

Operation defined in WSExpression.

#### `fractionPart` <a id="fractionpart"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1382)\]

fractionPart(x) returns the fractional part of x. Note: fractionPart(x) = x - floor(x).

- **Signature**: `% -> %`
- **From**: `SpecialFunctionCategory`

#### `freeOf?` <a id="freeof"></a>

##### `freeOf?` : `(%, %) -> Boolean`

freeOf?(x, y) tests if x does not contain any occurrence of y, where y is a single kernel.

- **From**: `ExpressionSpace2(K)`

##### `freeOf?` : `(%, Symbol) -> Boolean`

freeOf?(x, s) tests if x does not contain any operator whose name is s.

- **From**: `ExpressionSpace2(K)`

#### `fresnelC` <a id="fresnelc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1434)\]

fresnelC(x) is the Fresnel integral C, defined by C(x) = integrate(cos(%pi*t^2/2), t=0..x)

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `fresnelS` <a id="fresnels"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1435)\]

fresnelS(x) is the Fresnel integral S, defined by S(x) = integrate(sin(%pi*t^2/2), t=0..x)

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `fromCoefficientRules` <a id="fromcoefficientrules"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L734)\]

fromCoefficientRules(list, vars) constructs the polynomial from the list of coefficients and exponents rules.

```fricas
x:= jWSExpression x;y := jWSExpression y
coefficientRules((x + y)^2+x^11,jWSExpression [x,y])
fromCoefficientRules(%, jWSExpression [x,y])
```

- **Signature**: `(%, %) -> %`

#### `functionExpand` <a id="functionexpand"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L966)\]

##### `functionExpand` : `% -> %`

functionExpand(expr) tries to expand functions in expr to more elementary functions. For example:

```fricas
functionExpand sphericalBesselJ(3,8)
```

##### `functionExpand` : `(%, %) -> %`

functionExpand(expr,assumptions) tries to expand functions in expr to more elementary functions assuming that assumptions are satisfied.

#### `gammaRegularized` <a id="gammaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L225)\]

gammaRegularized(a,x) computes the regularized incomplete Gamma function.

- **Signature**: `(%, %) -> %`

#### `gcd` <a id="gcd"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1900)\]

##### `gcd` : `(%, %) -> %`

gcd(x, y) returns the greatest common divisor of x and y.

- **From**: `GcdDomain`

##### `gcd` : `List(%) -> %`

gcd(l) returns the common gcd of the elements in the list l.

- **From**: `GcdDomain`

#### `gcdPolynomial` <a id="gcdpolynomial"></a>

gcdPolynomial(p, q) returns the greatest common divisor (gcd) of univariate polynomials over the domain

- **Signature**: `(SparseUnivariatePolynomial(%), SparseUnivariatePolynomial(%)) -> SparseUnivariatePolynomial(%)`
- **From**: `GcdDomain`

#### `gegenbauerC` <a id="gegenbauerc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L264)\]

##### `gegenbauerC` : `(%, %) -> %`

gegenbauerC(n,x) returns the renormalized form of the Gegenbauer polynomial or evaluates it at x if x is a number.

##### `gegenbauerC` : `(%, %, %) -> %`

gegenbauerC(n,lambda,x) returns the Gegenbauer polynomial or evaluates it at x if x is a number.

#### `generator` <a id="generator"></a>

generator() returns the generator for this domain.

- **Signature**: `() -> %`
- **From**: `MonogenicAlgebra(R,UP)`

#### `goldenRatio` <a id="goldenratio"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L102)\]

goldenRatio() returns the golden ratio.

- **Signature**: `() -> %`

#### `groebnerBasis` <a id="groebnerbasis"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L789)\]

##### `groebnerBasis` : `(%, %) -> WSList(%)`

groebnerBasis(lpoly, lvar) computes a Groebner basis from the list of polynomials lpoly relative to the list of vars lvars.

##### `groebnerBasis` : `(%, %, %) -> WSList(%)`

groebnerBasis(lpoly, lvar, opt) computes a Groebner basis from the list of polynomials lpoly relative to the list of variables in lvars without variables in opt. Opt can also give the modulus to compute it: "Modulus -> p".

#### `ground` <a id="ground"></a>

##### `ground` : `% -> R`

ground(f) returns f as an element of R. An error occurs if f is not an element of R.

- **From**: `FunctionSpace2(R,K)`

##### `ground` : `% -> %`

Operation defined in WSExpression.

#### `ground?` <a id="ground"></a>

ground?(f) tests if f is an element of R.

- **Signature**: `% -> Boolean`
- **From**: `FunctionSpace2(R,K)`

#### `gudermannian` <a id="gudermannian"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L134)\]

gudermannian(z) computes the Gudermannian of z.

- **Signature**: `% -> %`

#### `guessGeneratingFunction` <a id="guessgeneratingfunction"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L394)\]

##### `guessGeneratingFunction` : `(WSList(%), %) -> %`

guessGeneratingFunction(l,x) finds the generating function applied to x from the list of coefficients l. Or from the list of lists l (list of pairs as list (n-th, coef-th)). For example:

```fricas
guessGeneratingFunction([1,2,4,8],x)
```

##### `guessGeneratingFunction` : `(%, %) -> %`

guessGeneratingFunction(l,x) finds the generating function applied to x from the list of coefficients l. Or from the list of lists l (list of pairs as list (n-th, coef-th)). For example:

```fricas
guessGeneratingFunction(jWSExpression("{1,2,4,8}"),x)
```

#### `guessSequenceFunction` <a id="guesssequencefunction"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L406)\]

##### `guessSequenceFunction` : `WSList(WSInteger) -> %`

guessSequenceFunction(l) finds the sequence from the list of coefficients l. For example:

```fricas
guessSequenceFunction(jWSExpression("{1,2,4,8}"))
```

##### `guessSequenceFunction` : `% -> %`

guessSequenceFunction(l) finds the sequence from the list of coefficients l Or from the list of lists l (list of pairs as list (n-th, coef-th)). For example:

```fricas
guessSequenceFunction(jWSExpression("{1,2,4,8}"))
```

##### `guessSequenceFunction` : `(%, %) -> %`

guessSequenceFunction(l,x) finds the sequence function applied to x from the list of coefficients l. For example:

```fricas
guessSequenceFunction([1,2,4,jWSInteger 8]::WSList(WSInteger),x)
```

#### `hahnQ` <a id="hahnq"></a>

hahnQ(n, a, b, N, z) s the Hahn polynomial.

- **Signature**: `(%, %, %, %, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `hahnR` <a id="hahnr"></a>

hahnR(n, c, d, N, z) is the dual Hahn polynomial.

- **Signature**: `(%, %, %, %, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `hahnS` <a id="hahns"></a>

hahnS(n, a, b, c, z) is the continuous dual Hahn polynomial.

- **Signature**: `(%, %, %, %, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `hahn_p` <a id="hahn_p"></a>

hahn_p(n, a, b, bar_a, bar_b, z) is the continuous Hahn polynomial.

- **Signature**: `(%, %, %, %, %, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `hankelH1` <a id="hankelh1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1497)\]

hankelH1(v, z) is first Hankel function (Bessel function of the third kind).

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `hankelH2` <a id="hankelh2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1498)\]

hankelH2(v, z) is the second Hankel function (Bessel function of the third kind).

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `haversine` <a id="haversine"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L128)\]

haversine(z) computes the Haversine of z.

- **Signature**: `% -> %`

#### `height` <a id="height"></a>

height(f) returns the highest nesting level appearing in f. Constants have height 0. Symbols have height 1. For any operator op and expressions f1, ..., fn, op(f1, ..., fn) has height equal to 1 + max(height(f1), ..., height(fn)).

- **Signature**: `% -> NonNegativeInteger`
- **From**: `ExpressionSpace2(K)`

#### `hermiteH` <a id="hermiteh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L276)\]

hermiteH(n, x) returns the Hermite polynomial or evaluates it at x if x is a number.

- **Signature**: `(%, %) -> %`

#### `hornerForm` <a id="hornerform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L950)\]

hornerForm(expr, x) returns the Horner form of expr (minimizing multiplications).

- **Signature**: `(%, %) -> %`

#### `hurwitzLerchPhi` <a id="hurwitzlerchphi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L211)\]

hurwitzLerchPhi(z,s,a) computes the Hurwitz–Lerch transcendent phi function.

- **Signature**: `(%, %, %) -> %`

#### `hurwitzZeta` <a id="hurwitzzeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L209)\]

hurwitzZeta(s,a) computes the Hurwitz zeta.

- **Signature**: `(%, %) -> %`

#### `hyperFactorial` <a id="hyperfactorial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L243)\]

hyperFactorial(n) computes the hyperfactorial of n.

- **Signature**: `% -> %`

#### `hypergeometric0F1` <a id="hypergeometric0f1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L293)\]

hypergeometric0F1(a,z) is the hypergeometric 0F1.

- **Signature**: `(%, %) -> %`

#### `hypergeometric0F1Regularized` <a id="hypergeometric0f1regularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L295)\]

hypergeometric0F1Regularized(a,z) is the regularized hypergeometric 0F1.

- **Signature**: `(%, %) -> %`

#### `hypergeometric1F1` <a id="hypergeometric1f1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L297)\]

hypergeometric1F1(a,b,z) is the Kummer confluent hypergeometric function 1F1.

- **Signature**: `(%, %, %) -> %`

#### `hypergeometric1F1Regularized` <a id="hypergeometric1f1regularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L300)\]

hypergeometric1F1Regularized(a,b,z) is the regularized confluent hypergeometric function 1F1.

- **Signature**: `(%, %, %) -> %`

#### `hypergeometricU` <a id="hypergeometricu"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L303)\]

hypergeometricU(a,b,z) is the confluent hypergeometric function U.

- **Signature**: `(%, %, %) -> %`

#### `imag` <a id="imag"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1315)\]

##### `imag` : `% -> R`

imag(x) returns imaginary part of x.

- **From**: `ComplexCategory(R)`

##### `imag` : `% -> %`

Operation defined in WSExpression.

#### `imaginary` <a id="imaginary"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1304)\]

imaginary() = sqrt(-1) = %i.

- **Signature**: `() -> %`
- **From**: `ComplexCategory(R)`

#### `insert` <a id="insert"></a>

##### `insert` : `(%, E, WSInteger) -> %`

insert(l, elt, ind) inserts elt to the list l at index ind.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `insert` : `(%, %, WSInteger) -> %`

Operation defined in WSExpression.

#### `integer?` <a id="integer"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L54)\]

integer?(i) checks whether or not i is an integer.

- **Signature**: `% -> Boolean`

#### `integral` <a id="integral"></a>

##### `integral` : `(%, SegmentBinding(%)) -> %`

integral(f, x = a..b) returns the formal definite integral of f dx for x between a and b.

- **From**: `PrimitiveFunctionCategory`

##### `integral` : `(%, Symbol) -> %`

integral(f, x) returns the formal integral of f dx.

- **From**: `PrimitiveFunctionCategory`

#### `integrate` <a id="integrate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L511)\]

##### `integrate` : `(%, %) -> %`

integrate(expr, opts|var) integrates expr with respect to opt or var as options. For example:

```fricas
x:=jWSExpression x;integrate(1/(x^4-1),x)
opt:=jWSList [x,-1,1]
integrate(cos(x),opt)
```

=> 2 sin(1)

```fricas
integrate(cos(x),"{x,-1.0,1.0}")
```

=> 1.68294

##### `integrate` : `(%, %, Segment(Integer)) -> %`

integrate(expr, var, seg) is the definite integration of expr with respect to var using segment seg.

##### `integrate` : `(%, Symbol) -> %`

integrate(expr, var) is the indefinite integration of expr with respect to var.

#### `interpolatingPolynomial` <a id="interpolatingpolynomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L855)\]

interpolatingPolynomial(lpoly,x) interpolates the list of polynomials lpoly with respect to x.

- **Signature**: `(%, %) -> %`

#### `intersection` <a id="intersection"></a>

intersection(agg1, agg2) is the intersection operator.

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `inv` <a id="inv"></a>

inv x returns the multiplicative inverse of x. Error: if x is 0.

- **Signature**: `% -> %`
- **From**: `DivisionRing`

#### `inverseBetaRegularized` <a id="inversebetaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L229)\]

inverseBetaRegularized(s,a,b) computes the inverse Beta regularized function.

- **Signature**: `(%, %, %) -> %`

#### `inverseErf` <a id="inverseerf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L216)\]

inverseErf(x) computes the inverse error function of x.

- **Signature**: `% -> %`

#### `inverseErfc` <a id="inverseerfc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L218)\]

inverseErfc(x) computes the inverse complementary error function of x.

- **Signature**: `% -> %`

#### `inverseFourier` <a id="inversefourier"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L575)\]

##### `inverseFourier` : `% -> %`

inverseFourier(expr) returns the discrete inverse Fourier transform from a list of numbers.

##### `inverseFourier` : `(%, %) -> %`

inverseFourier(expr, pos) returns the elements of the discrete inverse Fourier transform from a list of numbers with position(s) in the list pos.

##### `inverseFourier` : `WSList(%) -> %`

inverseFourier(expr) returns the discrete inverse Fourier transform from a list of numbers.

##### `inverseFourier` : `(WSList(%), WSList(%)) -> WSList(%)`

inverseFourier(list, lpos) returns the elements of the discrete inverse Fourier transform from a list of numbers with position(s) in the list lpos.

#### `inverseGammaRegularized` <a id="inversegammaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L231)\]

inverseGammaRegularized(a,s) computes the inverse Gamma regularized function.

- **Signature**: `(%, %) -> %`

#### `inverseGudermannian` <a id="inversegudermannian"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L136)\]

inverseGudermannian(z) computes the inverse Gudermannian.

- **Signature**: `% -> %`

#### `inverseHaversine` <a id="inversehaversine"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L130)\]

inverseHaversine(z) computes the inverse Haversine.

- **Signature**: `% -> %`

#### `inverseJacobiCn` <a id="inversejacobicn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L357)\]

inverseJacobiCn(nu, m) computes the inverse Jacobi CN elliptic function.

- **Signature**: `(%, %) -> %`

#### `inverseJacobiSn` <a id="inversejacobisn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L355)\]

inverseJacobiSn(nu, m) computes the inverse Jacobi SN elliptic function.

- **Signature**: `(%, %) -> %`

#### `irreducible?` <a id="irreducible"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L846)\]

##### `irreducible?` : `% -> Boolean`

irreducible?(p) checks whether or not p is irreducible.

##### `irreducible?` : `(%, %) -> Boolean`

irreducible?(p) checks whether or not p is irreducible over Gaussian rationals or algebraic extensions.

#### `is?` <a id="is"></a>

##### `is?` : `(%, BasicOperator) -> Boolean`

is?(x, op) tests if x is a kernel and if its operator is op.

- **From**: `ExpressionSpace2(K)`

##### `is?` : `(%, Symbol) -> Boolean`

is?(x, s) tests if x is a kernel and if the name of its operator is s.

- **From**: `ExpressionSpace2(K)`

#### `isExpt` <a id="isexpt"></a>

##### `isExpt` : `% -> Union(Record(var: K,exponent: Integer),"failed")`

isExpt(p) returns [x, n] if p = x^n and n ~= 0.

- **From**: `FunctionSpace2(R,K)`

##### `isExpt` : `(%, BasicOperator) -> Union(Record(var: K,exponent: Integer),"failed")`

isExpt(p, op) returns [x, n] if p = x^n and n ~= 0 and x = op(a).

- **From**: `FunctionSpace2(R,K)`

##### `isExpt` : `(%, Symbol) -> Union(Record(var: K,exponent: Integer),"failed")`

isExpt(p, f) returns [x, n] if p = x^n and n ~= 0 and x = f(a).

- **From**: `FunctionSpace2(R,K)`

##### `isExpt` : `% -> Union(Record(var: Kernel(%),exponent: Integer),"failed")`

Operation defined in WSExpression.

##### `isExpt` : `(%, BasicOperator) -> Union(Record(var: Kernel(%),exponent: Integer),"failed")`

Operation defined in WSExpression.

##### `isExpt` : `(%, Symbol) -> Union(Record(var: Kernel(%),exponent: Integer),"failed")`

Operation defined in WSExpression.

#### `isMult` <a id="ismult"></a>

##### `isMult` : `% -> Union(Record(coef: Integer,var: K),"failed")`

isMult(p) returns [n, x] if p = n * x and n ~= 0.

- **From**: `FunctionSpace2(R,K)`

##### `isMult` : `% -> Union(Record(coef: Integer,var: Kernel(%)),"failed")`

Operation defined in WSExpression.

#### `isPlus` <a id="isplus"></a>

isPlus(p) returns [m1, ..., mn] if p = m1 +...+ mn and n > 1.

- **Signature**: `% -> Union(List(%),"failed")`
- **From**: `FunctionSpace2(R,K)`

#### `isPower` <a id="ispower"></a>

isPower(p) returns [x, n] if p = x^n and n ~= 0.

- **Signature**: `% -> Union(Record(val: %,exponent: Integer),"failed")`
- **From**: `FunctionSpace2(R,K)`

#### `isTimes` <a id="istimes"></a>

isTimes(p) returns [a1, ..., an] if p = a1*...*an and n > 1.

- **Signature**: `% -> Union(List(%),"failed")`
- **From**: `FunctionSpace2(R,K)`

#### `jWSAggregate` <a id="jwsaggregate"></a>

##### `jWSAggregate` : `List(E) -> %`

jWSAggregate(list) constructs agg to a WSAggregate.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `jWSAggregate` : `List(%) -> %`

Operation defined in WSExpression.

#### `jWSAssociation` <a id="jwsassociation"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1205)\]

jWSAssociation(rules) returns the associations (key->value) created from the rules.

- **Signature**: `WSList(%) -> %`

#### `jWSData` <a id="jwsdata"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1190)\]

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

#### `jWSEqual` <a id="jwsequal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1220)\]

jWSEqual(lhs,rhs) returns the Julia WS equality lhs == rhs.

- **Signature**: `(%, %) -> %`

#### `jWSExpression` <a id="jwsexpression"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1240)\]

##### `jWSExpression` : `Symbol -> %`

jWSExpression(sym) coerces sym to a WSExpression. For example: x := jWSExpression x

##### `jWSExpression` : `Integer -> %`

jWSExpression(z) returns the Integer z as a WSExpression.

##### `jWSExpression` : `Fraction(Integer) -> %`

jWSExpression(q) returns the Fraction(Integer) q as a WSExpression.

##### `jWSExpression` : `DoubleFloat -> %`

jWSExpression(r) returns the DoubleFloat as a WSExpression.

##### `jWSExpression` : `JLFloat64 -> %`

jWSExpression(r) returns the JLFloat64 as a WSExpression.

##### `jWSExpression` : `Float -> %`

jWSExpression(r) returns the Float r as a WSExpression.

##### `jWSExpression` : `JLFloat -> %`

jWSExpression(r) returns the JLFloat r as a WSExpression.

##### `jWSExpression` : `List(%) -> %`

jWSExpression(list) returns the list of WSExpression as a WSExpression.

##### `jWSExpression` : `String -> %`

jWSExpression(str) constructs str as a WSExpression evaluating str as a WS Language expression. For example:

```fricas
jWSExpression "Factorial[5]"
jWSExpression "3.14159"
jlWSDateString(jWSExpression "Tomorrow")
toString jWSExpression "TextSentences[WikipediaData[_"Sun_"]][[;; 40]]"
jWSExpression "Probability[x < 1, x \[Distributed] NormalDistribution[]]"
```

#### `jWSGreater` <a id="jwsgreater"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1228)\]

jWSGreater(lhs,rhs) returns the Julia WS inequality lhs > rhs.

- **Signature**: `(%, %) -> %`

#### `jWSGreaterEqual` <a id="jwsgreaterequal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1230)\]

jWSGreaterEqual(lhs,rhs) returns the Julia WS inequality lhs >= rhs.

- **Signature**: `(%, %) -> %`

#### `jWSInterpret` <a id="jwsinterpret"></a>

##### `jWSInterpret` : `String -> %`

jWSInterpret(form) interprets form.

- **From**: [`WSObject`](WSObject.md)

##### `jWSInterpret` : `(String, String) -> %`

jWSInterpret(Type|Form, Expr) interprets Expr to be of type Type or Form using the WS Language. For example:

```fricas
jWSInterpret("Number","3.2")@WSREAL
jWSInterpret("Real","3.2")@WSREAL
jWSInterpret("Location","Lille")$WSEXPR
See jWSExpression "$InterpreterTypes"
```

- **From**: [`WSObject`](WSObject.md)

##### `jWSInterpret` : `(String, String, String) -> %`

jWSInterpret(form1,form2,form3) interprets forms.

- **From**: [`WSObject`](WSObject.md)

#### `jWSLess` <a id="jwsless"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1224)\]

jWSLess(lhs,rhs) returns the Julia WS inequality lhs < rhs.

- **Signature**: `(%, %) -> %`

#### `jWSLessEqual` <a id="jwslessequal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1226)\]

jWSLessEqual(lhs,rhs) returns the Julia WS inequality lhs <= rhs.

- **Signature**: `(%, %) -> %`

#### `jWSNotEqual` <a id="jwsnotequal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1222)\]

jWSNotEqual(lhs,rhs) returns the Julia WS inequality lhs != rhs.

- **Signature**: `(%, %) -> %`

#### `jWSQuantity` <a id="jwsquantity"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1232)\]

##### `jWSQuantity` : `% -> %`

jWSQuantity(jWSString(u)) returns quantity unit u of 1. For example:

```fricas
jWSQuantity jWSString "Meter"
```

##### `jWSQuantity` : `(%, %) -> %`

jWSQuantity(x,jWSString(u)) returns quantity unit u of x. For example:

```fricas
jWSQuantity(1.2, jWSString "Meter")
```

#### `jWSRule` <a id="jwsrule"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1212)\]

##### `jWSRule` : `(%, %) -> %`

jWSRule(lhs,rhs) returns the Julia WS rule lhs->rhs.

##### `jWSRule` : `Equation(%) -> %`

jWSRule(eq) returns the Julia WS rule lhs->rhs for the equation eq. For example:

```fricas
x := jWSExpression x
p := 1/2 * legendreQ(5,x)
replaceAll(p, jWSRule(x = jWSExpression "1.55555556444883838383833777333333333"))
```

#### `jWSTable` <a id="jwstable"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1208)\]

##### `jWSTable` : `(%, %) -> WSList(%)`

jWSTable(expr, range) applies the expr to the defined range.

##### `jWSTable` : `(%, %, %) -> WSList(WSList(%))`

jWSTable(expr, range1, range2) applies the expr to the defined ranges.

#### `jacobiAmplitude` <a id="jacobiamplitude"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L353)\]

jacobiAmplitude(u,m) computes the amplitude function am.

- **Signature**: `(%, %) -> %`

#### `jacobiCn` <a id="jacobicn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1614)\]

jacobiCn(z, m) is the Jacobi elliptic cn function, defined by jacobiCn(z, m)^2 + jacobiSn(z, m)^2 = 1 and jacobiCn(0, m) = 1.

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `jacobiDn` <a id="jacobidn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1615)\]

jacobiDn(z, m) is the Jacobi elliptic dn function, defined by jacobiDn(z, m)^2 + m*jacobiSn(z, m)^2 = 1 and jacobiDn(0, m) = 1.

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `jacobiP` <a id="jacobip"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L290)\]

jacobiP(n, a, b, x) returns the Jacobi polynomial or evaluates it at x if x is a number.

- **Signature**: `(%, %, %, %) -> %`

#### `jacobiSn` <a id="jacobisn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1613)\]

jacobiSn(z, m) is the Jacobi elliptic sn function, defined by the formula jacobiSn(ellipticF(z, m), m) = z.

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `jacobiTheta` <a id="jacobitheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L233)\]

##### `jacobiTheta` : `(WSInteger, %, %) -> %`

jacobiTheta(n, z, m) are the Jacobi Theta functions.

##### `jacobiTheta` : `(%, %) -> %`

jacobiTheta(z, m) is the Jacobi Theta function in Jacobi notation.

- **From**: `SpecialFunctionCategory`

#### `jacobiZeta` <a id="jacobizeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L383)\]

jacobiZeta(ϕ,m) computes the Jacobi Zeta function.

- **Signature**: `(%, %) -> %`

#### `jlAbout` <a id="jlabout"></a>

jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia. In the Julia interpreter, enter in the package management mode with ']', and issue: pkg> add "https://github.com/tecosaur/About.jl"

- **Signature**: `% -> Void`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlApply` <a id="jlapply"></a>

##### `jlApply` : `(String, %) -> JLObject`

jlApply(func, obj) applies the function func with obj as parameter and returns the result as a FriCAS JLObject. For example, using JLMatrix(JLObjFloat64):

```fricas
M:=nrand(4,4);
jlApply("svd", M::JLMatrix(JLObjFloat64)).S
should be "equivalent" to svdvals(M).
```

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlApply` : `(String, %, %) -> JLObject`

jlApply(func, obj1, obj2) applies the function func with obj1 and obj2 as parameters and returns the result as a FriCAS JLObject. For example (equivalent to map(cos, v)):

```fricas
v:=urand01(5)$JLVector(JLFloat)
jlApply("map", "cos", coerce v)
```

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlApply` : `(String, %, %, %) -> JLObject`

jlApply(func, obj1, obj2, obj3) applies the function func with obj1, obj2 and obj3 as parameters and returns the result as a FriCAS JLObject.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlApply` : `(String, %, %, %, %) -> JLObject`

jlApply(func, obj1, obj2, obj3, obj4) applies the function func with obj1, obj2, obj3 and obj4 as parameters and returns the result as a FriCAS JLObject.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlApply` : `(String, %, %, %, %, %) -> JLObject`

jlApply(func, obj1, obj2, obj3, obj4, obj5) applies the function func with obj1, obj2, obj3, obj4 and obj5 as parameters and returns the result as a FriCAS JLObject.

- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlDisplay` <a id="jldisplay"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1049)\]

##### `jlDisplay` : `WSExpression -> WSExpression`

jlDisplay(expr) returns the traditional form of expr. This is equivalent to: jWSExpression "Format[Sin[x]]" => sin(x)

##### `jlDisplay` : `(WSExpression, WSExpression) -> WSExpression`

jlDisplay(expr, form) returns the `form` form of expr resulting for example in: "Format[Sin[x], TeXForm]" => sin x

##### `jlDisplay` : `% -> Void`

jlDisplay(v) pretty prints v (à la Julia).

- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlDump` <a id="jldump"></a>

jlDump(obj) dumps (shows) the Julia object (internal structure with type).

- **Signature**: `JLObject -> Void`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlEval` <a id="jleval"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1011)\]

##### `jlEval` : `(%, String) -> %`

jlEval(expr, param) evaluates expression expr with param as parameter(s). See also `eval` or `replaceAll`. For example:

```fricas
x:=jWSExpression("x");jlEval(sqrt(x),"x=2.0")
```

##### `jlEval` : `(%, String, String) -> %`

jlEval(expr, param1, param2) evaluates expression expr with param1 and param2 as parameters. See also `eval` or `replaceAll`.

```fricas
a:=jWSExpression("a");b:=jWSExpression("b");
jlEval(sqrt(a^2+b^2),"a=1.0","b=1.0")
```

##### `jlEval` : `(%, String, String, String) -> %`

jlEval(expr, param11, param2, param3) evaluates expression expr with param1, param2 and param3 as parameters. See also `eval` or `replaceAll`.

##### `jlEval` : `% -> %`

jlEval(expr) evaluates expr using the WS Transport Protocol.

- **From**: [`WSObject`](WSObject.md)

#### `jlFieldNames` <a id="jlfieldnames"></a>

jlFieldNames(obj) returns the field names of obj.

- **Signature**: `% -> JLObject`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlGetField` <a id="jlgetfield"></a>

jlGetField(obj, sym) returns the property/element sym of obj.

- **Signature**: `(%, JLSymbol) -> JLObject`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlGetJuliaIndex` <a id="jlgetjuliaindex"></a>

jlGetJuliaIndex(obj) returns the string that allows access to the Julia indexed dictionary index referencing the object obj. Convenience function for use in the interpreter (jlref). For example: jlGetJuliaIndex(df) => "getindex(refs,10)"

- **Signature**: `% -> String`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlGetProperty` <a id="jlgetproperty"></a>

jlGetProperty(obj, sym) returns the property/element sym of obj.

- **Signature**: `(%, JLSymbol) -> JLObject`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlHead` <a id="jlhead"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1881)\]

jlHead(expr) returns the Head type of expr.

- **Signature**: `% -> WSSymbol`
- **From**: [`WSObject`](WSObject.md)

#### `jlId` <a id="jlid"></a>

jlId(obj) returns the Julia indexed dictionary index referencing the object obj.

- **Signature**: `% -> Integer`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlNames` <a id="jlnames"></a>

jlNames(obj) returns the names of obj depending of the type of obj.

- **Signature**: `% -> JLObject`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlObject` <a id="jlobject"></a>

jlObject() returns the internal Julia name of the Julia module used. For example:

```fricas
jlObject()$NMUnivariatePolynomial(NINT,'x)
```

- **Signature**: `() -> String`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlPropertyNames` <a id="jlpropertynames"></a>

jlPropertyNames(obj) returns the property/element names of obj.

- **Signature**: `% -> JLObject`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlRef` <a id="jlref"></a>

##### `jlRef` : `% -> SExpression`

jlRef(obj) returns the internal Lisp representation of the Julia object obj.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlRef` : `String -> %`

jlref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia mutable object.

- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlSymbolic` <a id="jlsymbolic"></a>

jlSymbolic(expr) returns the symbolic 'FullForm'.

- **Signature**: `% -> String`
- **From**: [`WSObject`](WSObject.md)

#### `jlText` <a id="jltext"></a>

jlText(obj, mimest) returns the text representation of obj as a list of String lines with mime subtype mimest, for example "plain" for "text/plain" or "html" for "text/html" if is implemented at Julia level. Use internally the 'show' method. For example:

```fricas
df:=jdframe nrand(6,3)
jlText(df, "plain")
jlText(df, "html")
jlText(df, "csv")
jlText(df, "latex")
```

- **Signature**: `(%, String) -> List(String)`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlType` <a id="jltype"></a>

jlType(obj) returns the Julia type of obj.

- **Signature**: `% -> Symbol`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlWSAccuracy` <a id="jlwsaccuracy"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1181)\]

jlWSAccuracy(expr) get accuracy of expr.

- **Signature**: `% -> %`

#### `jlWSDefined?` <a id="jlwsdefined"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L78)\]

jlWSDefined?(sym) checks whether or not the symbol sym is defined in the WS language. For example:

```fricas
jlWSDefined? "Sin"
```

=> true

- **Signature**: `String -> Boolean`

#### `jlWSGreedyEval` <a id="jlwsgreedyeval"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1008)\]

jlWSGreedyEval(bool) toggles automatic arithmetic operations. Plus[a, a] can become Times[2, a] using or not Julia `weval`.

- **Signature**: `Boolean -> Void`

#### `jlWSPrecision` <a id="jlwsprecision"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1179)\]

jlWSPrecision get precision of expr.

- **Signature**: `% -> %`

#### `jlWSSetAccuracy` <a id="jlwssetaccuracy"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1185)\]

jlWSSetAccuracy(expr, acc) sets accuracy of expr to acc.

- **Signature**: `(%, %) -> %`

#### `jlWSSetOptions` <a id="jlwssetoptions"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1187)\]

jlWSSetOptions(type, opts) sets some internal engine options.

- **Signature**: `(%, %) -> %`

#### `jlWSSetPrecision` <a id="jlwssetprecision"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1183)\]

jlWSSetPrecision(expr, prec) sets precision of expr to prec.

- **Signature**: `(%, %) -> %`

#### `jlimref` <a id="jlimref"></a>

jlimref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia immutable object wrapped in a Julia RefValueAny

- **Signature**: `String -> %`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlref` <a id="jlref"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L25)\]

##### `jlref` : `% -> SExpression`

jlRef(obj) returns the internal Lisp representation of the Julia object obj.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlref` : `String -> %`

jlref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia mutable object.

- **From**: [`JLObjectType`](JLObjectType.md)

#### `join` <a id="join"></a>

join(agg1, agg2) joins the two aggregates agg1 and agg2.

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `kelvinBei` <a id="kelvinbei"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1494)\]

kelvinBei(v, z) is the Kelvin bei function defined by equality kelvinBei(v, z) = imag(besselJ(v, exp(3*%pi*%i/4)*z)) for z and v real.

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `kelvinBer` <a id="kelvinber"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1493)\]

kelvinBer(v, z) is the Kelvin ber function defined by equality kelvinBer(v, z) = real(besselJ(v, exp(3*%pi*%i/4)*z)) for z and v real.

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `kelvinKei` <a id="kelvinkei"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1496)\]

kelvinKei(v, z) is the Kelvin kei function defined by equality kelvinKei(v, z) = imag(exp(-v*%pi*%i/2)*besselK(v, exp(%pi*%i/4)*z)) for z and v real.

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `kelvinKer` <a id="kelvinker"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1495)\]

kelvinKer(v, z) is the Kelvin kei function defined by equality kelvinKer(v, z) = real(exp(-v*%pi*%i/2)*besselK(v, exp(%pi*%i/4)*z)) for z and v real.

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `kernel` <a id="kernel"></a>

##### `kernel` : `(BasicOperator, %) -> %`

kernel(op, x) constructs op(x) without evaluating it.

- **From**: `ExpressionSpace2(K)`

##### `kernel` : `(BasicOperator, List(%)) -> %`

kernel(op, [f1, ..., fn]) constructs op(f1, ..., fn) without evaluating it.

- **From**: `ExpressionSpace2(K)`

#### `kernels` <a id="kernels"></a>

##### `kernels` : `% -> List(K)`

kernels(f) returns the list of all the top-level kernels appearing in f, but not the ones appearing in the arguments of the top-level kernels.

- **From**: `ExpressionSpace2(K)`

##### `kernels` : `List(%) -> List(K)`

kernels([f1,...,fn]) returns the list of all the top-level kernels appearing in f1, ..., fn but not the ones appearing in the arguments of the top-level kernels.

- **From**: `ExpressionSpace2(K)`

##### `kernels` : `% -> List(Kernel(%))`

Operation defined in WSExpression.

##### `kernels` : `List(%) -> List(Kernel(%))`

Operation defined in WSExpression.

#### `key?` <a id="key"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L73)\]

key?(assoc,key) checks whether or not key exists in the association assoc.

- **Signature**: `(%, %) -> Boolean`

#### `keys` <a id="keys"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1035)\]

keys(expr) returns the key elements in expr if any.

- **Signature**: `% -> %`

#### `kleinInvariantJ` <a id="kleininvariantj"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L390)\]

kleinInvariantJ(tau) computes the Klein's absolute invariant.

- **Signature**: `% -> %`

#### `krawtchoukK` <a id="krawtchoukk"></a>

krawtchoukK(n, p, N, z) is the Krawtchouk polynomial.

- **Signature**: `(%, %, %, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `kummerM` <a id="kummerm"></a>

kummerM(mu, nu, z) is the Kummer M function.

- **Signature**: `(%, %, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `kummerU` <a id="kummeru"></a>

kummerU(mu, nu, z) is the Kummer U function.

- **Signature**: `(%, %, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `laguerreL` <a id="laguerrel"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L279)\]

##### `laguerreL` : `(%, %) -> %`

laguerreL(n, x) returns the Laguerre polynomial or evaluates it at x if x is a number. For example:

```fricas
laguerreL(5, jWSExpression x)
```

##### `laguerreL` : `(%, %, %) -> %`

laguerreL(n, a, x) returns the generalized Laguerre polynomial or evaluates it at x if x is a number.

#### `lambertW` <a id="lambertw"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L126)\]

##### `lambertW` : `(WSInteger, %) -> %`

lambertW(k,z) returns the k-th solution to the LambertW function.

##### `lambertW` : `% -> %`

lambertW(z) = w is the principal branch of the solution to the equation we^w = z.

- **From**: `SpecialFunctionCategory`

#### `last` <a id="last"></a>

##### `last` : `% -> E`

last(agg) returns the last element of agg.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `last` : `% -> %`

Operation defined in WSExpression.

#### `latex` <a id="latex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1359)\]

latex(s) returns a LaTeX-printable output representation of s.

- **Signature**: `% -> String`
- **From**: `SetCategory`

#### `lcm` <a id="lcm"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1901)\]

##### `lcm` : `(%, %) -> %`

lcm(x, y) returns the least common multiple of x and y.

- **From**: `GcdDomain`

##### `lcm` : `List(%) -> %`

lcm(l) returns the least common multiple of the elements of the list l.

- **From**: `GcdDomain`

#### `lcmCoef` <a id="lcmcoef"></a>

lcmCoef(c1, c2) computes (llcm_res, coeff1, coeff2) such that llcm_res is least left common multiple of c1 and c2 and llcm_res = coeff1*c1 = coeff2*c2

- **Signature**: `(%, %) -> Record(llcm_res: %,coeff1: %,coeff2: %)`
- **From**: `LeftOreRing`

#### `leftPower` <a id="leftpower"></a>

##### `leftPower` : `(%, NonNegativeInteger) -> %`

leftPower(a, n) returns the n-th left power of a, leftPower(a, n) := a * leftPower(a, n-1) and leftPower(a, 0) := 1.

- **From**: `MagmaWithUnit`

##### `leftPower` : `(%, PositiveInteger) -> %`

leftPower(a, n) returns the n-th left power of a, leftPower(a, n) := a * leftPower(a, n-1) and leftPower(a, 1) := a.

- **From**: `Magma`

#### `leftRecip` <a id="leftrecip"></a>

leftRecip(a) returns an element, which is a left inverse of a, or "failed" if such an element doesn't exist or cannot be determined (see unitsKnown).

- **Signature**: `% -> Union(%,"failed")`
- **From**: `MagmaWithUnit`

#### `legendreP` <a id="legendrep"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L248)\]

##### `legendreP` : `(%, %) -> %`

legendreP(n, x) returns the Legendre polynomial of the first kind or evaluates it at x if x is a number.

##### `legendreP` : `(%, %, %) -> %`

legendreP(n, m, x) returns the associated Legendre polynomial of the first type or evaluates it at x if x is a number.

#### `legendreQ` <a id="legendreq"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L251)\]

##### `legendreQ` : `(%, %) -> %`

legendreQ(n, x) returns the Legendre function of the second kind or evaluates it at x if x is a number.

```fricas
legendreQ(3,jWSExpression x)
```

##### `legendreQ` : `(%, %, %) -> %`

legendreQ(n, m, x) returns the associated Legendre function of the second kind or evaluates it at x if x is a number.

#### `length` <a id="length"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1026)\]

##### `length` : `% -> %`

length(expr) returns the length of expr seen as a list.

##### `length` : `% -> WSInteger`

length(agg) returns the length of agg. 0 if it is a scalar.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `lerchPhi` <a id="lerchphi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L176)\]

lerchPhi(z,s,a) returns Lerch's transcendent phi of arguments.

- **Signature**: `(%, %, %) -> %`

#### `level` <a id="level"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1028)\]

##### `level` : `(%, %) -> WSList(%)`

level(expr, lev) returns the list of expression expr at level lev.

##### `level` : `(%, %, Boolean) -> WSList(%)`

level(expr, lev, head) returns the list of expression expr at level lev with heads if head is true.

#### `li` <a id="li"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1436)\]

li(x) returns the logarithmic integral of x, the integral of dx / log(x).

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `lift` <a id="lift"></a>

##### `lift` : `% -> UP`

lift(z) returns a minimal degree univariate polynomial up such that z=reduce up.

- **From**: `MonogenicAlgebra(R,UP)`

##### `lift` : `% -> SparseUnivariatePolynomial(%)`

Operation defined in WSExpression.

#### `limit` <a id="limit"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L532)\]

limit(expr, params) returns the limit, eventually nested or multivariate, of expr. For example:

```fricas
x:=jWSExpression x; limit(sin(x)-sin(x-1/x),"x->Infinity")
```

- **Signature**: `(%, %) -> %`

#### `log` <a id="log"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1388)\]

log(x) returns the natural logarithm of x. When evaluated into some subset of the complex numbers, the branch cut lies along the negative real axis, continuous with quadrant II. The domain does not contain the origin.

- **Signature**: `% -> %`
- **From**: `ElementaryFunctionCategory`

#### `log10` <a id="log10"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L108)\]

log10(x) computes the logarithm of x in base 10.

- **Signature**: `% -> %`

#### `log2` <a id="log2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L106)\]

log2(x) computes the logarithm of x in base 2.

- **Signature**: `% -> %`

#### `logBarnesG` <a id="logbarnesg"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L239)\]

logBarnesG(x) is the logarithm of the Barnes G-function.

- **Signature**: `% -> %`

#### `logGamma` <a id="loggamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L237)\]

logGamma(z) returns the log-Gamma of z.

- **Signature**: `% -> %`

#### `lommelS1` <a id="lommels1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1500)\]

lommelS1(mu, nu, z) is the Lommel s function.

- **Signature**: `(%, %, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `lommelS2` <a id="lommels2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1501)\]

lommelS2(mu, nu, z) is the Lommel S function.

- **Signature**: `(%, %, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `lookup` <a id="lookup"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1039)\]

##### `lookup` : `(%, %) -> %`

lookup(assocs,keys) returns value(s) associated to key(s).

##### `lookup` : `(%, %, %) -> %`

lookup(assocs,keys, defaultval) returns value(s) associated to key(s) if key(s) exist(s), otherwise defaultval

#### `machineNumber?` <a id="machinenumber"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L60)\]

machineNumber?(expr) checks whether or not expr is a CPU/GPU supported number.

- **Signature**: `% -> Boolean`

#### `mainKernel` <a id="mainkernel"></a>

##### `mainKernel` : `% -> Union(K,"failed")`

mainKernel(f) returns a kernel of f with maximum nesting level, or "failed" if f has no kernels ( f is a constant).

- **From**: `ExpressionSpace2(K)`

##### `mainKernel` : `% -> Union(Kernel(%),"failed")`

Operation defined in WSExpression.

#### `map` <a id="map"></a>

##### `map` : `((%% -> %%), K) -> %`

map(f, k) returns op(f(x1), ..., f(xn)) where k = op(x1, ..., xn).

- **From**: `ExpressionSpace2(K)`

##### `map` : `((R -> R), %) -> %`

map(f, ex) evaluates ex, applying f to values of type R in ex.

- **From**: `FullyEvalableOver(R)`

##### `map` : `((% -> %), %) -> %`

Operation defined in WSExpression.

##### `map` : `((% -> %), Kernel(%)) -> %`

Operation defined in WSExpression.

#### `mathieuC` <a id="mathieuc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L334)\]

mathieuC(a,q,z) is the even Mathieu function with characteristic a and parameter q.

- **Signature**: `(%, %, %) -> %`

#### `mathieuCPrime` <a id="mathieucprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L340)\]

mathieuCPrime(a,q,z) is the derivative of the even Mathieu function.

- **Signature**: `(%, %, %) -> %`

#### `mathieuCharacteristicA` <a id="mathieucharacteristica"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L344)\]

mathieuCharacteristicA(r,q) returns the characteristic for even Mathieu function.

- **Signature**: `(%, %) -> %`

#### `mathieuCharacteristicB` <a id="mathieucharacteristicb"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L347)\]

mathieuCharacteristicB(r,q) returns the characteristic for odd Mathieu function.

- **Signature**: `(%, %) -> %`

#### `mathieuCharacteristicExponent` <a id="mathieucharacteristicexponent"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L350)\]

mathieuCharacteristicExponent(a,q) returns the characteristic exponent of the Mathieu function.

- **Signature**: `(%, %) -> %`

#### `mathieuS` <a id="mathieus"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L337)\]

mathieuS(b,q,z) is the odd Mathieu function with characteristic b and parameter q.

- **Signature**: `(%, %, %) -> %`

#### `mathieuSPrime` <a id="mathieusprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L342)\]

mathieuSPrime(b,q,z) is the derivative of the odd Mathieu function.

- **Signature**: `(%, %, %) -> %`

#### `matrixForm` <a id="matrixform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1100)\]

matrixForm(mat) returns a pretty-printable form of mat i.e. its WS 'MatrixForm'.

- **Signature**: `% -> %`

#### `maxLimit` <a id="maxlimit"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L540)\]

maxLimit(expr, params) returns the max limit, eventually nested or multivariate, of expr.

- **Signature**: `(%, %) -> %`

#### `maximize` <a id="maximize"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L487)\]

##### `maximize` : `(%, %) -> %`

maximize(expr, vars) is the WS symbolic maximization function. expr can contain constraints if it is a WS list of constraints with function to maximize as the first element. Global optimization function otherwise.

##### `maximize` : `(%, Symbol) -> %`

maximize(expr, sym) symbolically maximizes expression function expr with respect to sym. expr can contain constraints if it is a WS list of constraints with function to maximize as the first element. Global optimization function otherwise.

##### `maximize` : `(%, %, %) -> %`

maximize(expr, vars, dom) is the WS symbolic maximization function. dom restricts the domain of variables, for example, Integers.

#### `meixnerM` <a id="meixnerm"></a>

meixnerM(n, b, c, z) is the Meixner polynomial.

- **Signature**: `(%, %, %, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `meixnerP` <a id="meixnerp"></a>

meixnerP(n, phi, lambda, z) is the Meixner-Pollaczek polynomial.

- **Signature**: `(%, %, %, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `member?` <a id="member"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L71)\]

member?(list, expr) checks if expr is in list.

- **Signature**: `(%, %) -> Boolean`

#### `minLimit` <a id="minlimit"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L537)\]

minLimit(expr, params) returns the min limit, eventually nested or multivariate, of expr.

- **Signature**: `(%, %) -> %`

#### `minPoly` <a id="minpoly"></a>

##### `minPoly` : `K -> SparseUnivariatePolynomial(%)`

minPoly(k) returns p such that p(k) = 0.

- **From**: `ExpressionSpace2(K)`

##### `minPoly` : `Kernel(%) -> SparseUnivariatePolynomial(%)`

Operation defined in WSExpression.

#### `minimalPolynomial` <a id="minimalpolynomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L859)\]

##### `minimalPolynomial` : `(%, %) -> %`

minimalPolynomial(expr,var) returns the minimal polynomial in the variable var of the expression expr.

##### `minimalPolynomial` : `(%, %, %) -> %`

minimalPolynomial(expr,var, elem) returns the minimal polynomial in the variable var of the expression expr.

##### `minimalPolynomial` : `% -> UP`

minimalPolynomial(a) returns the minimal polynomial of a.

- **From**: `FiniteRankAlgebra(R,UP)`

##### `minimalPolynomial` : `% -> SparseUnivariatePolynomial(%)`

Operation defined in WSExpression.

#### `minimize` <a id="minimize"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L459)\]

##### `minimize` : `(%, %) -> %`

minimize(expr, vars) is the WS symbolic minimization function. expr can contain constraints if it is a WS list of constraints with function to minimize as the first element. Global optimization function otherwise.

##### `minimize` : `(%, Symbol) -> %`

minimize(expr, sym) symbolically minimizes expression function expr with respect to sym. expr can contain constraints if it is a WS list of constraints with function to minimize as the first element. Global optimization function otherwise.

##### `minimize` : `(%, %, %) -> %`

minimize(expr, vars, dom) is the WS symbolic minimization function. dom restricts the domain of variables, for example, Integers.

#### `missing?` <a id="missing"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L76)\]

missing?(data) checks whether or not data is Missing.

- **Signature**: `% -> Boolean`

#### `modularLambda` <a id="modularlambda"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L392)\]

modularLambda(tau) computes the lambda modular function.

- **Signature**: `% -> %`

#### `monomialList` <a id="monomiallist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L740)\]

monomialList(p) returns the list of monomials in p.

- **Signature**: `% -> %`

#### `multiEuclidean` <a id="multieuclidean"></a>

multiEuclidean([f1, ..., fn], z) returns a list of coefficients [a1, ..., an] such that z / prod fi = sum aj/fj. If no such list of coefficients exists, "failed" is returned.

- **Signature**: `(List(%), %) -> Union(List(%),"failed")`
- **From**: `EuclideanDomain`

#### `mutable?` <a id="mutable"></a>

mutable?(obj) checks whether or not obj is mutable.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `negative?` <a id="negative"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L69)\]

negative?(expr) checks whether or not expr is negative.

- **Signature**: `% -> Boolean`

#### `norm` <a id="norm"></a>

##### `norm` : `% -> R`

norm(x) returns x * conjugate(x)

- **From**: `ComplexCategory(R)`

##### `norm` : `% -> %`

Operation defined in WSExpression.

#### `normal` <a id="normal"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L873)\]

##### `normal` : `% -> %`

normal(expr) converts expr to a normal expression from different expression types. Can be applied to a power series for example. For example:

```fricas
x:=jWSExpression x
s:=series(exp(x),jWSExpression "{x,0,10}")
normal(s)::EXPR INT
```

##### `normal` : `(%, %) -> %`

normal(expr, list(Head)||Head) converts objects in expr to a normal expression form from different expression types, with Head, or a list of Head-s.

#### `nothing?` <a id="nothing"></a>

nothing?(obj) checks whether or not obj is nothing.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `nthRoot` <a id="nthroot"></a>

nthRoot(x, n) returns the nth root of x.

- **Signature**: `(%, Integer) -> %`
- **From**: `RadicalCategory`

#### `number?` <a id="number"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L58)\]

number?(expr) checks whether or not expr is a number.

- **Signature**: `% -> Boolean`

#### `numberForm` <a id="numberform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1059)\]

##### `numberForm` : `% -> %`

numberForm(x) returns the default printed representation of x.

##### `numberForm` : `(%, %) -> %`

numberForm(x, expr) returns the approximate printed representation of x with expr as specification (number of digits of precision or a 2-list of number of digits and the number of digits after the decimal point).

#### `numer` <a id="numer"></a>

##### `numer` : `% -> SparseMultivariatePolynomial(R,K)`

numer(f) returns the numerator of f viewed as a polynomial in the kernels over R if R is an integral domain. If not, then numer(f) = f viewed as a polynomial in the kernels over R.

- **From**: `FunctionSpace2(R,K)`

##### `numer` : `% -> SparseMultivariatePolynomial(%,Kernel(%))`

Operation defined in WSExpression.

#### `numerDenom` <a id="numerdenom"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L686)\]

numerDenom(expr) returns the numerator and denominator of expr.

- **Signature**: `% -> WSList(%)`

#### `numerator` <a id="numerator"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L682)\]

numerator(expr) returns the numerator of expr.

- **Signature**: `% -> %`

#### `numeric` <a id="numeric"></a>

##### `numeric` : `% -> WSExpression`

numeric(expr) returns numerical expr if possible.

- **From**: [`WSObject`](WSObject.md)

##### `numeric` : `(%, PositiveInteger) -> WSExpression`

numeric(expr, prec) returns the numerical expr with prec digits of precision if possible.

- **From**: [`WSObject`](WSObject.md)

#### `numeric?` <a id="numeric"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L65)\]

numeric?(x) checks whether or not x is or would yield a number.

- **Signature**: `% -> Boolean`

#### `numericDSolve` <a id="numericdsolve"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L626)\]

##### `numericDSolve` : `(%, %, %) -> %`

numericDSolve(expr,fun,xrange) solves numerically the differential equation(s) in expr for the function fun, in the range xrange. Other combinations of parameters are also available.

##### `numericDSolve` : `(Equation(%), %, %) -> %`

numericDSolve(eq,fun,xrange) solves numerically the differential equation eq for the function fun, in the range xrange.

##### `numericDSolve` : `(%, %, %, %) -> %`

numericDSolve(expr,fun,xrange,yrange) solves numerically the differential equation(s) in expr for the function fun, in the ranges xrange and yrange. Other combinations of parameters are also available (see documentation).

#### `numericDSolveValue` <a id="numericdsolvevalue"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L637)\]

##### `numericDSolveValue` : `(%, %, %) -> %`

numericDSolveValue(expr,fun,xrange) returns the numerical value solution of the differential equation(s) in expr for the function fun, in the range xrange. Other combinations of parameters are also available (see documentation).

##### `numericDSolveValue` : `(Equation(%), %, %) -> %`

numericDSolveValue(eq,fun,xrange) returns the numerical solution of the differential equation eq for the function fun, in the range xrange.

##### `numericDSolveValue` : `(%, %, %, %) -> %`

numericDSolveValue(expr,fun,xrange,yrange) returns the numerical solution of the differential equation(s) in expr for the function fun, in the ranges xrange and yrange. Other combinations of parameters are also available (see documentation).

#### `numericIntegrate` <a id="numericintegrate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L526)\]

##### `numericIntegrate` : `(%, %) -> %`

numericIntegrate(expr, opt|var) integrates numerically expr with respect to opt or var as options.

##### `numericIntegrate` : `(%, %, Segment(Integer)) -> %`

numericIntegrate(expr, var, seg) integrates expr using segment seg with respect to var.

#### `numericMaximize` <a id="numericmaximize"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L500)\]

##### `numericMaximize` : `(%, %) -> %`

numericMaximize(expr, vars) maximizes numerically the expression function expr with respect to vars.

##### `numericMaximize` : `(%, Symbol) -> %`

numericMaximize(expr, sym) maximizes numerically the expression function expr with respect to sym.

##### `numericMaximize` : `(%, %, %) -> %`

numericMaximize(expr, vars, dom) maximizes numerically the expression function expr with respect to vars and vars restricted to the domain dom.

#### `numericMinimize` <a id="numericminimize"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L472)\]

##### `numericMinimize` : `(%, %) -> %`

numericMinimize(expr, vars) minimizes numerically the expression function expr with respect to vars. For example, global optimization from the SIAM 100 digits challenge:

```fricas
x := jWSExpression(x);y:=jWSExpression y;
expr := exp(sin(50*x))+sin(60*exp(y))+ sin(70*sin(x))+
sin(sin(80*y))-sin(10*(x+y))+(x^2+y^2)/4
numericMinimize(expr, jWSList [x,y])
```

##### `numericMinimize` : `(%, Symbol) -> %`

numericMinimize(expr, sym) minimizes numerically the expression function expr with respect to sym.

##### `numericMinimize` : `(%, %, %) -> %`

numericMinimize(expr, vars, dom) minimizes numerically the expression function expr with respect to vars and vars restricted to the domain dom.

#### `numericProduct` <a id="numericproduct"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L450)\]

##### `numericProduct` : `(%, %) -> %`

numericProduct(f(n),range) returns an evaluated numerical approximation of the sum f(imin) + ... + f(imax) defined by the list range, for example

```fricas
jWSExpression("{i, imin, imax}")
```

. See Wolfram language specifications.

##### `numericProduct` : `(%, %, Segment(Integer)) -> %`

numericProduct(f(n),n, a..b) returns an evaluated numerical approximation of the product f(a) * ... * f(b).

#### `numericSolve` <a id="numericsolve"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L552)\]

##### `numericSolve` : `(Equation(%), %) -> %`

numericSolve(eq, vars) returns the solution(s) to the equation eq.

##### `numericSolve` : `(%, %) -> %`

numericSolve(expr, vars) returns the solution(s) to the expression expr.

#### `numericSum` <a id="numericsum"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L442)\]

##### `numericSum` : `(%, %) -> %`

numericSum(f(n),range) returns an evaluated numerical approximation of the sum f(imin) + ... + f(imax) defined by the list range, for example

```fricas
jWSExpression("{i, imin, imax}")
```

. See Wolfram language specifications.

##### `numericSum` : `(%, %, Segment(Integer)) -> %`

numericSum(f(n),n, a..b) returns an evaluated numerical approximation of the sum f(a) + ... + f(b).

#### `one?` <a id="one"></a>

one?(a) tests whether a is the unit 1.

- **Signature**: `% -> Boolean`
- **From**: `MagmaWithUnit`

#### `operator` <a id="operator"></a>

operator(op) returns a copy of op with the domain-dependent properties appropriate for %.

- **Signature**: `BasicOperator -> BasicOperator`
- **From**: `ExpressionSpace2(K)`

#### `operators` <a id="operators"></a>

operators(f) returns all the basic operators appearing in f, no matter what their levels are.

- **Signature**: `% -> List(BasicOperator)`
- **From**: `ExpressionSpace2(K)`

#### `opposite?` <a id="opposite"></a>

opposite?(x,y) holds if the sum of x and y is 0.

- **Signature**: `(%, %) -> Boolean`
- **From**: `AbelianMonoid`

#### `padeApproximant` <a id="padeapproximant"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L751)\]

padeApproximant(expr, "x,x0, n,m") returns the Padé approximant at x0.

- **Signature**: `(%, %) -> %`

#### `parabolicCylinderD` <a id="paraboliccylinderd"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L309)\]

parabolicCylinderD(nu,x) computes the parabolic cylinder function D of x.

- **Signature**: `(%, %) -> %`

#### `paren` <a id="paren"></a>

paren(f) returns (f). This prevents f from being evaluated when operators are applied to it. For example, log(1) returns 0, but log(paren 1) returns the formal kernel log((1)).

- **Signature**: `% -> %`
- **From**: `ExpressionSpace2(K)`

#### `part` <a id="part"></a>

##### `part` : `(%, WSInteger) -> E`

part(agg,i) returns the i-th element.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `part` : `(%, WSInteger) -> %`

Operation defined in WSExpression.

#### `percentForm` <a id="percentform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1086)\]

##### `percentForm` : `% -> %`

percentForm(x) returns the printed representation of x in percent form. For example:

```fricas
percentForm jWSExpression 0.50
```

##### `percentForm` : `(%, %) -> %`

percentForm(x,n) returns the printed representation of x in percent with n digits of precision.

#### `permutation` <a id="permutation"></a>

permutation(n, m) returns the number of permutations of n objects taken m at a time. Note: permutation(n, m) = n!/(n-m)!.

- **Signature**: `(%, %) -> %`
- **From**: `CombinatorialFunctionCategory`

#### `pi` <a id="pi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1306)\]

pi() returns the constant pi.

- **Signature**: `() -> %`
- **From**: `TranscendentalFunctionCategory`

#### `plenaryPower` <a id="plenarypower"></a>

plenaryPower(a, n) is recursively defined to be plenaryPower(a, n-1)*plenaryPower(a, n-1) for n>1 and a for n=1.

- **Signature**: `(%, PositiveInteger) -> %`
- **From**: `NonAssociativeAlgebra(R)`

#### `pochhammer` <a id="pochhammer"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L235)\]

pochhammer(a,n) returns the Pochhammer symbol.

- **Signature**: `(%, %) -> %`

#### `polygamma` <a id="polygamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1469)\]

polygamma(k, x) is the k-th derivative of digamma(x), (often written psi(k, x) in the literature).

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `polylog` <a id="polylog"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L178)\]

##### `polylog` : `(%, %, %) -> %`

polylog(n,p,x) is the Nielsen generalized polylogarithm function.

##### `polylog` : `(%, %) -> %`

polylog(s, x) is the polylogarithm of order s at x.

- **From**: `SpecialFunctionCategory`

#### `polynomial?` <a id="polynomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L690)\]

##### `polynomial?` : `(%, %) -> Boolean`

polynomial?(p,x) checks whether or not p is a polynomial in x.

##### `polynomial?` : `(%, WSList(%)) -> Boolean`

polynomial?(p,vlist) checks whether or not p is a polynomial in the list of variables vlist.

#### `polynomialExpression?` <a id="polynomialexpression"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L695)\]

##### `polynomialExpression?` : `(%, %) -> Boolean`

polynomialExpression?(p,x) checks whether or not p is a polynomial expression in x.

##### `polynomialExpression?` : `(%, WSList(%)) -> Boolean`

polynomialExpression?(p,vlist) checks whether or not p is a polynomial expression in the list of variables vlist.

#### `polynomialExtendedGCD` <a id="polynomialextendedgcd"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L771)\]

polynomialExtendedGCD(p1, p2, x) returns the greatest common divisor of p1 and p2 considered as univariate polynomials in x

- **Signature**: `(%, %, %) -> %`

#### `polynomialGCD` <a id="polynomialgcd"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L765)\]

##### `polynomialGCD` : `(%, %) -> %`

polynomialGCD(p1, p2) returns the greatest common divisor of p1 and p2.

##### `polynomialGCD` : `(%, %, %) -> %`

polynomialGCD(p1, p2, opt) returns the greatest common divisor of p1 and p2 with options opt, for example Modulus->p.

#### `polynomialLCM` <a id="polynomiallcm"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L774)\]

##### `polynomialLCM` : `(%, %) -> %`

polynomialLCM(p1,p2) returns the least common divisor of p1 and p2.

##### `polynomialLCM` : `(%, %, %) -> %`

polynomialLCM(p1,p2,opt) returns the least common divisor of p1 and p2 with options opt, for example an Extension rule.

#### `polynomialMod` <a id="polynomialmod"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L779)\]

polynomialMod(p,mod) reduces modulo p the integer coefficients of the polynomial p.

- **Signature**: `(%, %) -> %`

#### `polynomialQuotient` <a id="polynomialquotient"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L743)\]

polynomialQuotient(p1, p2, x) returns the quotient of p1 and p2 in x.

- **Signature**: `(%, %, %) -> %`

#### `polynomialQuotientRemainder` <a id="polynomialquotientremainder"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L747)\]

polynomialQuotientRemainder(p1,p2,var) returns the quotient and remainder of p1 and p2 in x.

- **Signature**: `(%, %, %) -> WSList(%)`

#### `polynomialReduce` <a id="polynomialreduce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L797)\]

polynomialReduce(poly,lpoly,lvar) returns a minimal representation of the polynomial poly in terms of the polynomial list lpoly with respect to the list of variables lvar.

- **Signature**: `(%, %, %) -> %`

#### `polynomialRemainder` <a id="polynomialremainder"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L745)\]

polynomialRemainder(p1,p2, x) returns the remainder of p1 and p2 in x.

- **Signature**: `(%, %, %) -> %`

#### `positive?` <a id="positive"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L67)\]

positive?(expr) checks whether or not expr is positive.

- **Signature**: `% -> Boolean`

#### `positiveInfinity` <a id="positiveinfinity"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L98)\]

positiveInfinity() returns positive infinity (∞).

- **Signature**: `() -> %`

#### `powerExpand` <a id="powerexpand"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L953)\]

##### `powerExpand` : `% -> %`

powerExpand(expr) expands powers in expr assuming no branch cut.

##### `powerExpand` : `(%, %) -> %`

powerExpand(expr, sym) expands powers in expr with respect to sym, assuming no branch cut.

#### `prepend` <a id="prepend"></a>

##### `prepend` : `(%, E) -> %`

prepend(l, elt) prepends elt to the list l.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `prepend` : `(%, %) -> %`

Operation defined in WSExpression.

#### `prime?` <a id="prime"></a>

prime?(x) tests if x can never be written as the product of two non-units of the ring, x is an irreducible element.

- **Signature**: `% -> Boolean`
- **From**: `UniqueFactorizationDomain`

#### `principalIdeal` <a id="principalideal"></a>

principalIdeal([f1, ..., fn]) returns a record whose generator component is a generator of the ideal generated by [f1, ..., fn] whose coef component satisfies generator = sum (input.i * coef.i)

- **Signature**: `List(%) -> Record(coef: List(%),generator: %)`
- **From**: `PrincipalIdealDomain`

#### `product` <a id="product"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L434)\]

##### `product` : `(%, %) -> %`

product(f(n),range) returns the product f(imin) * ... * f(imax) defined by the list range, for example

```fricas
jWSExpression("{i, imin, imax}")
```

. See Wolfram language specifications.

##### `product` : `(%, %, Segment(Integer)) -> %`

product(f(n),n, a..b) returns the product f(a) * ... * f(b).

##### `product` : `(%, Symbol) -> %`

product(f(n),n) returns the indefinite product of f(n).

##### `product` : `(%, SegmentBinding(%)) -> %`

product(f(n), n = a..b) returns f(a) * ... * f(b) as a formal product.

- **From**: `CombinatorialOpsCategory`

#### `qBinomial` <a id="qbinomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L325)\]

qBinomial(n,m,q) returns the q-analog of binomial coefficient.

- **Signature**: `(%, %, %) -> %`

#### `qFactorial` <a id="qfactorial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L323)\]

qFactorial(x,q) returns the q-analog of factorial of x.

- **Signature**: `(%, %) -> %`

#### `qGamma` <a id="qgamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L327)\]

qGamma(x,q) returns the q-analog of Euler Gamma of x.

- **Signature**: `(%, %) -> %`

#### `qPochhammer` <a id="qpochhammer"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L319)\]

##### `qPochhammer` : `(%, %) -> %`

qPochhammer(x,q) returns the q-Pochhammer symbol of x.

##### `qPochhammer` : `(%, %, %) -> %`

qPochhammer(x,q,n) returns the q-Pochhammer symbol of x.

#### `qPolyGamma` <a id="qpolygamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L329)\]

##### `qPolyGamma` : `(%, %) -> %`

qPolyGamma(x,q) returns the q-Digamma of x.

##### `qPolyGamma` : `(%, %, %) -> %`

qPolyGamma(n,x,q) returns the n-th derivative of the q-digamma function of x.

#### `qelt` <a id="qelt"></a>

##### `qelt` : `(%, Integer) -> E`

qelt(agg,i) returns the i-th element. No checks are done at the FriCAS level.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `qelt` : `(%, Integer) -> %`

Operation defined in WSExpression.

#### `qsetelt` <a id="qsetelt"></a>

##### `qsetelt` : `(%, Integer, E) -> %`

qsetelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem. No checks are done at the FriCAS level.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `qsetelt` : `(%, Integer, %) -> %`

Operation defined in WSExpression.

#### `qsetelt!` <a id="qsetelt"></a>

##### `qsetelt!` : `(%, Integer, E) -> %`

qsetelt!(l,i,elem) returns l with i-th element replaced by elem. No checks are done at the FriCAS level.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `qsetelt!` : `(%, Integer, %) -> %`

Operation defined in WSExpression.

#### `quantityForm` <a id="quantityform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1106)\]

##### `quantityForm` : `(%, %) -> %`

quantityForm(expr,form) returns expr as a quantity with format form.

##### `quantityForm` : `(%, WSList(%)) -> %`

quantityForm(expr,lform) returns expr as a quantity with a list of formats lform.

#### `quantityMagnitude` <a id="quantitymagnitude"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1046)\]

quantityMagnitude(val) returns magnitude of val.

- **Signature**: `% -> %`

#### `quantityUnit` <a id="quantityunit"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1044)\]

quantityUnit(val) returns unit of val.

- **Signature**: `% -> %`

#### `quo` <a id="quo"></a>

x quo y is the same as divide(x, y).quotient. See divide from EuclideanDomain.

- **Signature**: `(%, %) -> %`
- **From**: `EuclideanDomain`

#### `racahR` <a id="racahr"></a>

racahR(n, a, b, c, d, z) is the Racah polynomial.

- **Signature**: `(%, %, %, %, %, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `ramanujanTau` <a id="ramanujantau"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L193)\]

ramanujanTau(n) returns the Ramanujan tau of n.

- **Signature**: `% -> %`

#### `ramanujanTauL` <a id="ramanujantaul"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L195)\]

ramanujanTauL(s) computes the Ramanujan tau Dirichlet L-function of s.

- **Signature**: `% -> %`

#### `ramanujanTauTheta` <a id="ramanujantautheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L197)\]

ramanujanTauTheta(z) returns the Ramanujan tau theta of z.

- **Signature**: `% -> %`

#### `ramanujanTauZ` <a id="ramanujantauz"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L199)\]

ramanujanTauZ(t) computes the Ramanujan tau Z-function of t.

- **Signature**: `% -> %`

#### `rank` <a id="rank"></a>

rank() returns the rank of the algebra.

- **Signature**: `() -> PositiveInteger`
- **From**: `FiniteRankAlgebra(R,UP)`

#### `rational?` <a id="rational"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L56)\]

rational?(q) checks whether or not q is a rational number.

- **Signature**: `% -> Boolean`

#### `rationalApproximation` <a id="rationalapproximation"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1002)\]

##### `rationalApproximation` : `% -> %`

rationalApproximation(expr) tries to find a rational approximation of the expression expr.

##### `rationalApproximation` : `(%, %) -> %`

rationalApproximation(expr, dx) tries to find a rational approximation of the expression expr within tolerance dx.

#### `rationalExpression?` <a id="rationalexpression"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L701)\]

##### `rationalExpression?` : `(%, %) -> Boolean`

rationalExpression?(p,x) checks whether or not p is a rational expression in x.

##### `rationalExpression?` : `(%, WSList(%)) -> Boolean`

rationalExpression?(p,vlist) checks whether or not p is a rational expression in the list of variables vlist.

#### `real` <a id="real"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1314)\]

##### `real` : `% -> R`

real(x) returns real part of x.

- **From**: `ComplexCategory(R)`

##### `real` : `% -> %`

Operation defined in WSExpression.

#### `real?` <a id="real"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L49)\]

real?(x) checks whether or not x represents a real number.

- **Signature**: `% -> Boolean`

#### `realNumeric?` <a id="realnumeric"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L51)\]

realNumeric?(x) checks whether or not x represents a real value (numeric).

- **Signature**: `% -> Boolean`

#### `realNumericSolve` <a id="realnumericsolve"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L556)\]

##### `realNumericSolve` : `(Equation(%), %) -> %`

realNumericSolve(eq, vars) returns the real solution(s) to the equation eq.

##### `realNumericSolve` : `(%, %) -> %`

realNumericSolve(expr, vars) returns the real solution(s) to the expression expr.

#### `recip` <a id="recip"></a>

recip(a) returns an element, which is both a left and a right inverse of a, or "failed" if such an element doesn't exist or cannot be determined (see unitsKnown).

- **Signature**: `% -> Union(%,"failed")`
- **From**: `MagmaWithUnit`

#### `reduce` <a id="reduce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L656)\]

##### `reduce` : `(Equation(%), %) -> %`

reduce(expr,lvars) tries to reduce the equation in expr.

##### `reduce` : `(%, %) -> %`

reduce(expr,lvars) tries to reduce the (in)equation in expr.

##### `reduce` : `(Equation(%), %, %) -> %`

reduce(expr,lvars,dom) tries to reduce the equation in expr.

##### `reduce` : `(%, %, %) -> %`

reduce(expr,lvars,dom) tries to reduce the (in)equation in expr.

##### `reduce` : `UP -> %`

reduce(up) converts the univariate polynomial up to an algebra element, reducing by the definingPolynomial() if necessary.

- **From**: `MonogenicAlgebra(R,UP)`

##### `reduce` : `Fraction(UP) -> Union(%,"failed")`

reduce(frac) converts the fraction frac to an algebra element.

- **From**: `MonogenicAlgebra(R,UP)`

##### `reduce` : `SparseUnivariatePolynomial(%) -> %`

Operation defined in WSExpression.

##### `reduce` : `Fraction(SparseUnivariatePolynomial(%)) -> Union(%,"failed")`

Operation defined in WSExpression.

#### `reducedSystem` <a id="reducedsystem"></a>

##### `reducedSystem` : `Matrix(%) -> Matrix(R)`

reducedSystem(A) returns a matrix B such that A x = 0 and B x = 0 have the same solutions in R.

- **From**: `LinearlyExplicitOver(R)`

##### `reducedSystem` : `(Matrix(%), Vector(%)) -> Record(mat: Matrix(R),vec: Vector(R))`

reducedSystem(A, v) returns a matrix B and a vector w such that A x = v and B x = w have the same solutions in R.

- **From**: `LinearlyExplicitOver(R)`

##### `reducedSystem` : `Matrix(%) -> Matrix(%)`

Operation defined in WSExpression.

##### `reducedSystem` : `(Matrix(%), Vector(%)) -> Record(mat: Matrix(%),vec: Vector(%))`

Operation defined in WSExpression.

#### `refine` <a id="refine"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L903)\]

refine(expr, assums) refines the expression expr with assumptions assums.

- **Signature**: `(%, %) -> %`

#### `regularRepresentation` <a id="regularrepresentation"></a>

##### `regularRepresentation` : `% -> Matrix(R)`

regularRepresentation(a) returns the matrix m of the linear map defined by left multiplication by a with respect to the fixed basis. That is for all x we have coordinates(a*x) = m*coordinates(x).

- **From**: `FramedAlgebra(R,UP)`

##### `regularRepresentation` : `(%, Vector(%)) -> Matrix(R)`

regularRepresentation(a, basis) returns the matrix m of the linear map defined by left multiplication by a with respect to the basis basis. That is for all x we have coordinates(a*x, basis) = m*coordinates(x, basis).

- **From**: `FiniteRankAlgebra(R,UP)`

##### `regularRepresentation` : `% -> Matrix(%)`

Operation defined in WSExpression.

##### `regularRepresentation` : `(%, Vector(%)) -> Matrix(%)`

Operation defined in WSExpression.

#### `rem` <a id="rem"></a>

x rem y is the same as divide(x, y).remainder. See divide from EuclideanDomain.

- **Signature**: `(%, %) -> %`
- **From**: `EuclideanDomain`

#### `removeDuplicates` <a id="removeduplicates"></a>

removeDuplicates(agg) removes duplicate elements.

- **Signature**: `% -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `replace` <a id="replace"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1112)\]

##### `replace` : `(%, %) -> %`

replace(expr, rule) applies rule(s) to expr.

##### `replace` : `(%, %, %) -> %`

replace(expr, rule, lev) applies rule to expr with level lev.

#### `replaceAll` <a id="replaceall"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1120)\]

replaceAll(expr, rule) applies rule(s) to expr.

- **Signature**: `(%, %) -> %`

#### `replaceAt` <a id="replaceat"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1118)\]

replaceAt(expr, part, n) replaces the n-th element of expr using rule(s).

- **Signature**: `(%, %, %) -> %`

#### `replacePart` <a id="replacepart"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1116)\]

replacePart(expr, part) replaces expr using rule(s) expressing position(s).

- **Signature**: `(%, %) -> %`

#### `replaceRepeated` <a id="replacerepeated"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1122)\]

replaceRepeated(expr, rule) applies rule(s) to expr, but repeatedly.

- **Signature**: `(%, %) -> %`

#### `represents` <a id="represents"></a>

##### `represents` : `Vector(R) -> %`

represents([a1, .., an]) returns a1*v1 + ... + an*vn, where v1, ..., vn are the elements of the fixed basis.

- **From**: `FramedModule(R)`

##### `represents` : `(Vector(R), Vector(%)) -> %`

represents([a1, .., an], [v1, .., vn]) returns a1*v1 + ... + an*vn.

- **From**: `FiniteRankAlgebra(R,UP)`

##### `represents` : `Vector(%) -> %`

Operation defined in WSExpression.

##### `represents` : `(Vector(%), Vector(%)) -> %`

Operation defined in WSExpression.

#### `residue` <a id="residue"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L651)\]

residue(expr, x,x0) returns the residue of expr at x0.

- **Signature**: `(%, %) -> %`

#### `residueSum` <a id="residuesum"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L653)\]

residueSum(expr, var) returns the residue of expr.

```fricas
residueSum(Gamma(x),x)
```

- **Signature**: `(%, %) -> %`

#### `rest` <a id="rest"></a>

rest(agg) returns agg without the first element.

- **Signature**: `% -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `resultant` <a id="resultant"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L782)\]

resultant(p1,p2,x) returns the resultant of p1 and p2.

- **Signature**: `(%, %, %) -> %`

#### `retract` <a id="retract"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1136)\]

##### `retract` : `% -> Expression(Integer)`

retract(expr) tries to retract expr to an Expression(Integer). Throws an error otherwise.

##### `retract` : `% -> Expression(Float)`

retract(expr) tries to retract expr to an Expression(Integer). Throws an error otherwise.

##### `retract` : `% -> S`

retract(a) transforms a into an element of S if possible. Error: if a cannot be made into an element of S.

- **From**: `RetractableTo(S)`

##### `retract` : `% -> %`

Operation defined in WSExpression.

##### `retract` : `% -> Fraction(Integer) if % has RETRACT(FRAC(INT))`

Operation defined in WSExpression.

##### `retract` : `% -> Fraction(Polynomial(%))`

Operation defined in WSExpression.

##### `retract` : `% -> Kernel(%)`

Operation defined in WSExpression.

##### `retract` : `% -> Polynomial(%)`

Operation defined in WSExpression.

##### `retract` : `% -> Symbol`

Operation defined in WSExpression.

#### `retractIfCan` <a id="retractifcan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1128)\]

##### `retractIfCan` : `% -> Union(JLFloat64,"failed")`

retractIfCan(expr) retracts expr to a JLFloat64 if it can be retracted to a 64 bits machine float.

##### `retractIfCan` : `% -> Union(DoubleFloat,"failed")`

retractIfCan(expr) retracts expr to a DoubleFloat if it can be retracted to a Lisp machine float.

##### `retractIfCan` : `% -> Union(Expression(Integer),"failed")`

retractIfCan(expr) tries to retract expr to an Expression(Integer).

##### `retractIfCan` : `% -> Union(Expression(Float),"failed")`

retractIfCan(expr) tries to retract expr to an Expression(Float).

##### `retractIfCan` : `% -> Union(S,"failed")`

retractIfCan(a) transforms a into an element of S if possible. Returns "failed" if a cannot be made into an element of S.

- **From**: `RetractableTo(S)`

##### `retractIfCan` : `% -> Union(%,"failed")`

Operation defined in WSExpression.

##### `retractIfCan` : `% -> Union(Fraction(Integer),"failed") if % has RETRACT(FRAC(INT))`

Operation defined in WSExpression.

##### `retractIfCan` : `% -> Union(Fraction(Polynomial(%)),"failed")`

Operation defined in WSExpression.

##### `retractIfCan` : `% -> Union(Kernel(%),"failed")`

Operation defined in WSExpression.

##### `retractIfCan` : `% -> Union(Polynomial(%),"failed")`

Operation defined in WSExpression.

##### `retractIfCan` : `% -> Union(Symbol,"failed")`

Operation defined in WSExpression.

#### `reverse` <a id="reverse"></a>

##### `reverse` : `% -> %`

reverse(agg) reverses the elements of agg.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `reverse` : `(%, WSInteger) -> %`

reverse(agg, lev) reverses the elements of agg at level lev.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `reverse` : `(%, WSList(WSInteger)) -> %`

reverse(agg, levels) reverses the elements of agg using levels.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `riemannSiegelTheta` <a id="riemannsiegeltheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L201)\]

riemannSiegelTheta(t) returns the Riemann-Siegel theta function of t.

- **Signature**: `% -> %`

#### `riemannSiegelZ` <a id="riemannsiegelz"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L203)\]

riemannSiegelZ(t) computes the Riemann-Siegel Z function of t.

- **Signature**: `% -> %`

#### `riemannZeta` <a id="riemannzeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L214)\]

##### `riemannZeta` : `(%, %) -> %`

riemannZeta(s,a) is the generalized Riemann zeta function.

##### `riemannZeta` : `% -> %`

riemannZeta(z) is the Riemann Zeta function.

- **From**: `SpecialFunctionCategory`

#### `riffle` <a id="riffle"></a>

##### `riffle` : `(%, %) -> %`

riffle(agg, elts) riffles (interleaves) element(s) elts inserts them.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `riffle` : `(%, %, %) -> %`

riffle(agg, elts, inds) riffles (interleaves) element(s) elts inserts them. If inds is min, max, n inserts at position min, min+n, min+2n..max.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `rightPower` <a id="rightpower"></a>

##### `rightPower` : `(%, NonNegativeInteger) -> %`

rightPower(a, n) returns the n-th right power of a, rightPower(a, n) := rightPower(a, n-1) * a and rightPower(a, 0) := 1.

- **From**: `MagmaWithUnit`

##### `rightPower` : `(%, PositiveInteger) -> %`

rightPower(a, n) returns the n-th right power of a, rightPower(a, n) := rightPower(a, n-1) * a and rightPower(a, 1) := a.

- **From**: `Magma`

#### `rightRecip` <a id="rightrecip"></a>

rightRecip(a) returns an element, which is a right inverse of a, or "failed" if such an element doesn't exist or cannot be determined (see unitsKnown).

- **Signature**: `% -> Union(%,"failed")`
- **From**: `MagmaWithUnit`

#### `rootOf` <a id="rootof"></a>

##### `rootOf` : `% -> %`

rootOf(p) returns y such that p(y) = 0. Error: if p has more than one variable y.

- **From**: `AlgebraicallyClosedFunctionSpace(R)`

##### `rootOf` : `(%, Symbol) -> %`

rootOf(p, y) returns y such that p(y) = 0. The object returned displays as 'y.

- **From**: `AlgebraicallyClosedFunctionSpace(R)`

##### `rootOf` : `SparseUnivariatePolynomial(%) -> %`

rootOf(p) returns y such that p(y) = 0.

- **From**: `AlgebraicallyClosedField`

##### `rootOf` : `Polynomial(%) -> %`

Operation defined in WSExpression.

##### `rootOf` : `(SparseUnivariatePolynomial(%), Symbol) -> %`

Operation defined in WSExpression.

#### `rootReduce` <a id="rootreduce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L976)\]

rootReduce(expr) reduces root functions.

- **Signature**: `% -> %`

#### `rootSum` <a id="rootsum"></a>

Operation defined in WSExpression.

- **Signature**: `(%, SparseUnivariatePolynomial(%), Symbol) -> %`
- **From**: `AlgebraicallyClosedFunctionSpace(R)`

#### `rootsOf` <a id="rootsof"></a>

##### `rootsOf` : `% -> List(%)`

rootsOf(p, y) returns [y1, ..., yn] such that p(yi) = 0; Note: the returned values y1, ..., yn contain new symbols which are bound in the interpreter to the respective values. Error: if p has more than one variable y.

- **From**: `AlgebraicallyClosedFunctionSpace(R)`

##### `rootsOf` : `(%, Symbol) -> List(%)`

rootsOf(p, y) returns [y1, ..., yn] such that p(yi) = 0; The returned roots contain new symbols '%z0, '%z1 ...; Note: the new symbols are bound in the interpreter to the respective values.

- **From**: `AlgebraicallyClosedFunctionSpace(R)`

##### `rootsOf` : `Polynomial(%) -> List(%)`

rootsOf(p) returns [y1, ..., yn] such that p(yi) = 0. Note: the returned values y1, ..., yn contain new symbols which are bound in the interpreter to the respective values. Error: if p has more than one variable y.

- **From**: `AlgebraicallyClosedField`

##### `rootsOf` : `SparseUnivariatePolynomial(%) -> List(%)`

rootsOf(p) returns [y1, ..., yn] such that p(yi) = 0. Note: the returned values y1, ..., yn contain new symbols which are bound in the interpreter to the respective values.

- **From**: `AlgebraicallyClosedField`

##### `rootsOf` : `(SparseUnivariatePolynomial(%), Symbol) -> List(%)`

rootsOf(p, z) returns [y1, ..., yn] such that p(yi) = 0; The returned roots contain new symbols '%z0, '%z1, ...; Note: the new symbols are bound in the interpreter to the respective values.

- **From**: `AlgebraicallyClosedField`

#### `round` <a id="round"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L86)\]

round(x) returns the integer closest to x.

- **Signature**: `% -> %`

#### `sample` <a id="sample"></a>

sample yields a value of type %

- **Signature**: `() -> %`
- **From**: `MagmaWithUnit`

#### `scientificForm` <a id="scientificform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1074)\]

##### `scientificForm` : `% -> %`

scientificForm(x) returns the printed representation of x in scientific form.

##### `scientificForm` : `(%, %) -> %`

scientificForm(x,n) returns the printed representation of x in scientific form with n digits of precision.

#### `sec` <a id="sec"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1396)\]

sec(x) returns the secant of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `sech` <a id="sech"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1412)\]

sech(x) returns the hyperbolic secant of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `select` <a id="select"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1124)\]

##### `select` : `(%, %) -> %`

select(expr, form) selects elements of expr if form(element) is true.

##### `select` : `(%, %, %) -> %`

select(expr, form, n) selects the n first elements of expr if form(element) is true.

#### `series` <a id="series"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L419)\]

series(expr, opt) returns a series from expr.

```fricas
x:=jWSExpression(x);a:=jWSExpression(a);
opt:=jWSList [x,pi()$WSEXPR/4,7]
series(sin(a*x),opt)
series(cos(x),"{x, 0, 12}")
series(inverseErfc(x),"{x,0,3}")
```

- **Signature**: `(%, %) -> %`

#### `setIntersection` <a id="setintersection"></a>

setIntersection(agg1, agg2) is the intersection set operator.

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `setelt` <a id="setelt"></a>

##### `setelt` : `(%, Integer, E) -> %`

setelt(l,i,elem) returns a copy of l with i-th element replaced by the element elem.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `setelt` : `(%, Integer, %) -> %`

Operation defined in WSExpression.

#### `setelt!` <a id="setelt"></a>

##### `setelt!` : `(%, Integer, E) -> %`

setelt!(l,i,elem) returns l with i-th element replaced by elem.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `setelt!` : `(%, Integer, %) -> %`

Operation defined in WSExpression.

#### `siegelTheta` <a id="siegeltheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L365)\]

##### `siegelTheta` : `(%, %) -> %`

siegelTheta(tau, s) computes the Siegel theta function.

##### `siegelTheta` : `(%, %, %) -> %`

siegelTheta(nu, tau, s) computes the Siegel theta function.

#### `sign` <a id="sign"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1383)\]

sign(x) returns the sign of x.

- **Signature**: `% -> %`
- **From**: `SpecialFunctionCategory`

#### `simplify` <a id="simplify"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L884)\]

##### `simplify` : `% -> %`

simplify(expr) simplifies the expr.

```fricas
x:=jWSExpression("x"); simplify(sqrt(x^2)^2)
```

##### `simplify` : `(%, %) -> %`

simplify(expr, assumptions) simplifies the expression expr assuming that assumptions are satisfied. For example:

```fricas
x:=jWSExpression("x"); simplify(sqrt(x^2), "x>0")
```

#### `sin` <a id="sin"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1393)\]

sin(x) returns the sine of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `sinc` <a id="sinc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L104)\]

sinc(x) computes the unnormalized sinc of x, sin(x)/x and 0 if x = 0.

- **Signature**: `% -> %`

#### `sinh` <a id="sinh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1409)\]

sinh(x) returns the hyperbolic sine of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `sizeLess?` <a id="sizeless"></a>

sizeLess?(x, y) tests whether x is strictly smaller than y with respect to the euclideanSize from EuclideanDomain. Note: zero is considered smaller than every nonzero element.

- **Signature**: `(%, %) -> Boolean`
- **From**: `EuclideanDomain`

#### `smaller?` <a id="smaller"></a>

smaller?(x, y) is a strict ordering on depending on representatives of elements of the set. If % has Comparable then smaller? gives mathematical linear order.

- **Signature**: `(%, %) -> Boolean`
- **From**: `ComparableRepresentation`

#### `solve` <a id="solve"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L544)\]

##### `solve` : `(Equation(%), %) -> WSList(WSList(%))`

solve(eq, vars) tries to solve the equation eq.

##### `solve` : `(%, %) -> WSList(WSList(%))`

solve(expr, vars) tries to solve the expression expr.

##### `solve` : `(Equation(%), %, %) -> WSList(WSList(%))`

solve(expr, vars, dom) tries to solve the expression expr.

##### `solve` : `(%, %, %) -> WSList(WSList(%))`

solve(expr, vars, dom) tries to solve the expression expr.

#### `solveLinearPolynomialEquation` <a id="solvelinearpolynomialequation"></a>

##### `solveLinearPolynomialEquation` : `(List(SparseUnivariatePolynomial(%)), SparseUnivariatePolynomial(%)) -> Union(List(SparseUnivariatePolynomial(%)),"failed")`

solveLinearPolynomialEquation([f1, ..., fn], g) (where the fi are relatively prime to each other) returns a list of ai such that g/prod fi = sum ai/fi or returns "failed" if no such list of ai's exists.

- **From**: `PolynomialFactorizationExplicit`

##### `solveLinearPolynomialEquation` : `(List(SparseUnivariatePolynomial(%)), SparseUnivariatePolynomial(%)) -> Union(List(SparseUnivariatePolynomial(%)),"failed") if % has PFECAT`

Operation defined in WSExpression.

#### `sort` <a id="sort"></a>

sort(agg) returns agg in sorted order. For complex numbers, sorts them by their real part first.

- **Signature**: `% -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `sorted?` <a id="sorted"></a>

sorted?(agg) checks whether agg is sorted or not.

- **Signature**: `% -> Boolean`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `sphericalBesselJ` <a id="sphericalbesselj"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L146)\]

sphericalBesselJ(n,z) returns the spherical Bessel of the first kind of z.

- **Signature**: `(%, %) -> %`

#### `sphericalBesselY` <a id="sphericalbessely"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L149)\]

sphericalBesselY(n,z) returns the spherical Bessel of the second kind of z.

- **Signature**: `(%, %) -> %`

#### `sphericalHankelH1` <a id="sphericalhankelh1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L152)\]

sphericalHankelH1(n,z) returns the spherical Hankel function of the first kind of z.

- **Signature**: `(%, %) -> %`

#### `sphericalHankelH2` <a id="sphericalhankelh2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L155)\]

sphericalHankelH2(n,z) returns the spherical Hankel function of the second kind of z.

- **Signature**: `(%, %) -> %`

#### `sphericalHarmonicY` <a id="sphericalharmonicy"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L261)\]

sphericalHarmonicY(l, m, theta, phi) returns the spherical harmonic Y function or evaluates it.

- **Signature**: `(%, %, %, %) -> %`

#### `sqrt` <a id="sqrt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1387)\]

sqrt(x) returns the square root of x. The branch cut lies along the negative real axis, continuous with quadrant II.

- **Signature**: `% -> %`
- **From**: `ComplexCategory(R)`

#### `squareFree` <a id="squarefree"></a>

squareFree(x) returns the square-free factorization of x such that the factors are pairwise relatively prime and each has multiple prime factors.

- **Signature**: `% -> Factored(%)`
- **From**: `UniqueFactorizationDomain`

#### `squareFreePart` <a id="squarefreepart"></a>

squareFreePart(x) returns a product of prime factors of x each taken with multiplicity one.

- **Signature**: `% -> %`
- **From**: `UniqueFactorizationDomain`

#### `squareFreePolynomial` <a id="squarefreepolynomial"></a>

##### `squareFreePolynomial` : `SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%))`

squareFreePolynomial(p) returns the square-free factorization of the univariate polynomial p.

- **From**: `PolynomialFactorizationExplicit`

##### `squareFreePolynomial` : `SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if % has PFECAT`

Operation defined in WSExpression.

#### `stieltjesGamma` <a id="stieltjesgamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L205)\]

##### `stieltjesGamma` : `% -> %`

stieltjesGamma(n) returns the n-th Stieltjes constant.

##### `stieltjesGamma` : `(%, %) -> %`

stieltjesGamma(n,a) returns the generalized n-th Stieltjes constant.

#### `string` <a id="string"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1656)\]

string(jt) returns the string representation of jt.

- **Signature**: `% -> String`
- **From**: [`JLType`](JLType.md)

#### `struveH` <a id="struveh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1507)\]

struveH(v, z) is the Struve H function.

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `struveL` <a id="struvel"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1508)\]

struveL(v, z) is the Struve L function defined by the formula struveL(v, z) = -%i^exp(-v*%pi*%i/2)*struveH(v, %i*z).

- **Signature**: `(%, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `subResultants` <a id="subresultants"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L784)\]

subResultants(p1,p2,x) returns the subresultant of p1 and p2 with respect to x.

- **Signature**: `(%, %, %) -> %`

#### `subst` <a id="subst"></a>

##### `subst` : `(%, Equation(%)) -> %`

subst(f, k = g) replaces the kernel k by g formally in f.

- **From**: `ExpressionSpace2(K)`

##### `subst` : `(%, List(K), List(%)) -> %`

subst(f, [k1..., kn], [g1, ..., gn]) replaces the kernels k1, ..., kn by g1, ..., gn formally in f.

- **From**: `ExpressionSpace2(K)`

##### `subst` : `(%, List(Equation(%))) -> %`

subst(f, [k1 = g1, ..., kn = gn]) replaces the kernels k1, ..., kn by g1, ..., gn formally in f.

- **From**: `ExpressionSpace2(K)`

##### `subst` : `(%, List(Kernel(%)), List(%)) -> %`

Operation defined in WSExpression.

#### `subtractIfCan` <a id="subtractifcan"></a>

subtractIfCan(x, y) returns an element z such that z+y=x or "failed" if no such element exists.

- **Signature**: `(%, %) -> Union(%,"failed")`
- **From**: `CancellationAbelianMonoid`

#### `sum` <a id="sum"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L426)\]

##### `sum` : `(%, %) -> %`

sum(f(n),range) returns the sum f(imin) + ... + f(imax) defined by the list range, for example

```fricas
jWSExpression("{i, imin, imax}")
```

. See Wolfram Language specifications.

##### `sum` : `(%, %, Segment(Integer)) -> %`

sum(f(n),n, a..b) returns the sum f(a) + ... + f(b).

##### `sum` : `(%, Symbol) -> %`

sum(f(n),n) returns the indefinite sum of f(n).

#### `summation` <a id="summation"></a>

##### `summation` : `(%, SegmentBinding(%)) -> %`

summation(f(n), n = a..b) returns f(a) + ... + f(b) as a formal sum.

- **From**: `CombinatorialOpsCategory`

##### `summation` : `(%, Symbol) -> %`

summation(f(n), n) returns the formal sum S(n) which verifies S(n+1) - S(n) = f(n).

- **From**: `CombinatorialOpsCategory`

#### `symmetricPolynomial` <a id="symmetricpolynomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L754)\]

symmetricPolynomial(n,lvars) returns the n-th elementary symmetric polynomial with respect to variables in lvars.

- **Signature**: `(%, WSList(%)) -> %`

#### `symmetricReduction` <a id="symmetricreduction"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L757)\]

##### `symmetricReduction` : `(%, WSList(%)) -> WSList(%)`

symmetricReduction(f,lvars) returns a pair of polynomials representing f = p+q where p is a symmetric polynomial, q the remainder.

##### `symmetricReduction` : `(%, WSList(%), WSList(%)) -> WSList(%)`

symmetricReduction(f, lvars, replnt) returns a pair of polynomials representing f = p+q where p is a symmetric polynomial, q the remainder where variables in p replaced by the ones in replnt.

#### `take` <a id="take"></a>

##### `take` : `(%, Integer) -> %`

take(l,i) returns the first i elements.

- **From**: [`WSAggregate(E)`](WSAggregate.md)

##### `take` : `(%, WSList(WSInteger)) -> %`

Operation defined in WSExpression.

#### `tan` <a id="tan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1395)\]

tan(x) returns the tangent of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `tanh` <a id="tanh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1411)\]

tanh(x) returns the hyperbolic tangent of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `toExpression` <a id="toexpression"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L994)\]

##### `toExpression` : `String -> %`

toExpression(expr) converts expr to a WS expression and evaluates it.

##### `toExpression` : `(String, %) -> %`

toExpression(expr, form) converts expr to a WS expression and evaluates it with output in the format form.

##### `toExpression` : `(String, %, %) -> %`

toExpression(expr, form, h) converts expr to a WS expression and evaluates it with output in the format form but wrapping the head with h. `Hold` for example.

#### `toString` <a id="tostring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L991)\]

##### `toString` : `(%, %) -> String`

toString(expr, form) returns the string representation of expr with WS language format form.

##### `toString` : `% -> String`

toString(obj) returns the string representation of obj.

- **From**: [`WSObject`](WSObject.md)

#### `together` <a id="together"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L941)\]

together(expr) puts together terms over a common denominator cancelling common factors.

- **Signature**: `% -> %`

#### `tower` <a id="tower"></a>

##### `tower` : `% -> List(K)`

tower(f) returns all the kernels appearing in f, no matter what their levels are.

- **From**: `ExpressionSpace2(K)`

##### `tower` : `List(%) -> List(K)`

tower([f1,...,fn]) returns all the kernels appearing in f1, ..., fn no matter what their levels are.

- **From**: `ExpressionSpace2(K)`

##### `tower` : `% -> List(Kernel(%))`

Operation defined in WSExpression.

##### `tower` : `List(%) -> List(Kernel(%))`

Operation defined in WSExpression.

#### `trace` <a id="trace"></a>

##### `trace` : `% -> R`

trace(a) returns the trace of the regular representation of a with respect to any basis.

- **From**: `FiniteRankAlgebra(R,UP)`

##### `trace` : `% -> %`

Operation defined in WSExpression.

#### `traceMatrix` <a id="tracematrix"></a>

##### `traceMatrix` : `() -> Matrix(R)`

traceMatrix() is the n-by-n matrix ( Tr(vi * vj) ), where v1, ..., vn are the elements of the fixed basis.

- **From**: `FramedAlgebra(R,UP)`

##### `traceMatrix` : `Vector(%) -> Matrix(R)`

traceMatrix([v1, .., vn]) is the n-by-n matrix ( Tr(vi * vj) )

- **From**: `FiniteRankAlgebra(R,UP)`

##### `traceMatrix` : `() -> Matrix(%)`

Operation defined in WSExpression.

##### `traceMatrix` : `Vector(%) -> Matrix(%)`

Operation defined in WSExpression.

#### `traditionalForm` <a id="traditionalform"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1103)\]

traditionalForm(expr) returns a traditional form of expr i.e. its WS 'TraditionalForm'.

- **Signature**: `% -> %`

#### `trigExpand` <a id="trigexpand"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L963)\]

trigExpand(expr) tries to expand (hyperbolic) trigonometric functions in expr.

- **Signature**: `% -> %`

#### `trigFactor` <a id="trigfactor"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L979)\]

trigFactor(expr) factors (hyperbolic) trigonometric functions in expr.

- **Signature**: `% -> %`

#### `trigFactorList` <a id="trigfactorlist"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L982)\]

trigFactorList(expr) returns a list of factors of (hyperbolic) trigonometric functions in expr.

- **Signature**: `% -> WSList(%)`

#### `trigReduce` <a id="trigreduce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L974)\]

trigReduce(expr) reduces power and products of trigonometric functions.

- **Signature**: `% -> %`

#### `trigToExp` <a id="trigtoexp"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L985)\]

trigToExp(expr) returns expr with (hyperbolic) trigonometric functions converted to, eventually complex, exponentials.

- **Signature**: `% -> %`

#### `union` <a id="union"></a>

union(agg1, agg2) is the union set operator. Elements are sorted on output.

- **Signature**: `(%, %) -> %`
- **From**: [`WSAggregate(E)`](WSAggregate.md)

#### `unit?` <a id="unit"></a>

unit?(x) tests whether x is a unit, is invertible.

- **Signature**: `% -> Boolean`
- **From**: `EntireRing`

#### `unitCanonical` <a id="unitcanonical"></a>

unitCanonical(x) returns unitNormal(x).canonical.

- **Signature**: `% -> %`
- **From**: `EntireRing`

#### `unitNormal` <a id="unitnormal"></a>

unitNormal(x) tries to choose a canonical element from the associate class of x. The attribute canonicalUnitNormal, if asserted, means that the "canonical" element is the same across all associates of x if unitNormal(x) = [u, c, a] then u*c = x, a*u = 1.

- **Signature**: `% -> Record(unit: %,canonical: %,associate: %)`
- **From**: `EntireRing`

#### `unitStep` <a id="unitstep"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1458)\]

unitStep(x) is 0 for x less than 0, 1 for x bigger or equal 0.

- **Signature**: `% -> %`
- **From**: `SpecialFunctionCategory`

#### `univariate` <a id="univariate"></a>

##### `univariate` : `(%, K) -> Fraction(SparseUnivariatePolynomial(%))`

univariate(f, k) returns f viewed as a univariate fraction in k.

- **From**: `FunctionSpace2(R,K)`

##### `univariate` : `(%, Kernel(%)) -> Fraction(SparseUnivariatePolynomial(%))`

Operation defined in WSExpression.

#### `values` <a id="values"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L1037)\]

values(expr) returns the values elements in expr.

- **Signature**: `% -> %`

#### `variables` <a id="variables"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L707)\]

##### `variables` : `% -> WSList(%)`

variables(p) returns the list of variables in p.

##### `variables` : `% -> List(Symbol)`

variables(f) returns the list of all the variables of f.

- **From**: `FunctionSpace2(R,K)`

##### `variables` : `List(%) -> List(Symbol)`

variables([f1, ..., fn]) returns the list of all the variables of f1, ..., fn.

- **From**: `FunctionSpace2(R,K)`

#### `weberE` <a id="webere"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L168)\]

##### `weberE` : `(%, %, %) -> %`

weberE(v,n,z) is the associated Weber E function.

##### `weberE` : `(%, %) -> %`

weberE(v, z) is the Weber E function.

- **From**: `SpecialFunctionCategory`

#### `weierstrassP` <a id="weierstrassp"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L180)\]

weierstrassP(g2, g3, z) is the Weierstrass P function.

- **Signature**: `(%, %, %) -> %`

#### `weierstrassPInverse` <a id="weierstrasspinverse"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L189)\]

weierstrassPInverse(g2, g3, z) is the inverse of Weierstrass P function, defined by the formula WeierstrassP(g2, g3, WeierstrassPInverse(g2, g3, z)) = z.

- **Signature**: `(%, %, %) -> %`

#### `weierstrassPPrime` <a id="weierstrasspprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L182)\]

weierstrassPPrime(g2, g3, z) is the derivative of the Weierstrass P function.

- **Signature**: `(%, %, %) -> %`

#### `weierstrassSigma` <a id="weierstrasssigma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L185)\]

weierstrassSigma(g2, g3, z) is the Weierstrass sigma function.

- **Signature**: `(%, %, %) -> %`

#### `weierstrassZeta` <a id="weierstrasszeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L187)\]

weierstrassZeta(g2, g3, z) is the Weierstrass Zeta function.

- **Signature**: `(%, %, %) -> %`

#### `whittakerM` <a id="whittakerm"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L305)\]

whittakerM(k,m,x) computes the Whittaker function M of x.

- **Signature**: `(%, %, %) -> %`

#### `whittakerW` <a id="whittakerw"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L307)\]

whittakerW(k,m,z) computes the Whittaker function W of z.

- **Signature**: `(%, %, %) -> %`

#### `wilsonW` <a id="wilsonw"></a>

wilsonW(n, a, b, c, d, z) is the Wilson polynomial.

- **Signature**: `(%, %, %, %, %, %) -> %`
- **From**: `SpecialFunctionCategory`

#### `zernikeR` <a id="zerniker"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L287)\]

zernikeR(n, m, x) returns the Zernike radial polynomial or evaluates it at x if x is a number.

- **Signature**: `(%, %, %) -> %`

#### `zero?` <a id="zero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsexpr.spad#L43)\]

zero? x tries to determine if x is 0. For example:

```fricas
expr:=0$WSEXPR/1*sqrt(17::WSEXPR); zero? expr
```

- **Signature**: `% -> Boolean`

#### `zeroOf` <a id="zeroof"></a>

##### `zeroOf` : `% -> %`

zeroOf(p) returns y such that p(y) = 0. The value y is expressed in terms of radicals if possible, and otherwise as an implicit algebraic quantity. Error: if p has more than one variable.

- **From**: `AlgebraicallyClosedFunctionSpace(R)`

##### `zeroOf` : `(%, Symbol) -> %`

zeroOf(p, y) returns y such that p(y) = 0. The value y is expressed in terms of radicals if possible, and otherwise as an implicit algebraic quantity which displays as 'y.

- **From**: `AlgebraicallyClosedFunctionSpace(R)`

##### `zeroOf` : `Polynomial(%) -> %`

zeroOf(p) returns y such that p(y) = 0. If possible, y is expressed in terms of radicals. Otherwise it is an implicit algebraic quantity. Error: if p has more than one variable y.

- **From**: `AlgebraicallyClosedField`

##### `zeroOf` : `SparseUnivariatePolynomial(%) -> %`

zeroOf(p) returns y such that p(y) = 0; if possible, y is expressed in terms of radicals. Otherwise it is an implicit algebraic quantity.

- **From**: `AlgebraicallyClosedField`

##### `zeroOf` : `(SparseUnivariatePolynomial(%), Symbol) -> %`

zeroOf(p, y) returns y such that p(y) = 0; if possible, y is expressed in terms of radicals. Otherwise it is an implicit algebraic quantity which displays as 'y.

- **From**: `AlgebraicallyClosedField`

#### `zerosOf` <a id="zerosof"></a>

##### `zerosOf` : `% -> List(%)`

zerosOf(p) returns [y1, ..., yn] such that p(yi) = 0. The yi's are expressed in radicals if possible. Note: the returned values y1, ..., yn contain new symbols which are bound in the interpreter to the respective values. Error: if p has more than one variable.

- **From**: `AlgebraicallyClosedFunctionSpace(R)`

##### `zerosOf` : `(%, Symbol) -> List(%)`

zerosOf(p, y) returns [y1, ..., yn] such that p(yi) = 0. The yi's are expressed in radicals if possible, and otherwise as implicit algebraic quantities containing new symbols which display as '%z0, '%z1, ...; The new symbols are bound in the interpreter to the respective values.

- **From**: `AlgebraicallyClosedFunctionSpace(R)`

##### `zerosOf` : `Polynomial(%) -> List(%)`

zerosOf(p) returns [y1, ..., yn] such that p(yi) = 0. The yi's are expressed in radicals if possible. Otherwise they are implicit algebraic quantities containing new symbols. The new symbols are bound in the interpreter to the respective values. Error: if p has more than one variable y.

- **From**: `AlgebraicallyClosedField`

##### `zerosOf` : `SparseUnivariatePolynomial(%) -> List(%)`

zerosOf(p) returns [y1, ..., yn] such that p(yi) = 0. The yi's are expressed in radicals if possible. Otherwise they are implicit algebraic quantities containing new symbols. The new symbols are bound in the interpreter to the respective values.

- **From**: `AlgebraicallyClosedField`

##### `zerosOf` : `(SparseUnivariatePolynomial(%), Symbol) -> List(%)`

Operation defined in WSExpression.

#### `~=` <a id="op-neq"></a>

Operation defined in WSExpression.

- **Signature**: `(%, %) -> Boolean`

---

[Back to Index](../index.md)
