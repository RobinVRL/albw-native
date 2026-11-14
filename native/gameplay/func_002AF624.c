/* USA 002AF624 <- EU 002AF600: enemy damage reaction state cRT_ShadowLinkFaint (id 9), ENTER delegate (state table
 * built by the ctor 002B2590).
 *   002B0D7C(self, 9, 0, 0, 0.0f)   (knock-back start; strength in s0)
 * What was wrong (round 2): the converted body calls 002B0D7C with 4 arguments; the strength
 * 0.0f (s0, bits 0x00000000u) is dropped (Ghidra's 002B0D7C signature has no float parameter).
 * Rewritten to pass it to the 5-argument native func_002B0D7C. Prototype: called through the
 * state delegate with the reaction object only. Verified against EU 002AF600-002AF614. Confidence: high. */
#include "gameplay.h"

float func_002B0D7C(int self, int id, uint32_t frames, int flag, float strength);

void func_002AF624(int self_w) {
    func_002B0D7C(self_w, 9, 0, 0, gp_u2f(0x00000000u));
}
