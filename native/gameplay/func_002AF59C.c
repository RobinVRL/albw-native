/* USA 002AF59C <- EU 002AF578: enemy damage reaction state cRT_SmallKnockBack (id 0xF), ENTER delegate (state
 * table built by the ctor 002B2590: delegates {enter, exec, exit} at self+0x18/+0x1C/+0x20).
 *   if (actor->hp (s16 actor+0x508) > 0) {          (actor = self+0x34)
 *       002AED24(self);
 *       002B0D7C(self, 0xF, 8, (s8)self[0xA4], 0.25f);    knock-back start, strength in s0
 *   } else
 *       002B193C(self, 0xF, 0.65f);                         die / launch, s0
 * What was wrong (round 2): the converted body calls 002B0D7C with 4 arguments; the strength
 * 0.25f (s0, bits 0x3E800000u) is dropped because Ghidra's signature for 002B0D7C has no float
 * parameter, so the knock-back speed was `in_s0` garbage. Rewritten to pass it to the
 * 5-argument native func_002B0D7C (native/gameplay). The 002B193C call already had its float.
 * Prototype: called through the state delegate with the reaction object only (int, as the
 * converted dispatch passes it). Verified against EU 002AF578-002AF5D4. Confidence: high. */
#include "gameplay.h"

void func_002AED24(int self);
float func_002B0D7C(int self, int id, uint32_t frames, int flag, float strength);
void func_002B193C(int self, int id, float s);

void func_002AF59C(int self_w) {
    char *self = (char *)gp_ptr((uint32_t)self_w);
    if (FLD(GPTR(self, 0x34, char), 0x508, int16_t) > 0) {
        func_002AED24(self_w);
        func_002B0D7C(self_w, 0xF, 8, FLD(self, 0xA4, int8_t), gp_u2f(0x3E800000u));
        return;
    }
    func_002B193C(self_w, 0xF, gp_u2f(0x3F266666u));
}
