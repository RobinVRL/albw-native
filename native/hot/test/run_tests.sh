#!/usr/bin/env bash
# Build and run the native/hot unit tests for -m32 and -m64 (from anywhere), with the build's
# float model (SSE single precision, no FMA contraction). -no-pie: test stubs reached through
# 32-bit game words need addresses below 4 GiB on -m64.
set -uo pipefail
cd "$(dirname "$0")/../../.."
OUT=${TMPDIR:-/tmp}/albw_hot_tests; mkdir -p "$OUT"
H=native/hot
G=native/gameplay
fail=0
run() {   # name sources...
    local name=$1; shift
    for m in 32 64; do
        local X=""; [ $m = 64 ] && X=-fms-extensions
        if ! clang -m$m $X -no-pie -fno-pic -O2 -std=gnu11 -Wall -Wno-unused-function \
                -msse2 -mfpmath=sse -ffp-contract=off -fno-strict-aliasing -Inative/include \
                -I$H -I$H/test "$@" -lm -o "$OUT/$name$m"; then
            echo "BUILD FAILED: $name -m$m"; fail=1; continue
        fi
        "$OUT/$name$m" || { echo "TEST FAILED: $name -m$m"; fail=1; }
    done
}
run anim $H/test/anim_test.c $H/func_002317C0.c $H/func_002313DC.c $H/func_00231524.c \
    $H/func_0016773C.c $H/func_0016A2FC.c $H/func_0016898C.c $H/func_00169A80.c
run actor $H/test/actor_test.c $H/func_004C03B8.c $H/func_004D838C.c $H/func_004F5588.c \
    $H/func_004CEA18.c $H/func_005826A4.c $H/func_00581D60.c $H/func_0012C790.c $H/func_004F70A8.c \
    $G/func_00115C54.c $G/func_00115C70.c $G/func_00115D70.c $G/func_00115DAC.c
run misc2 $H/test/misc2_test.c $H/func_00352210.c $H/func_004FABDC.c $H/func_004FC07C.c \
    $H/func_004C01E4.c $H/func_004356B4.c $H/func_0054DDF4.c $H/func_00521078.c $H/func_004C07D8.c
exit $fail
