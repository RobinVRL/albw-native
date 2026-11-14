/* USA 002AE1BC <- EU 002AE198: enemy damage reaction state cRT_DalianFaint (id 10), ENTER
 * delegate (state table built by the ctor 002B2590).
 *   frames = (actor[0x7FC] == 2) ? 7 : 1;          (actor = self+0x34)
 *   002B0D7C(self, 10, frames, 0, 0.22f);  self[0x38] (u16) |= 8;
 * What was wrong (round 2): the strength 0.22 (s0, bits 0x3E6147AE, loaded before the branch)
 * is dropped in both calls to 002B0D7C (Ghidra's signature has no float parameter). Rewritten
 * to pass it to the 5-argument native func_002B0D7C. Verified against EU 002AE198-002AE1EC.
 * Confidence: high. */
#include "gameplay.h"

float func_002B0D7C(int self, int id, uint32_t frames, int flag, float strength);

void func_002AE1BC(int self_w) {
    char *self = (char *)gp_ptr((uint32_t)self_w);
    uint32_t frames = FLD(GPTR(self, 0x34, char), 0x7FC, uint8_t) == 2 ? 7 : 1;
    func_002B0D7C(self_w, 10, frames, 0, gp_u2f(0x3E6147AEu));
    FLD(self, 0x38, uint16_t) |= 8;
}
