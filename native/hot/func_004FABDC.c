/* USA 004FABDC <- EU 004FABB4: EnemyBase::playAnim(u32 id, s32 frames, bool force) -> bool
 * (428 caller files: every enemy state that starts an animation)
 *   if (!force && (st = self[0x5A0]) bit 11 set (`lsl #20` sign)) return 0;
 *   enemy_play_anim(self, id, frames, force) (animplay.h); return 1
 *
 * Ghidra vs ARM (round-2 conversion), real bugs:
 *  1. the override object's virtual vt[0] is called with NO arguments
 *     (`(**(code **)**(self + 0x81c))()`): ARM passes (obj, id, frames, force) -> `this` and
 *     all arguments dropped;
 *  2. the AnimReq pointer passed to 0016898C is 002C11E8's return value, but the linked
 *     002C11E8 (native/robust) is `void` and gets no returns-this thunk -> garbage request
 *     pointer; here the stack buffer itself is passed (002C11E8 returns it on ARM).
 * Verified EU 004FABB4-004FAC44. Confidence: high (flow), medium (names). */
#include "animplay.h"

int func_004FABDC(uint32_t self_w, uint32_t id, int32_t frames, uint32_t force)
{
    char *self = P(self_w);
    if (force == 0 && (int32_t)(W(self, 0x5A0) << 20) < 0)
        return 0;
    enemy_play_anim(self, id, frames, force);
    return 1;
}
