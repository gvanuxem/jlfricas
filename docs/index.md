# Julia Integration into FriCAS

[FriCAS](https://fricas.github.io) is a general purpose computer algebra system with a powerful, strongly typed algebra library written in Spad. This integration incorporates the [Julia](https://julialang.org) runtime directly into FriCAS's Common Lisp process, giving FriCAS in-memory access to Julia's high-performance numerical ecosystem — including [Nemo](https://nemocas.github.io/Nemo.jl/stable/) / [FLINT](https://flintlib.org/) algebraic routines, certified [Arb](https://arblib.org/) interval ball arithmetic, and optional [Wolfram®](https://www.wolfram.com/) symbolic/numeric
capabilities using [MathLink](https://github.com/JuliaInterop/MathLink.jl) via the [WSTP](https://www.wolfram.com/wstp/) protocol.
Minor bridges to [Python®](https://www.python.org) and [R](https://www.r-project.org/) via [PythonCall](https://github.com/JuliaPy/PythonCall.jl) and [RCall](https://github.com/JuliaInterop/RCall.jl) are also supported natively through Julia.

> **Trademark Notice**  
> *Wolfram* is a registered trademark of Wolfram Research, Inc.  
> *Python* is a registered trademark of the Python Software Foundation.  
> *Julia* is a registered trademark of JuliaHub, Inc.

---

## Why Integrate Julia into FriCAS?

FriCAS excels at exact symbolic computation, but its Lisp runtime lacks direct access to optimised machine-level numerical libraries. Rather than reimplementing those routines, this work integrates the Julia runtime in-process, so that FriCAS can:

- ⚡ **Call BLAS/LAPACK at native speed** — direct in-memory sharing between Common Lisp and Julia, with no serialisation overhead.
- 📐 **Perform high-performance linear algebra** — matrix transcendental functions (exponential, logarithm, trigonometric), decompositions (SVD, QR, Eigenvalues) on `Float32`, `Float64`, `ComplexF32`, and `ComplexF64` matrices.
- 🎯 **Use certified interval arithmetic** — real and complex ball arithmetic with rigorous error bounding powered by Arb/FLINT (`NMRealBall`, `NMComplexBall`, `NMArbField`).
- 🔬 **Leverage Nemo / FLINT algebraic power** — fast univariate and multivariate polynomials, power series, Laurent series, Puiseux series, p-adic numbers, and finite fields.
- 🐺 **Access Wolfram® symbolic capabilities** — seamless execution of WS expressions (`WSExpression`), arbitrary-precision numbers, and special functions via WSTP / MathLink.
- 🐍 **Reach Python and R** — call arbitrary Python (`JLObjPy`) and R (`JLObjR`) packages directly within FriCAS algebra, through Julia's polyglot ecosystem.

---

## Architectural Overview

Instead of running separate programs and passing data through slow text files or network sockets, the Julia runtime is integrated directly into FriCAS's memory space. FriCAS's Spad algebra code communicates with Julia through two complementary interfaces, and through Julia gains access to three families of computational libraries.

```text
                     ┌─────────────────────────────────────────────────────────┐
                     │                    FriCAS                               │
                     │  • Axiomatic Strong Typing & Category Hierarchy (SPAD)  │
                     │  • Exact Symbolic Computation, Solvers & Integrators    │
                     │  • Common Lisp Host Engine (SBCL / CCL / ...)           │
                     └────────────┬───────────────────────────────┬────────────┘
                                  │                               │
        ┌─────────────────────────┴────────────────┐ ┌────────────┴─────────────────────────────┐
        │   Interface 1: Direct CL-FFI Access      │ │ Interface 2: JLObjectType Proxy System   │
        │ • Low-level C FFI via libjulia           │ │ • Live reference handles (JLObject)      │
        │ • Zero-copy scalar & array buffer sharing│ │ • Direct manipulation in Julia namespace │
        │ • Direct string command execution        │ │ • Dynamic method dispatch & mutability   │
        └─────────────────────────┬────────────────┘ └────────────┬─────────────────────────────┘
                                  │                               │
                                  └───────────────┬───────────────┘
                                                  ▼
    ┌───────────────────────────────────────────────────────────────────────────────────────────┐
    │                                  Embedded Julia Runtime                                   │
    │                                                                                           │
    │   ┌───────────────────────────┐ ┌───────────────────────────┐ ┌───────────────────────────┐   │
    │   │  Native Julia Subsystem   │ │   Nemo / FLINT Subsystem  │ │   WS MathLink Subsystem   │   │
    │   │         (JL*)             │ │         (NM*)             │ │         (WS*)             │   │
    │   ├───────────────────────────┤ ├───────────────────────────┤ ├───────────────────────────┤   │
    │   │ • BLAS / LAPACK Speed     │ │ • Certified Arb Balls     │ │ • WS Math                 │   │
    │   │ • Float32/64 & Complex    │ │ • Exact Polynomial Rings  │ │ • Arbitrary Precision (WS)│   │
    │   │ • Matrix Exponentials     │ │ • Laurent & Puiseux Series│ │ • Special Functions (WS)  │   │
    │   │ • Tabular JLDataFrames    │ │ • Finite Fields & p-adics │ │ • Native WSTP Protocol    │   │
    │   │ • Dynamic JLObject Bridge │ │ • FLINT fmpz/fmpq Speed   │ │ • Expression Translation  │   │
    │   └─────────────┬─────────────┘ └───────────────────────────┘ └─────────────┬─────────────┘   │
    └─────────────────┼───────────────────────────────────────────────────────────┼─────────────────┘
                      │                                                           │
                      ▼                                                           ▼
        ┌───────────────────────────┐                               ┌───────────────────────────┐
        │     Python® & R Bridges   │                               │         WS Engine         │
        │ • Python NumPy / SciPy    │                               │ • Mathematica Kernel      │
        │ • R Statistics & ggplot2  │                               │ • Wolfram Symbolic WSTP   │
        └───────────────────────────┘                               └───────────────────────────┘
```

---

## The Two Interfaces to Julia

The integration provides **two complementary interfaces** for FriCAS to communicate with the integrated Julia runtime:

### 1. Low-Level Direct CL-FFI Interface
- **Direct Value & Buffer Sharing**: Pure scalars (integers, machine floats, booleans) and numerical matrices/vectors are mapped directly between Common Lisp and Julia via `libjulia`'s C-API.
- **Zero-Copy Memory**: Numerical arrays and matrices share the same underlying memory pointers without data duplication, giving native C/Fortran execution speed.
- **Underlying Constructors**: Managed at the Lisp level by [JLUtilityFunctions](constructors/JLUtilityFunctions.md) and [JLObjDynamicLinker](constructors/JLObjDynamicLinker.md).

### 2. High-Level `JLObjectType` Object System (`JLObject`)
- **Direct Manipulation in the Julia Namespace**: Instead of converting Julia data into FriCAS types, FriCAS holds opaque reference handles (`JLObject`) to objects living directly in the **Julia namespace/memory space**.
- **Dynamic Method Dispatch & Mutation**: You can call arbitrary Julia functions on these objects (`jlApply`), inspect field names (`jlFieldNames`), mutate properties (`jlSetProperty!`), and evaluate code in local or global scopes (`jlEval`).
- **Data Structures & Polyglot Bridge**: Manipulate native Julia dictionaries ([JLObjDict](constructors/JLObjDict.md)), tabular data ([JLDataFrame](constructors/JLDataFrame.md)), anonymous functions ([JLObjAnonymousFunction](constructors/JLObjAnonymousFunction.md)), and seamlessly call **Python** ([JLObjPy](constructors/JLObjPy.md) via PythonCall) and **R** ([JLObjR](constructors/JLObjR.md) via RCall) without converting intermediate data back to FriCAS.
- **Underlying Categories & Domains**: Defined in [JLObjectType](constructors/JLObjectType.md), [JLObject](constructors/JLObject.md), and [jobject.spad](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jobject.spad).

---

## The Three Computational Subsystems

Through the integrated Julia runtime, FriCAS gains access to three families of constructors:

1. **`JL*` (Native Julia Subsystem)**: High-speed machine arithmetic, BLAS/LAPACK linear algebra, matrix exponentials, and special functions.
2. **`NM*` (Nemo / FLINT Subsystem)**: Exact number theory, fast polynomials, Laurent/Puiseux power series, and **certified Arb ball arithmetic** (where every calculation carries mathematically guaranteed error bounds).
3. **`WS*` (Wolfram / MathLink Subsystem)**: Direct connection to the Wolfram Engine / Mathematica via the WSTP protocol for symbolic manipulation and arbitrary-precision calculations.

---

## Quickstart & Examples

### 1. Direct Julia Evaluation
```fricas
-- Direct evaluation of Julia code in the REPL
)juliad rand(3, 3)

-- Evaluate Julia expressions and return a typed result in FriCAS
jlEvalString("sin(pi / 4)")@JLFloat64
```

### 2. High-Performance Linear Algebra
```fricas
-- Create a 64-bit float matrix backed by Julia
M : JLFloat64Matrix := urand01(2, 2)

-- Or construct with explicit elements
M : JLFloat64Matrix := matrix([[1.0::JLFloat64, 2.0::JLFloat64], [3.0::JLFloat64, 4.0::JLFloat64]])

-- Compute matrix exponential and SVD singular values
expM := exp(M)
svdVals := svdvals(M)
```

### 3. Certified Arb Ball Arithmetic
```fricas
-- Real ball with certified precision and error radius powered by Arb
x : NMRealBall := jnrb "3.1415926535897932384626433832795028841971693993751"
sin(x)

-- Construct a ball with explicit midpoint and radius
b : NMRealBall := jnball(jnrb "3.14159", jnrb "1.0e-5")
```

### 4. Wolfram WS Symbolic Manipulation
```fricas
-- Define a symbolic WS variable
w := jWSExpr 'w

-- Exact symbolic integration via the Wolfram Engine
integrate(1 / (1 + w^3), w)

-- Symbolic simplification with domain assumptions
simplify(sqrt(w^2), "w > 0")
```

### 5. Python & R Interoperability
```fricas
-- Execute Python functions via Julia PythonCall (JLObjPy)
jlPyApply("math", "sqrt", 2::JLObjPy)

-- Create a Python list object in Julia
jpy := jpython("[1, 2, 3, 4, 5]")

-- Execute R statistical functions via Julia RCall (JLObjR)
jlRApply("rnorm", 5::JLObjR)
```

---

## Constructor Reference

### 1. Native Julia Subsystem (`JL*`)

#### Categories
| Constructor | Abbreviation | Description |
|-------------|--------------|-------------|
| [JLType](constructors/JLType.md) | `JTYPE` | Root category for all Julia types |
| [JLMachineType](constructors/JLMachineType.md) | `JMTYPE` | Category for native Julia machine-level types |
| [JLRing](constructors/JLRing.md) | `JRING` | Category for Julia ring structures |
| [JLCommutativeRing](constructors/JLCommutativeRing.md) | `JCRING` | Category for Julia commutative rings |
| [JLMachineFloat](constructors/JLMachineFloat.md) | `JMFLOAT` | Category for IEEE floating-point types |
| [JLArbitraryPrecision](constructors/JLArbitraryPrecision.md) | `JLARB` | Category for arbitrary-precision Julia numbers |
| [JLMatrixCategory](constructors/JLMatrixCategory.md) | `JMATCAT` | Category for 2D matrices backed by Julia arrays |
| [JLVectorCategory](constructors/JLVectorCategory.md) | `JVECCAT` | Category for 1D vectors backed by Julia arrays |
| [JLObjectType](constructors/JLObjectType.md) | `JOBTYPE` | Category for arbitrary Julia object handles |
| [JLObjectAggregate](constructors/JLObjectAggregate.md) | `JOBAGG` | Category for aggregates of Julia objects |
| [JLObjectRing](constructors/JLObjectRing.md) | `JOBRING` | Category for ring structures over Julia objects |

#### Domains
| Constructor | Abbreviation | Description |
|-------------|--------------|-------------|
| [JLInt64](constructors/JLInt64.md) | `JI64` | 64-bit signed machine integer |
| [JLFloat32](constructors/JLFloat32.md) | `JF32` | 32-bit single precision floating-point number |
| [JLFloat64](constructors/JLFloat64.md) | `JF64` | 64-bit double precision floating-point number |
| [JLComplexF32](constructors/JLComplexF32.md) | `JCF32` | 32-bit complex floating-point number |
| [JLComplexF64](constructors/JLComplexF64.md) | `JCF64` | 64-bit complex floating-point number |
| [JLFloat](constructors/JLFloat.md) | `JFLOAT` | Parametric Julia floating-point domain |
| [JLComplexFloat](constructors/JLComplexFloat.md) | `JCFLOAT` | Parametric Julia complex float domain |
| [JLSymbol](constructors/JLSymbol.md) | `JSYM` | Native Julia Symbol handle |
| [JLFloat32Vector](constructors/JLFloat32Vector.md) | `JF32VEC` | 1D vector of Float32 elements |
| [JLFloat64Vector](constructors/JLFloat64Vector.md) | `JF64VEC` | 1D vector of Float64 elements |
| [JLInt64Vector](constructors/JLInt64Vector.md) | `JI64VEC` | 1D vector of Int64 elements |
| [JLComplexF32Vector](constructors/JLComplexF32Vector.md) | `JCF32VEC` | 1D vector of ComplexF32 elements |
| [JLComplexF64Vector](constructors/JLComplexF64Vector.md) | `JCF64VEC` | 1D vector of ComplexF64 elements |
| [JLFloat32Matrix](constructors/JLFloat32Matrix.md) | `JF32MAT` | 2D matrix of Float32 elements |
| [JLFloat64Matrix](constructors/JLFloat64Matrix.md) | `JF64MAT` | 2D matrix of Float64 elements |
| [JLF32SquareMatrix](constructors/JLF32SquareMatrix.md) | `JF32SMAT` | Square matrix of Float32 elements |
| [JLF64SquareMatrix](constructors/JLF64SquareMatrix.md) | `JF64SMAT` | Square matrix of Float64 elements |
| [JLComplexF32Matrix](constructors/JLComplexF32Matrix.md) | `JCF32MAT` | 2D matrix of ComplexF32 elements |
| [JLComplexF64Matrix](constructors/JLComplexF64Matrix.md) | `JCF64MAT` | 2D matrix of ComplexF64 elements |
| [JLComplexF32SquareMatrix](constructors/JLComplexF32SquareMatrix.md) | `JCF32SMA` | Square matrix of ComplexF32 elements |
| [JLComplexF64SquareMatrix](constructors/JLComplexF64SquareMatrix.md) | `JCF64SMA` | Square matrix of ComplexF64 elements |
| [JLObject](constructors/JLObject.md) | `JLOBJ` | Generic mutable Julia object proxy handle |
| [JLDataFrame](constructors/JLDataFrame.md) | `JLDFRAME` | Tabular data structure via DataFrames.jl |
| [JLObjDict](constructors/JLObjDict.md) | `JLOBDICT` | Julia dictionary wrapper |
| [JLObjTuple](constructors/JLObjTuple.md) | `JLOBTUP` | Julia tuple wrapper |
| [JLObjNamedTuple](constructors/JLObjNamedTuple.md) | `JLOBNTUP` | Julia named tuple wrapper |
| [JLObjPair](constructors/JLObjPair.md) | `JLOBPAIR` | Julia pair wrapper |
| [JLObjBigInt](constructors/JLObjBigInt.md) | `JLOBINT` | Julia arbitrary-precision BigInt wrapper |
| [JLObjRational](constructors/JLObjRational.md) | `JLOBRAT` | Julia rational wrapper |
| [JLObjFunction](constructors/JLObjFunction.md) | `JLOBFUNC` | Julia callable function object |
| [JLObjAnonymousFunction](constructors/JLObjAnonymousFunction.md) | `JLOBAFUNC` | Julia anonymous / lambda function handle |
| [JLObjPy](constructors/JLObjPy.md) | `JLOBPY` | Python object proxy via Julia PyCall |
| [JLObjR](constructors/JLObjR.md) | `JLOBR` | R object proxy via Julia RCall |
| [JLObjBool](constructors/JLObjBool.md) | `JOBBOOL` | Julia Bool immutable wrapper |
| [JLObjFloat32](constructors/JLObjFloat32.md) | `JOBF32` | Julia Float32 immutable object wrapper |
| [JLObjFloat64](constructors/JLObjFloat64.md) | `JOBF64` | Julia Float64 immutable object wrapper |
| [JLObjComplexF32](constructors/JLObjComplexF32.md) | `JOBCF32` | Julia ComplexF32 immutable object wrapper |
| [JLObjComplexF64](constructors/JLObjComplexF64.md) | `JOBCF64` | Julia ComplexF64 immutable object wrapper |
| [JLObjUInt64](constructors/JLObjUInt64.md) | `JOBUI64` | Julia UInt64 immutable object wrapper |
| [JLObjInt64](constructors/JLObjInt64.md) | `JOBI64` | Julia Int64 immutable object wrapper |
| [JLVector](constructors/JLVector.md) | `JVECTOR` | 1D vector of Julia object ring elements |
| [JLMatrix](constructors/JLMatrix.md) | `JMATRIX` | 2D matrix of Julia object ring elements |
| [JLObjDynamicLinker](constructors/JLObjDynamicLinker.md) | `JOBDLINK` | Dynamic library linkage helper |

#### Packages
| Constructor | Abbreviation | Description |
|-------------|--------------|-------------|
| [JLUtilityFunctions](constructors/JLUtilityFunctions.md) | `JUF` | Core Lisp-Julia memory bridge and evaluation routines |
| [JLStringUtilities](constructors/JLStringUtilities.md) | `JSTRU` | Fast string operations via Julia |
| [JLF32LinearAlgebra](constructors/JLF32LinearAlgebra.md) | `JF32LA` | LAPACK & BLAS linear algebra for Float32 |
| [JLF64LinearAlgebra](constructors/JLF64LinearAlgebra.md) | `JF64LA` | LAPACK & BLAS linear algebra for Float64 |
| [JLCF32LinearAlgebra](constructors/JLCF32LinearAlgebra.md) | `JCF32LA` | LAPACK & BLAS linear algebra for ComplexF32 |
| [JLCF64LinearAlgebra](constructors/JLCF64LinearAlgebra.md) | `JCF64LA` | LAPACK & BLAS linear algebra for ComplexF64 |
| [JLF64MatrixTranscendentalFunctions](constructors/JLF64MatrixTranscendentalFunctions.md) | `JF64MTF` | Matrix exp, log, sin, cos for Float64 |
| [JLF32MatrixTranscendentalFunctions](constructors/JLF32MatrixTranscendentalFunctions.md) | `JF32MTF` | Matrix exp, log, sin, cos for Float32 |
| [JLComplexF32MatrixTranscendentalFunctions](constructors/JLComplexF32MatrixTranscendentalFunctions.md) | `JCF32MTF` | Matrix transcendental functions for ComplexF32 |
| [JLComplexF64MatrixTranscendentalFunctions](constructors/JLComplexF64MatrixTranscendentalFunctions.md) | `JCF64MTF` | Matrix transcendental functions for ComplexF64 |
| [JLFloatSpecialFunctions](constructors/JLFloatSpecialFunctions.md) | `JFSF` | High-precision numerical special functions via Julia |
| [JLFloatSpecialFunctions2](constructors/JLFloatSpecialFunctions2.md) | `JFSF2` | Extended special functions bindings |
| [JLFloat32SpecialFunctions](constructors/JLFloat32SpecialFunctions.md) | `JF32SF` | Float32 special functions |
| [JLFloat32SpecialFunctions2](constructors/JLFloat32SpecialFunctions2.md) | `JF32SF2` | Single precision extended special functions |
| [JLFloat64SpecialFunctions](constructors/JLFloat64SpecialFunctions.md) | `JF64SF` | Float64 special functions |
| [JLFloat64SpecialFunctions2](constructors/JLFloat64SpecialFunctions2.md) | `JF64SF2` | Double precision extended special functions |
| [JLComplexFloatSpecialFunctions](constructors/JLComplexFloatSpecialFunctions.md) | `JCFSF` | Complex special functions |
| [JLFloat32VectorFunctions2](constructors/JLFloat32VectorFunctions2.md) | `JF32VEC2` | Utility functions for Float32 vectors |
| [JLFloat64VectorFunctions2](constructors/JLFloat64VectorFunctions2.md) | `JF64VEC2` | Utility functions for Float64 vectors |
| [JLVectorFunctions2](constructors/JLVectorFunctions2.md) | `JVECTOR2` | Utility functions for JLVector |
| [JLPlotFunctions](constructors/JLPlotFunctions.md) | `JPLOT` | 2D and 3D data visualization routines via Julia |
| [JLDrawFunctions](constructors/JLDrawFunctions.md) | `JDRAW` | Parametric curve and surface drawing routines |

---

### 2. Nemo / FLINT Subsystem (`NM*`)

#### Categories
| Constructor | Abbreviation | Description |
|-------------|--------------|-------------|
| [NMType](constructors/NMType.md) | `NMTYPE` | Root category for all Nemo / FLINT types |
| [NMRing](constructors/NMRing.md) | `NMRING` | Category for Nemo ring structures |
| [NMCommutativeRing](constructors/NMCommutativeRing.md) | `NMCRING` | Category for Nemo commutative rings |
| [NMField](constructors/NMField.md) | `NMFIELD` | Category for Nemo field structures |
| [NMPolynomialCategory](constructors/NMPolynomialCategory.md) | `NPC` | Category for polynomials over Nemo coefficients |
| [NMUnivariatePolynomialCategory](constructors/NMUnivariatePolynomialCategory.md) | `NUPC` | Category for univariate polynomials over Nemo |
| [NMPadicNumberCategory](constructors/NMPadicNumberCategory.md) | `NMPADICCAT` | Category for p-adic number representations |

#### Domains
| Constructor | Abbreviation | Description |
|-------------|--------------|-------------|
| [NMInteger](constructors/NMInteger.md) | `NMINT` | Nemo $\mathbb{Z}$ integers via FLINT `fmpz` |
| [NMFraction](constructors/NMFraction.md) | `NMFRAC` | Nemo $\mathbb{Q}$ rationals via FLINT `fmpq` |
| [NMRealField](constructors/NMRealField.md) | `NRF` | Real field backed by Arb real numbers |
| [NMComplexField](constructors/NMComplexField.md) | `NCF` | Complex field backed by Acb complex numbers |
| [NMRealBall](constructors/NMRealBall.md) | `NRB` | Real interval ball arithmetic with certified error radius |
| [NMComplexBall](constructors/NMComplexBall.md) | `NCB` | Complex interval ball arithmetic with certified error radius |
| [NMArbField](constructors/NMArbField.md) | `NARB` | Arbitrary-precision real Arb field |
| [NMAcbField](constructors/NMAcbField.md) | `NACB` | Arbitrary-precision complex Acb field |
| [NMAlgebraicNumber](constructors/NMAlgebraicNumber.md) | `NMAN` | Exact algebraic numbers $\overline{\mathbb{Q}}$ via Antic / FLINT |
| [NMExactCalciumField](constructors/NMExactCalciumField.md) | `NMECALCF` | Exact real and complex numbers via Calcium |
| [NMPrimeField](constructors/NMPrimeField.md) | `NMPF` | Finite field $\mathbb{F}_p$ with prime characteristic |
| [NMFiniteField](constructors/NMFiniteField.md) | `NMFF` | Finite field $\mathbb{F}_q$ via FLINT `fq_nmod` |
| [NMIntegerMod](constructors/NMIntegerMod.md) | `NMZMOD` | Modular integer ring $\mathbb{Z}/n\mathbb{Z}$ |
| [NMResidueRing](constructors/NMResidueRing.md) | `NMRESRING` | Quotient residue ring over Nemo elements |
| [NMResidueField](constructors/NMResidueField.md) | `NMRESFIELD` | Quotient residue field over Nemo elements |
| [NMUnivariatePolynomial](constructors/NMUnivariatePolynomial.md) | `NUP` | Fast univariate polynomials via FLINT |
| [NMMultivariatePolynomial](constructors/NMMultivariatePolynomial.md) | `NMP` | Fast multivariate polynomials via FLINT |
| [NMUnivariateLaurentPolynomial](constructors/NMUnivariateLaurentPolynomial.md) | `NULP` | Univariate Laurent polynomials |
| [NMMultivariateLaurentPolynomial](constructors/NMMultivariateLaurentPolynomial.md) | `NMLP` | Multivariate Laurent polynomials |
| [NMUnivariatePowerSeries](constructors/NMUnivariatePowerSeries.md) | `NUPS` | Truncated power series over Nemo rings |
| [NMUnivariateLaurentSeries](constructors/NMUnivariateLaurentSeries.md) | `NULS` | Laurent series expansions over Nemo rings |
| [NMUnivariatePuiseuxSeries](constructors/NMUnivariatePuiseuxSeries.md) | `NUPXS` | Fractional-exponent Puiseux series |
| [NMPadicInteger](constructors/NMPadicInteger.md) | `NMPADICINT` | $p$-adic integers $\mathbb{Z}_p$ via FLINT |
| [NMPadicRational](constructors/NMPadicRational.md) | `NMPADICRAT` | $p$-adic rationals $\mathbb{Q}_p$ via FLINT |
| [NMExtendedPadicInteger](constructors/NMExtendedPadicInteger.md) | `NMEXPADICINT` | Extended $p$-adic integers |
| [NMExtendedPadicRational](constructors/NMExtendedPadicRational.md) | `NMEXPADICRAT` | Extended $p$-adic rationals |
| [NMFactored](constructors/NMFactored.md) | `NMFACT` | Factored algebraic structures over Nemo |
| [NMPadic2](constructors/NMPadic2.md) | `NPADIC2` | 2-adic numbers via FLINT |
| [NMPolynomial](constructors/NMPolynomial.md) | `NPOLY` | Polynomial domain over Nemo coefficients |

---

### 3. Wolfram® / MathLink Subsystem (`WS*`)

#### Categories
| Constructor | Abbreviation | Description |
|-------------|--------------|-------------|
| [WSObject](constructors/WSObject.md) | `WSO` | **Root category** for all Wolfram WS object types |
| [WSNumber](constructors/WSNumber.md) | `WSNUM` | Category for Wolfram WS numeric objects |
| [WSRing](constructors/WSRing.md) | `WSRING` | Category for Wolfram WS algebraic ring elements |
| [WSAggregate](constructors/WSAggregate.md) | `WSAGG` | Category for Wolfram WS aggregate structures |

#### Domains
| Constructor | Abbreviation | Description |
|-------------|--------------|-------------|
| [WSExpression](constructors/WSExpression.md) | `WSEXPR` | Generic symbolic Wolfram WS expression |
| [WSSymbol](constructors/WSSymbol.md) | `WSSYM` | Wolfram WS `Symbol` handle |
| [WSString](constructors/WSString.md) | `WSSTR` | Wolfram WS `String` handle |
| [WSInteger](constructors/WSInteger.md) | `WSINT` | Arbitrary-precision Wolfram WS `Integer` |
| [WSRational](constructors/WSRational.md) | `WSRAT` | Exact Wolfram WS `Rational` |
| [WSReal](constructors/WSReal.md) | `WSREAL` | Machine-precision Wolfram WS `Real` |
| [WSAPReal](constructors/WSAPReal.md) | `WSAPREAL` | Arbitrary-precision Wolfram WS `Real` |
| [WSComplex](constructors/WSComplex.md) | `WSCMPLX` | Machine-precision Wolfram WS `Complex` |
| [WSAPComplex](constructors/WSAPComplex.md) | `WSAPCMPLX` | Arbitrary-precision Wolfram WS `Complex` |
| [WSGaussianInteger](constructors/WSGaussianInteger.md) | `WSGAUSS` | Wolfram WS Gaussian integer $\mathbb{Z}[i]$ |
| [WSList](constructors/WSList.md) | `WSLIST` | Wolfram WS `List` aggregate |
| [WSVector](constructors/WSVector.md) | `WSVEC` | Wolfram WS 1D vector aggregate |
| [WSMatrix](constructors/WSMatrix.md) | `WSMAT` | Wolfram WS 2D matrix aggregate |

#### Packages
| Constructor | Abbreviation | Description |
|-------------|--------------|-------------|
| [WSNumericalSpecialFunctions](constructors/WSNumericalSpecialFunctions.md) | `WSNSF` | High-precision numerical evaluation of special functions |
| [WSUtilityFunctions](constructors/WSUtilityFunctions.md) | `WSUF` | Utility routines for Wolfram MathLink kernel communication |

---

## Getting Help & Contributing

- **Repository**: [github.com/gvanuxem/jlfricas](https://github.com/gvanuxem/jlfricas)
- **FriCAS Official Project**: [fricas.github.io](https://fricas.github.io)
- **Julia Programming Language**: [julialang.org](https://julialang.org)
- **Nemo Computer Algebra**: [nemocas.github.io/Nemo.jl](https://nemocas.github.io/Nemo.jl/stable/)
