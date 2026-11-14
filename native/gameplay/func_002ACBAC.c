/* USA 002ACBAC <- EU 002ACB88: enemy damage reaction state cRT_Boyoyon (id 4), ENTER delegate (state table
 * built by the ctor 002B2590).
 *   002B0D7C(self, 4, 0x10, 0, 0.28f)   (knock-back start; strength in s0)
 * What was wrong (round 2): the converted body calls 002B0D7C with 4 arguments; the strength
 * 0.28f (s0, bits 0x3E8F5C29u) is dropped (Ghidra's 002B0D7C signature has no float parameter).
 * Rewritten to pass it to the 5-argument native func_002B0D7C. Prototype: called through the
 * state delegate with the reaction object only. Verified against EU 002ACB88-002ACB9C. Confidence: high. */
#include "gameplay.h"

float func_002B0D7C(int self, int id, uint32_t frames, int flag, float strength);

void func_002ACBAC(int self_w) {
    func_002B0D7C(self_w, 4, 0x10, 0, gp_u2f(0x3E8F5C29u));
}
