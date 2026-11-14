/* USA 002923B8 <- EU 002923E0: while in action 0x5F, store a target and start a move:
 *   if (act->id [0x42, u16] != 0x5F) return 0;
 *   act[0x88] = obj->[0x18]; *(float *)(act + 0x8C) = f;
 *   return 002FD784(act->[0x70], obj, dst, 0) != 0;
 * (r1/r2 go through unchanged to 002FD784). Reached by fall-through from 002923B0.
 * What was wrong: s0 lost (in_s0 stored at +0x8C).
 * Verified against EU 002923E0-00292414. Confidence: high. */
#include "gameplay.h"

int func_002FD784(int *a, float *b, float *c, int d);

int func_002923B8(void *act, void *obj, float *dst, float f) {
    if (FLD(act, 0x42, uint16_t) != 0x5F)
        return 0;
    FLD(act, 0x88, uint32_t) = FLD(obj, 0x18, uint32_t);
    FLD(act, 0x8C, float) = f;
    int r = func_002FD784((int *)gp_ptr(FLD(act, 0x70, uint32_t)), (float *)obj, dst, 0);
    return r != 0;
}
