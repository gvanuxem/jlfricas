# WSNumericalSpecialFunctions

> **Kind**: Package &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L1)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS numerical special functions using the MathLink Julia package.Time: 0 sec

**WSNumericalSpecialFunctions(R: WSNumber) is a package constructor.**  
**Abbreviation for WSNumericalSpecialFunctions is WSNSF**

## Signatures

```fricas
 Beta : (R, R) -> R    Beta : (R, R, R) -> R
 EiEn : (WSInteger, R) -> R    Gamma : R -> R
 Gamma : (R, R) -> R    Gamma : (R, R, R) -> R
 airyAi : R -> R    airyAiPrime : R -> R
 airyAiZero : R -> R    airyAiZero : (R, R) -> R
 airyBi : R -> R    airyBiPrime : R -> R
 airyBiZero : R -> R    airyBiZero : (R, R) -> R
 angerJ : (R, R) -> R    angerJ : (R, R, R) -> R
 barnesG : R -> R    besselI : (R, R) -> R
 besselJ : (R, R) -> R    besselJZero : (R, R) -> R
 besselK : (R, R) -> R    besselY : (R, R) -> R
 besselYZero : (R, R) -> R    betaRegularized : (R, R, R) -> R
 charlierC : (R, R, R) -> R    chebyshevT : (R, R) -> R
 chebyshevU : (R, R) -> R    conjugate : R -> R
 coulombF : (R, R, R) -> R    coulombG : (R, R, R) -> R
 coulombH1 : (R, R, R) -> R    coulombH2 : (R, R, R) -> R
 dawson : R -> R    dedekindEta : R -> R
 digamma : R -> R    digamma : (R, R) -> R
 diracDelta : R -> WSExpression    dirichletEta : R -> R
 dirichletL : (R, R, R) -> R    ellipticE : R -> R
 ellipticE : (R, R) -> R    ellipticF : (R, R) -> R
 ellipticK : R -> R    ellipticPi : (R, R) -> R
 ellipticPi : (R, R, R) -> R    ellipticTheta : (R, R, R) -> R
 ellipticThetaPrime : (R, R, R) -> R    fibonacci : (WSInteger, R) -> R
 gammaRegularized : (R, R) -> R    gegenbauerC : (WSInteger, R) -> R
 gegenbauerC : (WSInteger, R, R) -> R    gudermannian : R -> R
 hankelH1 : (R, R) -> R    hankelH2 : (R, R) -> R
 haversine : R -> R    hermiteH : (R, R) -> R
 hurwitzLerchPhi : (R, R, R) -> R    hurwitzZeta : (R, R) -> R
 hyperFactorial : R -> R    hypergeometric0F1 : (R, R) -> R
 hypergeometric0F1Regularized : (R, R) -> R    hypergeometric1F1 : (R, R, R) -> R
 hypergeometric1F1Regularized : (R, R, R) -> R    hypergeometricU : (R, R, R) -> R
 inverseBetaRegularized : (R, R, R) -> R    inverseErf : R -> R
 inverseErfc : R -> R    inverseGammaRegularized : (R, R) -> R
 inverseGudermannian : R -> R    inverseHaversine : R -> R
 inverseJacobiCn : (R, R) -> R    inverseJacobiSn : (R, R) -> R
 jacobiAmplitude : (R, R) -> R    jacobiCn : (R, R) -> R
 jacobiDn : (R, R) -> R    jacobiP : (R, R, R, R) -> R
 jacobiSn : (R, R) -> R    jacobiTheta : (WSInteger, R, R) -> R
 jacobiZeta : (R, R) -> R    kelvinBei : (R, R) -> R
 kelvinBer : (R, R) -> R    kelvinKei : (R, R) -> R
 kelvinKer : (R, R) -> R    kleinInvariantJ : R -> R
 laguerreL : (R, R) -> R    laguerreL : (R, R, R) -> R
 lambertW : R -> R    lambertW : (WSInteger, R) -> R
 legendreP : (R, R, R) -> R    legendreP : (R, R) -> R
 legendreQ : (R, R, R) -> R    legendreQ : (R, R) -> R
 lerchPhi : (R, R, R) -> R    logBarnesG : R -> R
 logGamma : R -> R    lommelS1 : (R, R, R) -> R
 lommelS2 : (R, R, R) -> R    mathieuC : (R, R, R) -> R
 mathieuCPrime : (R, R, R) -> R    mathieuCharacteristicA : (R, R) -> R
 mathieuCharacteristicB : (R, R) -> R    mathieuCharacteristicExponent : (R, R) -> R
 mathieuS : (R, R, R) -> R    mathieuSPrime : (R, R, R) -> R
 modularLambda : R -> R    parabolicCylinderD : (R, R) -> R
 pochhammer : (R, R) -> R    polygamma : (R, R) -> R
 polylog : (R, R) -> R    polylog : (R, R, R) -> R
 qBinomial : (R, R, R) -> R    qFactorial : (R, R) -> R
 qGamma : (R, R) -> R    qPochhammer : (R, R) -> R
 qPochhammer : (R, R, R) -> R    qPolyGamma : (R, R) -> R
 qPolyGamma : (R, R, R) -> R    ramanujanTau : R -> R
 ramanujanTauL : R -> R    ramanujanTauTheta : R -> R
 ramanujanTauZ : R -> R    riemannSiegelTheta : R -> R
 riemannSiegelZ : R -> R    riemannZeta : R -> R
 riemannZeta : (R, R) -> R    sign : R -> R
 sphericalBesselJ : (R, R) -> R    sphericalBesselY : (R, R) -> R
 sphericalHankelH1 : (R, R) -> R    sphericalHankelH2 : (R, R) -> R
 sphericalHarmonicY : (R, R, R, R) -> R    stieltjesGamma : WSInteger -> R
 stieltjesGamma : (WSInteger, R) -> R    struveH : (R, R) -> R
 struveL : (R, R) -> R    unitStep : R -> WSExpression
 weberE : (R, R) -> R    weberE : (R, R, R) -> R
 weierstrassP : (R, R, R) -> R    weierstrassPInverse : (R, R, R) -> R
 weierstrassPPrime : (R, R, R) -> R    weierstrassSigma : (R, R, R) -> R
 weierstrassZeta : (R, R, R) -> R    whittakerM : (R, R, R) -> R
 whittakerW : (R, R, R) -> R    zernikeR : (R, R, R) -> R
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`Beta`](#beta) | Beta(x, y) is Gamma(x) * Gamma(y)/Gamma(x+y). |
| [`EiEn`](#eien) | EiEn(n,z) returns the exponential integral En of z. |
| [`Gamma`](#gamma) | Gamma(z) is the Euler Gamma function. |
| [`airyAi`](#airyai) | airyAi(z) is the Airy function Ai(z). |
| [`airyAiPrime`](#airyaiprime) | airyAiPrime(z) is the derivative of the Airy function Ai(z). |
| [`airyAiZero`](#airyaizero) | airyAiZero(n) is the n-th zero function of the Airy function Ai(z). |
| [`airyBi`](#airybi) | airyBi(z) is the Airy function Bi(z). |
| [`airyBiPrime`](#airybiprime) | airyBiPrime(z) is the derivative of the Airy function Bi(z). |
| [`airyBiZero`](#airybizero) | airyBiZero(n) is the n-th zero function of the Airy function Bi(z). |
| [`angerJ`](#angerj) | angerJ(v, z) is the Anger J function. |
| [`barnesG`](#barnesg) | barnesG(z) computes the Barnes G-function of z. |
| [`besselI`](#besseli) | besselI(v, z) is the modified Bessel function of the first kind. |
| [`besselJ`](#besselj) | besselJ(v, z) is the Bessel function of the first kind. |
| [`besselJZero`](#besseljzero) | besselJZero(n,x) returns the n-th zero of the Bessel J n-th function. |
| [`besselK`](#besselk) | besselK(v, z) is the modified Bessel function of the second kind. |
| [`besselY`](#bessely) | besselY(v, z) is the Bessel function of the second kind. |
| [`besselYZero`](#besselyzero) | besselYZero(n,x) returns the n-th zero of the Bessel Y n-th function. |
| [`betaRegularized`](#betaregularized) | betaRegularized(z,a,b) computes the regularized incomplete Beta function. |
| [`charlierC`](#charlierc) | charlierC(n, a, z) is the Charlier polynomial |
| [`chebyshevT`](#chebyshevt) | chebyshevT(n, z) evaluates the Chebyshev polynomial of the first kind at z. |
| [`chebyshevU`](#chebyshevu) | chebyshevU(n, expr) evaluates the Chebyshev polynomial of the second kind at z. |
| [`conjugate`](#conjugate) | conjugate(z) is the conjugate of the complex number z. |
| [`coulombF`](#coulombf) | coulombF(l,eta,ro) is the regular Coulomb wave function. |
| [`coulombG`](#coulombg) | coulombG(l,eta,ro) is the irregular Coulomb wave function. |
| [`coulombH1`](#coulombh1) | coulombH1(l,eta,ro) is the incoming irregular Coulomb wave function H^(+). |
| [`coulombH2`](#coulombh2) | coulombH2(l,eta,ro) is the incoming irregular Coulomb wave function H^(-). |
| [`dawson`](#dawson) | dawson(x) computes the Dawson integral of x. |
| [`dedekindEta`](#dedekindeta) | dedekindEta(tau) computes the Dedekind eta modular function. |
| [`digamma`](#digamma) | digamma(z) is the logarithmic derivative of Gamma(z) (often written psi(z) in the literatu... |
| [`diracDelta`](#diracdelta) | diracDelta(x) returns the Dirac delta function of x. |
| [`dirichletEta`](#dirichleteta) | dirichletEta(z) computes the Dirichlet eta function of z. |
| [`dirichletL`](#dirichletl) | dirichletL(k,j,s) returns Dirichlet L-function of s, modulus k, index j. |
| [`ellipticE`](#elliptice) | ellipticE(z) computes the complete elliptic integral of the second kind. |
| [`ellipticF`](#ellipticf) | ellipticF(phi,m) computes the elliptic integral of the first kind. |
| [`ellipticK`](#elliptick) | ellipticK(m) computes the complete elliptic integral of the first kind. |
| [`ellipticPi`](#ellipticpi) | ellipticPi(n,m) computes the complete elliptic integral of the third kind. |
| [`ellipticTheta`](#elliptictheta) | ellipticTheta(a, u, q) computes the theta function, a ranges from 1 to 4. |
| [`ellipticThetaPrime`](#ellipticthetaprime) | ellipticThetaPrime(a, u, q) computes the derivative of the theta function, a ranges from 1... |
| [`fibonacci`](#fibonacci) | fibonacci(n, z) evaluates the Fibonacci polynomial at z. |
| [`gammaRegularized`](#gammaregularized) | gammaRegularized(a,z) computes the regularized incomplete Gamma function. |
| [`gegenbauerC`](#gegenbauerc) | gegenbauerC(n,z) evaluates the renormalized form of the Gegenbauer polynomial at z. |
| [`gudermannian`](#gudermannian) | gudermannian(z) computes the Gudermannian of z. |
| [`hankelH1`](#hankelh1) | hankelH1(v, z) is the first Hankel function (Bessel function of the third kind). |
| [`hankelH2`](#hankelh2) | hankelH2(v, z) is the second Hankel function (Bessel function of the third kind). |
| [`haversine`](#haversine) | haversine(z) computes the Haversine of z. |
| [`hermiteH`](#hermiteh) | hermiteH(n, z) evaluates the Hermite polynomial at z. |
| [`hurwitzLerchPhi`](#hurwitzlerchphi) | hurwitzLerchPhi(z,s,a) computes the Hurwitz-Lerch transcendent phi function. |
| [`hurwitzZeta`](#hurwitzzeta) | hurwitzZeta(s,a) computes the Hurwitz zeta. |
| [`hyperFactorial`](#hyperfactorial) | hyperFactorial(n) computes the hyperfactorial of n. |
| [`hypergeometric0F1`](#hypergeometric0f1) | hypergeometric0F1(a,z) is the hypergeometric 0F1. |
| [`hypergeometric0F1Regularized`](#hypergeometric0f1regularized) | hypergeometric0F1Regularized(a,z) is the regularized hypergeometric 0F1. |
| [`hypergeometric1F1`](#hypergeometric1f1) | hypergeometric1F1(a,b,z) is the Kummer confluent hypergeometric function 1F1. |
| [`hypergeometric1F1Regularized`](#hypergeometric1f1regularized) | hypergeometric1F1Regularized(a,b,z) is the regularized confluent hypergeometric function 1... |
| [`hypergeometricU`](#hypergeometricu) | hypergeometricU(a,b,z) is the confluent hypergeometric function U. |
| [`inverseBetaRegularized`](#inversebetaregularized) | inverseBetaRegularized(s,a,b) computes the Beta inverse. |
| [`inverseErf`](#inverseerf) | inverseErf(z) computes the inverse error function of z. |
| [`inverseErfc`](#inverseerfc) | inverseErfc(z) computes the inverse complementary error function of z. |
| [`inverseGammaRegularized`](#inversegammaregularized) | inverseGammaRegularized(a,s) computes the Gamma inverse. |
| [`inverseGudermannian`](#inversegudermannian) | inverseGudermannian(z) computes the inverse Gudermannian of z. |
| [`inverseHaversine`](#inversehaversine) | inverseHaversine(z) computes the inverse Haversine of z. |
| [`inverseJacobiCn`](#inversejacobicn) | inverseJacobiCn(nu, m) computes the inverse Jacobi's CN elliptic function. |
| [`inverseJacobiSn`](#inversejacobisn) | inverseJacobiSn(nu, m) computes the inverse Jacobi's SN elliptic function. |
| [`jacobiAmplitude`](#jacobiamplitude) | jacobiAmplitude(u,m) computes the amplitude function am. |
| [`jacobiCn`](#jacobicn) | jacobiCn(z, m) is the Jacobi elliptic cn function, defined by jacobiCn(z, m)^2 + jacobiSn(... |
| [`jacobiDn`](#jacobidn) | jacobiDn(z, m) is the Jacobi elliptic dn function, defined by jacobiDn(z, m)^2 + m*jacobiS... |
| [`jacobiP`](#jacobip) | jacobiP(n, a, b, z) evaluates the Jacobi polynomial at z. |
| [`jacobiSn`](#jacobisn) | jacobiSn(z, m) is the Jacobi elliptic sn function, defined by the formula jacobiSn(ellipti... |
| [`jacobiTheta`](#jacobitheta) | jacobiTheta(n, z, m) are the Jacobi theta functions. |
| [`jacobiZeta`](#jacobizeta) | ellipticPi(n,phi,m) computes the elliptic integral of the third kind. |
| [`kelvinBei`](#kelvinbei) | kelvinBei(v, z) is the Kelvin bei function defined by equality kelvinBei(v, z) = imag(bess... |
| [`kelvinBer`](#kelvinber) | kelvinBer(v, z) is the Kelvin ber function defined by equality kelvinBer(v, z) = real(bess... |
| [`kelvinKei`](#kelvinkei) | kelvinKei(v, z) is the Kelvin kei function defined by equality kelvinKei(v, z) = imag(exp(... |
| [`kelvinKer`](#kelvinker) | kelvinKer(v, z) is the Kelvin ker function defined by equality kelvinKer(v, z) = real(exp(... |
| [`kleinInvariantJ`](#kleininvariantj) | kleinInvariantJ(tau) computes the Klein's absolute invariant. |
| [`laguerreL`](#laguerrel) | laguerreL(n, z) evaluates the Laguerre polynomial at z. |
| [`lambertW`](#lambertw) | lambertW(z) = w is the principal branch of the solution to the equation we^w = z. |
| [`legendreP`](#legendrep) | legendreP(n, z) evaluates the Legendre polynomial of the first kind at z. |
| [`legendreQ`](#legendreq) | legendreQ(n, z) returns the Legendre function of the second kind. |
| [`lerchPhi`](#lerchphi) | lerchPhi(z,s,a) returns Lerch's transcendent phi of arguments. |
| [`logBarnesG`](#logbarnesg) | logBarnesG(z) is the logarithm of Barnes-G. |
| [`logGamma`](#loggamma) | logGamma(z) returns the log-Gamma of z. |
| [`lommelS1`](#lommels1) | lommelS1(mu, nu, z) is the Lommel s function. |
| [`lommelS2`](#lommels2) | lommelS2(mu, nu, z) is the Lommel S function. |
| [`mathieuC`](#mathieuc) | mathieuC(a,q,z) is the even Mathieu function with characteristic a and parameter q. |
| [`mathieuCPrime`](#mathieucprime) | mathieuCPrime(a,q,z) derivative of the even Mathieu function. |
| [`mathieuCharacteristicA`](#mathieucharacteristica) | mathieuCharacteristicA(r,q) returns the characteristic for even Mathieu function. |
| [`mathieuCharacteristicB`](#mathieucharacteristicb) | mathieuCharacteristicB(r,q) returns the characteristic for odd Mathieu function. |
| [`mathieuCharacteristicExponent`](#mathieucharacteristicexponent) | mathieuCharacteristicExponent(a,q) returns the characteristic exponent of the Mathieu func... |
| [`mathieuS`](#mathieus) | mathieuS(b,q,z) is the odd Mathieu function with characteristic b and parameter q. |
| [`mathieuSPrime`](#mathieusprime) | mathieuSPrime(b,q,z) derivative of the odd Mathieu function. |
| [`modularLambda`](#modularlambda) | modularLambda(tau) computes the lambda modular function. |
| [`parabolicCylinderD`](#paraboliccylinderd) | parabolicCylinderD(nu,z) computes the parabolic cylinder function D of z. |
| [`pochhammer`](#pochhammer) | pochhammer(a,n) returns the Pochhammer symbol. |
| [`polygamma`](#polygamma) | polygamma(k, z) is the k-th derivative of digamma(z), (often written psi(k, z) in the lite... |
| [`polylog`](#polylog) | polylog(s, z) is the polylogarithm of order s at z. |
| [`qBinomial`](#qbinomial) | qBinomial(n,m,q) returns the q-analog of binomial coefficient. |
| [`qFactorial`](#qfactorial) | qFactorial(z,q) returns the q-analog of factorial of z. |
| [`qGamma`](#qgamma) | qGamma(z,q) returns the q-analog of Euler Gamma of z. |
| [`qPochhammer`](#qpochhammer) | qPochhammer(z,q) returns the q-Pochhammer symbol of z. |
| [`qPolyGamma`](#qpolygamma) | qPolyGamma(z,q) returns the q-digamma of z. |
| [`ramanujanTau`](#ramanujantau) | ramanujanTau(n) returns the Ramanujan tau of n. |
| [`ramanujanTauL`](#ramanujantaul) | ramanujanTauL(s) computes the Ramanujan tau Dirichlet L-function of s. |
| [`ramanujanTauTheta`](#ramanujantautheta) | ramanujanTauTheta(z) returns the Ramanujan tau theta of z. |
| [`ramanujanTauZ`](#ramanujantauz) | ramanujanTauZ(t) computes the Ramanujan tau Z-function of t. |
| [`riemannSiegelTheta`](#riemannsiegeltheta) | riemannSiegelTheta(t) returns the Riemann-Siegel theta function of t. |
| [`riemannSiegelZ`](#riemannsiegelz) | riemannSiegelZ(t) computes the Riemann-Siegel Z function of t. |
| [`riemannZeta`](#riemannzeta) | riemannZeta(z) is the Riemann Zeta function. |
| [`sign`](#sign) | sign(x) is 1 if x is positive, -1 if x is negative, 0 if x equals 0. |
| [`sphericalBesselJ`](#sphericalbesselj) | sphericalBesselJ(n,z) returns the spherical Bessel of the first kind of z. |
| [`sphericalBesselY`](#sphericalbessely) | sphericalBesselY(n,z) returns the spherical Bessel of the second kind of z. |
| [`sphericalHankelH1`](#sphericalhankelh1) | sphericalHankelH1(n,z) returns the spherical Hankel of the first kind of z. |
| [`sphericalHankelH2`](#sphericalhankelh2) | sphericalHankelH2(n,z) computes the spherical Hankel of the second kind of z. |
| [`sphericalHarmonicY`](#sphericalharmonicy) | sphericalHarmonicY(l, m, theta, phi) returns the spherical harmonic Y or evaluates it. |
| [`stieltjesGamma`](#stieltjesgamma) | stieltjesGamma(n) returns the n-th Stieltjes constant. |
| [`struveH`](#struveh) | struveH(v, z) is the Struve H function. |
| [`struveL`](#struvel) | struveL(v, z) is the Struve L function defined by the formula struveL(v, z) = -Ri^exp(-v*R... |
| [`unitStep`](#unitstep) | unitStep(x) returns the unit step function i.e. 0 for x less than 0, 1 for x greater or eq... |
| [`weberE`](#webere) | weberE(v, z) is the Weber E function. |
| [`weierstrassP`](#weierstrassp) | weierstrassP(g2, g3, z) is the Weierstrass P function. |
| [`weierstrassPInverse`](#weierstrasspinverse) | weierstrassPInverse(g2, g3, z) is the inverse of Weierstrass P function, defined by the fo... |
| [`weierstrassPPrime`](#weierstrasspprime) | weierstrassPPrime(g2, g3, z) is the derivative of Weierstrass P function. |
| [`weierstrassSigma`](#weierstrasssigma) | weierstrassSigma(g2, g3, z) is the Weierstrass sigma function. |
| [`weierstrassZeta`](#weierstrasszeta) | weierstrassZeta(g2, g3, z) is the Weierstrass Zeta function. |
| [`whittakerM`](#whittakerm) | whittakerM(k,m,z) computes the Whittaker function M of z. |
| [`whittakerW`](#whittakerw) | whittakerW(k,m,z) computes the Whittaker function W of z. |
| [`zernikeR`](#zerniker) | zernikeR(n, m, z) evaluates the Zernike radial polynomial at z. |

### Detailed Documentation

#### `Beta` <a id="beta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L26)\]

##### `Beta` : `(R, R) -> R`

Beta(x, y) is Gamma(x) * Gamma(y)/Gamma(x+y).

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `Beta` : `(R, R, R) -> R`

Beta(z, a, b) is the incomplete Beta function.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `EiEn` <a id="eien"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L176)\]

EiEn(n,z) returns the exponential integral En of z.

- **Signature**: `(WSInteger, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `Gamma` <a id="gamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L24)\]

##### `Gamma` : `R -> R`

Gamma(z) is the Euler Gamma function.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `Gamma` : `(R, R) -> R`

Gamma(a, z) is the incomplete Gamma function.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `Gamma` : `(R, R, R) -> R`

Gamma(a,z1,z2) computes the generalized incomplete Gamma function.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `airyAi` <a id="airyai"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L52)\]

