# WSInteger

> **Kind**: Domain &nbsp;|&nbsp; \[[Source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L263)\] &nbsp;|&nbsp; **Group**: WS — MathLink

## Description

Julia WS integers using the MathLink Julia package.

**WSInteger is a domain constructor.**  
**Abbreviation for WSInteger is WSINT**  
**125 names for 156 operations in this domain.**

## Signatures

```fricas
 0 : () -> %    1 : () -> %
 ?*? : (%, %) -> %    ?*? : (Integer, %) -> %
 ?*? : (NonNegativeInteger, %) -> %    ?*? : (PositiveInteger, %) -> %
 ?*? : (NMInteger, %) -> JLObject    ?+? : (%, %) -> %
 -? : % -> %    ?-? : (%, %) -> %
 ?<? : (%, %) -> Boolean    ?<=? : (%, %) -> Boolean
 ?=? : (%, %) -> Boolean    ?>? : (%, %) -> Boolean
 ?>=? : (%, %) -> Boolean    D : % -> %
 D : (%, NonNegativeInteger) -> %    ?^? : (%, NonNegativeInteger) -> %
 ?^? : (%, PositiveInteger) -> %    abs : % -> %
 addmod : (%, %, %) -> %    annihilate? : (%, %) -> Boolean
 antiCommutator : (%, %) -> %    associates? : (%, %) -> Boolean
 associator : (%, %, %) -> %    base : () -> %
 binomial : (%, %) -> %    bit? : (%, %) -> Boolean
 characteristic : () -> NonNegativeInteger    coerce : % -> %
 coerce : Integer -> %    coerce : % -> JLObject
 coerce : % -> OutputForm    coerce : % -> WSExpression
 coerce : % -> WSRational    commutator : (%, %) -> %
 convert : % -> DoubleFloat    convert : % -> Float
 convert : % -> InputForm    convert : % -> Integer
 convert : % -> Pattern(Integer)    convert : % -> String
 copy : % -> %    dec : % -> %
 differentiate : % -> %    differentiate : (%, NonNegativeInteger) -> %
 divide : (%, %) -> Record(quotient: %,remainder: %)    euclideanSize : % -> NonNegativeInteger
 even? : % -> Boolean    ?exquo? : (%, %) -> Union(%,"failed")
 factor : % -> Factored(%)    factor : % -> WSList(WSList(%))
 factorial : % -> %    fibonacci : % -> %
 gcd : (%, %) -> %    gcd : List(%) -> %
 hyperFactorial : % -> %    inc : % -> %
 init : () -> %    integer : % -> Integer
 invmod : (%, %) -> %    jWSInt : Integer -> %
 jWSInterpret : String -> %    jWSInterpret : (String, String) -> %
 jWSInterpret : (String, String, String) -> %    jlAbout : % -> Void
 jlApply : (String, %) -> JLObject    jlApply : (String, %, %) -> JLObject
 jlApply : (String, %, %, %) -> JLObject    jlApply : (String, %, %, %, %) -> JLObject
 jlApply : (String, %, %, %, %, %) -> JLObject    jlDisplay : % -> Void
 jlDump : JLObject -> Void    jlEval : % -> %
 jlFieldNames : % -> JLObject    jlGetField : (%, JLSymbol) -> JLObject
 jlGetJuliaIndex : % -> String    jlGetProperty : (%, JLSymbol) -> JLObject
 jlHead : % -> WSSymbol    jlId : % -> Integer
 jlObject : () -> String    jlPropertyNames : % -> JLObject
 jlRef : % -> SExpression    jlSymbolic : % -> String
 jlText : (%, String) -> List(String)    jlType : % -> Symbol
 jlimref : String -> %    jlref : String -> %
 latex : % -> String    lcm : (%, %) -> %
 lcm : List(%) -> %    leftPower : (%, NonNegativeInteger) -> %
 leftPower : (%, PositiveInteger) -> %    leftRecip : % -> Union(%,"failed")
 length : % -> %    mask : % -> %
 max : (%, %) -> %    min : (%, %) -> %
 missing? : % -> Boolean    mulmod : (%, %, %) -> %
 mutable? : % -> Boolean    negative? : % -> Boolean
 nextItem : % -> Union(%,"failed")    nothing? : % -> Boolean
 numeric : % -> WSExpression    numeric : (%, PositiveInteger) -> WSExpression
 numeric? : % -> Boolean    odd? : % -> Boolean
 one? : % -> Boolean    opposite? : (%, %) -> Boolean
 permutation : (%, %) -> %    plenaryPower : (%, PositiveInteger) -> %
 positive? : % -> Boolean    positiveRemainder : (%, %) -> %
 powmod : (%, %, %) -> %    prime? : % -> Boolean
 qFactorial : (%, %) -> %    ?quo? : (%, %) -> %
 random : % -> %    rational : % -> Fraction(Integer)
 rational? : % -> Boolean    rationalIfCan : % -> Union(Fraction(Integer),"failed")
 recip : % -> Union(%,"failed")    ?rem? : (%, %) -> %
 retract : % -> Integer    retractIfCan : % -> Union(Integer,"failed")
 rightPower : (%, NonNegativeInteger) -> %    rightPower : (%, PositiveInteger) -> %
 rightRecip : % -> Union(%,"failed")    sample : () -> %
 shift : (%, %) -> %    sign : % -> Integer
 sizeLess? : (%, %) -> Boolean    smaller? : (%, %) -> Boolean
 squareFree : % -> Factored(%)    squareFreePart : % -> %
 stirling1 : (%, %) -> %    stirling2 : (%, %) -> %
 string : % -> String    submod : (%, %, %) -> %
 subtractIfCan : (%, %) -> Union(%,"failed")    symmetricRemainder : (%, %) -> %
 toString : % -> String    unit? : % -> Boolean
 unitCanonical : % -> %    zero? : % -> Boolean
 ?~=? : (%, %) -> Boolean
 expressIdealMember : (List(%), %) -> Union(List(%),"failed")
 extendedEuclidean : (%, %) -> Record(coef1: %,coef2: %,generator: %)
 extendedEuclidean : (%, %, %) -> Union(Record(coef1: %,coef2: %),"failed")
 gcdPolynomial : (SparseUnivariatePolynomial(%), SparseUnivariatePolynomial(%)) -> SparseUnivariatePolynomial(%)
 lcmCoef : (%, %) -> Record(llcm_res: %,coeff1: %,coeff2: %)
 multiEuclidean : (List(%), %) -> Union(List(%),"failed")
 patternMatch : (%, Pattern(Integer), PatternMatchResult(Integer,%)) -> PatternMatchResult(Integer,%)
 principalIdeal : List(%) -> Record(coef: List(%),generator: %)
 unitNormal : % -> Record(unit: %,canonical: %,associate: %)
```

