#!/usr/bin/env bash
# Recompile the game code to C, then build the native binary.
#   ./build.sh            uses $ALBW_DECOMP (default ../albw-decomp-ai) for the function table
#   ALBW_CODE_BIN=...     the game's code.bin (default: $ALBW_DECOMP/rom/eu_code.bin)
set -euo pipefail
cd "$(dirname "$0")"
DECOMP="${ALBW_DECOMP:-../albw-decomp-ai}"
CODE="${ALBW_CODE_BIN:-$DECOMP/rom/eu_code.bin}"
[[ -f "$CODE" ]] || { echo "code.bin not found: $CODE (set ALBW_CODE_BIN)"; exit 1; }

mkdir -p build/gen
if [[ ! -f build/gen/dispatch.c || recomp/armrecomp.py -nt build/gen/dispatch.c || "$CODE" -nt build/gen/dispatch.c ]]; then
    echo "== recompiling $CODE"
    MAP=()
    [[ "$CODE" == *eu_code.bin ]] && MAP=(--map "$DECOMP/shared/eu_usa_map.json")
    python3 recomp/armrecomp.py --code "$CODE" --table "$DECOMP/funcs.json" "${MAP[@]}" --out build/gen
fi
cmake -S . -B build -G Ninja >/dev/null 2>&1 || cmake -S . -B build >/dev/null
cmake --build build -j"$(nproc)"
echo "== built build/albw   run: ./build/albw $CODE"