airyAi(z) is the Airy function Ai(z).

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `airyAiPrime` <a id="airyaiprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L54)\]

airyAiPrime(z) is the derivative of the Airy function Ai(z).

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `airyAiZero` <a id="airyaizero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L56)\]

##### `airyAiZero` : `R -> R`

airyAiZero(n) is the n-th zero function of the Airy function Ai(z).

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `airyAiZero` : `(R, R) -> R`

airyAiZero(n,x) is the n-th zero function of the Airy function Ai(z) smaller than x.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `airyBi` <a id="airybi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L61)\]

airyBi(z) is the Airy function Bi(z).

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `airyBiPrime` <a id="airybiprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L68)\]

airyBiPrime(z) is the derivative of the Airy function Bi(z).

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `airyBiZero` <a id="airybizero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L63)\]

##### `airyBiZero` : `R -> R`

airyBiZero(n) is the n-th zero function of the Airy function Bi(z).

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `airyBiZero` : `(R, R) -> R`

airyBiZero(n,x) is the n-th zero function of the Airy function Bi(z) smaller than x.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `angerJ` <a id="angerj"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L70)\]

##### `angerJ` : `(R, R) -> R`

angerJ(v, z) is the Anger J function.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `angerJ` : `(R, R, R) -> R`

angerJ(v, n, z) is the associated Anger J function.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `barnesG` <a id="barnesg"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L254)\]

