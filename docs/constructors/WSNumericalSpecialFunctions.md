# WSNumericalSpecialFunctions

> **Kind**: Package &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/WSNSF.spad#L1)\] &nbsp;|&nbsp; **Group**: WS — Wolfram/MathLink

## Description

Julia Wolfram Symbolic numerical special functions using the MathLink Julia package.

**WSNumericalSpecialFunctions(R: WSNumber) is a package constructor**  
**Abbreviation for WSNumericalSpecialFunctions is WSNSF**  
**This constructor is exposed in this frame.**

## Signatures

```fricas
--- Operations ---

 Beta : (R, R) -> R                                     Beta : (R, R, R) -> R
 EiEn : (WSInteger, R) -> R                             Gamma : R -> R
 Gamma : (R, R) -> R                                    Gamma : (R, R, R) -> R
 airyAi : R -> R                                        airyAiPrime : R -> R
 airyAiZero : R -> R                                    airyAiZero : (R, R) -> R
 airyBi : R -> R                                        airyBiPrime : R -> R
 airyBiZero : R -> R                                    airyBiZero : (R, R) -> R
 angerJ : (R, R) -> R                                   angerJ : (R, R, R) -> R
 barnesG : R -> R                                       besselI : (R, R) -> R
 besselJ : (R, R) -> R                                  besselJZero : (R, R) -> R
 besselK : (R, R) -> R                                  besselY : (R, R) -> R
 besselYZero : (R, R) -> R                              betaRegularized : (R, R, R) -> R
 charlierC : (R, R, R) -> R                             chebyshevT : (R, R) -> R
 chebyshevU : (R, R) -> R                               conjugate : R -> R
 coulombF : (R, R, R) -> R                              coulombG : (R, R, R) -> R
 coulombH1 : (R, R, R) -> R                             coulombH2 : (R, R, R) -> R
 dawson : R -> R                                        dedekindEta : R -> R
 digamma : R -> R                                       digamma : (R, R) -> R
 diracDelta : R -> WSExpression                         dirichletEta : R -> R
 dirichletL : (R, R, R) -> R                            ellipticE : R -> R
 ellipticE : (R, R) -> R                                ellipticF : (R, R) -> R
 ellipticK : R -> R                                     ellipticPi : (R, R) -> R
 ellipticPi : (R, R, R) -> R                            ellipticTheta : (R, R, R) -> R
 ellipticThetaPrime : (R, R, R) -> R                    fibonacci : (WSInteger, R) -> R
 gammaRegularized : (R, R) -> R                         gegenbauerC : (WSInteger, R) -> R
 gegenbauerC : (WSInteger, R, R) -> R                   gudermannian : R -> R
 hankelH1 : (R, R) -> R                                 hankelH2 : (R, R) -> R
 haversine : R -> R                                     hermiteH : (R, R) -> R
 hurwitzLerchPhi : (R, R, R) -> R                       hurwitzZeta : (R, R) -> R
 hyperFactorial : R -> R                                hypergeometric0F1 : (R, R) -> R
 hypergeometric0F1Regularized : (R, R) -> R             hypergeometric1F1 : (R, R, R) -> R
 hypergeometric1F1Regularized : (R, R, R) -> R          hypergeometricU : (R, R, R) -> R
 inverseBetaRegularized : (R, R, R) -> R                inverseErf : R -> R
 inverseErfc : R -> R                                   inverseGammaRegularized : (R, R) -> R
 inverseGudermannian : R -> R                           inverseHaversine : R -> R
 inverseJacobiCn : (R, R) -> R                          inverseJacobiSn : (R, R) -> R
 jacobiAmplitude : (R, R) -> R                          jacobiCn : (R, R) -> R
 jacobiDn : (R, R) -> R                                 jacobiP : (R, R, R, R) -> R
 jacobiSn : (R, R) -> R                                 jacobiTheta : (WSInteger, R, R) -> R
 jacobiZeta : (R, R) -> R                               kelvinBei : (R, R) -> R
 kelvinBer : (R, R) -> R                                kelvinKei : (R, R) -> R
 kelvinKer : (R, R) -> R                                kleinInvariantJ : R -> R
 laguerreL : (R, R) -> R                                laguerreL : (R, R, R) -> R
 lambertW : R -> R                                      lambertW : (WSInteger, R) -> R
 legendreP : (R, R, R) -> R                             legendreP : (R, R) -> R
 legendreQ : (R, R, R) -> R                             legendreQ : (R, R) -> R
 lerchPhi : (R, R, R) -> R                              logBarnesG : R -> R
 logGamma : R -> R                                      lommelS1 : (R, R, R) -> R
 lommelS2 : (R, R, R) -> R                              mathieuC : (R, R, R) -> R
 mathieuCPrime : (R, R, R) -> R                         mathieuCharacteristicA : (R, R) -> R
 mathieuCharacteristicB : (R, R) -> R                   mathieuCharacteristicExponent : (R, R) -> R
 mathieuS : (R, R, R) -> R                              mathieuSPrime : (R, R, R) -> R
 modularLambda : R -> R                                 parabolicCylinderD : (R, R) -> R
 pochhammer : (R, R) -> R                               polygamma : (R, R) -> R
 polylog : (R, R) -> R                                  polylog : (R, R, R) -> R
 qBinomial : (R, R, R) -> R                             qFactorial : (R, R) -> R
 qGamma : (R, R) -> R                                   qPochhammer : (R, R) -> R
 qPochhammer : (R, R, R) -> R                           qPolyGamma : (R, R) -> R
 qPolyGamma : (R, R, R) -> R                            ramanujanTau : R -> R
 ramanujanTauL : R -> R                                 ramanujanTauTheta : R -> R
 ramanujanTauZ : R -> R                                 riemannSiegelTheta : R -> R
 riemannSiegelZ : R -> R                                riemannZeta : R -> R
 riemannZeta : (R, R) -> R                              sign : R -> R
 sphericalBesselJ : (R, R) -> R                         sphericalBesselY : (R, R) -> R
 sphericalHankelH1 : (R, R) -> R                        sphericalHankelH2 : (R, R) -> R
 sphericalHarmonicY : (R, R, R, R) -> R                 stieltjesGamma : WSInteger -> R
 stieltjesGamma : (WSInteger, R) -> R                   struveH : (R, R) -> R
 struveL : (R, R) -> R                                  unitStep : R -> WSExpression
 weberE : (R, R) -> R                                   weberE : (R, R, R) -> R
 weierstrassP : (R, R, R) -> R                          weierstrassPInverse : (R, R, R) -> R
 weierstrassPPrime : (R, R, R) -> R                     weierstrassSigma : (R, R, R) -> R
 weierstrassZeta : (R, R, R) -> R                       whittakerM : (R, R, R) -> R
 whittakerW : (R, R, R) -> R                            zernikeR : (R, R, R) -> R
```

---
[Back to Index](../index.md)
