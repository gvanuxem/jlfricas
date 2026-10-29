# WSAPComplex

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1442)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS arbitrary precision complex numbers using WS Transport Protocol.

**WSAPComplex(prec: PositiveInteger) is a domain constructor.**  
**Abbreviation for WSAPComplex is WSAPCPX**

## Signatures

```fricas
 ?*? : (WSInteger, %) -> %    ?*? : (WSAPReal(prec), %) -> %
 ?*? : (%, WSAPReal(prec)) -> %    ?*? : (%, Integer) -> % if WSAPReal(prec) has LINEXP(INT)
 ?*? : (%, Fraction(Integer)) -> % if % has CHARZ and WSAPReal(prec) has FIELD or % has CHARZ and WSAPReal(prec) has FFIELDC    ?*? : (Fraction(Integer), %) -> % if % has CHARZ and WSAPReal(prec) has FIELD or % has CHARZ and WSAPReal(prec) has FFIELDC
 ?*? : (PositiveInteger, %) -> %    ?*? : (%, %) -> %
 ?*? : (Integer, %) -> %    ?*? : (NonNegativeInteger, %) -> %
 ?*? : (NMInteger, %) -> JLObject    ?+? : (%, %) -> %
 ?-? : (%, %) -> %    -? : % -> %
 ?/? : (%, %) -> % if WSAPReal(prec) has FIELD    0 : () -> %
 1 : () -> %    ?=? : (%, %) -> Boolean
 Chi : % -> %    Ci : % -> %
 D : % -> % if WSAPReal(prec) has DIFRING    D : (%, NonNegativeInteger) -> % if WSAPReal(prec) has DIFRING
 D : (%, Symbol) -> % if WSAPReal(prec) has PDRING(SYMBOL)    D : (%, List(Symbol)) -> % if WSAPReal(prec) has PDRING(SYMBOL)
 D : (%, Symbol, NonNegativeInteger) -> % if WSAPReal(prec) has PDRING(SYMBOL)    D : (%, List(Symbol), List(NonNegativeInteger)) -> % if WSAPReal(prec) has PDRING(SYMBOL)
 D : (%, (WSAPReal(prec) -> WSAPReal(prec)), NonNegativeInteger) -> %    D : (%, (WSAPReal(prec) -> WSAPReal(prec))) -> %
 Ei : % -> %    Shi : % -> %
 Si : % -> %    ?^? : (%, %) -> %
 ?^? : (%, Integer) -> % if WSAPReal(prec) has FIELD    ?^? : (%, Fraction(Integer)) -> % if WSAPReal(prec) has RADCAT and WSAPReal(prec) has TRANFUN
 ?^? : (%, PositiveInteger) -> %    ?^? : (%, NonNegativeInteger) -> %
 abs : % -> WSAPReal(prec) if WSAPReal(prec) has RNS    acos : % -> %
 acosh : % -> %    acot : % -> %
 acoth : % -> %    acsc : % -> %
 acsch : % -> %    annihilate? : (%, %) -> Boolean
 antiCommutator : (%, %) -> %    argument : % -> WSAPReal(prec) if WSAPReal(prec) has TRANFUN
 asec : % -> %    asech : % -> %
 asin : % -> %    asinh : % -> %
 associates? : (%, %) -> Boolean if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has INTDOM    associator : (%, %, %) -> %
 atan : (%, %) -> %    atan : % -> %
 atanh : % -> %    basis : () -> Vector(%)
 characteristic : () -> NonNegativeInteger    characteristicPolynomial : % -> SparseUnivariatePolynomial(WSAPReal(prec))
 charthRoot : % -> % if WSAPReal(prec) has FFIELDC    charthRoot : % -> Union(%,"failed") if % has CHARNZ and WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or % has CHARNZ and WSAPReal(prec) has FFIELDC
 coerce : WSInteger -> %    coerce : Complex(Integer) -> %
 coerce : WSAPReal(prec) -> %    coerce : % -> %
 coerce : Fraction(Integer) -> % if % has CHARZ and WSAPReal(prec) has FIELD or % has CHARZ and WSAPReal(prec) has FFIELDC or WSAPReal(prec) has RETRACT(FRAC(INT))    coerce : Integer -> %
 coerce : % -> WSExpression    coerce : % -> JLObject
 coerce : % -> OutputForm    commutator : (%, %) -> %
 complex : (WSAPReal(prec), WSAPReal(prec)) -> %    conditionP : Matrix(%) -> Union(Vector(%),"failed") if % has CHARNZ and WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or % has CHARNZ and WSAPReal(prec) has FFIELDC
 conjugate : % -> %    convert : Vector(WSAPReal(prec)) -> %
 convert : % -> Vector(WSAPReal(prec))    convert : % -> SparseUnivariatePolynomial(WSAPReal(prec))
 convert : SparseUnivariatePolynomial(WSAPReal(prec)) -> %    convert : % -> Pattern(Integer) if WSAPReal(prec) has KONVERT(PATTERN(INT))
 convert : % -> Pattern(Float) if WSAPReal(prec) has KONVERT(PATTERN(FLOAT))    convert : % -> Complex(Float) if WSAPReal(prec) has REAL
 convert : % -> Complex(DoubleFloat) if WSAPReal(prec) has REAL    convert : % -> InputForm if WSAPReal(prec) has KONVERT(INFORM)
 convert : % -> String    coordinates : (%, Vector(%)) -> Vector(WSAPReal(prec))
 coordinates : (Vector(%), Vector(%)) -> Matrix(WSAPReal(prec))    coordinates : Vector(%) -> Matrix(WSAPReal(prec))
 coordinates : % -> Vector(WSAPReal(prec))    cos : % -> %
 cosh : % -> %    cot : % -> %
 coth : % -> %    createPrimitiveElement : () -> % if WSAPReal(prec) has FFIELDC
 csc : % -> %    csch : % -> %
 definingPolynomial : () -> SparseUnivariatePolynomial(WSAPReal(prec))    derivationCoordinates : (Vector(%), (WSAPReal(prec) -> WSAPReal(prec))) -> Matrix(WSAPReal(prec)) if WSAPReal(prec) has FIELD
 differentiate : % -> % if WSAPReal(prec) has DIFRING    differentiate : (%, NonNegativeInteger) -> % if WSAPReal(prec) has DIFRING
 differentiate : (%, Symbol) -> % if WSAPReal(prec) has PDRING(SYMBOL)    differentiate : (%, List(Symbol)) -> % if WSAPReal(prec) has PDRING(SYMBOL)
 differentiate : (%, Symbol, NonNegativeInteger) -> % if WSAPReal(prec) has PDRING(SYMBOL)    differentiate : (%, List(Symbol), List(NonNegativeInteger)) -> % if WSAPReal(prec) has PDRING(SYMBOL)
 differentiate : (%, (WSAPReal(prec) -> WSAPReal(prec)), NonNegativeInteger) -> %    differentiate : (%, (WSAPReal(prec) -> WSAPReal(prec))) -> %
 dilog : % -> %    discreteLog : % -> NonNegativeInteger if WSAPReal(prec) has FFIELDC
 discreteLog : (%, %) -> Union(NonNegativeInteger,"failed") if WSAPReal(prec) has FFIELDC    discriminant : Vector(%) -> WSAPReal(prec)
 discriminant : () -> WSAPReal(prec)    divide : (%, %) -> Record(quotient: %,remainder: %) if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS
 elt : (%, WSAPReal(prec)) -> % if WSAPReal(prec) has ELTAB(WSAPR(prec),WSAPR(prec))    enumerate : () -> List(%) if WSAPReal(prec) has FINITE
 erf : (%, %) -> %    erf : % -> %
 erfc : % -> %    erfi : % -> %
 euclideanSize : % -> NonNegativeInteger if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS    eval : (%, List(WSAPReal(prec)), List(WSAPReal(prec))) -> % if WSAPReal(prec) has EVALAB(WSAPR(prec))
 eval : (%, WSAPReal(prec), WSAPReal(prec)) -> % if WSAPReal(prec) has EVALAB(WSAPR(prec))    eval : (%, Equation(WSAPReal(prec))) -> % if WSAPReal(prec) has EVALAB(WSAPR(prec))
 eval : (%, List(Equation(WSAPReal(prec)))) -> % if WSAPReal(prec) has EVALAB(WSAPR(prec))    eval : (%, List(Symbol), List(WSAPReal(prec))) -> % if WSAPReal(prec) has IEVALAB(SYMBOL,WSAPR(prec))
 eval : (%, Symbol, WSAPReal(prec)) -> % if WSAPReal(prec) has IEVALAB(SYMBOL,WSAPR(prec))    exp : () -> %
 exp : % -> %    expressIdealMember : (List(%), %) -> Union(List(%),"failed") if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS
 ?exquo? : (%, WSAPReal(prec)) -> Union(%,"failed") if WSAPReal(prec) has INTDOM    ?exquo? : (%, %) -> Union(%,"failed") if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has INTDOM
 extendedEuclidean : (%, %, %) -> Union(Record(coef1: %,coef2: %),"failed") if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS    extendedEuclidean : (%, %) -> Record(coef1: %,coef2: %,generator: %) if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS
 factor : % -> Factored(%) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS    factorPolynomial : SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FFIELDC
 factorSquareFreePolynomial : SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FFIELDC    factorsOfCyclicGroupSize : () -> List(Record(factor: Integer,exponent: NonNegativeInteger)) if WSAPReal(prec) has FFIELDC
 fresnelC : % -> %    fresnelS : % -> %
 gcd : List(%) -> % if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS    gcd : (%, %) -> % if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS
 gcdPolynomial : (SparseUnivariatePolynomial(%), SparseUnivariatePolynomial(%)) -> SparseUnivariatePolynomial(%) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS    generator : () -> %
 hash : % -> SingleInteger if WSAPReal(prec) has HASHABL    hashUpdate! : (HashState, %) -> HashState if WSAPReal(prec) has HASHABL
 imag : % -> WSAPReal(prec)    imaginary : () -> %
 index : PositiveInteger -> % if WSAPReal(prec) has FINITE    init : () -> % if WSAPReal(prec) has FFIELDC
 integral : (%, SegmentBinding(%)) -> %    integral : (%, Symbol) -> %
 inv : % -> % if WSAPReal(prec) has FIELD    jWSComplex : (WSAPReal(prec), WSAPReal(prec)) -> %
 jWSComplex : WSAPReal(prec) -> %    jWSInterpret : (String, String, String) -> %
 jWSInterpret : (String, String) -> %    jWSInterpret : String -> %
 jlAbout : % -> Void    jlApply : (String, %, %, %, %, %) -> JLObject
 jlApply : (String, %, %, %, %) -> JLObject    jlApply : (String, %, %, %) -> JLObject
 jlApply : (String, %, %) -> JLObject    jlApply : (String, %) -> JLObject
 jlApprox? : (%, %) -> Boolean    jlDisplay : % -> Void
 jlDump : JLObject -> Void    jlEval : % -> %
 jlFieldNames : % -> JLObject    jlGetField : (%, JLSymbol) -> JLObject
 jlGetJuliaIndex : % -> String    jlGetProperty : (%, JLSymbol) -> JLObject
 jlHead : % -> WSSymbol    jlId : % -> Integer
 jlNames : % -> JLObject    jlObject : () -> String
 jlPropertyNames : % -> JLObject    jlRef : % -> SExpression
 jlSymbolic : % -> String    jlText : (%, String) -> List(String)
 jlType : % -> Symbol    jlWSApply : (String, List(%)) -> WSExpression
 jlWSApply : (String, %, %, %, %, %) -> WSExpression    jlWSApply : (String, %, %, %, %) -> WSExpression
 jlWSApply : (String, %, %, %) -> WSExpression    jlWSApply : (String, %, %) -> WSExpression
 jlWSApply : (String, %) -> WSExpression    jlWSEval : (String, List(%)) -> WSExpression
 jlWSEval : (String, %, %, %, %, %) -> WSExpression    jlWSEval : (String, %, %, %, %) -> WSExpression
 jlWSEval : (String, %, %, %) -> WSExpression    jlWSEval : (String, %, %) -> WSExpression
 jlWSEval : (String, %) -> WSExpression    jlimref : String -> %
 jlref : String -> %    latex : % -> String
 lcm : List(%) -> % if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS    lcm : (%, %) -> % if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS
 lcmCoef : (%, %) -> Record(llcm_res: %,coeff1: %,coeff2: %) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS    leftPower : (%, PositiveInteger) -> %
 leftPower : (%, NonNegativeInteger) -> %    leftRecip : % -> Union(%,"failed")
 li : % -> %    lift : % -> SparseUnivariatePolynomial(WSAPReal(prec))
 log : % -> %    log10 : % -> %
 log2 : % -> %    lookup : % -> PositiveInteger if WSAPReal(prec) has FINITE
 map : ((WSAPReal(prec) -> WSAPReal(prec)), %) -> %    minimalPolynomial : % -> SparseUnivariatePolynomial(WSAPReal(prec)) if WSAPReal(prec) has FIELD
 missing? : % -> Boolean    multiEuclidean : (List(%), %) -> Union(List(%),"failed") if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS
 mutable? : % -> Boolean    nextItem : % -> Union(%,"failed") if WSAPReal(prec) has FFIELDC
 norm : % -> WSAPReal(prec)    nothing? : % -> Boolean
 nthRoot : (%, Integer) -> % if WSAPReal(prec) has RADCAT and WSAPReal(prec) has TRANFUN    numeric : (%, PositiveInteger) -> WSExpression
 numeric : % -> WSExpression    numeric? : % -> Boolean
 one? : % -> Boolean    opposite? : (%, %) -> Boolean
 order : % -> PositiveInteger if WSAPReal(prec) has FFIELDC    order : % -> OnePointCompletion(PositiveInteger) if WSAPReal(prec) has FFIELDC
 patternMatch : (%, Pattern(Integer), PatternMatchResult(Integer,%)) -> PatternMatchResult(Integer,%) if WSAPReal(prec) has PATMAB(INT)    patternMatch : (%, Pattern(Float), PatternMatchResult(Float,%)) -> PatternMatchResult(Float,%) if WSAPReal(prec) has PATMAB(FLOAT)
 pi : () -> %    plenaryPower : (%, PositiveInteger) -> %
 polarCoordinates : % -> Record(r: WSAPReal(prec),phi: WSAPReal(prec)) if WSAPReal(prec) has RNS and WSAPReal(prec) has TRANFUN    prime? : % -> Boolean if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS
 primeFrobenius : (%, NonNegativeInteger) -> % if WSAPReal(prec) has FFIELDC    primeFrobenius : % -> % if WSAPReal(prec) has FFIELDC
 primitive? : % -> Boolean if WSAPReal(prec) has FFIELDC    primitiveElement : () -> % if WSAPReal(prec) has FFIELDC
 principalIdeal : List(%) -> Record(coef: List(%),generator: %) if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS    ?quo? : (%, %) -> % if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS
 random : () -> % if WSAPReal(prec) has FINITE    rank : () -> PositiveInteger
 rational : % -> Fraction(Integer) if WSAPReal(prec) has INS    rational? : % -> Boolean if WSAPReal(prec) has INS
 rationalIfCan : % -> Union(Fraction(Integer),"failed") if WSAPReal(prec) has INS    real : % -> WSAPReal(prec)
 recip : % -> Union(%,"failed")    reduce : SparseUnivariatePolynomial(WSAPReal(prec)) -> %
 reduce : Fraction(SparseUnivariatePolynomial(WSAPReal(prec))) -> Union(%,"failed") if WSAPReal(prec) has FIELD    reducedSystem : Matrix(%) -> Matrix(Integer) if WSAPReal(prec) has LINEXP(INT)
 reducedSystem : (Matrix(%), Vector(%)) -> Record(mat: Matrix(Integer),vec: Vector(Integer)) if WSAPReal(prec) has LINEXP(INT)    reducedSystem : (Matrix(%), Vector(%)) -> Record(mat: Matrix(WSAPReal(prec)),vec: Vector(WSAPReal(prec)))
 reducedSystem : Matrix(%) -> Matrix(WSAPReal(prec))    regularRepresentation : (%, Vector(%)) -> Matrix(WSAPReal(prec))
 regularRepresentation : % -> Matrix(WSAPReal(prec))    ?rem? : (%, %) -> % if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS
 representationType : () -> Union("prime",polynomial,normal,cyclic) if WSAPReal(prec) has FFIELDC    represents : (Vector(WSAPReal(prec)), Vector(%)) -> %
 represents : Vector(WSAPReal(prec)) -> %    retract : % -> Integer if WSAPReal(prec) has RETRACT(INT)
 retract : % -> Fraction(Integer) if WSAPReal(prec) has RETRACT(FRAC(INT))    retract : % -> WSAPReal(prec)
 retractIfCan : % -> Union(Integer,"failed") if WSAPReal(prec) has RETRACT(INT)    retractIfCan : % -> Union(Fraction(Integer),"failed") if WSAPReal(prec) has RETRACT(FRAC(INT))
 retractIfCan : % -> Union(WSAPReal(prec),"failed")    rightPower : (%, PositiveInteger) -> %
 rightPower : (%, NonNegativeInteger) -> %    rightRecip : % -> Union(%,"failed")
 sample : () -> %    sec : % -> %
 sech : % -> %    sin : % -> %
 sinc : % -> %    sinh : % -> %
 size : () -> NonNegativeInteger if WSAPReal(prec) has FINITE    sizeLess? : (%, %) -> Boolean if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS
 smaller? : (%, %) -> Boolean if WSAPReal(prec) has COMPARR    solveLinearPolynomialEquation : (List(SparseUnivariatePolynomial(%)), SparseUnivariatePolynomial(%)) -> Union(List(SparseUnivariatePolynomial(%)),"failed") if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FFIELDC
 sqrt : % -> % if WSAPReal(prec) has FIELD and WSAPReal(prec) has ORDRING and WSAPReal(prec) has RADCAT or WSAPReal(prec) has RADCAT and WSAPReal(prec) has TRANFUN    squareFree : % -> Factored(%) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS
 squareFreePart : % -> % if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS    squareFreePolynomial : SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FFIELDC
 string : % -> String    subtractIfCan : (%, %) -> Union(%,"failed")
 tableForDiscreteLogarithm : Integer -> Table(PositiveInteger,NonNegativeInteger) if WSAPReal(prec) has FFIELDC    tan : % -> %
 tanh : % -> %    toString : (%, WSExpression) -> String
 toString : % -> String    trace : % -> WSAPReal(prec)
 traceMatrix : Vector(%) -> Matrix(WSAPReal(prec))    traceMatrix : () -> Matrix(WSAPReal(prec))
 unit? : % -> Boolean if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has INTDOM    unitCanonical : % -> % if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has INTDOM
 unitNormal : % -> Record(unit: %,canonical: %,associate: %) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has INTDOM    urand01 : () -> %
 zero? : % -> Boolean    ?~=? : (%, %) -> Boolean
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`*`](#op-mul) | n * z multiplies n by z. |
| [`+`](#op-add) | Operation defined in WSAPComplex |
| [`/`](#op-div) | Operation defined in WSAPComplex |
| [`0`](#0) | 0 is a distinguished element, in AbelianMonoid it is the additive identity element, in Mag... |
| [`1`](#1) | 1 returns the unit element, denoted by 1. |
| [`Chi`](#chi) | Chi(x) returns the hyperbolic cosine integral of x, the integral of cosh(x) / x dx. |
| [`Ci`](#ci) | Ci(x) returns the cosine integral of x, the integral of cos(x) / x dx. |
| [`D`](#d) | D(x) returns the derivative of x. This function is a simple differential operator where no... |
| [`Ei`](#ei) | Ei(x) returns the exponential integral of x, the integral of exp(x)/x dx. |
| [`Shi`](#shi) | Shi(x) returns the hyperbolic sine integral of x, the integral of sinh(x) / x dx. |
| [`Si`](#si) | Si(x) returns the sine integral of x, the integral of sin(x) / x dx. |
| [`^`](#op-pow) | Operation defined in WSAPComplex |
| [`abs`](#abs) | abs(x) returns the absolute value of x = sqrt(norm(x)). |
| [`acos`](#acos) | acos(x) returns the arc-cosine of x. When evaluated into some subset of the complex number... |
| [`acosh`](#acosh) | acosh(x) returns the hyperbolic arc-cosine of x. |
| [`acot`](#acot) | acot(x) returns the arc-cotangent of x. |
| [`acoth`](#acoth) | acoth(x) returns the hyperbolic arc-cotangent of x. |
| [`acsc`](#acsc) | acsc(x) returns the arc-cosecant of x. |
| [`acsch`](#acsch) | acsch(x) returns the hyperbolic arc-cosecant of x. |
| [`annihilate?`](#annihilate) | annihilate?(x,y) holds when the product of x and y is 0. |
| [`antiCommutator`](#anticommutator) | antiCommutator(a, b) returns a*b+b*a. |
| [`argument`](#argument) | argument(x) returns the angle made by (1, 0) and x. |
| [`asec`](#asec) | asec(x) returns the arc-secant of x. |
| [`asech`](#asech) | asech(x) returns the hyperbolic arc-secant of x. |
| [`asin`](#asin) | asin(x) returns the arc-sine of x. When evaluated into some subset of the complex numbers,... |
| [`asinh`](#asinh) | asinh(x) returns the hyperbolic arc-sine of x. |
| [`associates?`](#associates) | associates?(x, y) tests whether x and y are associates, differ by a unit factor. |
| [`associator`](#associator) | associator(a, b, c) returns (a*b)*c-a*(b*c). |
| [`atan`](#atan) | atan(z1,z2) computes the arc tangent of z2/z1. |
| [`atanh`](#atanh) | atanh(x) returns the hyperbolic arc-tangent of x. |
| [`basis`](#basis) | basis() returns the fixed R-module basis. |
| [`characteristic`](#characteristic) | characteristic() returns the characteristic of the ring. |
| [`characteristicPolynomial`](#characteristicpolynomial) | characteristicPolynomial(a) returns the characteristic polynomial of the regular represent... |
| [`charthRoot`](#charthroot) | Operation defined in WSAPComplex |
| [`coerce`](#coerce) | coerce(i): convenience function. |
| [`commutator`](#commutator) | commutator(a, b) returns a*b-b*a. |
| [`complex`](#complex) | complex(re, im) returns the complex number from real part re and imaginary part im. |
| [`conditionP`](#conditionp) | Operation defined in WSAPComplex |
| [`conjugate`](#conjugate) | conjugate(x + %i y) returns x - %i y. |
| [`convert`](#convert) | convert(up) converts the univariate polynomial up to an algebra element, reducing by the d... |
| [`coordinates`](#coordinates) | coordinates([v1, ..., vm]) returns the coordinates of the vi's with respect to the fixed b... |
| [`cos`](#cos) | cos(x) returns the cosine of x. |
| [`cosh`](#cosh) | cosh(x) returns the hyperbolic cosine of x. |
| [`cot`](#cot) | cot(x) returns the cotangent of x. |
| [`coth`](#coth) | coth(x) returns the hyperbolic cotangent of x. |
| [`createPrimitiveElement`](#createprimitiveelement) | Operation defined in WSAPComplex |
| [`csc`](#csc) | csc(x) returns the cosecant of x. |
| [`csch`](#csch) | csch(x) returns the hyperbolic cosecant of x. |
| [`definingPolynomial`](#definingpolynomial) | definingPolynomial() returns the minimal polynomial which generator() satisfies. |
| [`derivationCoordinates`](#derivationcoordinates) | derivationCoordinates(b, ') returns M such that b' = M b. |
| [`differentiate`](#differentiate) | differentiate(x) returns the derivative of x. This function is a simple differential opera... |
| [`dilog`](#dilog) | dilog(x) returns the dilogarithm of x, the integral of log(x) / (1 - x) dx. |
| [`discreteLog`](#discretelog) | Operation defined in WSAPComplex |
| [`discriminant`](#discriminant) | discriminant() = determinant(traceMatrix()). |
| [`divide`](#divide) | divide(x, y) divides x by y producing a record containing a quotient and remainder, where ... |
| [`elt`](#elt) | elt(u, i) (also written: u.i) returns the element of u indexed by i. Error: if i is not an... |
| [`enumerate`](#enumerate) | Operation defined in WSAPComplex |
| [`erf`](#erf) | erf(z) computes the error function of z. |
| [`erfc`](#erfc) | erfc(z) returns the complementary error function of z. |
| [`erfi`](#erfi) | erfi(x) denotes -%i*erf(%i*x) |
| [`euclideanSize`](#euclideansize) | euclideanSize(x) returns the euclidean size of the element x. Error: if x is zero. |
| [`eval`](#eval) | eval(f, x, v) replaces x by v in f. |
| [`exp`](#exp) | exp() returns the WSAPReal ℯ (%e or exp(1)). |
| [`expressIdealMember`](#expressidealmember) | expressIdealMember([f1, ..., fn], h) returns a representation of h as a linear combination... |
| [`exquo`](#exquo) | exquo(a, b) either returns an element c such that c*b=a or "failed" if no such element can... |
| [`extendedEuclidean`](#extendedeuclidean) | extendedEuclidean(x, y) returns a record rec where rec.coef1*x+rec.coef2*y = rec.generator... |
| [`factor`](#factor) | factor(x) returns the factorization of x into irreducibles. |
| [`factorPolynomial`](#factorpolynomial) | Operation defined in WSAPComplex |
| [`factorSquareFreePolynomial`](#factorsquarefreepolynomial) | Operation defined in WSAPComplex |
| [`factorsOfCyclicGroupSize`](#factorsofcyclicgroupsize) | Operation defined in WSAPComplex |
| [`fresnelC`](#fresnelc) | fresnelC(x) is the Fresnel integral C, defined by C(x) = integrate(cos(%pi*t^2/2), t=0..x) |
| [`fresnelS`](#fresnels) | fresnelS(x) is the Fresnel integral S, defined by S(x) = integrate(sin(%pi*t^2/2), t=0..x) |
| [`gcd`](#gcd) | gcd(x, y) returns the greatest common divisor of x and y. |
| [`gcdPolynomial`](#gcdpolynomial) | gcdPolynomial(p, q) returns the greatest common divisor (gcd) of univariate polynomials ov... |
| [`generator`](#generator) | generator() returns the generator for this domain. |
| [`hash`](#hash) | Operation defined in WSAPComplex |
| [`hashUpdate!`](#hashupdate) | Operation defined in WSAPComplex |
| [`imag`](#imag) | imag(x) returns imaginary part of x. |
| [`imaginary`](#imaginary) | imaginary() = sqrt(-1) = %i. |
| [`index`](#index) | Operation defined in WSAPComplex |
| [`init`](#init) | Operation defined in WSAPComplex |
| [`integral`](#integral) | integral(f, x = a..b) returns the formal definite integral of f dx for x between a and b. |
| [`inv`](#inv) | inv x returns the multiplicative inverse of x. Error: if x is 0. |
| [`jWSComplex`](#jwscomplex) | jWSComplex(re) constructs a WSComplex with real part re. |
| [`jWSInterpret`](#jwsinterpret) | jWSInterpret(form) interprets form. |
| [`jlAbout`](#jlabout) | jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia. |
| [`jlApply`](#jlapply) | jlApply(func, obj) applies the function func with obj as parameter and returns the result ... |
| [`jlApprox?`](#jlapprox) | jlApprox?(x,y) computes inexact equality comparison with WS default parameters (Equal). |
| [`jlDisplay`](#jldisplay) | jlDisplay(v) pretty prints v (à la Julia). |
| [`jlDump`](#jldump) | jlDump(obj) dumps (shows) the Julia object (internal structure with type). |
| [`jlEval`](#jleval) | jlEval(expr) evaluates expr using the WS Transport Protocol. |
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
| [`jlWSApply`](#jlwsapply) | jlWSApply(sym, x) creates an unevaluated Wolfram expression sym[x]. |
| [`jlWSEval`](#jlwseval) | jlWSEval(func, x) evaluates the Wolfram function func on x. |
| [`jlimref`](#jlimref) | jlimref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia im... |
| [`jlref`](#jlref) | jlref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia muta... |
| [`latex`](#latex) | latex(s) returns a LaTeX-printable output representation of s. |
| [`lcm`](#lcm) | lcm(x, y) returns the least common multiple of x and y. |
| [`lcmCoef`](#lcmcoef) | lcmCoef(c1, c2) computes (llcm_res, coeff1, coeff2) such that llcm_res is least left commo... |
| [`leftPower`](#leftpower) | leftPower(a, n) returns the n-th left power of a, leftPower(a, n) := a * leftPower(a, n-1)... |
| [`leftRecip`](#leftrecip) | leftRecip(a) returns an element, which is a left inverse of a, or "failed" if such an elem... |
| [`li`](#li) | li(x) returns the logarithmic integral of x, the integral of dx / log(x). |
| [`lift`](#lift) | lift(z) returns a minimal degree univariate polynomial up such that z=reduce up. |
| [`log`](#log) | log(x) returns the natural logarithm of x. When evaluated into some subset of the complex ... |
| [`log10`](#log10) | log10(z) computes the logarithm of z in base 10. |
| [`log2`](#log2) | log2(z) computes the logarithm of z in base 2. |
| [`lookup`](#lookup) | Operation defined in WSAPComplex |
| [`map`](#map) | map(f, ex) evaluates ex, applying f to values of type R in ex. |
| [`minimalPolynomial`](#minimalpolynomial) | minimalPolynomial(a) returns the minimal polynomial of a. |
| [`missing?`](#missing) | missing?(obj) checks whether or not obj is missing. |
| [`multiEuclidean`](#multieuclidean) | multiEuclidean([f1, ..., fn], z) returns a list of coefficients [a1, ..., an] such that z ... |
| [`mutable?`](#mutable) | mutable?(obj) checks whether or not obj is mutable. |
| [`nextItem`](#nextitem) | Operation defined in WSAPComplex |
| [`norm`](#norm) | norm(x) returns x * conjugate(x) |
| [`nothing?`](#nothing) | nothing?(obj) checks whether or not obj is nothing. |
| [`nthRoot`](#nthroot) | nthRoot(x, n) returns the nth root of x. |
| [`numeric`](#numeric) | numeric(expr) returns numerical expr if possible. |
| [`numeric?`](#numeric) | numeric?(x) checks whether or not x is or would yield a number. |
| [`one?`](#one) | one?(a) tests whether a is the unit 1. |
| [`opposite?`](#opposite) | opposite?(x,y) holds if the sum of x and y is 0. |
| [`order`](#order) | Operation defined in WSAPComplex |
| [`patternMatch`](#patternmatch) | patternMatch(expr, pat, res) matches the pattern pat to the expression expr. res contains ... |
| [`pi`](#pi) | pi() returns the constant pi. |
| [`plenaryPower`](#plenarypower) | plenaryPower(a, n) is recursively defined to be plenaryPower(a, n-1)*plenaryPower(a, n-1) ... |
| [`polarCoordinates`](#polarcoordinates) | polarCoordinates(x) returns (r, phi) such that x = r * exp(%i * phi). |
| [`prime?`](#prime) | prime?(x) tests if x can never be written as the product of two non-units of the ring, x i... |
| [`primeFrobenius`](#primefrobenius) | Operation defined in WSAPComplex |
| [`primitive?`](#primitive) | Operation defined in WSAPComplex |
| [`primitiveElement`](#primitiveelement) | Operation defined in WSAPComplex |
| [`principalIdeal`](#principalideal) | principalIdeal([f1, ..., fn]) returns a record whose generator component is a generator of... |
| [`quo`](#quo) | x quo y is the same as divide(x, y).quotient. See divide from EuclideanDomain. |
| [`random`](#random) | Operation defined in WSAPComplex |
| [`rank`](#rank) | rank() returns the rank of the algebra. |
| [`rational`](#rational) | rational(x) returns x as a rational number. Error: if x is not a rational number. |
| [`rational?`](#rational) | rational?(x) tests if x is a rational number. |
| [`rationalIfCan`](#rationalifcan) | rationalIfCan(x) returns x as a rational number, or "failed" if x is not a rational number... |
| [`real`](#real) | real(x) returns real part of x. |
| [`recip`](#recip) | recip(a) returns an element, which is both a left and a right inverse of a, or "failed" if... |
| [`reduce`](#reduce) | reduce(up) converts the univariate polynomial up to an algebra element, reducing by the de... |
| [`reducedSystem`](#reducedsystem) | reducedSystem(A) returns a matrix B such that A x = 0 and B x = 0 have the same solutions ... |
| [`regularRepresentation`](#regularrepresentation) | regularRepresentation(a) returns the matrix m of the linear map defined by left multiplica... |
| [`rem`](#rem) | x rem y is the same as divide(x, y).remainder. See divide from EuclideanDomain. |
| [`representationType`](#representationtype) | Operation defined in WSAPComplex |
| [`represents`](#represents) | represents([a1, .., an]) returns a1*v1 + ... + an*vn, where v1, ..., vn are the elements o... |
| [`retract`](#retract) | retract(a) transforms a into an element of S if possible. Error: if a cannot be made into ... |
| [`retractIfCan`](#retractifcan) | retractIfCan(a) transforms a into an element of S if possible. Returns "failed" if a canno... |
| [`rightPower`](#rightpower) | rightPower(a, n) returns the n-th right power of a, rightPower(a, n) := rightPower(a, n-1)... |
| [`rightRecip`](#rightrecip) | rightRecip(a) returns an element, which is a right inverse of a, or "failed" if such an el... |
| [`sample`](#sample) | sample yields a value of type % |
| [`sec`](#sec) | sec(x) returns the secant of x. |
| [`sech`](#sech) | sech(x) returns the hyperbolic secant of x. |
| [`sin`](#sin) | sin(x) returns the sine of x. |
| [`sinc`](#sinc) | sinc(z) computes the unnormalized sinc of z, sin(z)/z and 0 if z = 0. |
| [`sinh`](#sinh) | sinh(x) returns the hyperbolic sine of x. |
| [`size`](#size) | Operation defined in WSAPComplex |
| [`sizeLess?`](#sizeless) | sizeLess?(x, y) tests whether x is strictly smaller than y with respect to the euclideanSi... |
| [`smaller?`](#smaller) | smaller?(x, y) is a strict ordering on depending on representatives of elements of the set... |
| [`solveLinearPolynomialEquation`](#solvelinearpolynomialequation) | Operation defined in WSAPComplex |
| [`sqrt`](#sqrt) | sqrt(x) returns the square root of x. The branch cut lies along the negative real axis, co... |
| [`squareFree`](#squarefree) | squareFree(x) returns the square-free factorization of x such that the factors are pairwis... |
| [`squareFreePart`](#squarefreepart) | squareFreePart(x) returns a product of prime factors of x each taken with multiplicity one... |
| [`squareFreePolynomial`](#squarefreepolynomial) | Operation defined in WSAPComplex |
| [`string`](#string) | string(jt) returns the string representation of jt. |
| [`subtractIfCan`](#subtractifcan) | subtractIfCan(x, y) returns an element z such that z+y=x or "failed" if no such element ex... |
| [`tableForDiscreteLogarithm`](#tablefordiscretelogarithm) | Operation defined in WSAPComplex |
| [`tan`](#tan) | tan(x) returns the tangent of x. |
| [`tanh`](#tanh) | tanh(x) returns the hyperbolic tangent of x. |
| [`toString`](#tostring) | toString(expr, form) returns the string representation of expr with WS language format for... |
| [`trace`](#trace) | trace(a) returns the trace of the regular representation of a with respect to any basis. |
| [`traceMatrix`](#tracematrix) | traceMatrix() is the n-by-n matrix ( Tr(vi * vj) ), where v1, ..., vn are the elements of ... |
| [`unit?`](#unit) | unit?(x) tests whether x is a unit, is invertible. |
| [`unitCanonical`](#unitcanonical) | unitCanonical(x) returns unitNormal(x).canonical. |
| [`unitNormal`](#unitnormal) | unitNormal(x) tries to choose a canonical element from the associate class of x. The attri... |
| [`urand01`](#urand01) | urand01() returns a unit square random complex number. |
| [`zero?`](#zero) | zero?(x) tests if x is equal to 0. |
| [`~=`](#op-neq) | Operation defined in WSAPComplex |

### Detailed Documentation

#### `*` <a id="op-mul"></a>

##### `*` : `(WSInteger, %) -> %`

n * z multiplies n by z.

##### `*` : `(WSAPReal(prec), %) -> %`

Operation defined in WSAPComplex.

##### `*` : `(%, WSAPReal(prec)) -> %`

Operation defined in WSAPComplex.

##### `*` : `(%, Integer) -> % if WSAPReal(prec) has LINEXP(INT)`

Operation defined in WSAPComplex.

##### `*` : `(%, Fraction(Integer)) -> % if % has CHARZ and WSAPReal(prec) has FIELD or % has CHARZ and WSAPReal(prec) has FFIELDC`

Operation defined in WSAPComplex.

##### `*` : `(Fraction(Integer), %) -> % if % has CHARZ and WSAPReal(prec) has FIELD or % has CHARZ and WSAPReal(prec) has FFIELDC`

Operation defined in WSAPComplex.

##### `*` : `(PositiveInteger, %) -> %`

Operation defined in WSAPComplex.

##### `*` : `(%, %) -> %`

Operation defined in WSAPComplex.

##### `*` : `(Integer, %) -> %`

Operation defined in WSAPComplex.

##### `*` : `(NonNegativeInteger, %) -> %`

Operation defined in WSAPComplex.

##### `*` : `(NMInteger, %) -> JLObject`

Operation defined in WSAPComplex.

#### `+` <a id="op-add"></a>

Operation defined in WSAPComplex.

- **Signature**: `(%, %) -> %`

#### `/` <a id="op-div"></a>

Operation defined in WSAPComplex.

- **Signature**: `(%, %) -> % if WSAPReal(prec) has FIELD`

#### `0` <a id="0"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1508)\]

0 is a distinguished element, in AbelianMonoid it is the additive identity element, in MagmaWithZero it is multiplicative zero.

- **Signature**: `() -> %`
- **From**: `SetWithZero`

#### `1` <a id="1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1509)\]

1 returns the unit element, denoted by 1.

- **Signature**: `() -> %`
- **From**: `MagmaWithUnit`

#### `Chi` <a id="chi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1619)\]

Chi(x) returns the hyperbolic cosine integral of x, the integral of cosh(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `Ci` <a id="ci"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1618)\]

Ci(x) returns the cosine integral of x, the integral of cos(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `D` <a id="d"></a>

##### `D` : `% -> %`

D(x) returns the derivative of x. This function is a simple differential operator where no variable needs to be specified.

- **From**: `DifferentialRing`

##### `D` : `(%, (R -> R)) -> %`

D(x, deriv) differentiates x extending the derivation deriv on R.

- **From**: `DifferentialExtension(R)`

##### `D` : `(%, (R -> R), NonNegativeInteger) -> %`

D(x, deriv, n) differentiate x n times using a derivation which extends deriv on R.

- **From**: `DifferentialExtension(R)`

##### `D` : `(%, NonNegativeInteger) -> %`

D(x, n) returns the n-th derivative of x.

- **From**: `DifferentialRing`

##### `D` : `% -> % if WSAPReal(prec) has DIFRING`

Operation defined in WSAPComplex.

##### `D` : `(%, NonNegativeInteger) -> % if WSAPReal(prec) has DIFRING`

Operation defined in WSAPComplex.

##### `D` : `(%, Symbol) -> % if WSAPReal(prec) has PDRING(SYMBOL)`

Operation defined in WSAPComplex.

##### `D` : `(%, List(Symbol)) -> % if WSAPReal(prec) has PDRING(SYMBOL)`

Operation defined in WSAPComplex.

##### `D` : `(%, Symbol, NonNegativeInteger) -> % if WSAPReal(prec) has PDRING(SYMBOL)`

Operation defined in WSAPComplex.

##### `D` : `(%, List(Symbol), List(NonNegativeInteger)) -> % if WSAPReal(prec) has PDRING(SYMBOL)`

Operation defined in WSAPComplex.

##### `D` : `(%, (WSAPReal(prec) -> WSAPReal(prec)), NonNegativeInteger) -> %`

Operation defined in WSAPComplex.

##### `D` : `(%, (WSAPReal(prec) -> WSAPReal(prec))) -> %`

Operation defined in WSAPComplex.

#### `Ei` <a id="ei"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1620)\]

Ei(x) returns the exponential integral of x, the integral of exp(x)/x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `Shi` <a id="shi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1617)\]

Shi(x) returns the hyperbolic sine integral of x, the integral of sinh(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `Si` <a id="si"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1616)\]

Si(x) returns the sine integral of x, the integral of sin(x) / x dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `^` <a id="op-pow"></a>

##### `^` : `(%, %) -> %`

Operation defined in WSAPComplex.

##### `^` : `(%, Integer) -> % if WSAPReal(prec) has FIELD`

Operation defined in WSAPComplex.

##### `^` : `(%, Fraction(Integer)) -> % if WSAPReal(prec) has RADCAT and WSAPReal(prec) has TRANFUN`

Operation defined in WSAPComplex.

##### `^` : `(%, PositiveInteger) -> %`

Operation defined in WSAPComplex.

##### `^` : `(%, NonNegativeInteger) -> %`

Operation defined in WSAPComplex.

#### `abs` <a id="abs"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1552)\]

##### `abs` : `% -> R`

abs(x) returns the absolute value of x = sqrt(norm(x)).

- **From**: `ComplexCategory(R)`

##### `abs` : `% -> WSAPReal(prec) if WSAPReal(prec) has RNS`

Operation defined in WSAPComplex.

#### `acos` <a id="acos"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1577)\]

acos(x) returns the arc-cosine of x. When evaluated into some subset of the complex numbers, one branch cut for acos lies along the negative real axis to the left of -1 (inclusive), continuous with the upper half plane, the other along the positive real axis to the right of 1 (inclusive), continuous with the lower half plane.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `acosh` <a id="acosh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1596)\]

acosh(x) returns the hyperbolic arc-cosine of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `acot` <a id="acot"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1586)\]

acot(x) returns the arc-cotangent of x.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `acoth` <a id="acoth"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1607)\]

acoth(x) returns the hyperbolic arc-cotangent of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `acsc` <a id="acsc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1583)\]

acsc(x) returns the arc-cosecant of x.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `acsch` <a id="acsch"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1604)\]

acsch(x) returns the hyperbolic arc-cosecant of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `annihilate?` <a id="annihilate"></a>

annihilate?(x,y) holds when the product of x and y is 0.

- **Signature**: `(%, %) -> Boolean`
- **From**: `Rng`

#### `antiCommutator` <a id="anticommutator"></a>

antiCommutator(a, b) returns a*b+b*a.

- **Signature**: `(%, %) -> %`
- **From**: `NonAssociativeSemiRng`

#### `argument` <a id="argument"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1553)\]

##### `argument` : `% -> R`

argument(x) returns the angle made by (1, 0) and x.

- **From**: `ComplexCategory(R)`

##### `argument` : `% -> WSAPReal(prec) if WSAPReal(prec) has TRANFUN`

Operation defined in WSAPComplex.

#### `asec` <a id="asec"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1580)\]

asec(x) returns the arc-secant of x.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `asech` <a id="asech"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1601)\]

asech(x) returns the hyperbolic arc-secant of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `asin` <a id="asin"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1576)\]

asin(x) returns the arc-sine of x. When evaluated into some subset of the complex numbers, one branch cut for asin lies along the negative real axis to the left of -1 (inclusive), continuous with the upper half plane, the other along the positive real axis to the right of 1 (inclusive), continuous with the lower half plane.

- **Signature**: `% -> %`
- **From**: `ArcTrigonometricFunctionCategory`

#### `asinh` <a id="asinh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1595)\]

asinh(x) returns the hyperbolic arc-sine of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `associates?` <a id="associates"></a>

##### `associates?` : `(%, %) -> Boolean`

associates?(x, y) tests whether x and y are associates, differ by a unit factor.

- **From**: `EntireRing`

##### `associates?` : `(%, %) -> Boolean if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has INTDOM`

Operation defined in WSAPComplex.

#### `associator` <a id="associator"></a>

associator(a, b, c) returns (a*b)*c-a*(b*c).

- **Signature**: `(%, %, %) -> %`
- **From**: `NonAssociativeRng`

#### `atan` <a id="atan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1474)\]

##### `atan` : `(%, %) -> %`

atan(z1,z2) computes the arc tangent of z2/z1.

##### `atan` : `% -> %`

atan(x) returns the arc-tangent of x. When evaluated into some subset of the complex numbers, one branch cut for atan lies along the positive imaginary axis above %i (exclusive), continuous with the left half plane, the other along the negative imaginary axis below -%i (exclusive) continuous with the right half plane. The domain does not contain %i and -%i.

- **From**: `ArcTrigonometricFunctionCategory`

#### `atanh` <a id="atanh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1597)\]

atanh(x) returns the hyperbolic arc-tangent of x.

- **Signature**: `% -> %`
- **From**: `ArcHyperbolicFunctionCategory`

#### `basis` <a id="basis"></a>

basis() returns the fixed R-module basis.

- **Signature**: `() -> Vector(%)`
- **From**: `FramedModule(R)`

#### `characteristic` <a id="characteristic"></a>

characteristic() returns the characteristic of the ring.

- **Signature**: `() -> NonNegativeInteger`
- **From**: `NonAssociativeRing`

#### `characteristicPolynomial` <a id="characteristicpolynomial"></a>

##### `characteristicPolynomial` : `% -> UP`

characteristicPolynomial(a) returns the characteristic polynomial of the regular representation of a with respect to any basis.

- **From**: `FiniteRankAlgebra(R,UP)`

##### `characteristicPolynomial` : `% -> SparseUnivariatePolynomial(WSAPReal(prec))`

Operation defined in WSAPComplex.

#### `charthRoot` <a id="charthroot"></a>

##### `charthRoot` : `% -> % if WSAPReal(prec) has FFIELDC`

Operation defined in WSAPComplex.

##### `charthRoot` : `% -> Union(%,"failed") if % has CHARNZ and WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or % has CHARNZ and WSAPReal(prec) has FFIELDC`

Operation defined in WSAPComplex.

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1483)\]

##### `coerce` : `Integer -> %`

coerce(i): convenience function.

##### `coerce` : `Complex(Integer) -> % -- %i operations for example`

coerce(gi) coerces gi. Convenience function.

##### `coerce` : `WSInteger -> %`

coerce(int): coerces int. Convenience function.

##### `coerce` : `R -> %`

coerce(r) maps the ring element r to a member of the algebra.

- **From**: `Algebra(R)`

##### `coerce` : `S -> %`

coerce(a) transforms a into an element of %.

- **From**: `CoercibleFrom(S)`

##### `coerce` : `% -> S`

coerce(a) transforms a into an element of S.

- **From**: `CoercibleTo(S)`

##### `coerce` : `% -> JLObject`

coerce(obj) coerces obj to JLObject. Convenience function.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `coerce` : `% -> WSExpression`

coerce(expr) returns the WSExpression representation of expr.

- **From**: [`WSObject`](WSObject.md)

##### `coerce` : `Complex(Integer) -> %`

Operation defined in WSAPComplex.

##### `coerce` : `WSAPReal(prec) -> %`

Operation defined in WSAPComplex.

##### `coerce` : `% -> %`

Operation defined in WSAPComplex.

##### `coerce` : `Fraction(Integer) -> % if % has CHARZ and WSAPReal(prec) has FIELD or % has CHARZ and WSAPReal(prec) has FFIELDC or WSAPReal(prec) has RETRACT(FRAC(INT))`

Operation defined in WSAPComplex.

##### `coerce` : `% -> OutputForm`

Operation defined in WSAPComplex.

#### `commutator` <a id="commutator"></a>

commutator(a, b) returns a*b-b*a.

- **Signature**: `(%, %) -> %`
- **From**: `NonAssociativeRng`

#### `complex` <a id="complex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1489)\]

##### `complex` : `(WSAPReal(prec), WSAPReal(prec)) -> %`

complex(re, im) returns the complex number from real part re and imaginary part im.

##### `complex` : `(R, R) -> %`

complex(x, y) constructs x + %i*y.

- **From**: `ComplexCategory(R)`

#### `conditionP` <a id="conditionp"></a>

Operation defined in WSAPComplex.

- **Signature**: `Matrix(%) -> Union(Vector(%),"failed") if % has CHARNZ and WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or % has CHARNZ and WSAPReal(prec) has FFIELDC`

#### `conjugate` <a id="conjugate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1522)\]

conjugate(x + %i y) returns x - %i y.

- **Signature**: `% -> %`
- **From**: `ComplexCategory(R)`

#### `convert` <a id="convert"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1633)\]

##### `convert` : `UP -> %`

convert(up) converts the univariate polynomial up to an algebra element, reducing by the definingPolynomial() if necessary.

- **From**: `MonogenicAlgebra(R,UP)`

##### `convert` : `Vector(R) -> %`

convert([a1, .., an]) returns a1*v1 + ... + an*vn, where v1, ..., vn are the elements of the fixed basis.

- **From**: `FramedModule(R)`

##### `convert` : `% -> S`

convert(a) transforms a into an element of S.

- **From**: `ConvertibleTo(S)`

##### `convert` : `% -> Vector(R)`

convert(a) returns the coordinates of a with respect to the fixed R-module basis.

- **From**: `FramedModule(R)`

##### `convert` : `Vector(WSAPReal(prec)) -> %`

Operation defined in WSAPComplex.

##### `convert` : `% -> Vector(WSAPReal(prec))`

Operation defined in WSAPComplex.

##### `convert` : `% -> SparseUnivariatePolynomial(WSAPReal(prec))`

Operation defined in WSAPComplex.

##### `convert` : `SparseUnivariatePolynomial(WSAPReal(prec)) -> %`

Operation defined in WSAPComplex.

##### `convert` : `% -> Pattern(Integer) if WSAPReal(prec) has KONVERT(PATTERN(INT))`

Operation defined in WSAPComplex.

##### `convert` : `% -> Pattern(Float) if WSAPReal(prec) has KONVERT(PATTERN(FLOAT))`

Operation defined in WSAPComplex.

##### `convert` : `% -> Complex(Float) if WSAPReal(prec) has REAL`

Operation defined in WSAPComplex.

##### `convert` : `% -> Complex(DoubleFloat) if WSAPReal(prec) has REAL`

Operation defined in WSAPComplex.

##### `convert` : `% -> InputForm if WSAPReal(prec) has KONVERT(INFORM)`

Operation defined in WSAPComplex.

##### `convert` : `% -> String`

Operation defined in WSAPComplex.

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

##### `coordinates` : `(%, Vector(%)) -> Vector(WSAPReal(prec))`

Operation defined in WSAPComplex.

##### `coordinates` : `(Vector(%), Vector(%)) -> Matrix(WSAPReal(prec))`

Operation defined in WSAPComplex.

##### `coordinates` : `Vector(%) -> Matrix(WSAPReal(prec))`

Operation defined in WSAPComplex.

##### `coordinates` : `% -> Vector(WSAPReal(prec))`

Operation defined in WSAPComplex.

#### `cos` <a id="cos"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1568)\]

cos(x) returns the cosine of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `cosh` <a id="cosh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1589)\]

cosh(x) returns the hyperbolic cosine of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `cot` <a id="cot"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1572)\]

cot(x) returns the cotangent of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `coth` <a id="coth"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1593)\]

coth(x) returns the hyperbolic cotangent of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `createPrimitiveElement` <a id="createprimitiveelement"></a>

Operation defined in WSAPComplex.

- **Signature**: `() -> % if WSAPReal(prec) has FFIELDC`

#### `csc` <a id="csc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1571)\]

csc(x) returns the cosecant of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `csch` <a id="csch"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1592)\]

csch(x) returns the hyperbolic cosecant of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `definingPolynomial` <a id="definingpolynomial"></a>

##### `definingPolynomial` : `() -> UP`

definingPolynomial() returns the minimal polynomial which generator() satisfies.

- **From**: `MonogenicAlgebra(R,UP)`

##### `definingPolynomial` : `() -> SparseUnivariatePolynomial(WSAPReal(prec))`

Operation defined in WSAPComplex.

#### `derivationCoordinates` <a id="derivationcoordinates"></a>

##### `derivationCoordinates` : `(Vector(%), (R -> R)) -> Matrix(R)`

derivationCoordinates(b, ') returns M such that b' = M b.

- **From**: `MonogenicAlgebra(R,UP)`

##### `derivationCoordinates` : `(Vector(%), (WSAPReal(prec) -> WSAPReal(prec))) -> Matrix(WSAPReal(prec)) if WSAPReal(prec) has FIELD`

Operation defined in WSAPComplex.

#### `differentiate` <a id="differentiate"></a>

##### `differentiate` : `% -> %`

differentiate(x) returns the derivative of x. This function is a simple differential operator where no variable needs to be specified.

- **From**: `DifferentialRing`

##### `differentiate` : `(%, (R -> R)) -> %`

differentiate(x, deriv) differentiates x extending the derivation deriv on R.

- **From**: `DifferentialExtension(R)`

##### `differentiate` : `(%, (R -> R), NonNegativeInteger) -> %`

differentiate(x, deriv, n) differentiate x n times using a derivation which extends deriv on R.

- **From**: `DifferentialExtension(R)`

##### `differentiate` : `(%, NonNegativeInteger) -> %`

differentiate(x, n) returns the n-th derivative of x.

- **From**: `DifferentialRing`

##### `differentiate` : `% -> % if WSAPReal(prec) has DIFRING`

Operation defined in WSAPComplex.

##### `differentiate` : `(%, NonNegativeInteger) -> % if WSAPReal(prec) has DIFRING`

Operation defined in WSAPComplex.

##### `differentiate` : `(%, Symbol) -> % if WSAPReal(prec) has PDRING(SYMBOL)`

Operation defined in WSAPComplex.

##### `differentiate` : `(%, List(Symbol)) -> % if WSAPReal(prec) has PDRING(SYMBOL)`

Operation defined in WSAPComplex.

##### `differentiate` : `(%, Symbol, NonNegativeInteger) -> % if WSAPReal(prec) has PDRING(SYMBOL)`

Operation defined in WSAPComplex.

##### `differentiate` : `(%, List(Symbol), List(NonNegativeInteger)) -> % if WSAPReal(prec) has PDRING(SYMBOL)`

Operation defined in WSAPComplex.

##### `differentiate` : `(%, (WSAPReal(prec) -> WSAPReal(prec)), NonNegativeInteger) -> %`

Operation defined in WSAPComplex.

##### `differentiate` : `(%, (WSAPReal(prec) -> WSAPReal(prec))) -> %`

Operation defined in WSAPComplex.

#### `dilog` <a id="dilog"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1624)\]

dilog(x) returns the dilogarithm of x, the integral of log(x) / (1 - x) dx.

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `discreteLog` <a id="discretelog"></a>

##### `discreteLog` : `% -> NonNegativeInteger if WSAPReal(prec) has FFIELDC`

Operation defined in WSAPComplex.

##### `discreteLog` : `(%, %) -> Union(NonNegativeInteger,"failed") if WSAPReal(prec) has FFIELDC`

Operation defined in WSAPComplex.

#### `discriminant` <a id="discriminant"></a>

##### `discriminant` : `() -> R`

discriminant() = determinant(traceMatrix()).

- **From**: `FramedAlgebra(R,UP)`

##### `discriminant` : `Vector(%) -> R`

discriminant([v1, .., vn]) returns determinant(traceMatrix([v1, .., vn])).

- **From**: `FiniteRankAlgebra(R,UP)`

##### `discriminant` : `Vector(%) -> WSAPReal(prec)`

Operation defined in WSAPComplex.

##### `discriminant` : `() -> WSAPReal(prec)`

Operation defined in WSAPComplex.

#### `divide` <a id="divide"></a>

##### `divide` : `(%, %) -> Record(quotient: %,remainder: %)`

divide(x, y) divides x by y producing a record containing a quotient and remainder, where the remainder is smaller (see sizeLess? from EuclideanDomain) than the divisor y.

- **From**: `EuclideanDomain`

##### `divide` : `(%, %) -> Record(quotient: %,remainder: %) if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `elt` <a id="elt"></a>