barnesG(z) computes the Barnes G-function of z.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `besselI` <a id="besseli"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L48)\]

besselI(v, z) is the modified Bessel function of the first kind.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `besselJ` <a id="besselj"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L38)\]

besselJ(v, z) is the Bessel function of the first kind.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `besselJZero` <a id="besseljzero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L40)\]

besselJZero(n,x) returns the n-th zero of the Bessel J n-th function.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `besselK` <a id="besselk"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L50)\]

besselK(v, z) is the modified Bessel function of the second kind.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `besselY` <a id="bessely"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L43)\]

besselY(v, z) is the Bessel function of the second kind.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `besselYZero` <a id="besselyzero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L45)\]

besselYZero(n,x) returns the n-th zero of the Bessel Y n-th function.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `betaRegularized` <a id="betaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L238)\]

betaRegularized(z,a,b) computes the regularized incomplete Beta function.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `charlierC` <a id="charlierc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L165)\]

charlierC(n, a, z) is the Charlier polynomial

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `chebyshevT` <a id="chebyshevt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L279)\]

chebyshevT(n, z) evaluates the Chebyshev polynomial of the first kind at z.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `chebyshevU` <a id="chebyshevu"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L282)\]

chebyshevU(n, expr) evaluates the Chebyshev polynomial of the second kind at z.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `conjugate` <a id="conjugate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L74)\]

