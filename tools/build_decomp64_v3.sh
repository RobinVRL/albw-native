#!/usr/bin/env bash
# 64-bit (x86-64, low-4GB mode) build with the round-2 systemic settings, mirroring
# tools/build_decomp_v3.sh (V2+V3 converter, matched-source arg/ABI checks, build/ghidra_analyzed4)
# into build/decomp64. The ABI check (tools/matched_abi.py) models i386 against the ARM evidence;
# its verdict is used unchanged here (the ARM side is what matters); the 64-bit layout check
# (build_decomp.py layout_check) comes on top.  Then: tools/link64.sh
cd "$(dirname "$0")/.."
P=$(pwd)
[[ -d $P/build/ghidra_analyzed4 ]] || { echo "build/ghidra_analyzed4 missing: run tools/systemic_rebuild2.sh"; exit 1; }
export ALBW_CONVERT_V2=1 ALBW_CONVERT_V3=1 ALBW_MATCHED_ARGCHECK=1 ALBW_MATCHED_ABICHECK=1 \
       ALBW_GHIDRA_DIR=$P/build/ghidra_analyzed4 ALBW_GHIDRA_EXTRA_DIR=$P/build/ghidra_extra4 \
       ALBW_EXTRA_FUNCTIONS=$P/build/systemic2/extra_functions.json
exec python3 tools/build_decomp.py --arch x86_64 "$@"