##### `elt` : `(%, D) -> I`

elt(u, i) (also written: u.i) returns the element of u indexed by i. Error: if i is not an index of u.

- **From**: `Eltable(D,I)`

##### `elt` : `(%, WSAPReal(prec)) -> % if WSAPReal(prec) has ELTAB(WSAPR(prec),WSAPR(prec))`

Operation defined in WSAPComplex.

#### `enumerate` <a id="enumerate"></a>

Operation defined in WSAPComplex.

- **Signature**: `() -> List(%) if WSAPReal(prec) has FINITE`

#### `erf` <a id="erf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1476)\]

##### `erf` : `(%, %) -> %`

erf(z) computes the error function of z.

##### `erf` : `% -> %`

erf(x) returns the error function of x, 2 / sqrt(%pi) times the integral of exp(-x^2) dx.

- **From**: `LiouvillianFunctionCategory`

#### `erfc` <a id="erfc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1478)\]

erfc(z) returns the complementary error function of z.

- **Signature**: `% -> %`

#### `erfi` <a id="erfi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1615)\]

erfi(x) denotes -%i*erf(%i*x)

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `euclideanSize` <a id="euclideansize"></a>

##### `euclideanSize` : `% -> NonNegativeInteger`

euclideanSize(x) returns the euclidean size of the element x. Error: if x is zero.