conjugate(z) is the conjugate of the complex number z.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `coulombF` <a id="coulombf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L313)\]

coulombF(l,eta,ro) is the regular Coulomb wave function.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `coulombG` <a id="coulombg"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L315)\]

coulombG(l,eta,ro) is the irregular Coulomb wave function.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `coulombH1` <a id="coulombh1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L317)\]

coulombH1(l,eta,ro) is the incoming irregular Coulomb wave function H^(+).

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `coulombH2` <a id="coulombh2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L319)\]

coulombH2(l,eta,ro) is the incoming irregular Coulomb wave function H^(-).

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `dawson` <a id="dawson"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L76)\]

dawson(x) computes the Dawson integral of x.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `dedekindEta` <a id="dedekindeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L389)\]

dedekindEta(tau) computes the Dedekind eta modular function.

- **Signature**: `R -> R`

#### `digamma` <a id="digamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L30)\]

##### `digamma` : `R -> R`

digamma(z) is the logarithmic derivative of Gamma(z) (often written psi(z) in the literature).

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `digamma` : `(R, R) -> R`

digamma(n,z) is the n-th derivative of the digamma function.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `diracDelta` <a id="diracdelta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L204)\]

diracDelta(x) returns the Dirac delta function of x.

- **Signature**: `R -> WSExpression`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `dirichletEta` <a id="dirichleteta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L391)\]

