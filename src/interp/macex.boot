-- Copyright (c) 1991-2002, The Numerical ALgorithms Group Ltd.
-- All rights reserved.
--
-- Redistribution and use in source and binary forms, with or without
-- modification, are permitted provided that the following conditions are
-- met:
--
--     - Redistributions of source code must retain the above copyright
--       notice, this list of conditions and the following disclaimer.
--
--     - Redistributions in binary form must reproduce the above copyright
--       notice, this list of conditions and the following disclaimer in
--       the documentation and/or other materials provided with the
--       distribution.
--
--     - Neither the name of The Numerical ALgorithms Group Ltd. nor the
--       names of its contributors may be used to endorse or promote products
--       derived from this software without specific prior written permission.
--
-- THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
-- IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
-- TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
-- PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
-- OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
-- EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
-- PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
-- PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
-- LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
-- NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
-- SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


)package "BOOT"

--% Macro expansion
--  Functions to transform parse forms.
--
--  Global variables:
--    $pfMacros is an alist [[id, state, body-pform], ...]
--       (set in newcompInit).
--       state is one of: mbody, mparam, mlambda
--
--    $macActive is a list of the bodies being expanded.
--    $posActive is a list of the parse forms where the bodies came from.

-- Beware: the name macroExpand is used by the old compiler.
macroExpanded pf ==
    $macActive: local := []
    $posActive: local := []

    macExpand pf

macExpand pf ==
    pfWhere?       pf => macWhere   pf
    pfLambda?      pf => macLambda  pf
    pfMacro?       pf => macMacro pf

    pfId?          pf => macId pf
    pfApplication? pf => macApplication pf
    pfMapParts(function macExpand, pf)

macWhere pf ==
    mac(pf,$pfMacros) where
        mac(pf,$pfMacros) ==
            -- pfWhereContext is before pfWhereExpr
            pfMapParts(function macExpand, pf)

macLambda pf ==
    mac(pf,$pfMacros) where
        mac(pf,$pfMacros) ==
            pfMapParts(function macExpand, pf)

macLambdaParameterHandling( replist , pform )  ==
    pfLeaf? pform => []
    pfLambda? pform =>      -- remove ( identifier . replacement ) from assoclist
        parlist := [ pfTypedId p for p in pf0LambdaArgs pform ] -- extract parameters
        for par in [ pfIdSymbol par for par in parlist ] repeat
                replist := AlistRemoveQ(par,replist)
        replist
    pfMLambda? pform =>     -- construct assoclist ( identifier . replacement )
        parlist := pf0MLambdaArgs pform  -- extract parameter list
        [[pfIdSymbol par ,:pfLeaf( pfAbSynOp par,GENSYM(),pfLeafPosition par)] for par in parlist ]
    for p in pfParts pform repeat macLambdaParameterHandling( replist , p )

macSubstituteId( replist , pform ) ==
    ex := AlistAssocQ( pfIdSymbol pform , replist )
    ex =>
        RPLACA(pform, first(rest(ex)))
        RPLACD(pform, CDR(rest(ex)))
        pform
    pform

macSubstituteOuter( pform ) ==
    mac0SubstituteOuter( macLambdaParameterHandling( [] , pform ) , pform )

mac0SubstituteOuter( replist , pform ) ==
    pfId? pform => macSubstituteId( replist , pform )
    pfLeaf? pform => pform
    pfLambda? pform =>
        tmplist := macLambdaParameterHandling( replist , pform )
        for p in pfParts pform repeat mac0SubstituteOuter( tmplist , p )
        pform
    for p in pfParts pform repeat mac0SubstituteOuter( replist , p )
    pform

-- This function adds the appropriate definition and returns
-- the original Macro pform.
macMacro pf ==
    lhs := pfMacroLhs pf
    rhs := pfMacroRhs pf
    not pfId? lhs =>
        ncSoftError (pfSourcePosition lhs, 'S2CM0001, [%pform lhs] )
        pf
    sy := pfIdSymbol lhs

    mac0Define(sy, if pfMLambda? rhs then 'mlambda else 'mbody, macSubstituteOuter rhs)

    if pfNothing? rhs then pf else pfMacro(lhs, pfNothing())

mac0Define(sy, state, body) ==
    $pfMacros := cons([sy, state, body], $pfMacros)

-- Returns [state, body] or NIL.
mac0Get sy ==
    IFCDR ASSOC(sy, $pfMacros)

-- Returns [sy, state] or NIL.
mac0GetName body ==
    name := nil
    for [sy,st,bd] in $pfMacros while not name repeat
        if st = 'mlambda then
            bd := pfMLambdaBody bd
        EQ(bd, body) => name := [sy,st]
    name

macId pf ==
    sy := pfIdSymbol pf
    not (got := mac0Get sy) => pf
    [state, body] := got

    state = 'mparam     => body                                         -- expanded already
    state = 'mlambda    => pfCopyWithPos( body , pfSourcePosition pf )  -- expanded later

    pfCopyWithPos( mac0ExpandBody(body, pf, $macActive, $posActive) , pfSourcePosition pf )

macApplication pf ==
    pf := pfMapParts(function macExpand, pf)

    op := pfApplicationOp pf
    not pfMLambda? op => pf

    args := pf0ApplicationArgs pf
    mac0MLambdaApply(op, args, pf, $pfMacros)

mac0MLambdaApply(mlambda, args, opf, $pfMacros) ==
    params := pf0MLambdaArgs mlambda
    body   := pfMLambdaBody  mlambda
    #args ~= #params =>
        pos := pfSourcePosition opf
        ncHardError(pos,'S2CM0003, [#params,#args])
    for p in params for a in args repeat
        not pfId? p =>
            pos := pfSourcePosition opf
            ncHardError(pos, 'S2CM0004, [%pform p])
        mac0Define(pfIdSymbol p, 'mparam, a)

    mac0ExpandBody( body , opf, $macActive, $posActive)

mac0ExpandBody(body, opf, $macActive, $posActive) ==
    MEMQ(body,$macActive) =>
        [.,pf] := $posActive
        posn   := pfSourcePosition pf
        mac0InfiniteExpansion(posn, body, $macActive)
    $macActive := [body, :$macActive]
    $posActive := [opf,  :$posActive]
    macExpand body

mac0InfiniteExpansion(posn, body, active) ==
    blist := [body, :active]
    [fname, :rnames] := [name b for b in blist] where
        name b ==
            got := mac0GetName b
            not got => '"???"
            [sy,st] := got
            st = 'mlambda => CONCAT(PNAME sy, '"(...)")
            PNAME sy
    ncSoftError (posn, 'S2CM0005, _
       [ [:[n,'"==>"] for n in reverse rnames], fname, %pform body ]  )

    body
