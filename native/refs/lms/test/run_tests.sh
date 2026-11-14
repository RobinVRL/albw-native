#!/usr/bin/env bash
# native/refs/lms tests, -m32 and -m64 (flags as native/core/test/run_tests.sh).
set -uo pipefail
cd "$(dirname "$0")/../../../.."
OUT=${TMPDIR:-/tmp}/albw_lms_tests; mkdir -p "$OUT"
L=native/refs/lms
FLAGS="-std=gnu11 -O2 -msse2 -mfpmath=sse -ffp-contract=off -fno-strict-aliasing -Wall -Wextra
       -Wno-unused-parameter -Inative/include -Inative/core -Inative/gameplay -Inative/gameplay/test -I$L"
fail=0
for m in 32 64; do
    X=""; [ $m = 64 ] && X=-fms-extensions
    for f in $L/func_*.c; do
        clang -m$m $X $FLAGS -Werror -c "$f" -o "$OUT/o$m.o" || { echo "COMPILE FAILED: $f -m$m"; fail=1; }
    done
    if clang -m$m $X -no-pie -fno-pic $FLAGS $L/test/lms_test.c $L/func_*.c -o "$OUT/lms$m"; then
        "$OUT/lms$m" && echo "ok   lms -m$m" || { echo "TEST FAILED: lms -m$m"; fail=1; }
    else echo "BUILD FAILED: lms -m$m"; fail=1; fi
done
[ $fail = 0 ] && echo "all native/refs/lms tests passed (-m32, -m64)"
exit $fail