dirichletEta(z) computes the Dirichlet eta function of z.

- **Signature**: `R -> R`

#### `dirichletL` <a id="dirichletl"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L202)\]

dirichletL(k,j,s) returns Dirichlet L-function of s, modulus k, index j.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `ellipticE` <a id="elliptice"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L377)\]

##### `ellipticE` : `R -> R`

ellipticE(z) computes the complete elliptic integral of the second kind.

##### `ellipticE` : `(R, R) -> R`

ellipticE(phi,m) computes the elliptic integral of the second kind.

#### `ellipticF` <a id="ellipticf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L375)\]

ellipticF(phi,m) computes the elliptic integral of the first kind.

- **Signature**: `(R, R) -> R`

#### `ellipticK` <a id="elliptick"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L372)\]

ellipticK(m) computes the complete elliptic integral of the first kind.

- **Signature**: `R -> R`

#### `ellipticPi` <a id="ellipticpi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L381)\]

##### `ellipticPi` : `(R, R) -> R`

ellipticPi(n,m) computes the complete elliptic integral of the third kind.

##### `ellipticPi` : `(R, R, R) -> R`

ellipticPi(n,phi,m) computes the elliptic integral of the third kind.

#### `ellipticTheta` <a id="elliptictheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L363)\]

ellipticTheta(a, u, q) computes the theta function, a ranges from 1 to 4.