- **From**: `EuclideanDomain`

##### `euclideanSize` : `% -> NonNegativeInteger if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `eval` <a id="eval"></a>

##### `eval` : `(%, A, B) -> %`

eval(f, x, v) replaces x by v in f.

- **From**: `InnerEvalable(A,B)`

##### `eval` : `(%, Equation(R)) -> %`

eval(f, x = v) replaces x by v in f.

- **From**: `Evalable(R)`

##### `eval` : `(%, List(A), List(B)) -> %`

eval(f, [x1, ..., xn], [v1, ..., vn]) replaces xi by vi in f.

- **From**: `InnerEvalable(A,B)`

##### `eval` : `(%, List(Equation(R))) -> %`

eval(f, [x1 = v1, ..., xn = vn]) replaces xi by vi in f.

- **From**: `Evalable(R)`

##### `eval` : `(%, List(WSAPReal(prec)), List(WSAPReal(prec))) -> % if WSAPReal(prec) has EVALAB(WSAPR(prec))`

Operation defined in WSAPComplex.

##### `eval` : `(%, WSAPReal(prec), WSAPReal(prec)) -> % if WSAPReal(prec) has EVALAB(WSAPR(prec))`

Operation defined in WSAPComplex.

##### `eval` : `(%, Equation(WSAPReal(prec))) -> % if WSAPReal(prec) has EVALAB(WSAPR(prec))`

