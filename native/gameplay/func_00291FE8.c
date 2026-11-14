/* USA 00291FE8 <- EU 00292010: forward to the class-0x17 action:
 *   if (info[act->id].kind == 0x17) return 0038C2E8(act->obj, pos, power); else return 0;
 * on the player action component (the object at player+0x14): +0x42 s16 current action id, +0x48 current action object; data_007111A8 = 178 x 16-byte action-info table (built by the static initialiser 005C88D4 with the State_* names; byte 0 = action class), indexed by the action id. Reached by fall-through from 00291FE0.
 * What was wrong: s0 lost (in_s0). Verified against EU 00292010-00292030. Confidence: high. */
#include "gameplay.h"

extern const uint8_t data_007111A8[];
int func_0038C2E8(int act, float *pos, float power);

int func_00291FE8(void *ac, float *pos, float power) {
    int16_t id = FLD(ac, 0x42, int16_t);
    if (data_007111A8[id * 16] != 0x17)
        return 0;
    return func_0038C2E8((int)FLD(ac, 0x48, uint32_t), pos, power);
}
