/* USA 0051D2F4 <- EU 0051D2CC: integer angle chase (actor turning; 257 static callers, 258
 * converted caller files):
 *     int f(s32 *cur, s32 target, s32 minStep, s32 maxStep, float rate);   (r0-r3, s0)
 *   diff = target - *cur;  step = |vcvt.s32((float)diff * rate)|  (eor/sub abs: 0x80000000 stays)
 *   if (step == 0x80000000) step = maxStep;
 *   if (step < minStep) step = minStep; else if (maxStep < step) step = maxStep;   (signed)
 *   if (step == 0x80000000)        { *cur = target; return 1; }
 *   if (diff > step)               { *cur = *cur + step; return 0; }
 *   if (-step > diff)              { *cur = *cur - step; return 0; }
 *   *cur = target; return 1;                                     (arrived)
 * Round-2 defect: `(int)(fVar5 * fparam_0)` is a C cast (x86 cvttss2si): NaN and every
 * out-of-range product give 0x80000000 where vcvt.s32 saturates (+overflow -> 0x7FFFFFFF) and
 * maps NaN to 0. A NaN turn rate therefore stepped by maxStep natively instead of minStep, and a
 * positive overflow by maxStep regardless of the clamp order (here exact; gp_vcvt_s32). The
 * Ghidra branch structure is otherwise equivalent; rewritten as the exact hot path with
 * wrapping (unsigned) integer arithmetic as on the ARM (sub/rsb/add never trap).
 * Prototype = round 2's `int (int *, int, int, int, float)`.
 * Verified against EU 0051D2CC-0051D350 instruction by instruction. Confidence: high. */
#include "gameplay.h"

int func_0051D2F4(int *cur, int target, int minStep, int maxStep, float rate) {
    int32_t c = *cur;
    int32_t diff = (int32_t)((uint32_t)target - (uint32_t)c);
    int32_t v = gp_vcvt_s32((float)diff * rate);
    int32_t m = v >> 31;
    int32_t step = (int32_t)((uint32_t)(v ^ m) - (uint32_t)m);
    if (step == INT32_MIN)
        step = maxStep;
    if (step < minStep)
        step = minStep;
    else if (maxStep < step)
        step = maxStep;
    if (step != INT32_MIN) {
        if (diff > step) {
            *cur = (int32_t)((uint32_t)c + (uint32_t)step);
            return 0;
        }
        if ((int32_t)(0u - (uint32_t)step) > diff) {
            *cur = (int32_t)((uint32_t)c - (uint32_t)step);
            return 0;
        }
    }
    *cur = target;
    return 1;
}