Operation defined in WSAPComplex.

##### `eval` : `(%, List(Equation(WSAPReal(prec)))) -> % if WSAPReal(prec) has EVALAB(WSAPR(prec))`

Operation defined in WSAPComplex.

##### `eval` : `(%, List(Symbol), List(WSAPReal(prec))) -> % if WSAPReal(prec) has IEVALAB(SYMBOL,WSAPR(prec))`

Operation defined in WSAPComplex.

##### `eval` : `(%, Symbol, WSAPReal(prec)) -> % if WSAPReal(prec) has IEVALAB(SYMBOL,WSAPR(prec))`

Operation defined in WSAPComplex.

#### `exp` <a id="exp"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1466)\]

##### `exp` : `() -> %`

exp() returns the WSAPReal ℯ (%e or exp(1)).

##### `exp` : `% -> %`

exp(x) returns %e to the power x.

- **From**: `ElementaryFunctionCategory`

#### `expressIdealMember` <a id="expressidealmember"></a>

##### `expressIdealMember` : `(List(%), %) -> Union(List(%),"failed")`

expressIdealMember([f1, ..., fn], h) returns a representation of h as a linear combination of the fi or "failed" if h is not in the ideal generated by the fi.

- **From**: `PrincipalIdealDomain`

##### `expressIdealMember` : `(List(%), %) -> Union(List(%),"failed") if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `exquo` <a id="exquo"></a>