- **Signature**: `(R, R, R) -> R`

#### `ellipticThetaPrime` <a id="ellipticthetaprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L365)\]

ellipticThetaPrime(a, u, q) computes the derivative of the theta function, a ranges from 1 to 4.

- **Signature**: `(R, R, R) -> R`

#### `fibonacci` <a id="fibonacci"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L258)\]

fibonacci(n, z) evaluates the Fibonacci polynomial at z.

- **Signature**: `(WSInteger, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `gammaRegularized` <a id="gammaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L240)\]

gammaRegularized(a,z) computes the regularized incomplete Gamma function.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `gegenbauerC` <a id="gegenbauerc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L274)\]

##### `gegenbauerC` : `(WSInteger, R) -> R`

gegenbauerC(n,z) evaluates the renormalized form of the Gegenbauer polynomial at z.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `gegenbauerC` : `(WSInteger, R, R) -> R`

gegenbauerC(n,lambda,z) evaluates the Gegenbauer polynomial at z.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `gudermannian` <a id="gudermannian"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L184)\]

gudermannian(z) computes the Gudermannian of z.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `hankelH1` <a id="hankelh1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L111)\]

hankelH1(v, z) is the first Hankel function (Bessel function of the third kind).

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `hankelH2` <a id="hankelh2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L114)\]

hankelH2(v, z) is the second Hankel function (Bessel function of the third kind).

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `haversine` <a id="haversine"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L180)\]

haversine(z) computes the Haversine of z.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `hermiteH` <a id="hermiteh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L285)\]

hermiteH(n, z) evaluates the Hermite polynomial at z.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `hurwitzLerchPhi` <a id="hurwitzlerchphi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L229)\]

hurwitzLerchPhi(z,s,a) computes the Hurwitz-Lerch transcendent phi function.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `hurwitzZeta` <a id="hurwitzzeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L227)\]

hurwitzZeta(s,a) computes the Hurwitz zeta.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `hyperFactorial` <a id="hyperfactorial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L256)\]

hyperFactorial(n) computes the hyperfactorial of n.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `hypergeometric0F1` <a id="hypergeometric0f1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L295)\]

hypergeometric0F1(a,z) is the hypergeometric 0F1.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `hypergeometric0F1Regularized` <a id="hypergeometric0f1regularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L297)\]

hypergeometric0F1Regularized(a,z) is the regularized hypergeometric 0F1.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `hypergeometric1F1` <a id="hypergeometric1f1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L299)\]

hypergeometric1F1(a,b,z) is the Kummer confluent hypergeometric function 1F1.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `hypergeometric1F1Regularized` <a id="hypergeometric1f1regularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L302)\]

hypergeometric1F1Regularized(a,b,z) is the regularized confluent hypergeometric function 1F1.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `hypergeometricU` <a id="hypergeometricu"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L305)\]

hypergeometricU(a,b,z) is the confluent hypergeometric function U.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `inverseBetaRegularized` <a id="inversebetaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L244)\]

inverseBetaRegularized(s,a,b) computes the Beta inverse.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `inverseErf` <a id="inverseerf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L233)\]

inverseErf(z) computes the inverse error function of z.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `inverseErfc` <a id="inverseerfc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L235)\]

inverseErfc(z) computes the inverse complementary error function of z.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `inverseGammaRegularized` <a id="inversegammaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L246)\]

inverseGammaRegularized(a,s) computes the Gamma inverse.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `inverseGudermannian` <a id="inversegudermannian"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L186)\]

inverseGudermannian(z) computes the inverse Gudermannian of z.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `inverseHaversine` <a id="inversehaversine"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L182)\]

inverseHaversine(z) computes the inverse Haversine of z.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `inverseJacobiCn` <a id="inversejacobicn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L361)\]

inverseJacobiCn(nu, m) computes the inverse Jacobi's CN elliptic function.

- **Signature**: `(R, R) -> R`

#### `inverseJacobiSn` <a id="inversejacobisn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L359)\]

inverseJacobiSn(nu, m) computes the inverse Jacobi's SN elliptic function.

- **Signature**: `(R, R) -> R`

#### `jacobiAmplitude` <a id="jacobiamplitude"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L354)\]

jacobiAmplitude(u,m) computes the amplitude function am.

- **Signature**: `(R, R) -> R`

#### `jacobiCn` <a id="jacobicn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L146)\]

jacobiCn(z, m) is the Jacobi elliptic cn function, defined by jacobiCn(z, m)^2 + jacobiSn(z, m)^2 = 1 and jacobiCn(0, m) = 1.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `jacobiDn` <a id="jacobidn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L150)\]

jacobiDn(z, m) is the Jacobi elliptic dn function, defined by jacobiDn(z, m)^2 + m*jacobiSn(z, m)^2 = 1 and jacobiDn(0, m) = 1.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `jacobiP` <a id="jacobip"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L293)\]

jacobiP(n, a, b, z) evaluates the Jacobi polynomial at z.

- **Signature**: `(R, R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `jacobiSn` <a id="jacobisn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L143)\]

jacobiSn(z, m) is the Jacobi elliptic sn function, defined by the formula jacobiSn(ellipticF(z, m), m) = z.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `jacobiTheta` <a id="jacobitheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L159)\]

jacobiTheta(n, z, m) are the Jacobi theta functions.

- **Signature**: `(WSInteger, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `jacobiZeta` <a id="jacobizeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L154)\]

ellipticPi(n,phi,m) computes the elliptic integral of the third kind.

- **Signature**: `(R, R) -> R`

#### `kelvinBei` <a id="kelvinbei"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L125)\]

kelvinBei(v, z) is the Kelvin bei function defined by equality kelvinBei(v, z) = imag(besselJ(v, exp(3*Rpi*Ri/4)*z)) for z and v real.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `kelvinBer` <a id="kelvinber"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L129)\]

kelvinBer(v, z) is the Kelvin ber function defined by equality kelvinBer(v, z) = real(besselJ(v, exp(3*Rpi*Ri/4)*z)) for z and v real.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `kelvinKei` <a id="kelvinkei"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L133)\]

kelvinKei(v, z) is the Kelvin kei function defined by equality kelvinKei(v, z) = imag(exp(-v*Rpi*Ri/2)*besselK(v, exp(Rpi*Ri/4)*z)) for z and v real.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `kelvinKer` <a id="kelvinker"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L138)\]

kelvinKer(v, z) is the Kelvin ker function defined by equality kelvinKer(v, z) = real(exp(-v*Rpi*Ri/2)*besselK(v, exp(Rpi*Ri/4)*z)) for z and v real.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `kleinInvariantJ` <a id="kleininvariantj"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L393)\]

kleinInvariantJ(tau) computes the Klein's absolute invariant.

- **Signature**: `R -> R`

#### `laguerreL` <a id="laguerrel"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L287)\]

##### `laguerreL` : `(R, R) -> R`

laguerreL(n, z) evaluates the Laguerre polynomial at z.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `laguerreL` : `(R, R, R) -> R`

laguerreL(n, a, z) evaluates the generalized Laguerre polynomial a z.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `lambertW` <a id="lambertw"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L78)\]

##### `lambertW` : `R -> R`

lambertW(z) = w is the principal branch of the solution to the equation we^w = z.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `lambertW` : `(WSInteger, R) -> R`

lambertW(k,z) returns the k-th solution to LambertW function.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `legendreP` <a id="legendrep"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L121)\]

##### `legendreP` : `(R, R) -> R`

legendreP(n, z) evaluates the Legendre polynomial of the first kind at z.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `legendreP` : `(R, R, R) -> R`

legendreP(n, m, z) evaluates the associated Legendre polynomial of the first type at z.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `legendreQ` <a id="legendreq"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L123)\]

##### `legendreQ` : `(R, R) -> R`

legendreQ(n, z) returns the Legendre function of the second kind.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `legendreQ` : `(R, R, R) -> R`

legendreQ(n, m, z) evaluates the associated Legendre function of the second kind at z.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `lerchPhi` <a id="lerchphi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L161)\]

lerchPhi(z,s,a) returns Lerch's transcendent phi of arguments.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `logBarnesG` <a id="logbarnesg"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L252)\]

logBarnesG(z) is the logarithm of Barnes-G.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `logGamma` <a id="loggamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L250)\]

logGamma(z) returns the log-Gamma of z.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `lommelS1` <a id="lommels1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L117)\]

lommelS1(mu, nu, z) is the Lommel s function.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `lommelS2` <a id="lommels2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L119)\]

lommelS2(mu, nu, z) is the Lommel S function.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `mathieuC` <a id="mathieuc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L335)\]

mathieuC(a,q,z) is the even Mathieu function with characteristic a and parameter q.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `mathieuCPrime` <a id="mathieucprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L341)\]

mathieuCPrime(a,q,z) derivative of the even Mathieu function.

- **Signature**: `(R, R, R) -> R`

#### `mathieuCharacteristicA` <a id="mathieucharacteristica"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L345)\]

mathieuCharacteristicA(r,q) returns the characteristic for even Mathieu function.

- **Signature**: `(R, R) -> R`

#### `mathieuCharacteristicB` <a id="mathieucharacteristicb"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L348)\]

mathieuCharacteristicB(r,q) returns the characteristic for odd Mathieu function.

- **Signature**: `(R, R) -> R`

#### `mathieuCharacteristicExponent` <a id="mathieucharacteristicexponent"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L351)\]

mathieuCharacteristicExponent(a,q) returns the characteristic exponent of the Mathieu function.

- **Signature**: `(R, R) -> R`

#### `mathieuS` <a id="mathieus"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L338)\]

mathieuS(b,q,z) is the odd Mathieu function with characteristic b and parameter q.

- **Signature**: `(R, R, R) -> R`

#### `mathieuSPrime` <a id="mathieusprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L343)\]

mathieuSPrime(b,q,z) derivative of the odd Mathieu function.

- **Signature**: `(R, R, R) -> R`

#### `modularLambda` <a id="modularlambda"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L395)\]

modularLambda(tau) computes the lambda modular function.

- **Signature**: `R -> R`

#### `parabolicCylinderD` <a id="paraboliccylinderd"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L311)\]

parabolicCylinderD(nu,z) computes the parabolic cylinder function D of z.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `pochhammer` <a id="pochhammer"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L248)\]

pochhammer(a,n) returns the Pochhammer symbol.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `polygamma` <a id="polygamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L33)\]

polygamma(k, z) is the k-th derivative of digamma(z), (often written psi(k, z) in the literature).

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `polylog` <a id="polylog"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L81)\]

##### `polylog` : `(R, R) -> R`

polylog(s, z) is the polylogarithm of order s at z.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `polylog` : `(R, R, R) -> R`

polylog(n,p,z) is the Nielsen generalized polylogarithm function.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `qBinomial` <a id="qbinomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L327)\]

qBinomial(n,m,q) returns the q-analog of binomial coefficient.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `qFactorial` <a id="qfactorial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L325)\]

qFactorial(z,q) returns the q-analog of factorial of z.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `qGamma` <a id="qgamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L329)\]

qGamma(z,q) returns the q-analog of Euler Gamma of z.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `qPochhammer` <a id="qpochhammer"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L321)\]

##### `qPochhammer` : `(R, R) -> R`

qPochhammer(z,q) returns the q-Pochhammer symbol of z.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `qPochhammer` : `(R, R, R) -> R`

qPochhammer(z,q,n) returns the q-Pochhammer symbol of z.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `qPolyGamma` <a id="qpolygamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L331)\]

##### `qPolyGamma` : `(R, R) -> R`

qPolyGamma(z,q) returns the q-digamma of z.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `qPolyGamma` : `(R, R, R) -> R`

qPolyGamma(n,z,q) returns the n-th derivative of the q-digamma function of z.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `ramanujanTau` <a id="ramanujantau"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L210)\]

ramanujanTau(n) returns the Ramanujan tau of n.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `ramanujanTauL` <a id="ramanujantaul"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L212)\]

ramanujanTauL(s) computes the Ramanujan tau Dirichlet L-function of s.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `ramanujanTauTheta` <a id="ramanujantautheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L214)\]

ramanujanTauTheta(z) returns the Ramanujan tau theta of z.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `ramanujanTauZ` <a id="ramanujantauz"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L216)\]

ramanujanTauZ(t) computes the Ramanujan tau Z-function of t.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `riemannSiegelTheta` <a id="riemannsiegeltheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L218)\]

riemannSiegelTheta(t) returns the Riemann-Siegel theta function of t.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `riemannSiegelZ` <a id="riemannsiegelz"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L220)\]

riemannSiegelZ(t) computes the Riemann-Siegel Z function of t.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `riemannZeta` <a id="riemannzeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L163)\]

##### `riemannZeta` : `R -> R`

riemannZeta(z) is the Riemann Zeta function.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `riemannZeta` : `(R, R) -> R`

riemannZeta(s,a) is the generalized Riemann Zeta function.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `sign` <a id="sign"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L22)\]

sign(x) is 1 if x is positive, -1 if x is negative, 0 if x equals 0.

- **Signature**: `R -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `sphericalBesselJ` <a id="sphericalbesselj"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L190)\]

