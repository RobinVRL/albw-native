#!/usr/bin/env bash
# Build and run the math unit tests for -m32 and -m64 (from anywhere).
set -euo pipefail
cd "$(dirname "$0")/../../.."
OUT=${TMPDIR:-/tmp}/albw_gameplay_tests; mkdir -p "$OUT"
SRC=(native/gameplay/test/test_math.c)
for a in 00115C54 00115C70 00115C8C 00115D70 00115D88 00115DAC 00115E10 00115DC8 00115C14 00115B68 \
         00115CA8 00115074 00115CE4 00115D18 001157FC 00114E74 0011549C 0011593C 001119F4 00115154 \
         004904CC 004905E0 0068C690 004D80A4 003E183C 00491E80 00491624 00490628; do
    SRC+=(native/gameplay/func_$a.c)
done
for m in 32 64; do
    clang -m$m -O2 -std=gnu11 -Wall -Wextra -Wno-unused-parameter -ffp-contract=off \
        -Inative/include -I../albw-decomp-ai/shared/include "${SRC[@]}" -lm -o "$OUT/test_math$m"
    "$OUT/test_math$m"
done
