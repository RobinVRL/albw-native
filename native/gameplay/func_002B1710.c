/* USA 002B1710 <- EU 002B16EC: enemy damage reaction state cRT_BoomerangHookshotFreeze (id 7), ENTER delegate (state table
 * built by the ctor 002B2590).
 *   002B0D7C(self, 7, 8, 0, 0.22f)   (knock-back start; strength in s0)
 *   self[0x38] (u16) |= 8
 * What was wrong (round 2): the converted body calls 002B0D7C with 4 arguments; the strength
 * 0.22f (s0, bits 0x3E6147AEu) is dropped (Ghidra's 002B0D7C signature has no float parameter).
 * Rewritten to pass it to the 5-argument native func_002B0D7C. Prototype: called through the
 * state delegate with the reaction object only. Verified against EU 002B16EC-002B1718. Confidence: high. */
#include "gameplay.h"

float func_002B0D7C(int self, int id, uint32_t frames, int flag, float strength);

void func_002B1710(int self_w) {
    func_002B0D7C(self_w, 7, 8, 0, gp_u2f(0x3E6147AEu));
    FLD(gp_ptr((uint32_t)self_w), 0x38, uint16_t) |= 8;
}
