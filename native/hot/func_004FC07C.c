/* USA 004FC07C <- EU 004FC054: EnemyBase::changeAnim(u32 id, s32 frames, bool force) -> bool
 * (236 caller files): like 004FABDC, but a no-op (except clearing the ride flag) when `id` is
 * already the current animation:
 *   cur = self[0x410] ? *self[0x410][0x14] : 0      (SkelAnim layer 0 anim id)
 *   if (cur == id) { if (force || !(self[0x5A0] bit 11)) clear bit 0 of (u16)self[0x510][0x38];
 *                    return 0; }
 *   if (!force && self[0x5A0] bit 11) return 0;
 *   enemy_play_anim(self, id, frames, force) (animplay.h); return 1
 *
 * Ghidra vs ARM: same two bugs as 004FABDC (override virtual called without this/arguments;
 * AnimReq pointer taken from the void native 002C11E8). Verified EU 004FC054-004FC12C.
 * Confidence: high (flow), medium (names). */
#include "animplay.h"

int func_004FC07C(uint32_t self_w, uint32_t id, int32_t frames, uint32_t force)
{
    char *self = P(self_w);
    uint32_t sk = W(self, 0x410);
    uint32_t cur = sk ? W(P(W(P(sk), 0x14)), 0) : 0;
    if (cur == id) {
        if (force != 0 || (int32_t)(W(self, 0x5A0) << 20) >= 0) {
            char *r = P(W(self, 0x510));
            FLD(r, 0x38, uint16_t) = FLD(r, 0x38, uint16_t) & ~1u;
        }
        return 0;
    }
    if (force == 0 && (int32_t)(W(self, 0x5A0) << 20) < 0)
        return 0;
    enemy_play_anim(self, id, frames, force);
    return 1;
}