sphericalBesselJ(n,z) returns the spherical Bessel of the first kind of z.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `sphericalBesselY` <a id="sphericalbessely"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L193)\]

sphericalBesselY(n,z) returns the spherical Bessel of the second kind of z.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `sphericalHankelH1` <a id="sphericalhankelh1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L196)\]

sphericalHankelH1(n,z) returns the spherical Hankel of the first kind of z.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `sphericalHankelH2` <a id="sphericalhankelh2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L199)\]

sphericalHankelH2(n,z) computes the spherical Hankel of the second kind of z.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `sphericalHarmonicY` <a id="sphericalharmonicy"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L271)\]

sphericalHarmonicY(l, m, theta, phi) returns the spherical harmonic Y or evaluates it.

- **Signature**: `(R, R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `stieltjesGamma` <a id="stieltjesgamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L223)\]

##### `stieltjesGamma` : `WSInteger -> R`

stieltjesGamma(n) returns the n-th Stieltjes constant.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `stieltjesGamma` : `(WSInteger, R) -> R`

stieltjesGamma(n,a) returns the generalized n-th Stieltjes constant.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `struveH` <a id="struveh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L106)\]

struveH(v, z) is the Struve H function.

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `struveL` <a id="struvel"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L108)\]

struveL(v, z) is the Struve L function defined by the formula struveL(v, z) = -Ri^exp(-v*Rpi*Ri/2)*struveH(v, Ri*z).

- **Signature**: `(R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `unitStep` <a id="unitstep"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L356)\]

