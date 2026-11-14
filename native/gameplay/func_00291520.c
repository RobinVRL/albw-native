/* USA 00291520 <- EU 00291548: player action request 0x17 from action 0x45:
 *   if (act->id [0x42, u16] != 0x45) return 0;
 *   p = 002D55D0(act->machine [0x48], 0x17); if (!p) return 0;
 *   *(u32 *)p = v; *(float *)(p + 4) = f; p[8] = 0; p[9] = 0; p[0xA] = 1;
 *   *(float *)(act->[0x18] + 0xFC) = 1.0f;  return 1;
 * Reached by fall-through from 00291518.
 * What was wrong: s0 lost (in_s0 stored as the request's float).
 * Verified against EU 00291548-002915B8 (ldrh, not ldrsh; r0 = r2 = 1 on success).
 * Confidence: high. */
#include "gameplay.h"

int func_002D55D0(int machine, uint32_t action);

int func_00291520(void *act, uint32_t v, float f) {
    if (FLD(act, 0x42, uint16_t) != 0x45)
        return 0;
    int p = func_002D55D0((int)FLD(act, 0x48, uint32_t), 0x17);
    if (p == 0)
        return 0;
    void *blk = gp_ptr((uint32_t)p);
    FLD(blk, 0x0, uint32_t) = v;
    FLD(blk, 0x4, float) = f;
    FLD(blk, 0x8, uint8_t) = 0;
    FLD(blk, 0x9, uint8_t) = 0;
    FLD(blk, 0xA, uint8_t) = 1;
    FLD(GPTR(act, 0x18, void), 0xFC, float) = 1.0f;
    return 1;
}