## Operations

### Operations Overview

| Operation | Summary |
| :--- | :--- |
| [`*`](#op-mul) | Operation defined in WSInteger |
| [`+`](#op-add) | Operation defined in WSInteger |
| [`0`](#0) | 0 returns the input form corresponding to 0. |
| [`1`](#1) | 1 returns the input form corresponding to 1. |
| [`<`](#op-lt) | Operation defined in WSInteger |
| [`<=`](#op-le) | Operation defined in WSInteger |
| [`>`](#op-gt) | Operation defined in WSInteger |
| [`>=`](#op-ge) | Operation defined in WSInteger |
| [`D`](#d) | D(x) returns the derivative of x. This function is a simple differential operator where no... |
| [`^`](#op-pow) | Operation defined in WSInteger |
| [`abs`](#abs) | abs(x) returns the absolute value of x. |
| [`addmod`](#addmod) | addmod(a, b, p), 0<=a, b<p>1, means a+b mod p. |
| [`annihilate?`](#annihilate) | annihilate?(x,y) holds when the product of x and y is 0. |
| [`antiCommutator`](#anticommutator) | antiCommutator(a, b) returns a*b+b*a. |
| [`associates?`](#associates) | associates?(x, y) tests whether x and y are associates, i.e. differ by a unit factor. |
| [`associator`](#associator) | associator(a, b, c) returns (a*b)*c-a*(b*c). |
| [`base`](#base) | base() returns the base for the operations of IntegerNumberSystem. |
| [`binomial`](#binomial) | binomial(n, r) returns the (n, r) binomial coefficient (often denoted in the literature by... |
| [`bit?`](#bit) | bit?(n, i) returns true if and only if i-th bit of n is a 1. |
| [`characteristic`](#characteristic) | characteristic() returns the characteristic of the ring. |
| [`coerce`](#coerce) | coerce(z) coerces z. |
| [`commutator`](#commutator) | commutator(a, b) returns a*b-b*a. |
| [`convert`](#convert) | convert(x) converts a DoubleFloat x to a Float. |
| [`copy`](#copy) | copy(n) gives a copy of n. |
| [`dec`](#dec) | dec(x) returns x - 1. |
| [`differentiate`](#differentiate) | differentiate(x) returns the derivative of x. This function is a simple differential opera... |
| [`divide`](#divide) | divide(x, y) divides x by y producing a record containing a quotient and remainder, where ... |
| [`euclideanSize`](#euclideansize) | euclideanSize(x) returns the euclidean size of the element x. Error: if x is zero. |
| [`even?`](#even) | even?(n) returns true if and only if n is even. |
| [`expressIdealMember`](#expressidealmember) | expressIdealMember([f1, ..., fn], h) returns a representation of h as a linear combination... |
| [`exquo`](#exquo) | exquo(f, g) creates the equivalent infix form. |
| [`extendedEuclidean`](#extendedeuclidean) | extendedEuclidean(x, y) returns a record rec where rec.coef1*x+rec.coef2*y = rec.generator... |
| [`factor`](#factor) | factor(n) returns the WS factorization of n. |
| [`factorial`](#factorial) | factorial(n) computes the factorial of n (denoted in the literature by n!) Note: n! = n (n... |
| [`fibonacci`](#fibonacci) | fibonacci(n) returns the Fibonacci number Fn. |
| [`gcd`](#gcd) | gcd(x, y) returns the greatest common divisor of x and y. |
| [`gcdPolynomial`](#gcdpolynomial) | gcdPolynomial(p, q) returns the greatest common divisor (gcd) of univariate polynomials ov... |
| [`hyperFactorial`](#hyperfactorial) | hyperFactorial(n) computes the hyperfactorial of n. |
| [`inc`](#inc) | inc(x) returns x + 1. |
| [`init`](#init) | init() chooses an initial object for stepping. |
| [`integer`](#integer) | integer(i) returns i as a FriCAS Integer. |
| [`invmod`](#invmod) | invmod(a, b), 0<=a<b>1, (a, b)=1 means 1/a mod b. |
| [`jWSInt`](#jwsint) | jWSInt(int) constructs int as a WSInteger. |
| [`jWSInterpret`](#jwsinterpret) | jWSInterpret(form) interprets form. |
| [`jlAbout`](#jlabout) | jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia.... |
| [`jlApply`](#jlapply) | jlApply(func, obj) applies the function func with obj as parameter and returns the result ... |
| [`jlDisplay`](#jldisplay) | jlDisplay(v) pretty prints v (à la Julia). |
| [`jlDump`](#jldump) | jlDump(obj) dumps (shows) the Julia object (internal structure with type). |
| [`jlEval`](#jleval) | jlEval(expr) evaluates expr using the WS Transport Protocol. |
| [`jlFieldNames`](#jlfieldnames) | jlFieldNames(obj) returns the field names of obj. |
| [`jlGetField`](#jlgetfield) | jlGetField(obj, sym) returns the property/element sym of obj. |
| [`jlGetJuliaIndex`](#jlgetjuliaindex) | jlGetJuliaIndex(obj) returns the Julia indexed dictionary index referencing the object obj... |
| [`jlGetProperty`](#jlgetproperty) | jlGetProperty(obj, sym) returns the property/element sym of obj. |
| [`jlHead`](#jlhead) | jlHead(expr) returns the Head type of expr. |
| [`jlId`](#jlid) | jlId(obj) returns the Julia indexed dictionary index referencing the object obj. |
| [`jlObject`](#jlobject) | jlObject() returns the internal Julia name of the Julia module used. For example: ... |
| [`jlPropertyNames`](#jlpropertynames) | jlPropertyNames(obj) returns the property/element names of obj. |
| [`jlRef`](#jlref) | jlRef(obj) returns the internal Lisp representation of the Julia object obj. |
| [`jlSymbolic`](#jlsymbolic) | jlSymbolic(expr) returns the symbolic 'FullForm'. |
| [`jlText`](#jltext) | jlText(obj, mimest) returns the text representation of obj as a list of String lines with ... |
| [`jlType`](#jltype) | jlType(obj) returns the Julia type of obj. |
| [`jlimref`](#jlimref) | jlimref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia im... |
| [`jlref`](#jlref) | jlRef(obj) returns the internal Lisp representation of the Julia object obj. |
| [`latex`](#latex) | latex(s) returns a LaTeX-printable output representation of s. |
| [`lcm`](#lcm) | lcm(x, y) returns the least common multiple of x and y. |
| [`lcmCoef`](#lcmcoef) | lcmCoef(c1, c2) computes (llcm_res, coeff1, coeff2) such that llcm_res is least left commo... |
| [`leftPower`](#leftpower) | leftPower(a, n) returns the n-th left power of a, i.e. leftPower(a, n) := a * leftPower(a,... |
| [`leftRecip`](#leftrecip) | leftRecip(a) returns an element, which is a left inverse of a, or "failed" if such an elem... |
| [`length`](#length) | length(a) length of a in digits. |
| [`mask`](#mask) | mask(n) returns 2^n-1 (an n bit mask). |
| [`max`](#max) | max(x,y) returns the maximum of x and y relative to "<". |
| [`min`](#min) | min(x,y) returns the minimum of x and y relative to "<". |
| [`missing?`](#missing) | missing?(obj) checks whether or not obj is missing. |
| [`mulmod`](#mulmod) | mulmod(a, b, p), 0<=a, b<p>1, means a*b mod p. |
| [`multiEuclidean`](#multieuclidean) | multiEuclidean([f1, ..., fn], z) returns a list of coefficients [a1, ..., an] such that  z... |
| [`mutable?`](#mutable) | mutable?(obj) checks whether or not obj is mutable. |
| [`negative?`](#negative) | negative?(x) tests whether x is strictly less than 0. |
| [`nextItem`](#nextitem) | nextItem(x) returns the next item, or "failed" if domain is exhausted. |
| [`nothing?`](#nothing) | nothing?(obj) checks whether or not obj is nothing. |
| [`numeric`](#numeric) | numeric(expr) returns numerical expr if possible. |
| [`numeric?`](#numeric) | numeric?(x) checks whether or not x is or would yield a number. |
| [`odd?`](#odd) | odd?(n) returns true if and only if n is odd. |
| [`one?`](#one) | one?(a) tests whether a is the unit 1. |
| [`opposite?`](#opposite) | opposite?(x,y) holds if the sum of x and y is 0. |
| [`patternMatch`](#patternmatch) | patternMatch(expr, pat, res) matches the pattern pat to the expression expr. res contains ... |
| [`permutation`](#permutation) | permutation(n, m) returns the number of permutations of n objects taken m at a time. Note:... |
| [`plenaryPower`](#plenarypower) | plenaryPower(a, n) is recursively defined to be plenaryPower(a, n-1)*plenaryPower(a, n-1) ... |
| [`positive?`](#positive) | positive?(x) tests whether x is strictly greater than 0. |
| [`positiveRemainder`](#positiveremainder) | positiveRemainder(a, b) (where b > 1) yields r where 0 <= r < b and a = q*b + r. |
| [`powmod`](#powmod) | powmod(a, b, p), 0<=a, b<p>1, means a^b mod p. |
| [`prime?`](#prime) | prime?(x) tests if x can never be written as the product of two non-units of the ring, i.e... |
| [`principalIdeal`](#principalideal) | principalIdeal([f1, ..., fn]) returns a record whose generator component is a generator of... |
| [`qFactorial`](#qfactorial) | qFactorial(x,q) returns the q-analog of factorial of x. |
| [`quo`](#quo) | x quo y is the same as divide(x, y).quotient. See divide from EuclideanDomain. |
| [`random`](#random) | random(n) returns a random integer from 0 to n-1. |
| [`rational`](#rational) | rational(n) creates a rational number (see Fraction Integer). |
| [`rational?`](#rational) | rational?(n) tests if n is a rational number (see Fraction Integer). |
| [`rationalIfCan`](#rationalifcan) | rationalIfCan(n) creates a rational number, or returns "failed" if this is not possible. |
| [`recip`](#recip) | recip(a) returns an element, which is both a left and a right inverse of a, or "failed" if... |
| [`rem`](#rem) | x rem y is the same as divide(x, y).remainder. See divide from EuclideanDomain. |
| [`retract`](#retract) | retract(a) transforms a into an element of S if possible. Error: if a cannot be made into ... |
| [`retractIfCan`](#retractifcan) | retractIfCan(a) transforms a into an element of S if possible. Returns "failed" if a canno... |
| [`rightPower`](#rightpower) | rightPower(a, n) returns the n-th right power of a, i.e. rightPower(a, n) := rightPower(a,... |
| [`rightRecip`](#rightrecip) | rightRecip(a) returns an element, which is a right inverse of a, or "failed" if such an el... |
| [`sample`](#sample) | sample yields a value of type % |
| [`shift`](#shift) | shift(a, i) shift a by i digits. |
| [`sign`](#sign) | sign(x) is 1 if x is positive, -1 if x is negative, 0 if x equals 0. |
| [`sizeLess?`](#sizeless) | sizeLess?(x, y) tests whether x is strictly smaller than y with respect to the euclideanSi... |
| [`smaller?`](#smaller) | smaller?(x, y) is a strict ordering on depending on representatives of elements of the set... |
| [`squareFree`](#squarefree) | squareFree(x) returns the square-free factorization of x i.e. such that the factors are pa... |
| [`squareFreePart`](#squarefreepart) | squareFreePart(x) returns a product of prime factors of x each taken with multiplicity one... |
| [`stirling1`](#stirling1) | stirling1(n,m) returns the Stirling number of the first kind from n and m. For example: \e... |
| [`stirling2`](#stirling2) | stirling2(n,m) returns the Stirling number of the second kind from n and m. For example: \... |
| [`string`](#string) | string(jt) returns the string representation of jt. |
| [`submod`](#submod) | submod(a, b, p), 0<=a, b<p>1, means a-b mod p. |
| [`subtractIfCan`](#subtractifcan) | subtractIfCan(x, y) returns an element z such that z+y=x or "failed" if no such element ex... |
| [`symmetricRemainder`](#symmetricremainder) | symmetricRemainder(a, b) (where b > 1) yields r where -b/2 < r <= b/2. |
| [`toString`](#tostring) | toString(obj) returns the string representation of obj. |
| [`unit?`](#unit) | unit?(x) tests whether x is a unit, i.e. is invertible. |
| [`unitCanonical`](#unitcanonical) | unitCanonical(x) returns unitNormal(x).canonical. |
| [`unitNormal`](#unitnormal) | unitNormal(x) tries to choose a canonical element from the associate class of x. The attri... |
| [`zero?`](#zero) | zero?(x) tests if x is equal to 0. |
| [`~=`](#op-neq) | Operation defined in WSInteger |

### Detailed Documentation

#### `*` <a id="op-mul"></a>

##### `*` : `(%, %) -> %`

Operation defined in WSInteger.

##### `*` : `(Integer, %) -> %`

Operation defined in WSInteger.

##### `*` : `(NonNegativeInteger, %) -> %`

Operation defined in WSInteger.

##### `*` : `(PositiveInteger, %) -> %`

Operation defined in WSInteger.

##### `*` : `(NMInteger, %) -> JLObject`

Operation defined in WSInteger.

#### `+` <a id="op-add"></a>

Operation defined in WSInteger.

- **Signature**: `(%, %) -> %`

#### `0` <a id="0"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L322)\]

0 returns the input form corresponding to 0.

- **Signature**: `() -> %`
- **From**: `InputForm`

#### `1` <a id="1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L323)\]

1 returns the input form corresponding to 1.

- **Signature**: `() -> %`
- **From**: `InputForm`

#### `<` <a id="op-lt"></a>

Operation defined in WSInteger.

- **Signature**: `(%, %) -> Boolean`

#### `<=` <a id="op-le"></a>

Operation defined in WSInteger.

- **Signature**: `(%, %) -> Boolean`

#### `>` <a id="op-gt"></a>

Operation defined in WSInteger.

- **Signature**: `(%, %) -> Boolean`

#### `>=` <a id="op-ge"></a>

Operation defined in WSInteger.

- **Signature**: `(%, %) -> Boolean`

#### `D` <a id="d"></a>

##### `D` : `% -> %`

D(x) returns the derivative of x. This function is a simple differential operator where no variable needs to be specifie d.

- **From**: `DifferentialRing`

##### `D` : `(%, NonNegativeInteger) -> %`

D(x, n) returns the n-th derivative of x.

- **From**: `DifferentialRing`

#### `^` <a id="op-pow"></a>

##### `^` : `(%, NonNegativeInteger) -> %`

Operation defined in WSInteger.

##### `^` : `(%, PositiveInteger) -> %`

Operation defined in WSInteger.

#### `abs` <a id="abs"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L639)\]

abs(x) returns the absolute value of x.

- **Signature**: `% -> %`
- **From**: `OrderedAbelianSemiGroup`

#### `addmod` <a id="addmod"></a>

addmod(a, b, p), 0<=a, b<p>1, means a+b mod p.

- **Signature**: `(%, %, %) -> %`
- **From**: `IntegerNumberSystem`

#### `annihilate?` <a id="annihilate"></a>

annihilate?(x,y) holds when the product of x and y is 0.

- **Signature**: `(%, %) -> Boolean`
- **From**: `Rng`

#### `antiCommutator` <a id="anticommutator"></a>

antiCommutator(a, b) returns a*b+b*a.

- **Signature**: `(%, %) -> %`
- **From**: `NonAssociativeSemiRng`

#### `associates?` <a id="associates"></a>

associates?(x, y) tests whether x and y are associates, i.e. differ by a unit factor.

- **Signature**: `(%, %) -> Boolean`
- **From**: `EntireRing`

#### `associator` <a id="associator"></a>

associator(a, b, c) returns (a*b)*c-a*(b*c).

- **Signature**: `(%, %, %) -> %`
- **From**: `NonAssociativeRng`

#### `base` <a id="base"></a>

base() returns the base for the operations of IntegerNumberSystem.

- **Signature**: `() -> %`
- **From**: `IntegerNumberSystem`

#### `binomial` <a id="binomial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L361)\]

binomial(n, r) returns the (n, r) binomial coefficient (often denoted in the literature by C(n, r)). Note: C(n, r) = n!/ (r!(n-r)!) where n >= r >= 0.

- **Signature**: `(%, %) -> %`
- **From**: `CombinatorialFunctionCategory`

#### `bit?` <a id="bit"></a>

bit?(n, i) returns true if and only if i-th bit of n is a 1.

- **Signature**: `(%, %) -> Boolean`
- **From**: `IntegerNumberSystem`

#### `characteristic` <a id="characteristic"></a>

characteristic() returns the characteristic of the ring.

- **Signature**: `() -> NonNegativeInteger`
- **From**: `NonAssociativeRing`

#### `coerce` <a id="coerce"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L294)\]

##### `coerce` : `Integer  -> %`

coerce(z) coerces z.

##### `coerce` : `% -> WSRational`

coerce(z) coerces z.

##### `coerce` : `R -> %`

coerce(r) maps the ring element r to a member of the algebra.

- **From**: `Algebra(R)`

##### `coerce` : `S -> %`

coerce(a) transforms a into an element of %.

- **From**: `CoercibleFrom(S)`

##### `coerce` : `Integer -> %`

coerce(n) coerces the integer n to an element of the ring.

- **From**: `NonAssociativeRing`

##### `coerce` : `% -> S`

coerce(a) transforms a into an element of S.

- **From**: `CoercibleTo(S)`

##### `coerce` : `% -> JLObject`

coerce(obj) coerces obj to JLObject. Convenience function.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `coerce` : `% -> WSExpression`

coerce(expr) returns the WSExpression representation of expr.

- **From**: [`WSObject`](WSObject.md)

#### `commutator` <a id="commutator"></a>

commutator(a, b) returns a*b-b*a.

- **Signature**: `(%, %) -> %`
- **From**: `NonAssociativeRng`

#### `convert` <a id="convert"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L377)\]

##### `convert` : `DoubleFloat -> %`

convert(x) converts a DoubleFloat x to a Float.

- **From**: `Float`

##### `convert` : `List(%) -> %`

convert([a1, ..., an]) returns the pattern [a1, ..., an].

- **From**: `Pattern(R)`

##### `convert` : `SExpression -> %`

convert(s) makes s into an input form.

- **From**: `InputForm`

##### `convert` : `% -> S`

convert(a) transforms a into an element of S.

- **From**: `ConvertibleTo(S)`

#### `copy` <a id="copy"></a>

copy(n) gives a copy of n.

- **Signature**: `% -> %`
- **From**: `IntegerNumberSystem`

#### `dec` <a id="dec"></a>

dec(x) returns x - 1.

- **Signature**: `% -> %`
- **From**: `IntegerNumberSystem`

#### `differentiate` <a id="differentiate"></a>

##### `differentiate` : `% -> %`

differentiate(x) returns the derivative of x. This function is a simple differential operator where no variable needs to be specified.

- **From**: `DifferentialRing`

##### `differentiate` : `(%, NonNegativeInteger) -> %`

differentiate(x, n) returns the n-th derivative of x.

- **From**: `DifferentialRing`

#### `divide` <a id="divide"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L349)\]

divide(x, y) divides x by y producing a record containing a quotient and remainder, where the remainder is smaller (see sizeLess? from EuclideanDomain) than the divisor y.

- **Signature**: `(%, %) -> Record(quotient: %,remainder: %)`
- **From**: `EuclideanDomain`

#### `euclideanSize` <a id="euclideansize"></a>

euclideanSize(x) returns the euclidean size of the element x. Error: if x is zero.

- **Signature**: `% -> NonNegativeInteger`
- **From**: `EuclideanDomain`

#### `even?` <a id="even"></a>

even?(n) returns true if and only if n is even.

- **Signature**: `% -> Boolean`
- **From**: `IntegerNumberSystem`

#### `expressIdealMember` <a id="expressidealmember"></a>

expressIdealMember([f1, ..., fn], h) returns a representation of h as a linear combination of the fi or "failed" if h is not in the ideal generated by the fi.

- **Signature**: `(List(%), %) -> Union(List(%),"failed")`
- **From**: `PrincipalIdealDomain`

#### `exquo` <a id="exquo"></a>

##### `exquo` : `(%, %) -> %`

exquo(f, g) creates the equivalent infix form.

- **From**: `OutputForm`

##### `exquo` : `(%, %) -> Union(%,"failed")`

exquo(a, b) either returns an element c such that c*b=a or "failed" if no such element can be found.

- **From**: `EntireRing`

#### `extendedEuclidean` <a id="extendedeuclidean"></a>

##### `extendedEuclidean` : `(%, %) -> Record(coef1: %,coef2: %,generator: %)`

extendedEuclidean(x, y) returns a record rec where rec.coef1*x+rec.coef2*y = rec.generator and rec.generator is a gcd of x and y. The gcd is unique only up to associates if canonicalUnitNormal is not asserted. principalIdeal provides a vers ion of this operation which accepts an arbitrary length list of arguments.

- **From**: `EuclideanDomain`

##### `extendedEuclidean` : `(%, %, %) -> Union(Record(coef1: %,coef2: %),"failed")`

extendedEuclidean(x, y, z) either returns a record rec where rec.coef1*x+rec.coef2*y=z or returns "failed" if z cannot b e expressed as a linear combination of x and y.

- **From**: `EuclideanDomain`

#### `factor` <a id="factor"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L292)\]

##### `factor` : `% -> WSList WSList(%)`

factor(n) returns the WS factorization of n.

##### `factor` : `% -> Factored(%)`

factor(x) returns the factorization of x into irreducibles.

- **From**: `UniqueFactorizationDomain`

#### `factorial` <a id="factorial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L360)\]

factorial(n) computes the factorial of n (denoted in the literature by n!) Note: n! = n (n-1)! when n > 0; also, 0! = 1.

- **Signature**: `% -> %`
- **From**: `CombinatorialFunctionCategory`

#### `fibonacci` <a id="fibonacci"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L282)\]

fibonacci(n) returns the Fibonacci number Fn.

- **Signature**: `% -> %`

#### `gcd` <a id="gcd"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L354)\]

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

#### `hyperFactorial` <a id="hyperfactorial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L278)\]

hyperFactorial(n) computes the hyperfactorial of n.

- **Signature**: `% -> %`

#### `inc` <a id="inc"></a>

inc(x) returns x + 1.

- **Signature**: `% -> %`
- **From**: `IntegerNumberSystem`

#### `init` <a id="init"></a>

init() chooses an initial object for stepping.

- **Signature**: `() -> %`
- **From**: `StepThrough`

#### `integer` <a id="integer"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L276)\]

integer(i) returns i as a FriCAS Integer.

- **Signature**: `% -> Integer`

#### `invmod` <a id="invmod"></a>

invmod(a, b), 0<=a<b>1, (a, b)=1 means 1/a mod b.

- **Signature**: `(%, %) -> %`
- **From**: `IntegerNumberSystem`

#### `jWSInt` <a id="jwsint"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L298)\]

jWSInt(int) constructs int as a WSInteger.

- **Signature**: `Integer -> %`

#### `jWSInterpret` <a id="jwsinterpret"></a>

##### `jWSInterpret` : `String -> %`

jWSInterpret(form) interprets form.

- **From**: [`WSObject`](WSObject.md)

##### `jWSInterpret` : `(String, String) -> %`

jWSInterpret(Type|Form, Expr) interprets Expr to be of type Type or Form using the WS Language. For exampl e: 

**Examples**:
```fricas
jWSInterpret("Number","3.2")@WSREAL
jWSInterpret("Real","3.2")@WSREAL
jWSInterpret("L ocation","Lille")$WSEXPR See jWSExpr "$InterpreterTypes"
```

- **From**: [`WSObject`](WSObject.md)

##### `jWSInterpret` : `(String, String, String) -> %`

jWSInterpret(form1,form2,form3) interprets forms.

- **From**: [`WSObject`](WSObject.md)

#### `jlAbout` <a id="jlabout"></a>

jlAbout(obj) displays Julia information about obj if you have About.jl installed in Julia. In the Julia interpreter, ent er in the package management mode with ']', and issue: pkg> add "https://github.com/tecosaur/About.jl"

- **Signature**: `% -> Void`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlApply` <a id="jlapply"></a>

##### `jlApply` : `(String, %) -> JLObject`

jlApply(func, obj) applies the function func with obj as parameter and returns the result as a FriCAS JLObject. For exam ple, using JLMatrix(JLObjFloat64): 

**Examples**:
```fricas
M:=nrand(4,4);
jlApply("svd", M::JLMatrix(JLObjFloat64)).S shou ld be "equivalent" to svdvals(M).
```

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlApply` : `(String, %, %) -> JLObject`

jlApply(func, obj1, obj2) applies the function func with obj1 and obj2 as parameters and returns the result as a FriCAS JLObject. For example (equivalent to map(cos, v)): 

**Examples**:
```fricas
v:=urand01(5)$JLVector(JLFloat)
jlApply("map", " cos", coerce v)
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

jlGetJuliaIndex(obj) returns the Julia indexed dictionary index referencing the object obj. Convenience function for use in the interpreter.

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

#### `jlObject` <a id="jlobject"></a>

jlObject() returns the internal Julia name of the Julia module used. For example: 

**Example**:
```fricas
jlObject()$NMUnivariatePolyn omial(NINT,'x)
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

jlText(obj, mimest) returns the text representation of obj as a list of String lines with mime subtype mimest, for examp le "plain" for "text/plain" or "html" for "text/html" if is implemented at Julia level. Use internally the 'show' method . For example: 

**Examples**:
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

#### `jlimref` <a id="jlimref"></a>

jlimref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia immutable object wrapped in a Ju lia RefValueAny

- **Signature**: `String -> %`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `jlref` <a id="jlref"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L307)\]

##### `jlref` : `% -> SExpression`

jlRef(obj) returns the internal Lisp representation of the Julia object obj.

- **From**: [`JLObjectType`](JLObjectType.md)

##### `jlref` : `String -> %`

jlref(str) evaluates the Julia command str and returns the corresponding FriCAS Julia mutable object.

- **From**: [`JLObjectType`](JLObjectType.md)

#### `latex` <a id="latex"></a>

latex(s) returns a LaTeX-printable output representation of s.

- **Signature**: `% -> String`
- **From**: `SetCategory`

#### `lcm` <a id="lcm"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L355)\]

##### `lcm` : `(%, %) -> %`

lcm(x, y) returns the least common multiple of x and y.

- **From**: `GcdDomain`

##### `lcm` : `List(%) -> %`

lcm(l) returns the least common multiple of the elements of the list l.

- **From**: `GcdDomain`

#### `lcmCoef` <a id="lcmcoef"></a>

lcmCoef(c1, c2) computes (llcm_res, coeff1, coeff2) such that llcm_res is least left common multiple of c1 and c2 and ll cm_res = coeff1*c1 = coeff2*c2

- **Signature**: `(%, %) -> Record(llcm_res: %,coeff1: %,coeff2: %)`
- **From**: `LeftOreRing`

#### `leftPower` <a id="leftpower"></a>

##### `leftPower` : `(%, NonNegativeInteger) -> %`

leftPower(a, n) returns the n-th left power of a, i.e. leftPower(a, n) := a * leftPower(a, n-1) and leftPower(a, 0) := 1 .

- **From**: `MagmaWithUnit`

##### `leftPower` : `(%, PositiveInteger) -> %`

leftPower(a, n) returns the n-th left power of a, i.e. leftPower(a, n) := a * leftPower(a, n-1) and leftPower(a, 1) := a .

- **From**: `Magma`

#### `leftRecip` <a id="leftrecip"></a>

leftRecip(a) returns an element, which is a left inverse of a, or "failed" if such an element doesn't exist or cannot be determined (see unitsKnown).

- **Signature**: `% -> Union(%,"failed")`
- **From**: `MagmaWithUnit`

#### `length` <a id="length"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L357)\]

length(a) length of a in digits.

- **Signature**: `% -> %`
- **From**: `IntegerNumberSystem`

#### `mask` <a id="mask"></a>

mask(n) returns 2^n-1 (an n bit mask).

- **Signature**: `% -> %`
- **From**: `IntegerNumberSystem`

#### `max` <a id="max"></a>

max(x,y) returns the maximum of x and y relative to "<".

- **Signature**: `(%, %) -> %`
- **From**: `OrderedSet`

#### `min` <a id="min"></a>

min(x,y) returns the minimum of x and y relative to "<".

- **Signature**: `(%, %) -> %`
- **From**: `OrderedSet`

#### `missing?` <a id="missing"></a>

missing?(obj) checks whether or not obj is missing.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `mulmod` <a id="mulmod"></a>

mulmod(a, b, p), 0<=a, b<p>1, means a*b mod p.

- **Signature**: `(%, %, %) -> %`
- **From**: `IntegerNumberSystem`

#### `multiEuclidean` <a id="multieuclidean"></a>

multiEuclidean([f1, ..., fn], z) returns a list of coefficients [a1, ..., an] such that  z / prod fi = sum aj/fj. If no such list of coefficients exists, "failed" is returned.

- **Signature**: `(List(%), %) -> Union(List(%),"failed")`
- **From**: `EuclideanDomain`

#### `mutable?` <a id="mutable"></a>

mutable?(obj) checks whether or not obj is mutable.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `negative?` <a id="negative"></a>

negative?(x) tests whether x is strictly less than 0.

- **Signature**: `% -> Boolean`
- **From**: `OrderedSet`

#### `nextItem` <a id="nextitem"></a>

nextItem(x) returns the next item, or "failed" if domain is exhausted.

- **Signature**: `% -> Union(%,"failed")`
- **From**: `StepThrough`

#### `nothing?` <a id="nothing"></a>

nothing?(obj) checks whether or not obj is nothing.

- **Signature**: `% -> Boolean`
- **From**: [`JLObjectType`](JLObjectType.md)

#### `numeric` <a id="numeric"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L482)\]

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

#### `odd?` <a id="odd"></a>

odd?(n) returns true if and only if n is odd.

- **Signature**: `% -> Boolean`
- **From**: `IntegerNumberSystem`

#### `one?` <a id="one"></a>

one?(a) tests whether a is the unit 1.

- **Signature**: `% -> Boolean`
- **From**: `MagmaWithUnit`

#### `opposite?` <a id="opposite"></a>

opposite?(x,y) holds if the sum of x and y is 0.

- **Signature**: `(%, %) -> Boolean`
- **From**: `AbelianMonoid`

#### `patternMatch` <a id="patternmatch"></a>

patternMatch(expr, pat, res) matches the pattern pat to the expression expr. res contains the variables of pat which are already matched and their matches (necessary for recursion). Initially, res is just the result of new which is an empty list of matches.

- **Signature**: `(%, Pattern(Integer), PatternMatchResult(Integer,%)) -> PatternMatchResult(Integer,%)`
- **From**: `PatternMatchable(S)`

#### `permutation` <a id="permutation"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L365)\]

permutation(n, m) returns the number of permutations of n objects taken m at a time. Note: permutation(n, m) = n!/(n-m)! .

- **Signature**: `(%, %) -> %`
- **From**: `CombinatorialFunctionCategory`

#### `plenaryPower` <a id="plenarypower"></a>

plenaryPower(a, n) is recursively defined to be plenaryPower(a, n-1)*plenaryPower(a, n-1) for n>1 and a for n=1.

- **Signature**: `(%, PositiveInteger) -> %`
- **From**: `NonAssociativeAlgebra(R)`

#### `positive?` <a id="positive"></a>

positive?(x) tests whether x is strictly greater than 0.

- **Signature**: `% -> Boolean`
- **From**: `OrderedSet`

#### `positiveRemainder` <a id="positiveremainder"></a>

positiveRemainder(a, b) (where b > 1) yields r where 0 <= r < b and a = q*b + r.

- **Signature**: `(%, %) -> %`
- **From**: `IntegerNumberSystem`

#### `powmod` <a id="powmod"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L348)\]

powmod(a, b, p), 0<=a, b<p>1, means a^b mod p.

- **Signature**: `(%, %, %) -> %`
- **From**: `IntegerNumberSystem`

#### `prime?` <a id="prime"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L373)\]

prime?(x) tests if x can never be written as the product of two non-units of the ring, i.e. x is an irreducible element.

- **Signature**: `% -> Boolean`
- **From**: `UniqueFactorizationDomain`

#### `principalIdeal` <a id="principalideal"></a>

principalIdeal([f1, ..., fn]) returns a record whose generator component is a generator of the ideal generated by [f1, . .., fn] whose coef component satisfies generator = sum (input.i * coef.i)

- **Signature**: `List(%) -> Record(coef: List(%),generator: %)`
- **From**: `PrincipalIdealDomain`

#### `qFactorial` <a id="qfactorial"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L280)\]

qFactorial(x,q) returns the q-analog of factorial of x.

- **Signature**: `(%, %) -> %`

#### `quo` <a id="quo"></a>

x quo y is the same as divide(x, y).quotient. See divide from EuclideanDomain.

- **Signature**: `(%, %) -> %`
- **From**: `EuclideanDomain`

#### `random` <a id="random"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L375)\]

random(n) returns a random integer from 0 to n-1.

- **Signature**: `% -> %`
- **From**: `Integer`

#### `rational` <a id="rational"></a>

rational(n) creates a rational number (see Fraction Integer).

- **Signature**: `% -> Fraction(Integer)`
- **From**: `IntegerNumberSystem`

#### `rational?` <a id="rational"></a>

rational?(n) tests if n is a rational number (see Fraction Integer).

- **Signature**: `% -> Boolean`
- **From**: `IntegerNumberSystem`

#### `rationalIfCan` <a id="rationalifcan"></a>

rationalIfCan(n) creates a rational number, or returns "failed" if this is not possible.

- **Signature**: `% -> Union(Fraction(Integer),"failed")`
- **From**: `IntegerNumberSystem`

#### `recip` <a id="recip"></a>

recip(a) returns an element, which is both a left and a right inverse of a, or "failed" if such an element doesn't exist or cannot be determined (see unitsKnown).

- **Signature**: `% -> Union(%,"failed")`
- **From**: `MagmaWithUnit`

#### `rem` <a id="rem"></a>

x rem y is the same as divide(x, y).remainder. See divide from EuclideanDomain.

- **Signature**: `(%, %) -> %`
- **From**: `EuclideanDomain`

#### `retract` <a id="retract"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L467)\]

retract(a) transforms a into an element of S if possible. Error: if a cannot be made into an element of S.

- **Signature**: `% -> Integer`
- **From**: `RetractableTo(S)`

#### `retractIfCan` <a id="retractifcan"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L470)\]

retractIfCan(a) transforms a into an element of S if possible. Returns "failed" if a cannot be made into an element of S .

- **Signature**: `% -> Union(Integer,"failed")`
- **From**: `RetractableTo(S)`

#### `rightPower` <a id="rightpower"></a>

##### `rightPower` : `(%, NonNegativeInteger) -> %`

rightPower(a, n) returns the n-th right power of a, i.e. rightPower(a, n) := rightPower(a, n-1) * a and rightPower(a, 0) := 1.

- **From**: `MagmaWithUnit`

##### `rightPower` : `(%, PositiveInteger) -> %`

rightPower(a, n) returns the n-th right power of a, i.e. rightPower(a, n) := rightPower(a, n-1) * a and rightPower(a, 1) := a.

- **From**: `Magma`

#### `rightRecip` <a id="rightrecip"></a>

rightRecip(a) returns an element, which is a right inverse of a, or "failed" if such an element doesn't exist or cannot be determined (see unitsKnown).

- **Signature**: `% -> Union(%,"failed")`
- **From**: `MagmaWithUnit`

#### `sample` <a id="sample"></a>

sample yields a value of type %

- **Signature**: `() -> %`
- **From**: `MagmaWithUnit`

#### `shift` <a id="shift"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L358)\]

##### `shift` : `(%, %) -> %`

shift(a, i) shift a by i digits.

- **From**: `IntegerNumberSystem`

##### `shift` : `(%, Integer) -> %`

shift(x, n) adds n to the exponent of float x.

- **From**: `Float`

#### `sign` <a id="sign"></a>

sign(x) is 1 if x is positive, -1 if x is negative, 0 if x equals 0.

- **Signature**: `% -> Integer`
- **From**: `OrderedSet`

#### `sizeLess?` <a id="sizeless"></a>

sizeLess?(x, y) tests whether x is strictly smaller than y with respect to the euclideanSize from EuclideanDomain. Note: zero is considered smaller than every nonzero element.

- **Signature**: `(%, %) -> Boolean`
- **From**: `EuclideanDomain`

#### `smaller?` <a id="smaller"></a>

smaller?(x, y) is a strict ordering on depending on representatives of elements of the set. If % has Comparable then sma ller? gives mathematical linear order.

- **Signature**: `(%, %) -> Boolean`
- **From**: `ComparableRepresentation`

#### `squareFree` <a id="squarefree"></a>

squareFree(x) returns the square-free factorization of x i.e. such that the factors are pairwise relatively prime and ea ch has multiple prime factors.

- **Signature**: `% -> Factored(%)`
- **From**: `UniqueFactorizationDomain`

#### `squareFreePart` <a id="squarefreepart"></a>

squareFreePart(x) returns a product of prime factors of x each taken with multiplicity one.

- **Signature**: `% -> %`
- **From**: `UniqueFactorizationDomain`

#### `stirling1` <a id="stirling1"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L284)\]

stirling1(n,m) returns the Stirling number of the first kind from n and m. For example: \example{stirling1(20, jWSInt 2)}

- **Signature**: `(%, %) -> %`

#### `stirling2` <a id="stirling2"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L288)\]

stirling2(n,m) returns the Stirling number of the second kind from n and m. For example: \example{stirling2(20, jWSInt 2)}

- **Signature**: `(%, %) -> %`

#### `string` <a id="string"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L465)\]

string(jt) returns the string representation of jt.

- **Signature**: `% -> String`
- **From**: [`JLType`](JLType.md)

#### `submod` <a id="submod"></a>

submod(a, b, p), 0<=a, b<p>1, means a-b mod p.

- **Signature**: `(%, %, %) -> %`
- **From**: `IntegerNumberSystem`

#### `subtractIfCan` <a id="subtractifcan"></a>

subtractIfCan(x, y) returns an element z such that z+y=x or "failed" if no such element exists.

- **Signature**: `(%, %) -> Union(%,"failed")`
- **From**: `CancellationAbelianMonoid`

#### `symmetricRemainder` <a id="symmetricremainder"></a>

symmetricRemainder(a, b) (where b > 1) yields r where -b/2 < r <= b/2.

- **Signature**: `(%, %) -> %`
- **From**: `IntegerNumberSystem`

#### `toString` <a id="tostring"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L751)\]

toString(obj) returns the string representation of obj.

- **Signature**: `% -> String`
- **From**: [`WSObject`](WSObject.md)

#### `unit?` <a id="unit"></a>

unit?(x) tests whether x is a unit, i.e. is invertible.

- **Signature**: `% -> Boolean`
- **From**: `EntireRing`

#### `unitCanonical` <a id="unitcanonical"></a>

unitCanonical(x) returns unitNormal(x).canonical.

- **Signature**: `% -> %`
- **From**: `EntireRing`

#### `unitNormal` <a id="unitnormal"></a>

unitNormal(x) tries to choose a canonical element from the associate class of x. The attribute canonicalUnitNormal, if a sserted, means that the "canonical" element is the same across all associates of x if unitNormal(x) = [u, c, a] then u*c = x, a*u = 1.

- **Signature**: `% -> Record(unit: %,canonical: %,associate: %)`
- **From**: `EntireRing`

#### `zero?` <a id="zero"></a> &nbsp; \[[source](https://github.com/gvanuxem/jlfricas/blob/master/src/algebra/jws.spad#L350)\]

zero?(x) tests if x is equal to 0.

- **Signature**: `% -> Boolean`
- **From**: `SetWithZero`

#### `~=` <a id="op-neq"></a>

Operation defined in WSInteger.

- **Signature**: `(%, %) -> Boolean`
---
[Back to Index](../index.md)
