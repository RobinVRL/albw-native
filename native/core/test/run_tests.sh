#!/usr/bin/env bash
# Build and run every native/core unit test for -m32 and -m64 (from anywhere).
# Each test/<name>_test.c names the native/core sources it links in a line
#     // SOURCES: crt_aeabi.c sead_list.c
# Flags = the build's float model (SSE single precision, no FMA contraction, native/gameplay
# fpmath.patch); -no-pie so test stubs called through 32-bit game words are below 4 GiB on -m64.
# Also compiles every native/core/*.c alone with the full warning set (-m32 and -m64).
set -uo pipefail
cd "$(dirname "$0")/../../.."
OUT=${TMPDIR:-/tmp}/albw_core_tests; mkdir -p "$OUT"
C=native/core
fail=0
FLAGS="-std=gnu11 -O2 -msse2 -mfpmath=sse -ffp-contract=off -fno-strict-aliasing -Wall -Wextra
       -Wno-unused-parameter -Inative/include -Inative/gameplay -I$C -I$C/test -Inative/gameplay/test
       -I../albw-decomp-ai/shared/include"
for m in 32 64; do
    X=""; [ $m = 64 ] && X=-fms-extensions
    for f in $C/*.c; do
        clang -m$m $X $FLAGS -Werror -c "$f" -o "$OUT/obj$m.o" || { echo "COMPILE FAILED: $f -m$m"; fail=1; }
    done
done
for t in $C/test/*_test.c; do
    name=$(basename "$t" .c)
    srcs=$(sed -n 's,^// SOURCES:,,p' "$t" | head -1)
    for m in 32 64; do
        X=""; [ $m = 64 ] && X=-fms-extensions
        if ! clang -m$m $X -no-pie -fno-pic $FLAGS "$t" $(for s in $srcs; do echo $C/$s; done) \
                -lm -o "$OUT/$name$m"; then
            echo "BUILD FAILED: $name -m$m"; fail=1; continue
        fi
        if "$OUT/$name$m"; then echo "ok   $name -m$m"; else echo "TEST FAILED: $name -m$m"; fail=1; fi
    done
done
[ $fail = 0 ] && echo "all native/core tests passed (-m32, -m64)"
exit $fail
