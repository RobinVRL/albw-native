/* USA 00688C34 <- EU 00688C0C: move *value towards target by step (math "chase"):
 *     returns 1 (and stores target) when it arrives, 0 (and stores the stepped value) otherwise.
 * Used by 0068C794 and ~12 other functions.
 *
 * What was wrong: not flagged by any in_/extraout_ name, but the Ghidra C is incomplete: it only
 * kept the "value < target" (step up) branch, so stepping DOWN towards a smaller target snapped to
 * the target immediately and returned 1. It also loses the "already equal -> return 1 without
 * storing" case.
 *
 * Disassembly (EU 00688C0C-00688C74), s2 = *value, s0 = target, s1 = step:
 *   vcmpe s2, s0 ; bhs down
 *   up:   s1 = s2 + s1 ; if (s0 <= s1) -> arrive ; if (s2 > s1) -> arrive ; store s1, return 0
 *   down: movle r0,#1 ; ble return (equal or unordered: no store)
 *         s1 = s2 - s1 ; if (s1 <= s0) -> arrive ; if (s1 <= s2 or unordered) store s1, return 0
 *         else arrive
 *   arrive: store s0, return 1
 * Flag semantics of each VFP compare (lo/ls/gt/le with unordered operands) were mapped to C:
 * C relational operators are false on NaN, which matches every branch except the two `ble`s,
 * written explicitly with isunordered().
 * Convention: r0 = value pointer, s0 = target, s1 = step; returns int in r0.
 * Confidence: high. */
#include <math.h>

int func_00688C34(float *value, float target, float step) {
    float cur = *value;
    if (cur < target) {
        float n = cur + step;
        if (target <= n || cur > n) {
            *value = target;
            return 1;
        }
        *value = n;
        return 0;
    }
    if (cur == target || isunordered(cur, target))
        return 1;
    float n = cur - step;
    if (n <= target) {
        *value = target;
        return 1;
    }
    if (n <= cur || isunordered(n, cur)) {
        *value = n;
        return 0;
    }
    *value = target;
    return 1;
}