##### `exquo` : `(%, %) -> Union(%,"failed")`

exquo(a, b) either returns an element c such that c*b=a or "failed" if no such element can be found.

- **From**: `EntireRing`

##### `exquo` : `(%, R) -> Union(%,"failed")`

exquo(x, r) returns the exact quotient of x by r, or "failed" if r does not divide x exactly.

- **From**: `ComplexCategory(R)`

##### `exquo` : `(%, WSAPReal(prec)) -> Union(%,"failed") if WSAPReal(prec) has INTDOM`

Operation defined in WSAPComplex.

##### `exquo` : `(%, %) -> Union(%,"failed") if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has INTDOM`

Operation defined in WSAPComplex.

#### `extendedEuclidean` <a id="extendedeuclidean"></a>

##### `extendedEuclidean` : `(%, %) -> Record(coef1: %,coef2: %,generator: %)`

extendedEuclidean(x, y) returns a record rec where rec.coef1*x+rec.coef2*y = rec.generator and rec.generator is a gcd of x and y. The gcd is unique only up to associates if canonicalUnitNormal is not asserted. principalIdeal provides a version of this operation which accepts an arbitrary length list of arguments.

- **From**: `EuclideanDomain`

##### `extendedEuclidean` : `(%, %, %) -> Union(Record(coef1: %,coef2: %),"failed")`

