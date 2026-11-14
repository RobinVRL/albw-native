#!/usr/bin/env bash
# build_decomp with the round-3 systemic settings (tools/systemic_rebuild3.sh, native/ROUND3.md):
# V2+V3+V4 converter (ALBW_CONVERT_V4: ARM return classes, 64-bit returns, in_stack_ aliasing,
# pair loads, compile fixes, FCONV bit copies, returns_this3.json), matched-source ABI checks.
# Dump: $ALBW_GHIDRA_DIR (default build/ghidra_analyzed5 from systemic_rebuild3.sh, else the
# round-2 dump build/ghidra_analyzed4: converter-only round 3). Converted sources go to
# build/decomp64/ghidra_fallback/<dump>_v4. Rollback: tools/build_decomp64_v3.sh.
cd "$(dirname "$0")/.."
P=$(pwd)
G=${ALBW_GHIDRA_DIR:-}
X=${ALBW_GHIDRA_EXTRA_DIR:-}
if [[ -z $G ]]; then
    if [[ -d $P/build/ghidra_analyzed5 ]]; then G=$P/build/ghidra_analyzed5; X=$P/build/ghidra_extra5
    else G=$P/build/ghidra_analyzed4; X=$P/build/ghidra_extra4; fi
fi
[[ -d $G ]] || { echo "$G missing"; exit 1; }
[[ -s $P/native/robust/systemic3/retfix.json ]] || { echo "native/robust/systemic3/retfix.json missing: tools/systemic_rebuild3.sh FROM=prep"; exit 1; }
E=$P/build/systemic3/extra_functions.json; [[ -s $E ]] || E=$P/build/systemic2/extra_functions.json
export ALBW_CONVERT_V2=1 ALBW_CONVERT_V3=1 ALBW_CONVERT_V4=1 ALBW_MATCHED_ARGCHECK=1 ALBW_MATCHED_ABICHECK=1 \
       ALBW_GHIDRA_DIR=$G ALBW_GHIDRA_EXTRA_DIR=$X ALBW_EXTRA_FUNCTIONS=$E \
       ALBW_RETFIX=$P/native/robust/systemic3/retfix.json
exec python3 tools/build_decomp.py --arch x86_64 "$@"
