# WSNumericalSpecialFunctions

> **Kind**: Package &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L1)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS numerical special functions using the MathLink Julia package.

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
| [`Beta`](#beta) | Beta(x, y) is \spad{Gamma(x) * Gamma(y)/Gamma(x+y)}. |
| [`EiEn`](#eien) | EiEn(n,z) returns the exponential integral En of z. |
| [`Gamma`](#gamma) | Gamma(z) is the Euler Gamma function. |
| [`airyAi`](#airyai) | airyAi(z) is the Airy function \spad{Ai(z)}. |
| [`airyAiPrime`](#airyaiprime) | airyAiPrime(z) is the derivative of the Airy function \spad{Ai(z)}. |
| [`airyAiZero`](#airyaizero) | airyAiZero(n) is the n-th zero function of the Airy function \spad{Ai(z)}. |
| [`airyBi`](#airybi) | airyBi(z) is the Airy function \spad{Bi(z)}. |
| [`airyBiPrime`](#airybiprime) | airyBiPrime(z) is the derivative of the Airy function \spad{Bi(z)}. |
| [`airyBiZero`](#airybizero) | airyBiZero(n) is the n-th zero function of the Airy function \spad{Bi(z)}. |
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
| [`digamma`](#digamma) | digamma(z) is the logarithmic derivative of \spad{Gamma(z)} (often written \spad{psi(z)} i... |
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
| [`jacobiCn`](#jacobicn) | jacobiCn(z, m) is the Jacobi elliptic cn function, defined by \spad{jacobiCn(z, m)^2 + jac... |
| [`jacobiDn`](#jacobidn) | jacobiDn(z, m) is the Jacobi elliptic dn function, defined by \spad{jacobiDn(z, m)^2 + m*j... |
| [`jacobiP`](#jacobip) | jacobiP(n, a, b, z) evaluates the Jacobi polynomial at z. |
| [`jacobiSn`](#jacobisn) | jacobiSn(z, m) is the Jacobi elliptic sn function, defined by the formula \spad{jacobiSn(e... |
| [`jacobiTheta`](#jacobitheta) | jacobiTheta(n, z, m) are the Jacobi theta functions. |
| [`jacobiZeta`](#jacobizeta) | jacobiZeta(z, m) is the Jacobi elliptic zeta function, defined by \spad{D(jacobiZeta(z, m)... |
| [`kelvinBei`](#kelvinbei) | kelvinBei(v, z) is the Kelvin bei function defined by equality \spad{kelvinBei(v, z) = ima... |
| [`kelvinBer`](#kelvinber) | kelvinBer(v, z) is the Kelvin ber function defined by equality \spad{kelvinBer(v, z) = rea... |
| [`kelvinKei`](#kelvinkei) | kelvinKei(v, z) is the Kelvin kei function defined by equality \spad{kelvinKei(v, z) = ima... |
| [`kelvinKer`](#kelvinker) | kelvinKer(v, z) is the Kelvin ker function defined by equality \spad{kelvinKer(v, z) = rea... |
| [`kleinInvariantJ`](#kleininvariantj) | kleinInvariantJ(tau) computes the Klein's absolute invariant. |
| [`laguerreL`](#laguerrel) | laguerreL(n, z) evaluates the Laguerre polynomial at z. |
| [`lambertW`](#lambertw) | lambertW(z) = w is the principal branch of the solution to the equation \spad{we^w = z}. |
| [`legendreP`](#legendrep) | legendreP(nu, mu, z) is the Legendre P function. |
| [`legendreQ`](#legendreq) | legendreQ(nu, mu, z) is the Legendre Q function. |
| [`lerchPhi`](#lerchphi) | lerchPhi(z, s, a) is the Lerch Phi function. |
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
| [`polygamma`](#polygamma) | polygamma(k, z) is the \spad{k-th} derivative of \spad{digamma(z)}, (often written \spad{p... |
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
| [`struveL`](#struvel) | struveL(v, z) is the Struve L function defined by the formula \spad{struveL(v, z) = -Ri^ex... |
| [`unitStep`](#unitstep) | unitStep(x) returns the unit step function i.e. 0 for x less than 0, 1 for x greater or eq... |
| [`weberE`](#webere) | weberE(v, z) is the Weber E function. |
| [`weierstrassP`](#weierstrassp) | weierstrassP(g2, g3, z) is the Weierstrass P function. |
| [`weierstrassPInverse`](#weierstrasspinverse) | weierstrassPInverse(g2, g3, z) is the inverse of Weierstrass P function, defined by the fo... |
| [`weierstrassPPrime`](#weierstrasspprime) | weierstrassPPrime(g2, g3, z) is the derivative of Weierstrass P function. |
| [`weierstrassSigma`](#weierstrasssigma) | weierstrassSigma(g2, g3, z) is the Weierstrass sigma function. |
| [`weierstrassZeta`](#weierstrasszeta) | weierstrassZeta(g2, g3, z) is the Weierstrass Zeta function. |
| [`whittakerM`](#whittakerm) | whittakerM(k, m, z) is the Whittaker M function. |
| [`whittakerW`](#whittakerw) | whittakerW(k, m, z) is the Whittaker W function. |
| [`zernikeR`](#zerniker) | zernikeR(n, m, z) evaluates the Zernike radial polynomial at z. |

### Detailed Documentation

#### `Beta` <a id="beta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L18)\]

##### `Beta` : `(R, R) ->R`

Beta(x, y) is \spad{Gamma(x) * Gamma(y)/Gamma(x+y)}.

##### `Beta` : `(R, R, R) -> R`

Beta(z, a, b) is the incomplete Beta function.

##### `Beta` : `(R, R) -> R`

Beta(x, y) is Gamma(x) * Gamma(y)/Gamma(x+y).

- **From**: [`WSNumericalSpecialFunctions(R)`](WSNumericalSpecialFunctions.md)

#### `EiEn` <a id="eien"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L168)\]

EiEn(n,z) returns the exponential integral En of z.

- **Signature**: `(WSInteger, R) -> R`

#### `Gamma` <a id="gamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L16)\]

##### `Gamma` : `R -> R`

Gamma(z) is the Euler Gamma function.

##### `Gamma` : `(R, R) -> R`

Gamma(a, z) is the incomplete Gamma function.

##### `Gamma` : `(R, R, R) -> R`

Gamma(a,z1,z2) computes the generalized incomplete Gamma function.

#### `airyAi` <a id="airyai"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L44)\]

airyAi(z) is the Airy function \spad{Ai(z)}.

- **Signature**: `R -> R`

#### `airyAiPrime` <a id="airyaiprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L46)\]

airyAiPrime(z) is the derivative of the Airy function \spad{Ai(z)}.

- **Signature**: `R -> R`

#### `airyAiZero` <a id="airyaizero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L48)\]

##### `airyAiZero` : `R -> R`

airyAiZero(n) is the n-th zero function of the Airy function \spad{Ai(z)}.

##### `airyAiZero` : `(R, R) -> R`

airyAiZero(n,x) is the n-th zero function of the Airy function \spad{Ai(z)} smaller than x.

#### `airyBi` <a id="airybi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L53)\]

airyBi(z) is the Airy function \spad{Bi(z)}.

- **Signature**: `R -> R`

#### `airyBiPrime` <a id="airybiprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L60)\]

airyBiPrime(z) is the derivative of the Airy function \spad{Bi(z)}.

- **Signature**: `R -> R`

#### `airyBiZero` <a id="airybizero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L55)\]

##### `airyBiZero` : `R -> R`

airyBiZero(n) is the n-th zero function of the Airy function \spad{Bi(z)}.

##### `airyBiZero` : `(R, R) -> R`

airyBiZero(n,x) is the n-th zero function of the Airy function \spad{Bi(z)} smaller than x.

#### `angerJ` <a id="angerj"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L62)\]

##### `angerJ` : `(R, R) -> R`

angerJ(v, z) is the Anger J function.

##### `angerJ` : `(R, R, R) -> R`

angerJ(v, n, z) is the associated Anger J function.

#### `barnesG` <a id="barnesg"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L246)\]

barnesG(z) computes the Barnes G-function of z.

- **Signature**: `R -> R`

#### `besselI` <a id="besseli"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L40)\]

besselI(v, z) is the modified Bessel function of the first kind.

- **Signature**: `(R, R) -> R`

#### `besselJ` <a id="besselj"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L30)\]

besselJ(v, z) is the Bessel function of the first kind.

- **Signature**: `(R, R) -> R`

#### `besselJZero` <a id="besseljzero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L32)\]

besselJZero(n,x) returns the n-th zero of the Bessel J n-th function.

- **Signature**: `(R, R) -> R`

#### `besselK` <a id="besselk"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L42)\]

besselK(v, z) is the modified Bessel function of the second kind.

- **Signature**: `(R, R) -> R`

#### `besselY` <a id="bessely"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L35)\]

besselY(v, z) is the Bessel function of the second kind.

- **Signature**: `(R, R) -> R`

#### `besselYZero` <a id="besselyzero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L37)\]

besselYZero(n,x) returns the n-th zero of the Bessel Y n-th function.

- **Signature**: `(R, R) -> R`

#### `betaRegularized` <a id="betaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L230)\]

betaRegularized(z,a,b) computes the regularized incomplete Beta function.

- **Signature**: `(R, R, R) -> R`

#### `charlierC` <a id="charlierc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L157)\]

charlierC(n, a, z) is the Charlier polynomial

- **Signature**: `(R, R, R) -> R`

#### `chebyshevT` <a id="chebyshevt"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L271)\]

chebyshevT(n, z) evaluates the Chebyshev polynomial of the first kind at z.

- **Signature**: `(R, R) -> R`

#### `chebyshevU` <a id="chebyshevu"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L274)\]

chebyshevU(n, expr) evaluates the Chebyshev polynomial of the second kind at z.

- **Signature**: `(R, R) -> R`

#### `conjugate` <a id="conjugate"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L66)\]

conjugate(z) is the conjugate of the complex number z.

- **Signature**: `R -> R`

#### `coulombF` <a id="coulombf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L305)\]

coulombF(l,eta,ro) is the regular Coulomb wave function.

- **Signature**: `(R, R, R) -> R`

#### `coulombG` <a id="coulombg"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L307)\]

coulombG(l,eta,ro) is the irregular Coulomb wave function.

- **Signature**: `(R, R, R) -> R`

#### `coulombH1` <a id="coulombh1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L309)\]

coulombH1(l,eta,ro) is the incoming irregular Coulomb wave function H^(+).

- **Signature**: `(R, R, R) -> R`

#### `coulombH2` <a id="coulombh2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L311)\]

coulombH2(l,eta,ro) is the incoming irregular Coulomb wave function H^(-).

- **Signature**: `(R, R, R) -> R`

#### `dawson` <a id="dawson"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L68)\]

dawson(x) computes the Dawson integral of x.

- **Signature**: `R -> R`

#### `dedekindEta` <a id="dedekindeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L381)\]

dedekindEta(tau) computes the Dedekind eta modular function.

- **Signature**: `R -> R`

#### `digamma` <a id="digamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L22)\]

##### `digamma` : `R -> R`

digamma(z) is the logarithmic derivative of \spad{Gamma(z)} (often written \spad{psi(z)} in the literature).

##### `digamma` : `(R , R) -> R`

digamma(n,z) is the n-th derivative of the digamma function.

#### `diracDelta` <a id="diracdelta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L196)\]

diracDelta(x) returns the Dirac delta function of x.

- **Signature**: `R -> WSExpression`

#### `dirichletEta` <a id="dirichleteta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L383)\]

dirichletEta(z) computes the Dirichlet eta function of z.

- **Signature**: `R -> R`

#### `dirichletL` <a id="dirichletl"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L194)\]

dirichletL(k,j,s) returns Dirichlet L-function of s, modulus k, index j.

- **Signature**: `(R, R, R) -> R`

#### `ellipticE` <a id="elliptice"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L369)\]

##### `ellipticE` : `R -> R`

ellipticE(z) computes the complete elliptic integral of the second kind.

##### `ellipticE` : `(R, R)-> R`

ellipticE(phi,m) computes the elliptic integral of the second kind.

#### `ellipticF` <a id="ellipticf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L367)\]

ellipticF(phi,m) computes the elliptic integral of the first kind.

- **Signature**: `(R, R) -> R`

#### `ellipticK` <a id="elliptick"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L364)\]

ellipticK(m) computes the complete elliptic integral of the first kind.

- **Signature**: `R -> R`

#### `ellipticPi` <a id="ellipticpi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L373)\]

##### `ellipticPi` : `(R, R)-> R`

ellipticPi(n,m) computes the complete elliptic integral of the third kind.

##### `ellipticPi` : `(R, R, R)-> R`

ellipticPi(n,phi,m) computes the elliptic integral of the third kind.

#### `ellipticTheta` <a id="elliptictheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L355)\]

ellipticTheta(a, u, q) computes the theta function, a ranges from 1 to 4.

- **Signature**: `(R, R, R) -> R`

#### `ellipticThetaPrime` <a id="ellipticthetaprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L357)\]

ellipticThetaPrime(a, u, q) computes the derivative of the theta function, a ranges from 1 to 4.

- **Signature**: `(R, R, R) -> R`

#### `fibonacci` <a id="fibonacci"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L250)\]

fibonacci(n, z) evaluates the Fibonacci polynomial at z.

- **Signature**: `(WSInteger, R) -> R`

#### `gammaRegularized` <a id="gammaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L232)\]

gammaRegularized(a,z) computes the regularized incomplete Gamma function.

- **Signature**: `(R, R) -> R`

#### `gegenbauerC` <a id="gegenbauerc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L266)\]

##### `gegenbauerC` : `(WSInteger, R) -> R`

gegenbauerC(n,z) evaluates the renormalized form of the Gegenbauer polynomial at z.

##### `gegenbauerC` : `(WSInteger, R, R) -> R`

gegenbauerC(n,lambda,z) evaluates the Gegenbauer polynomial at z.

#### `gudermannian` <a id="gudermannian"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L176)\]

gudermannian(z) computes the Gudermannian of z.

- **Signature**: `R -> R`

#### `hankelH1` <a id="hankelh1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L103)\]

hankelH1(v, z) is the first Hankel function (Bessel function of the third kind).

- **Signature**: `(R, R) -> R`

#### `hankelH2` <a id="hankelh2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L106)\]

hankelH2(v, z) is the second Hankel function (Bessel function of the third kind).

- **Signature**: `(R, R) -> R`

#### `haversine` <a id="haversine"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L172)\]

haversine(z) computes the Haversine of z.

- **Signature**: `R -> R`

#### `hermiteH` <a id="hermiteh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L277)\]

hermiteH(n, z) evaluates the Hermite polynomial at z.

- **Signature**: `(R, R) -> R`

#### `hurwitzLerchPhi` <a id="hurwitzlerchphi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L221)\]

hurwitzLerchPhi(z,s,a) computes the Hurwitz-Lerch transcendent phi function.

- **Signature**: `(R, R, R) -> R`

#### `hurwitzZeta` <a id="hurwitzzeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L219)\]

hurwitzZeta(s,a) computes the Hurwitz zeta.

- **Signature**: `(R, R) -> R`

#### `hyperFactorial` <a id="hyperfactorial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L248)\]

hyperFactorial(n) computes the hyperfactorial of n.

- **Signature**: `R -> R`

#### `hypergeometric0F1` <a id="hypergeometric0f1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L287)\]

hypergeometric0F1(a,z) is the hypergeometric 0F1.

- **Signature**: `(R, R) -> R`

#### `hypergeometric0F1Regularized` <a id="hypergeometric0f1regularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L289)\]

hypergeometric0F1Regularized(a,z) is the regularized hypergeometric 0F1.

- **Signature**: `(R, R) -> R`

#### `hypergeometric1F1` <a id="hypergeometric1f1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L291)\]

hypergeometric1F1(a,b,z) is the Kummer confluent hypergeometric function 1F1.

- **Signature**: `(R, R, R) -> R`

#### `hypergeometric1F1Regularized` <a id="hypergeometric1f1regularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L294)\]

hypergeometric1F1Regularized(a,b,z) is the regularized confluent hypergeometric function 1F1.

- **Signature**: `(R, R, R) -> R`

#### `hypergeometricU` <a id="hypergeometricu"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L297)\]

hypergeometricU(a,b,z) is the confluent hypergeometric function U.

- **Signature**: `(R, R, R) -> R`

#### `inverseBetaRegularized` <a id="inversebetaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L236)\]

inverseBetaRegularized(s,a,b) computes the Beta inverse.

- **Signature**: `(R, R, R) -> R`

#### `inverseErf` <a id="inverseerf"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L225)\]

inverseErf(z) computes the inverse error function of z.

- **Signature**: `R -> R`

#### `inverseErfc` <a id="inverseerfc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L227)\]

inverseErfc(z) computes the inverse complementary error function of z.

- **Signature**: `R -> R`

#### `inverseGammaRegularized` <a id="inversegammaregularized"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L238)\]

inverseGammaRegularized(a,s) computes the Gamma inverse.

- **Signature**: `(R, R) -> R`

#### `inverseGudermannian` <a id="inversegudermannian"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L178)\]

inverseGudermannian(z) computes the inverse Gudermannian of z.

- **Signature**: `R -> R`

#### `inverseHaversine` <a id="inversehaversine"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L174)\]

inverseHaversine(z) computes the inverse Haversine of z.

- **Signature**: `R -> R`

#### `inverseJacobiCn` <a id="inversejacobicn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L353)\]

inverseJacobiCn(nu, m) computes the inverse Jacobi's CN elliptic function.

- **Signature**: `(R, R) -> R`

#### `inverseJacobiSn` <a id="inversejacobisn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L351)\]

inverseJacobiSn(nu, m) computes the inverse Jacobi's SN elliptic function.

- **Signature**: `(R, R) -> R`

#### `jacobiAmplitude` <a id="jacobiamplitude"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L346)\]

jacobiAmplitude(u,m) computes the amplitude function am.

- **Signature**: `(R, R) -> R`

#### `jacobiCn` <a id="jacobicn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L138)\]

jacobiCn(z, m) is the Jacobi elliptic cn function, defined by \spad{jacobiCn(z, m)^2 + jacobiSn(z, m)^2 = 1} and \spad{jacobiCn(0, m) = 1}.

- **Signature**: `(R, R) -> R`

#### `jacobiDn` <a id="jacobidn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L142)\]

jacobiDn(z, m) is the Jacobi elliptic dn function, defined by \spad{jacobiDn(z, m)^2 + m*jacobiSn(z, m)^2 = 1} and \spad{jacobiDn(0, m) = 1}.

- **Signature**: `(R, R) -> R`

#### `jacobiP` <a id="jacobip"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L285)\]

jacobiP(n, a, b, z) evaluates the Jacobi polynomial at z.

- **Signature**: `(R, R, R, R) -> R`

#### `jacobiSn` <a id="jacobisn"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L135)\]

jacobiSn(z, m) is the Jacobi elliptic sn function, defined by the formula \spad{jacobiSn(ellipticF(z, m), m) = z}.

- **Signature**: `(R, R) -> R`

#### `jacobiTheta` <a id="jacobitheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L151)\]

jacobiTheta(n, z, m) are the Jacobi theta functions.

- **Signature**: `(WSInteger, R, R) -> R`

#### `jacobiZeta` <a id="jacobizeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L146)\]

##### `jacobiZeta` : `(R, R) -> R`

jacobiZeta(z, m) is the Jacobi elliptic zeta function, defined by \spad{D(jacobiZeta(z, m), z) = jacobiDn(z, m)^2 - ellipticE(m)/ellipticK(m)} and \spad{jacobiZeta(0, m) = 0}.

##### `jacobiZeta` : `(R, R)-> R`

ellipticPi(n,phi,m) computes the elliptic integral of the third kind.

#### `kelvinBei` <a id="kelvinbei"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L117)\]

kelvinBei(v, z) is the Kelvin bei function defined by equality \spad{kelvinBei(v, z) = imag(besselJ(v, exp(3*Rpi*Ri/4)*z))} for z and v real.

- **Signature**: `(R, R) -> R`

#### `kelvinBer` <a id="kelvinber"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L121)\]

kelvinBer(v, z) is the Kelvin ber function defined by equality \spad{kelvinBer(v, z) = real(besselJ(v, exp(3*Rpi*Ri/4)*z))} for z and v real.

- **Signature**: `(R, R) -> R`

#### `kelvinKei` <a id="kelvinkei"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L125)\]

kelvinKei(v, z) is the Kelvin kei function defined by equality \spad{kelvinKei(v, z) = imag(exp(-v*Rpi*Ri/2)*besselK(v, exp(Rpi*Ri/4)*z))} for z and v real.

- **Signature**: `(R, R) -> R`

#### `kelvinKer` <a id="kelvinker"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L130)\]

kelvinKer(v, z) is the Kelvin ker function defined by equality \spad{kelvinKer(v, z) = real(exp(-v*Rpi*Ri/2)*besselK(v, exp(Rpi*Ri/4)*z))} for z and v real.

- **Signature**: `(R, R) -> R`

#### `kleinInvariantJ` <a id="kleininvariantj"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L385)\]

kleinInvariantJ(tau) computes the Klein's absolute invariant.

- **Signature**: `R -> R`

#### `laguerreL` <a id="laguerrel"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L279)\]

##### `laguerreL` : `(R, R) -> R`

laguerreL(n, z) evaluates the Laguerre polynomial at z.

##### `laguerreL` : `(R, R, R) -> R`

laguerreL(n, a, z) evaluates the generalized Laguerre polynomial a z.

#### `lambertW` <a id="lambertw"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L70)\]

##### `lambertW` : `R -> R`

lambertW(z) = w is the principal branch of the solution to the equation \spad{we^w = z}.

##### `lambertW` : `(WSInteger, R) -> R`

lambertW(k,z) returns the k-th solution to LambertW function.

#### `legendreP` <a id="legendrep"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L113)\]

##### `legendreP` : `(R, R, R) -> R`

legendreP(nu, mu, z) is the Legendre P function.

##### `legendreP` : `(R, R) -> R`

legendreP(n, z) evaluates the Legendre polynomial of the first kind at z.

##### `legendreP` : `(R, R, R) -> R`

legendreP(n, m, z) evaluates the associated Legendre polynomial of the first type at z.

#### `legendreQ` <a id="legendreq"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L115)\]

##### `legendreQ` : `(R, R, R) -> R`

legendreQ(nu, mu, z) is the Legendre Q function.

##### `legendreQ` : `(R, R) -> R`

legendreQ(n, z) returns the Legendre function of the second kind.

##### `legendreQ` : `(R, R, R) -> R`

legendreQ(n, m, z) evaluates the associated Legendre function of the second kind at z.

#### `lerchPhi` <a id="lerchphi"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L153)\]

##### `lerchPhi` : `(R, R, R) -> R`

lerchPhi(z, s, a) is the Lerch Phi function.

##### `lerchPhi` : `(R, R, R) -> R`

lerchPhi(z,s,a) returns Lerch's transcendent phi of arguments.

#### `logBarnesG` <a id="logbarnesg"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L244)\]

logBarnesG(z) is the logarithm of Barnes-G.

- **Signature**: `R -> R`

#### `logGamma` <a id="loggamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L242)\]

logGamma(z) returns the log-Gamma of z.

- **Signature**: `R -> R`

#### `lommelS1` <a id="lommels1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L109)\]

lommelS1(mu, nu, z) is the Lommel s function.

- **Signature**: `(R, R, R) -> R`

#### `lommelS2` <a id="lommels2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L111)\]

lommelS2(mu, nu, z) is the Lommel S function.

- **Signature**: `(R, R, R) -> R`

#### `mathieuC` <a id="mathieuc"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L327)\]

mathieuC(a,q,z) is the even Mathieu function with characteristic a and parameter q.

- **Signature**: `(R, R, R) -> R`

#### `mathieuCPrime` <a id="mathieucprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L333)\]

mathieuCPrime(a,q,z) derivative of the even Mathieu function.

- **Signature**: `(R, R, R) -> R`

#### `mathieuCharacteristicA` <a id="mathieucharacteristica"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L337)\]

mathieuCharacteristicA(r,q) returns the characteristic for even Mathieu function.

- **Signature**: `(R, R) -> R`

#### `mathieuCharacteristicB` <a id="mathieucharacteristicb"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L340)\]

mathieuCharacteristicB(r,q) returns the characteristic for odd Mathieu function.

- **Signature**: `(R, R) -> R`

#### `mathieuCharacteristicExponent` <a id="mathieucharacteristicexponent"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L343)\]

mathieuCharacteristicExponent(a,q) returns the characteristic exponent of the Mathieu function.

- **Signature**: `(R, R) -> R`

#### `mathieuS` <a id="mathieus"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L330)\]

mathieuS(b,q,z) is the odd Mathieu function with characteristic b and parameter q.

- **Signature**: `(R, R, R) -> R`

#### `mathieuSPrime` <a id="mathieusprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L335)\]

mathieuSPrime(b,q,z) derivative of the odd Mathieu function.

- **Signature**: `(R, R, R) -> R`

#### `modularLambda` <a id="modularlambda"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L387)\]

modularLambda(tau) computes the lambda modular function.

- **Signature**: `R -> R`

#### `parabolicCylinderD` <a id="paraboliccylinderd"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L303)\]

parabolicCylinderD(nu,z) computes the parabolic cylinder function D of z.

- **Signature**: `(R, R) -> R`

#### `pochhammer` <a id="pochhammer"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L240)\]

pochhammer(a,n) returns the Pochhammer symbol.

- **Signature**: `(R, R) -> R`

#### `polygamma` <a id="polygamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L25)\]

polygamma(k, z) is the \spad{k-th} derivative of \spad{digamma(z)}, (often written \spad{psi(k, z)} in the literature).

- **Signature**: `(R, R) -> R`

#### `polylog` <a id="polylog"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L73)\]

##### `polylog` : `(R, R) -> R`

polylog(s, z) is the polylogarithm of order s at z.

##### `polylog` : `(R, R, R) -> R`

polylog(n,p,z) is the Nielsen generalized polylogarithm function.

#### `qBinomial` <a id="qbinomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L319)\]

qBinomial(n,m,q) returns the q-analog of binomial coefficient.

- **Signature**: `(R, R, R) -> R`

#### `qFactorial` <a id="qfactorial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L317)\]

qFactorial(z,q) returns the q-analog of factorial of z.

- **Signature**: `(R, R) -> R`

#### `qGamma` <a id="qgamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L321)\]

qGamma(z,q) returns the q-analog of Euler Gamma of z.

- **Signature**: `(R, R) -> R`

#### `qPochhammer` <a id="qpochhammer"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L313)\]

##### `qPochhammer` : `(R, R) -> R`

qPochhammer(z,q) returns the q-Pochhammer symbol of z.

##### `qPochhammer` : `(R, R, R) -> R`

qPochhammer(z,q,n) returns the q-Pochhammer symbol of z.

#### `qPolyGamma` <a id="qpolygamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L323)\]

##### `qPolyGamma` : `(R, R)-> R`

qPolyGamma(z,q) returns the q-digamma of z.

##### `qPolyGamma` : `(R, R, R) -> R`

qPolyGamma(n,z,q) returns the n-th derivative of the q-digamma function of z.

#### `ramanujanTau` <a id="ramanujantau"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L202)\]

ramanujanTau(n) returns the Ramanujan tau of n.

- **Signature**: `R -> R`

#### `ramanujanTauL` <a id="ramanujantaul"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L204)\]

ramanujanTauL(s) computes the Ramanujan tau Dirichlet L-function of s.

- **Signature**: `R -> R`

#### `ramanujanTauTheta` <a id="ramanujantautheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L206)\]

ramanujanTauTheta(z) returns the Ramanujan tau theta of z.

- **Signature**: `R -> R`

#### `ramanujanTauZ` <a id="ramanujantauz"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L208)\]

ramanujanTauZ(t) computes the Ramanujan tau Z-function of t.

- **Signature**: `R -> R`

#### `riemannSiegelTheta` <a id="riemannsiegeltheta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L210)\]

riemannSiegelTheta(t) returns the Riemann-Siegel theta function of t.

- **Signature**: `R -> R`

#### `riemannSiegelZ` <a id="riemannsiegelz"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L212)\]

riemannSiegelZ(t) computes the Riemann-Siegel Z function of t.

- **Signature**: `R -> R`

#### `riemannZeta` <a id="riemannzeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L155)\]

##### `riemannZeta` : `R -> R`

riemannZeta(z) is the Riemann Zeta function.

##### `riemannZeta` : `(R, R) -> R`

riemannZeta(s,a) is the generalized Riemann Zeta function.

#### `sign` <a id="sign"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L14)\]

sign(x) is 1 if x is positive, -1 if x is negative, 0 if x equals 0.

- **Signature**: `R -> R`

#### `sphericalBesselJ` <a id="sphericalbesselj"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L182)\]

sphericalBesselJ(n,z) returns the spherical Bessel of the first kind of z.

- **Signature**: `(R, R) -> R`

#### `sphericalBesselY` <a id="sphericalbessely"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L185)\]

sphericalBesselY(n,z) returns the spherical Bessel of the second kind of z.

- **Signature**: `(R, R) -> R`

#### `sphericalHankelH1` <a id="sphericalhankelh1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L188)\]

sphericalHankelH1(n,z) returns the spherical Hankel of the first kind of z.

- **Signature**: `(R, R) -> R`

#### `sphericalHankelH2` <a id="sphericalhankelh2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L191)\]

sphericalHankelH2(n,z) computes the spherical Hankel of the second kind of z.

- **Signature**: `(R, R) -> R`

#### `sphericalHarmonicY` <a id="sphericalharmonicy"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L263)\]

sphericalHarmonicY(l, m, theta, phi) returns the spherical harmonic Y or evaluates it.

- **Signature**: `(R, R, R, R) -> R`

#### `stieltjesGamma` <a id="stieltjesgamma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L215)\]

##### `stieltjesGamma` : `WSInteger -> R`

stieltjesGamma(n) returns the n-th Stieltjes constant.

##### `stieltjesGamma` : `(WSInteger, R) -> R`

stieltjesGamma(n,a) returns the generalized n-th Stieltjes constant.

#### `struveH` <a id="struveh"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L98)\]

struveH(v, z) is the Struve H function.

- **Signature**: `(R, R) -> R`

#### `struveL` <a id="struvel"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L100)\]

struveL(v, z) is the Struve L function defined by the formula \spad{struveL(v, z) = -Ri^exp(-v*Rpi*Ri/2)*struveH(v, Ri*z)}.

- **Signature**: `(R, R) -> R`

#### `unitStep` <a id="unitstep"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L348)\]

unitStep(x) returns the unit step function i.e. 0 for x less than 0, 1 for x greater or equal to 0.

- **Signature**: `R -> WSExpression`

#### `weberE` <a id="webere"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L94)\]

##### `weberE` : `(R, R) -> R`

weberE(v, z) is the Weber E function.

##### `weberE` : `(R, R, R) -> R`

weberE(v, n, z) is the associated Weber E function.

#### `weierstrassP` <a id="weierstrassp"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L75)\]

weierstrassP(g2, g3, z) is the Weierstrass P function.

- **Signature**: `(R, R, R) -> R`

#### `weierstrassPInverse` <a id="weierstrasspinverse"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L84)\]

weierstrassPInverse(g2, g3, z) is the inverse of Weierstrass P function, defined by the formula \spad{weierstrassP(g2, g3, weierstrassPInverse(g2, g3, z)) = z}.

- **Signature**: `(R, R, R) -> R`

#### `weierstrassPPrime` <a id="weierstrasspprime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L77)\]

weierstrassPPrime(g2, g3, z) is the derivative of Weierstrass P function.

- **Signature**: `(R, R, R) -> R`

#### `weierstrassSigma` <a id="weierstrasssigma"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L80)\]

weierstrassSigma(g2, g3, z) is the Weierstrass sigma function.

- **Signature**: `(R, R, R) -> R`

#### `weierstrassZeta` <a id="weierstrasszeta"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L82)\]

weierstrassZeta(g2, g3, z) is the Weierstrass Zeta function.

- **Signature**: `(R, R, R) -> R`

#### `whittakerM` <a id="whittakerm"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L88)\]

##### `whittakerM` : `(R, R, R) -> R`

whittakerM(k, m, z) is the Whittaker M function.

##### `whittakerM` : `(R, R, R) -> R`

whittakerM(k,m,z) computes the Whittaker function M of z.

#### `whittakerW` <a id="whittakerw"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L90)\]

##### `whittakerW` : `(R, R, R) -> R`

whittakerW(k, m, z) is the Whittaker W function.

##### `whittakerW` : `(R, R, R) -> R`

whittakerW(k,m,z) computes the Whittaker function W of z.

#### `zernikeR` <a id="zerniker"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jwsnsf.spad#L283)\]

zernikeR(n, m, z) evaluates the Zernike radial polynomial at z.

- **Signature**: `(R, R, R) -> R`
---
[Back to Index](../index.md)