extendedEuclidean(x, y, z) either returns a record rec where rec.coef1*x+rec.coef2*y=z or returns "failed" if z cannot be expressed as a linear combination of x and y.

- **From**: `EuclideanDomain`

##### `extendedEuclidean` : `(%, %, %) -> Union(Record(coef1: %,coef2: %),"failed") if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

##### `extendedEuclidean` : `(%, %) -> Record(coef1: %,coef2: %,generator: %) if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `factor` <a id="factor"></a>

##### `factor` : `% -> Factored(%)`

factor(x) returns the factorization of x into irreducibles.

- **From**: `UniqueFactorizationDomain`

##### `factor` : `% -> Factored(%) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `factorPolynomial` <a id="factorpolynomial"></a>

Operation defined in WSAPComplex.

- **Signature**: `SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FFIELDC`

#### `factorSquareFreePolynomial` <a id="factorsquarefreepolynomial"></a>

Operation defined in WSAPComplex.

- **Signature**: `SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FFIELDC`

#### `factorsOfCyclicGroupSize` <a id="factorsofcyclicgroupsize"></a>

Operation defined in WSAPComplex.

- **Signature**: `() -> List(Record(factor: Integer,exponent: NonNegativeInteger)) if WSAPReal(prec) has FFIELDC`

#### `fresnelC` <a id="fresnelc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1621)\]

fresnelC(x) is the Fresnel integral C, defined by C(x) = integrate(cos(%pi*t^2/2), t=0..x)

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `fresnelS` <a id="fresnels"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1622)\]

fresnelS(x) is the Fresnel integral S, defined by S(x) = integrate(sin(%pi*t^2/2), t=0..x)

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `gcd` <a id="gcd"></a>

##### `gcd` : `(%, %) -> %`

gcd(x, y) returns the greatest common divisor of x and y.

- **From**: `GcdDomain`

##### `gcd` : `List(%) -> %`

gcd(l) returns the common gcd of the elements in the list l.

- **From**: `GcdDomain`

##### `gcd` : `List(%) -> % if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

##### `gcd` : `(%, %) -> % if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `gcdPolynomial` <a id="gcdpolynomial"></a>

##### `gcdPolynomial` : `(SparseUnivariatePolynomial(%), SparseUnivariatePolynomial(%)) -> SparseUnivariatePolynomial(%)`

gcdPolynomial(p, q) returns the greatest common divisor (gcd) of univariate polynomials over the domain

- **From**: `GcdDomain`

##### `gcdPolynomial` : `(SparseUnivariatePolynomial(%), SparseUnivariatePolynomial(%)) -> SparseUnivariatePolynomial(%) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `generator` <a id="generator"></a>

generator() returns the generator for this domain.

- **Signature**: `() -> %`
- **From**: `MonogenicAlgebra(R,UP)`

#### `hash` <a id="hash"></a>

Operation defined in WSAPComplex.

- **Signature**: `% -> SingleInteger if WSAPReal(prec) has HASHABL`

#### `hashUpdate!` <a id="hashupdate"></a>

Operation defined in WSAPComplex.

- **Signature**: `(HashState, %) -> HashState if WSAPReal(prec) has HASHABL`

#### `imag` <a id="imag"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1520)\]

##### `imag` : `% -> R`

imag(x) returns imaginary part of x.

- **From**: `ComplexCategory(R)`

##### `imag` : `% -> WSAPReal(prec)`

Operation defined in WSAPComplex.

#### `imaginary` <a id="imaginary"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1510)\]

imaginary() = sqrt(-1) = %i.

- **Signature**: `() -> %`
- **From**: `ComplexCategory(R)`

#### `index` <a id="index"></a>

Operation defined in WSAPComplex.

- **Signature**: `PositiveInteger -> % if WSAPReal(prec) has FINITE`

#### `init` <a id="init"></a>

Operation defined in WSAPComplex.

- **Signature**: `() -> % if WSAPReal(prec) has FFIELDC`

#### `integral` <a id="integral"></a>

##### `integral` : `(%, SegmentBinding(%)) -> %`

integral(f, x = a..b) returns the formal definite integral of f dx for x between a and b.

- **From**: `PrimitiveFunctionCategory`

##### `integral` : `(%, Symbol) -> %`

integral(f, x) returns the formal integral of f dx.

- **From**: `PrimitiveFunctionCategory`

#### `inv` <a id="inv"></a>

##### `inv` : `% -> %`

inv x returns the multiplicative inverse of x. Error: if x is 0.

- **From**: `DivisionRing`

##### `inv` : `% -> % if WSAPReal(prec) has FIELD`

Operation defined in WSAPComplex.

#### `jWSComplex` <a id="jwscomplex"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1492)\]

##### `jWSComplex` : `WSAPReal(prec) -> %`

jWSComplex(re) constructs a WSComplex with real part re.

##### `jWSComplex` : `(WSAPReal(prec), WSAPReal(prec)) -> %`

jWSComplex(re, im) constructs a WSComplex from real part re and imaginary part im.

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

#### `jlAbout` <a id="jlabout"></a>

jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia.

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

#### `jlApprox?` <a id="jlapprox"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1461)\]

jlApprox?(x,y) computes inexact equality comparison with WS default parameters (Equal).

- **Signature**: `(%, %) -> Boolean`

#### `jlDisplay` <a id="jldisplay"></a>

jlDisplay(v) pretty prints v (à la Julia).

- **Signature**: `% -> Void`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlDump` <a id="jldump"></a>

jlDump(obj) dumps (shows) the Julia object (internal structure with type).

- **Signature**: `JLObject -> Void`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlEval` <a id="jleval"></a>

jlEval(expr) evaluates expr using the WS Transport Protocol.

- **Signature**: `% -> %`
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

#### `jlHead` <a id="jlhead"></a>

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

jlRef(obj) returns the internal Lisp representation of the Julia object obj.

- **Signature**: `% -> SExpression`
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

#### `jlWSApply` <a id="jlwsapply"></a>

##### `jlWSApply` : `(String, %) -> WSExpression`

jlWSApply(sym, x) creates an unevaluated Wolfram expression sym[x].

- **From**: [`WSObject`](WSObject.md)

##### `jlWSApply` : `(String, %, %) -> WSExpression`

jlWSApply(sym, x, y) creates an unevaluated Wolfram expression sym[x, y].

- **From**: [`WSObject`](WSObject.md)

##### `jlWSApply` : `(String, %, %, %) -> WSExpression`

jlWSApply(sym, x, y, z) creates an unevaluated Wolfram expression sym[x, y, z].

- **From**: [`WSObject`](WSObject.md)

##### `jlWSApply` : `(String, %, %, %, %) -> WSExpression`

jlWSApply(sym, a, b, c, d) creates an unevaluated Wolfram expression on 4 arguments.

- **From**: [`WSObject`](WSObject.md)

##### `jlWSApply` : `(String, %, %, %, %, %) -> WSExpression`

jlWSApply(sym, a, b, c, d, e) creates an unevaluated Wolfram expression on 5 arguments.

- **From**: [`WSObject`](WSObject.md)

##### `jlWSApply` : `(String, List(%)) -> WSExpression`

jlWSApply(sym, list) creates an unevaluated Wolfram expression sym[list...].

- **From**: [`WSObject`](WSObject.md)

#### `jlWSEval` <a id="jlwseval"></a>

##### `jlWSEval` : `(String, %) -> WSExpression`

jlWSEval(func, x) evaluates the Wolfram function func on x.

- **From**: [`WSObject`](WSObject.md)

##### `jlWSEval` : `(String, %, %) -> WSExpression`

jlWSEval(func, x, y) evaluates the Wolfram function func on x and y.

- **From**: [`WSObject`](WSObject.md)

##### `jlWSEval` : `(String, %, %, %) -> WSExpression`

jlWSEval(func, x, y, z) evaluates the Wolfram function func on x, y, and z.

- **From**: [`WSObject`](WSObject.md)

##### `jlWSEval` : `(String, %, %, %, %) -> WSExpression`

jlWSEval(func, a, b, c, d) evaluates the Wolfram function func on 4 arguments.

- **From**: [`WSObject`](WSObject.md)

##### `jlWSEval` : `(String, %, %, %, %, %) -> WSExpression`

jlWSEval(func, a, b, c, d, e) evaluates the Wolfram function func on 5 arguments.

- **From**: [`WSObject`](WSObject.md)

##### `jlWSEval` : `(String, List(%)) -> WSExpression`

jlWSEval(func, list) evaluates the Wolfram function func on a list of arguments.

- **From**: [`WSObject`](WSObject.md)

#### `jlimref` <a id="jlimref"></a>

jlimref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia immutable object wrapped in a Julia RefValueAny

- **Signature**: `String -> %`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlref` <a id="jlref"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1637)\]

jlref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia mutable object.

- **Signature**: `String -> %`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `latex` <a id="latex"></a>

latex(s) returns a LaTeX-printable output representation of s.

- **Signature**: `% -> String`
- **From**: `SetCategory`

#### `lcm` <a id="lcm"></a>

##### `lcm` : `(%, %) -> %`

lcm(x, y) returns the least common multiple of x and y.

- **From**: `GcdDomain`

##### `lcm` : `List(%) -> %`

lcm(l) returns the least common multiple of the elements of the list l.

- **From**: `GcdDomain`

##### `lcm` : `List(%) -> % if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

