/* USA 002AEA9C <- EU 002AEA78: enemy damage reaction state cRT_SandRodFaint (id 8), ENTER
 * delegate (state table built by the ctor 002B2590).
 *   002B0D7C(self, 8, 10, 0, 0.15f);  self[0x38] (u16) |= 8;
 *   actor timer at actor+0x724: {+0x724 = 0, +0x728 = 40, +0x72C = 1.0f / (float)40u}
 *   (the ARM tests the constant 40 against 0: always false, the vcvt/vdiv path runs)
 * What was wrong (round 2): the strength 0.15 (s0, bits 0x3E19999A) is dropped in the call to
 * 002B0D7C (Ghidra's signature has no float parameter). Rewritten to pass it to the 5-argument
 * native func_002B0D7C. Verified against EU 002AEA78-002AEAE8. Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

float func_002B0D7C(int self, int id, uint32_t frames, int flag, float strength);

void func_002AEA9C(int self_w) {
    char *self = (char *)gp_ptr((uint32_t)self_w);
    func_002B0D7C(self_w, 8, 10, 0, gp_u2f(0x3E19999Au));
    FLD(self, 0x38, uint16_t) |= 8;
    char *a = GPTR(self, 0x34, char);
    uint32_t n = 0x28;
    FLD(a, 0x728, uint32_t) = n;
    FLD(a, 0x72C, float) = 1.0f / (float)n;
    FLD(a, 0x724, uint32_t) = 0;
}
