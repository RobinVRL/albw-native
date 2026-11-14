/* USA 002917DC <- EU 00291804: PlayerAction::onHitNoPos(flag, power) on the player action component (the object at player+0x14): +0x42 s16 current action id, +0x48 current action object; data_007111A8 = 178 x 16-byte action-info table (built by the static initialiser 005C88D4 with the State_* names; byte 0 = action class), indexed by the action id.
 *   if (info[act->id].kind == 2) return 0031EDC4(act->obj, NULL, flag, power); else return 0;
 * (r2 = r1, r1 = 0: the class-2 hit reaction without an attacker position; 0031EDC4 then uses
 * the action's own direction.) Reached by fall-through from 002917D4.
 * What was wrong: s0 (strength) lost (in_s0). Verified against EU 00291804-0029182C.
 * Confidence: high. */
#include "gameplay.h"

extern const uint8_t data_007111A8[];
int func_0031EDC4(int act, float *pos, uint8_t flag, float power);

int func_002917DC(void *ac, uint8_t flag, float power) {
    int16_t id = FLD(ac, 0x42, int16_t);
    if (data_007111A8[id * 16] != 2)
        return 0;
    return func_0031EDC4((int)FLD(ac, 0x48, uint32_t), (float *)0, flag, power);
}