##### `lcm` : `(%, %) -> % if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `lcmCoef` <a id="lcmcoef"></a>

##### `lcmCoef` : `(%, %) -> Record(llcm_res: %,coeff1: %,coeff2: %)`

lcmCoef(c1, c2) computes (llcm_res, coeff1, coeff2) such that llcm_res is least left common multiple of c1 and c2 and llcm_res = coeff1*c1 = coeff2*c2

- **From**: `LeftOreRing`

##### `lcmCoef` : `(%, %) -> Record(llcm_res: %,coeff1: %,coeff2: %) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

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

#### `li` <a id="li"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1623)\]

li(x) returns the logarithmic integral of x, the integral of dx / log(x).

- **Signature**: `% -> %`
- **From**: `LiouvillianFunctionCategory`

#### `lift` <a id="lift"></a>

##### `lift` : `% -> UP`

lift(z) returns a minimal degree univariate polynomial up such that z=reduce up.

- **From**: `MonogenicAlgebra(R,UP)`

##### `lift` : `% -> SparseUnivariatePolynomial(WSAPReal(prec))`

Operation defined in WSAPComplex.

#### `log` <a id="log"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1557)\]

log(x) returns the natural logarithm of x. When evaluated into some subset of the complex numbers, the branch cut lies along the negative real axis, continuous with quadrant II. The domain does not contain the origin.

- **Signature**: `% -> %`
- **From**: `ElementaryFunctionCategory`

#### `log10` <a id="log10"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1472)\]

log10(z) computes the logarithm of z in base 10.

- **Signature**: `% -> %`

#### `log2` <a id="log2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1470)\]

log2(z) computes the logarithm of z in base 2.

- **Signature**: `% -> %`

#### `lookup` <a id="lookup"></a>

Operation defined in WSAPComplex.

- **Signature**: `% -> PositiveInteger if WSAPReal(prec) has FINITE`

#### `map` <a id="map"></a>

##### `map` : `((R -> R), %) -> %`

map(f, ex) evaluates ex, applying f to values of type R in ex.

- **From**: `FullyEvalableOver(R)`

##### `map` : `((WSAPReal(prec) -> WSAPReal(prec)), %) -> %`

Operation defined in WSAPComplex.

#### `minimalPolynomial` <a id="minimalpolynomial"></a>

##### `minimalPolynomial` : `% -> UP`

minimalPolynomial(a) returns the minimal polynomial of a.

- **From**: `FiniteRankAlgebra(R,UP)`

##### `minimalPolynomial` : `% -> SparseUnivariatePolynomial(WSAPReal(prec)) if WSAPReal(prec) has FIELD`

Operation defined in WSAPComplex.

#### `missing?` <a id="missing"></a>

missing?(obj) checks whether or not obj is missing.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `multiEuclidean` <a id="multieuclidean"></a>

##### `multiEuclidean` : `(List(%), %) -> Union(List(%),"failed")`

multiEuclidean([f1, ..., fn], z) returns a list of coefficients [a1, ..., an] such that z / prod fi = sum aj/fj. If no such list of coefficients exists, "failed" is returned.

- **From**: `EuclideanDomain`

##### `multiEuclidean` : `(List(%), %) -> Union(List(%),"failed") if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `mutable?` <a id="mutable"></a>

mutable?(obj) checks whether or not obj is mutable.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `nextItem` <a id="nextitem"></a>

Operation defined in WSAPComplex.

- **Signature**: `% -> Union(%,"failed") if WSAPReal(prec) has FFIELDC`

#### `norm` <a id="norm"></a>

##### `norm` : `% -> R`

norm(x) returns x * conjugate(x)

- **From**: `ComplexCategory(R)`

##### `norm` : `% -> WSAPReal(prec)`

Operation defined in WSAPComplex.

#### `nothing?` <a id="nothing"></a>

nothing?(obj) checks whether or not obj is nothing.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `nthRoot` <a id="nthroot"></a>

##### `nthRoot` : `(%, Integer) -> %`

nthRoot(x, n) returns the nth root of x.

- **From**: `RadicalCategory`

##### `nthRoot` : `(%, Integer) -> % if WSAPReal(prec) has RADCAT and WSAPReal(prec) has TRANFUN`

Operation defined in WSAPComplex.

#### `numeric` <a id="numeric"></a>

##### `numeric` : `% -> WSExpression`

numeric(expr) returns numerical expr if possible.

- **From**: [`WSObject`](WSObject.md)

##### `numeric` : `(%, PositiveInteger) -> WSExpression`

numeric(expr, prec) returns the numerical expr with prec digits of precision if possible.

- **From**: [`WSObject`](WSObject.md)

#### `numeric?` <a id="numeric"></a>

numeric?(x) checks whether or not x is or would yield a number.

- **Signature**: `% -> Boolean`
- **From**: [`WSObject`](WSObject.md)

#### `one?` <a id="one"></a>

one?(a) tests whether a is the unit 1.

- **Signature**: `% -> Boolean`
- **From**: `MagmaWithUnit`

#### `opposite?` <a id="opposite"></a>

opposite?(x,y) holds if the sum of x and y is 0.

- **Signature**: `(%, %) -> Boolean`
- **From**: `AbelianMonoid`

#### `order` <a id="order"></a>

##### `order` : `% -> PositiveInteger if WSAPReal(prec) has FFIELDC`

Operation defined in WSAPComplex.

##### `order` : `% -> OnePointCompletion(PositiveInteger) if WSAPReal(prec) has FFIELDC`

Operation defined in WSAPComplex.

#### `patternMatch` <a id="patternmatch"></a>

##### `patternMatch` : `(%, Pattern(S), PatternMatchResult(S,%)) -> PatternMatchResult(S,%)`

patternMatch(expr, pat, res) matches the pattern pat to the expression expr. res contains the variables of pat which are already matched and their matches (necessary for recursion). Initially, res is just the result of new which is an empty list of matches.

- **From**: `PatternMatchable(S)`

##### `patternMatch` : `(%, Pattern(Integer), PatternMatchResult(Integer,%)) -> PatternMatchResult(Integer,%) if WSAPReal(prec) has PATMAB(INT)`

Operation defined in WSAPComplex.

##### `patternMatch` : `(%, Pattern(Float), PatternMatchResult(Float,%)) -> PatternMatchResult(Float,%) if WSAPReal(prec) has PATMAB(FLOAT)`

Operation defined in WSAPComplex.

#### `pi` <a id="pi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1516)\]

pi() returns the constant pi.

- **Signature**: `() -> %`
- **From**: `TranscendentalFunctionCategory`

#### `plenaryPower` <a id="plenarypower"></a>

plenaryPower(a, n) is recursively defined to be plenaryPower(a, n-1)*plenaryPower(a, n-1) for n>1 and a for n=1.

- **Signature**: `(%, PositiveInteger) -> %`
- **From**: `NonAssociativeAlgebra(R)`

#### `polarCoordinates` <a id="polarcoordinates"></a>

##### `polarCoordinates` : `% -> Record(r: R,phi: R)`

polarCoordinates(x) returns (r, phi) such that x = r * exp(%i * phi).

- **From**: `ComplexCategory(R)`

##### `polarCoordinates` : `% -> Record(r: WSAPReal(prec),phi: WSAPReal(prec)) if WSAPReal(prec) has RNS and WSAPReal(prec) has TRANFUN`

Operation defined in WSAPComplex.

#### `prime?` <a id="prime"></a>

##### `prime?` : `% -> Boolean`

prime?(x) tests if x can never be written as the product of two non-units of the ring, x is an irreducible element.

- **From**: `UniqueFactorizationDomain`

##### `prime?` : `% -> Boolean if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `primeFrobenius` <a id="primefrobenius"></a>

##### `primeFrobenius` : `(%, NonNegativeInteger) -> % if WSAPReal(prec) has FFIELDC`

Operation defined in WSAPComplex.

##### `primeFrobenius` : `% -> % if WSAPReal(prec) has FFIELDC`

Operation defined in WSAPComplex.

#### `primitive?` <a id="primitive"></a>

Operation defined in WSAPComplex.

- **Signature**: `% -> Boolean if WSAPReal(prec) has FFIELDC`

#### `primitiveElement` <a id="primitiveelement"></a>

Operation defined in WSAPComplex.

- **Signature**: `() -> % if WSAPReal(prec) has FFIELDC`

#### `principalIdeal` <a id="principalideal"></a>

##### `principalIdeal` : `List(%) -> Record(coef: List(%),generator: %)`

principalIdeal([f1, ..., fn]) returns a record whose generator component is a generator of the ideal generated by [f1, ..., fn] whose coef component satisfies generator = sum (input.i * coef.i)

- **From**: `PrincipalIdealDomain`

##### `principalIdeal` : `List(%) -> Record(coef: List(%),generator: %) if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `quo` <a id="quo"></a>

##### `quo` : `(%, %) -> %`

x quo y is the same as divide(x, y).quotient. See divide from EuclideanDomain.

- **From**: `EuclideanDomain`

##### `quo` : `(%, %) -> % if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `random` <a id="random"></a>

Operation defined in WSAPComplex.

- **Signature**: `() -> % if WSAPReal(prec) has FINITE`

#### `rank` <a id="rank"></a>

rank() returns the rank of the algebra.

- **Signature**: `() -> PositiveInteger`
- **From**: `FiniteRankAlgebra(R,UP)`

#### `rational` <a id="rational"></a>

##### `rational` : `% -> Fraction(Integer)`

rational(x) returns x as a rational number. Error: if x is not a rational number.

- **From**: `ComplexCategory(R)`

##### `rational` : `% -> Fraction(Integer) if WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `rational?` <a id="rational"></a>

##### `rational?` : `% -> Boolean`

rational?(x) tests if x is a rational number.

- **From**: `ComplexCategory(R)`

##### `rational?` : `% -> Boolean if WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `rationalIfCan` <a id="rationalifcan"></a>

##### `rationalIfCan` : `% -> Union(Fraction(Integer),"failed")`

rationalIfCan(x) returns x as a rational number, or "failed" if x is not a rational number.

- **From**: `ComplexCategory(R)`

##### `rationalIfCan` : `% -> Union(Fraction(Integer),"failed") if WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `real` <a id="real"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1519)\]

##### `real` : `% -> R`

real(x) returns real part of x.

- **From**: `ComplexCategory(R)`

##### `real` : `% -> WSAPReal(prec)`

Operation defined in WSAPComplex.

#### `recip` <a id="recip"></a>

recip(a) returns an element, which is both a left and a right inverse of a, or "failed" if such an element doesn't exist or cannot be determined (see unitsKnown).

- **Signature**: `% -> Union(%,"failed")`
- **From**: `MagmaWithUnit`

#### `reduce` <a id="reduce"></a>

##### `reduce` : `UP -> %`

reduce(up) converts the univariate polynomial up to an algebra element, reducing by the definingPolynomial() if necessary.

- **From**: `MonogenicAlgebra(R,UP)`

##### `reduce` : `Fraction(UP) -> Union(%,"failed")`

reduce(frac) converts the fraction frac to an algebra element.

- **From**: `MonogenicAlgebra(R,UP)`

##### `reduce` : `SparseUnivariatePolynomial(WSAPReal(prec)) -> %`

Operation defined in WSAPComplex.

##### `reduce` : `Fraction(SparseUnivariatePolynomial(WSAPReal(prec))) -> Union(%,"failed") if WSAPReal(prec) has FIELD`

Operation defined in WSAPComplex.

#### `reducedSystem` <a id="reducedsystem"></a>

##### `reducedSystem` : `Matrix(%) -> Matrix(R)`

reducedSystem(A) returns a matrix B such that A x = 0 and B x = 0 have the same solutions in R.

- **From**: `LinearlyExplicitOver(R)`

##### `reducedSystem` : `(Matrix(%), Vector(%)) -> Record(mat: Matrix(R),vec: Vector(R))`

