/* USA 00291A0C <- EU 00291A34: like 00291A40 without a position:
 *   if (info[act->id].kind == 6) return 00346C4C(act->obj, NULL, power); else return 0;
 * on the player action component (the object at player+0x14): +0x42 s16 current action id, +0x48 current action object; data_007111A8 = 178 x 16-byte action-info table (built by the static initialiser 005C88D4 with the State_* names; byte 0 = action class), indexed by the action id. Reached by fall-through from 00291A04.
 * What was wrong: s0 lost (in_s0). Verified against EU 00291A34-00291A58 (mov r1, #0).
 * Confidence: high. */
#include "gameplay.h"

extern const uint8_t data_007111A8[];
int func_00346C4C(int act, float *pos, float power);

int func_00291A0C(void *ac, float power) {
    int16_t id = FLD(ac, 0x42, int16_t);
    if (data_007111A8[id * 16] != 6)
        return 0;
    return func_00346C4C((int)FLD(ac, 0x48, uint32_t), (float *)0, power);
}
