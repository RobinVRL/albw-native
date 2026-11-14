#!/usr/bin/env bash
# 64-bit (x86-64, low-4GB mode) build of the decompiled code with the systemic-rebuild settings
# (same as tools/build_decomp_v2.sh) into build/decomp64. Does not touch build/decomp.
#   tools/build_decomp64_v2.sh [--only ADDR,...]      then tools/link64.sh
cd "$(dirname "$0")/.."
P=$(pwd)
export ALBW_CONVERT_V2=1 ALBW_GHIDRA_DIR=$P/build/ghidra_analyzed3 ALBW_GHIDRA_EXTRA_DIR=$P/build/ghidra_extra3 \
       ALBW_EXTRA_FUNCTIONS=$P/build/systemic/extra_functions.json
exec python3 tools/build_decomp.py --arch x86_64 "$@"