reducedSystem(A, v) returns a matrix B and a vector w such that A x = v and B x = w have the same solutions in R.

- **From**: `LinearlyExplicitOver(R)`

##### `reducedSystem` : `Matrix(%) -> Matrix(Integer) if WSAPReal(prec) has LINEXP(INT)`

Operation defined in WSAPComplex.

##### `reducedSystem` : `(Matrix(%), Vector(%)) -> Record(mat: Matrix(Integer),vec: Vector(Integer)) if WSAPReal(prec) has LINEXP(INT)`

Operation defined in WSAPComplex.

##### `reducedSystem` : `(Matrix(%), Vector(%)) -> Record(mat: Matrix(WSAPReal(prec)),vec: Vector(WSAPReal(prec)))`

Operation defined in WSAPComplex.

##### `reducedSystem` : `Matrix(%) -> Matrix(WSAPReal(prec))`

Operation defined in WSAPComplex.

#### `regularRepresentation` <a id="regularrepresentation"></a>

##### `regularRepresentation` : `% -> Matrix(R)`

regularRepresentation(a) returns the matrix m of the linear map defined by left multiplication by a with respect to the fixed basis. That is for all x we have coordinates(a*x) = m*coordinates(x).

- **From**: `FramedAlgebra(R,UP)`

##### `regularRepresentation` : `(%, Vector(%)) -> Matrix(R)`

regularRepresentation(a, basis) returns the matrix m of the linear map defined by left multiplication by a with respect to the basis basis. That is for all x we have coordinates(a*x, basis) = m*coordinates(x, basis).

- **From**: `FiniteRankAlgebra(R,UP)`

##### `regularRepresentation` : `(%, Vector(%)) -> Matrix(WSAPReal(prec))`

Operation defined in WSAPComplex.

##### `regularRepresentation` : `% -> Matrix(WSAPReal(prec))`

Operation defined in WSAPComplex.

#### `rem` <a id="rem"></a>

##### `rem` : `(%, %) -> %`

x rem y is the same as divide(x, y).remainder. See divide from EuclideanDomain.

- **From**: `EuclideanDomain`

##### `rem` : `(%, %) -> % if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `representationType` <a id="representationtype"></a>

Operation defined in WSAPComplex.

- **Signature**: `() -> Union("prime",polynomial,normal,cyclic) if WSAPReal(prec) has FFIELDC`

#### `represents` <a id="represents"></a>

##### `represents` : `Vector(R) -> %`

represents([a1, .., an]) returns a1*v1 + ... + an*vn, where v1, ..., vn are the elements of the fixed basis.

- **From**: `FramedModule(R)`

##### `represents` : `(Vector(R), Vector(%)) -> %`

represents([a1, .., an], [v1, .., vn]) returns a1*v1 + ... + an*vn.

- **From**: `FiniteRankAlgebra(R,UP)`

##### `represents` : `(Vector(WSAPReal(prec)), Vector(%)) -> %`

Operation defined in WSAPComplex.

##### `represents` : `Vector(WSAPReal(prec)) -> %`

Operation defined in WSAPComplex.

#### `retract` <a id="retract"></a>

##### `retract` : `% -> S`

retract(a) transforms a into an element of S if possible. Error: if a cannot be made into an element of S.

- **From**: `RetractableTo(S)`

##### `retract` : `% -> Integer if WSAPReal(prec) has RETRACT(INT)`

Operation defined in WSAPComplex.

##### `retract` : `% -> Fraction(Integer) if WSAPReal(prec) has RETRACT(FRAC(INT))`

Operation defined in WSAPComplex.

##### `retract` : `% -> WSAPReal(prec)`

Operation defined in WSAPComplex.

#### `retractIfCan` <a id="retractifcan"></a>

##### `retractIfCan` : `% -> Union(S,"failed")`

retractIfCan(a) transforms a into an element of S if possible. Returns "failed" if a cannot be made into an element of S.

- **From**: `RetractableTo(S)`

##### `retractIfCan` : `% -> Union(Integer,"failed") if WSAPReal(prec) has RETRACT(INT)`

Operation defined in WSAPComplex.

##### `retractIfCan` : `% -> Union(Fraction(Integer),"failed") if WSAPReal(prec) has RETRACT(FRAC(INT))`

Operation defined in WSAPComplex.

##### `retractIfCan` : `% -> Union(WSAPReal(prec),"failed")`

Operation defined in WSAPComplex.

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

#### `sample` <a id="sample"></a>

sample yields a value of type %

- **Signature**: `() -> %`
- **From**: `MagmaWithUnit`

#### `sec` <a id="sec"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1570)\]

sec(x) returns the secant of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `sech` <a id="sech"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1591)\]

sech(x) returns the hyperbolic secant of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `sin` <a id="sin"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1567)\]

sin(x) returns the sine of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `sinc` <a id="sinc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1468)\]

sinc(z) computes the unnormalized sinc of z, sin(z)/z and 0 if z = 0.

- **Signature**: `% -> %`

#### `sinh` <a id="sinh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1588)\]

sinh(x) returns the hyperbolic sine of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `size` <a id="size"></a>

Operation defined in WSAPComplex.

- **Signature**: `() -> NonNegativeInteger if WSAPReal(prec) has FINITE`

#### `sizeLess?` <a id="sizeless"></a>

##### `sizeLess?` : `(%, %) -> Boolean`

sizeLess?(x, y) tests whether x is strictly smaller than y with respect to the euclideanSize from EuclideanDomain. Note: zero is considered smaller than every nonzero element.

- **From**: `EuclideanDomain`

##### `sizeLess?` : `(%, %) -> Boolean if WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `smaller?` <a id="smaller"></a>

##### `smaller?` : `(%, %) -> Boolean`

smaller?(x, y) is a strict ordering on depending on representatives of elements of the set. If % has Comparable then smaller? gives mathematical linear order.

- **From**: `ComparableRepresentation`

##### `smaller?` : `(%, %) -> Boolean if WSAPReal(prec) has COMPARR`

Operation defined in WSAPComplex.

#### `solveLinearPolynomialEquation` <a id="solvelinearpolynomialequation"></a>

Operation defined in WSAPComplex.

- **Signature**: `(List(SparseUnivariatePolynomial(%)), SparseUnivariatePolynomial(%)) -> Union(List(SparseUnivariatePolynomial(%)),"failed") if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FFIELDC`

#### `sqrt` <a id="sqrt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1556)\]

##### `sqrt` : `% -> %`

sqrt(x) returns the square root of x. The branch cut lies along the negative real axis, continuous with quadrant II.

- **From**: `ComplexCategory(R)`

##### `sqrt` : `% -> % if WSAPReal(prec) has FIELD and WSAPReal(prec) has ORDRING and WSAPReal(prec) has RADCAT or WSAPReal(prec) has RADCAT and WSAPReal(prec) has TRANFUN`

Operation defined in WSAPComplex.

#### `squareFree` <a id="squarefree"></a>

##### `squareFree` : `% -> Factored(%)`

squareFree(x) returns the square-free factorization of x such that the factors are pairwise relatively prime and each has multiple prime factors.

- **From**: `UniqueFactorizationDomain`

##### `squareFree` : `% -> Factored(%) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `squareFreePart` <a id="squarefreepart"></a>

##### `squareFreePart` : `% -> %`

squareFreePart(x) returns a product of prime factors of x each taken with multiplicity one.

- **From**: `UniqueFactorizationDomain`

##### `squareFreePart` : `% -> % if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FIELD or WSAPReal(prec) has INS`

Operation defined in WSAPComplex.

#### `squareFreePolynomial` <a id="squarefreepolynomial"></a>

Operation defined in WSAPComplex.

- **Signature**: `SparseUnivariatePolynomial(%) -> Factored(SparseUnivariatePolynomial(%)) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has FFIELDC`

#### `string` <a id="string"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1631)\]

string(jt) returns the string representation of jt.

- **Signature**: `% -> String`
- **From**: [`JLType`](JLType.md)

#### `subtractIfCan` <a id="subtractifcan"></a>

subtractIfCan(x, y) returns an element z such that z+y=x or "failed" if no such element exists.

- **Signature**: `(%, %) -> Union(%,"failed")`
- **From**: `CancellationAbelianMonoid`

#### `tableForDiscreteLogarithm` <a id="tablefordiscretelogarithm"></a>

Operation defined in WSAPComplex.

- **Signature**: `Integer -> Table(PositiveInteger,NonNegativeInteger) if WSAPReal(prec) has FFIELDC`

#### `tan` <a id="tan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1569)\]

tan(x) returns the tangent of x.

- **Signature**: `% -> %`
- **From**: `TrigonometricFunctionCategory`

#### `tanh` <a id="tanh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1590)\]

tanh(x) returns the hyperbolic tangent of x.

- **Signature**: `% -> %`
- **From**: `HyperbolicFunctionCategory`

#### `toString` <a id="tostring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1480)\]

##### `toString` : `(%, WSExpression) -> String`

toString(expr, form) returns the string representation of expr with WS language format form.

##### `toString` : `% -> String`

toString(obj) returns the string representation of obj.

- **From**: [`WSObject`](WSObject.md)

#### `trace` <a id="trace"></a>

##### `trace` : `% -> R`

trace(a) returns the trace of the regular representation of a with respect to any basis.

- **From**: `FiniteRankAlgebra(R,UP)`

##### `trace` : `% -> WSAPReal(prec)`

Operation defined in WSAPComplex.

#### `traceMatrix` <a id="tracematrix"></a>

##### `traceMatrix` : `() -> Matrix(R)`

traceMatrix() is the n-by-n matrix ( Tr(vi * vj) ), where v1, ..., vn are the elements of the fixed basis.

- **From**: `FramedAlgebra(R,UP)`

##### `traceMatrix` : `Vector(%) -> Matrix(R)`

traceMatrix([v1, .., vn]) is the n-by-n matrix ( Tr(vi * vj) )

- **From**: `FiniteRankAlgebra(R,UP)`

##### `traceMatrix` : `Vector(%) -> Matrix(WSAPReal(prec))`

Operation defined in WSAPComplex.

##### `traceMatrix` : `() -> Matrix(WSAPReal(prec))`

Operation defined in WSAPComplex.

#### `unit?` <a id="unit"></a>

##### `unit?` : `% -> Boolean`

unit?(x) tests whether x is a unit, is invertible.

- **From**: `EntireRing`

##### `unit?` : `% -> Boolean if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has INTDOM`

Operation defined in WSAPComplex.

#### `unitCanonical` <a id="unitcanonical"></a>

##### `unitCanonical` : `% -> %`

unitCanonical(x) returns unitNormal(x).canonical.

- **From**: `EntireRing`

##### `unitCanonical` : `% -> % if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has INTDOM`

Operation defined in WSAPComplex.

#### `unitNormal` <a id="unitnormal"></a>

##### `unitNormal` : `% -> Record(unit: %,canonical: %,associate: %)`

unitNormal(x) tries to choose a canonical element from the associate class of x. The attribute canonicalUnitNormal, if asserted, means that the "canonical" element is the same across all associates of x if unitNormal(x) = [u, c, a] then u*c = x, a*u = 1.

- **From**: `EntireRing`

##### `unitNormal` : `% -> Record(unit: %,canonical: %,associate: %) if WSAPReal(prec) has EUCDOM and WSAPReal(prec) has PFECAT or WSAPReal(prec) has INTDOM`

Operation defined in WSAPComplex.

#### `urand01` <a id="urand01"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1459)\]

urand01() returns a unit square random complex number.

- **Signature**: `() -> %`

#### `zero?` <a id="zero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L1581)\]

zero?(x) tests if x is equal to 0.

- **Signature**: `% -> Boolean`
- **From**: `SetWithZero`

#### `~=` <a id="op-neq"></a>

Operation defined in WSAPComplex.

- **Signature**: `(%, %) -> Boolean`

---

[Back to Index](../index.md)