unitStep(x) returns the unit step function i.e. 0 for x less than 0, 1 for x greater or equal to 0.

- **Signature**: `R -> WSExpression`

#### `weberE` <a id="webere"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L102)\]

##### `weberE` : `(R, R) -> R`

weberE(v, z) is the Weber E function.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

##### `weberE` : `(R, R, R) -> R`

weberE(v, n, z) is the associated Weber E function.

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `weierstrassP` <a id="weierstrassp"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L83)\]

weierstrassP(g2, g3, z) is the Weierstrass P function.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `weierstrassPInverse` <a id="weierstrasspinverse"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L92)\]

weierstrassPInverse(g2, g3, z) is the inverse of Weierstrass P function, defined by the formula weierstrassP(g2, g3, weierstrassPInverse(g2, g3, z)) = z.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `weierstrassPPrime` <a id="weierstrasspprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L85)\]

weierstrassPPrime(g2, g3, z) is the derivative of Weierstrass P function.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `weierstrassSigma` <a id="weierstrasssigma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L88)\]

weierstrassSigma(g2, g3, z) is the Weierstrass sigma function.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `weierstrassZeta` <a id="weierstrasszeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L90)\]

weierstrassZeta(g2, g3, z) is the Weierstrass Zeta function.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `whittakerM` <a id="whittakerm"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L96)\]

whittakerM(k,m,z) computes the Whittaker function M of z.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `whittakerW` <a id="whittakerw"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L98)\]

whittakerW(k,m,z) computes the Whittaker function W of z.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `zernikeR` <a id="zerniker"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L291)\]

zernikeR(n, m, z) evaluates the Zernike radial polynomial at z.

- **Signature**: `(R, R, R) -> R`
- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

---

[Back to Index](../index.md)
