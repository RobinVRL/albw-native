/* USA 00290248 <- EU 00290270: player action request 0x97 with parameters:
 *   p = 002D55D0(act->machine [0x48], 0x97);    (request the action, returns its param block)
 *   if (p) { p[0x0C] = (u8)a; p[0x0D] = (u8)b; *(float *)(p + 0x10) = f; }
 *   return 1;
 * `act` is the player action component (player+0x14; see func_002917AC.c). Reached by
 * fall-through from 00290240.
 * What was wrong: Ghidra signature (int, u1, u1) lost s0: the float stored into the request
 * block was in_s0 (uninitialised).
 * Verified against EU 00290270-002902AC (s16 holds s0 across the call; r0 = 1 on both paths).
 * Confidence: high. */
#include "gameplay.h"

int func_002D55D0(int machine, uint32_t action);

int func_00290248(void *act, uint8_t a, uint8_t b, float f) {
    int p = func_002D55D0((int)FLD(act, 0x48, uint32_t), 0x97);
    if (p != 0) {
        void *blk = gp_ptr((uint32_t)p);
        FLD(blk, 0x0C, uint8_t) = a;
        FLD(blk, 0x0D, uint8_t) = b;
        FLD(blk, 0x10, float) = f;
    }
    return 1;
}
