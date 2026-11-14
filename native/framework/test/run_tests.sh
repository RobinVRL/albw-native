#!/usr/bin/env bash
# Build and run the native/framework unit tests for -m32 and -m64 (from anywhere).
# Flags = the build's float model; -no-pie so stub addresses stored in 32-bit game words are low.
set -uo pipefail
cd "$(dirname "$0")/../../.."
OUT=${TMPDIR:-/tmp}/albw_framework_tests; mkdir -p "$OUT"
F=native/framework
fail=0
for m in 32 64; do
    X=""; [ $m = 64 ] && X=-fms-extensions
    if ! clang -m$m $X -no-pie -fno-pic -O2 -std=gnu11 -Wall -Wextra -Wno-unused-parameter \
            -msse2 -mfpmath=sse -ffp-contract=off -fno-strict-aliasing -Inative/include -I$F \
            -Inative/gameplay/test $F/test/framework_test.c $F/func_*.c -o "$OUT/framework$m"; then
        echo "BUILD FAILED: -m$m"; fail=1; continue
    fi
    "$OUT/framework$m" || { echo "TEST FAILED: -m$m"; fail=1; }
done
# differential check of 004FD464 against the round-2 converted Ghidra C (-m32; needs the build tree)
G=build/decomp/ghidra_fallback/ghidra_analyzed4/004/func_004FD464.c
if [ -f "$G" ]; then
    if clang -m32 -no-pie -fno-pic -O2 -std=gnu11 -w -Wno-error=int-conversion \
            -Wno-error=incompatible-pointer-types -msse2 -mfpmath=sse -ffp-contract=off \
            -fno-strict-aliasing -Inative/include -I../albw-decomp-ai/shared/include \
            -Dfunc_004FD464=ghidra_004FD464 -c "$G" -o "$OUT/g004FD464.o" &&
       clang -m32 -no-pie -fno-pic -O2 -std=gnu11 -Wall -msse2 -mfpmath=sse -ffp-contract=off \
            -fno-strict-aliasing -Inative/include -I$F $F/test/enemy_diff.c $F/func_004FD464.c \
            "$OUT/g004FD464.o" -o "$OUT/enemy_diff32"; then
        "$OUT/enemy_diff32" || { echo "TEST FAILED: enemy_diff"; fail=1; }
    else
        echo "BUILD FAILED: enemy_diff"; fail=1
    fi
fi
exit $fail
