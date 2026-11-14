#!/usr/bin/env bash
# build_decomp with the settings of the round-2 systemic rebuild (tools/systemic_rebuild2.sh):
# V2+V3 converter, matched-source ABI checks, dump build/ghidra_analyzed4 (+ ghidra_extra4).
# Use only after systemic_rebuild2.sh produced build/ghidra_analyzed4; tools/build_decomp_v2.sh
# is the round-1 build.
cd "$(dirname "$0")/.."
P=$(pwd)
[[ -d $P/build/ghidra_analyzed4 ]] || { echo "build/ghidra_analyzed4 missing: run tools/systemic_rebuild2.sh"; exit 1; }
export ALBW_CONVERT_V2=1 ALBW_CONVERT_V3=1 ALBW_MATCHED_ARGCHECK=1 ALBW_MATCHED_ABICHECK=1 \
       ALBW_GHIDRA_DIR=$P/build/ghidra_analyzed4 ALBW_GHIDRA_EXTRA_DIR=$P/build/ghidra_extra4 \
       ALBW_EXTRA_FUNCTIONS=$P/build/systemic2/extra_functions.json
exec python3 tools/build_decomp.py "$@"
