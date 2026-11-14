#!/usr/bin/env bash
# Build and run every native/gameplay unit test for -m32 and -m64 (from anywhere).
# Flags = the build's float model (SSE single precision, no FMA contraction); -no-pie so that
# test stubs called through 32-bit game vtable words have addresses below 4 GiB on -m64.
set -uo pipefail
cd "$(dirname "$0")/../../.."
OUT=${TMPDIR:-/tmp}/albw_gameplay_tests; mkdir -p "$OUT"
G=native/gameplay
fail=0
run() {   # name sources...
    local name=$1; shift
    for m in 32 64; do
        local X=""; [ $m = 64 ] && X=-fms-extensions
        if ! clang -m$m $X -no-pie -fno-pic -O2 -std=gnu11 -Wall -Wextra -Wno-unused-parameter \
                -msse2 -mfpmath=sse -ffp-contract=off -Inative/include -I$G -I$G/test \
                -I../albw-decomp-ai/shared/include "$@" -lm -o "$OUT/$name$m"; then
            echo "BUILD FAILED: $name -m$m"; fail=1; continue
        fi
        "$OUT/$name$m" || { echo "TEST FAILED: $name -m$m"; fail=1; }
    done
}
bash $G/test/run_math_tests.sh || fail=1
run player $G/test/player_test.c $G/func_004CEAF0.c $G/func_0053EDD8.c $G/func_004C1388.c $G/func_002917AC.c
run collision $G/test/collision_test.c $G/func_0042DA98.c $G/func_0042D8F4.c $G/func_0042CF00.c
run residual $G/test/residual_test.c $G/func_0051D2F4.c $G/func_00581A18.c $G/func_00115960.c $G/func_0051E5F8.c
run kcl_box $G/test/kcl_box_test.c $G/func_0042EFB0.c $G/func_0043081C.c $G/func_004317D4.c
run knockback $G/test/knockback_test.c $G/func_002B0D7C.c $G/func_002AD8A0.c $G/func_002AEA54.c \
    $G/func_002AF4DC.c $G/func_002AF59C.c $G/func_002AE9F8.c $G/func_002ADF60.c $G/func_002ACBAC.c \
    $G/func_002B1710.c $G/func_002AEA9C.c $G/func_002AF624.c $G/func_002AE1BC.c $G/func_002AE214.c
run sweep $G/test/sweep_test.c $G/func_004A7620.c $G/func_004A9F98.c $G/func_00115C54.c \
    $G/func_00115C70.c $G/func_00115D70.c
run wall $G/test/wall_test.c $G/func_0038E13C.c $G/func_0038EA34.c $G/func_0038E8C8.c \
    $G/func_00115C54.c $G/func_00115C70.c $G/func_00115D70.c $G/func_00115DC8.c
run action $G/test/action_test.c $G/func_002908B8.c
exit $fail
