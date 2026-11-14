#!/usr/bin/env bash
# build_decomp with the settings of the systemic rebuild (V2 converter, build/ghidra_analyzed3).
# Plain `python3 tools/build_decomp.py` selects the older ghidra_analyzed2 dump.
cd "$(dirname "$0")/.."
P=$(pwd)
export ALBW_CONVERT_V2=1 ALBW_GHIDRA_DIR=$P/build/ghidra_analyzed3 ALBW_GHIDRA_EXTRA_DIR=$P/build/ghidra_extra3 \
       ALBW_EXTRA_FUNCTIONS=$P/build/systemic/extra_functions.json
exec python3 tools/build_decomp.py "$@"
