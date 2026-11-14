/* USA 002ADF60 <- EU 002ADF3C: enemy damage reaction state cRT_AttackBack (id 3), ENTER delegate (state table
 * built by the ctor 002B2590).
 *   002B0D7C(self, 3, 8, 0, 0.25f)   (knock-back start; strength in s0)
 * What was wrong (round 2): the converted body calls 002B0D7C with 4 arguments; the strength
 * 0.25f (s0, bits 0x3E800000u) is dropped (Ghidra's 002B0D7C signature has no float parameter).
 * Rewritten to pass it to the 5-argument native func_002B0D7C. Prototype: called through the
 * state delegate with the reaction object only. Verified against EU 002ADF3C-002ADF50. Confidence: high. */
#include "gameplay.h"

float func_002B0D7C(int self, int id, uint32_t frames, int flag, float strength);

void func_002ADF60(int self_w) {
    func_002B0D7C(self_w, 3, 8, 0, gp_u2f(0x3E800000u));
}
