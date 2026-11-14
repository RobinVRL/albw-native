/* USA 0028FBF8 <- EU 0028FC20: forward to the class-0xB action:
 *   if (info[act->id].kind == 0xB && act->obj) 00377820(act->obj, p);
 * on the player action component (the object at player+0x14): +0x42 s16 current action id, +0x48 current action object; data_007111A8 = 178 x 16-byte action-info table (built by the static initialiser 005C88D4 with the State_* names; byte 0 = action class), indexed by the action id. Reached by fall-through from 0028FBF0.
 * Verified against EU 0028FC20-0028FC44. Confidence: high. */
#include "gameplay.h"

extern const uint8_t data_007111A8[];
int func_00377820(int act, float *p);

void func_0028FBF8(void *ac, float *p) {
    int16_t id = FLD(ac, 0x42, int16_t);
    if (data_007111A8[id * 16] != 0xB)
        return;
    uint32_t obj = FLD(ac, 0x48, uint32_t);
    if (obj == 0)
        return;
    func_00377820((int)obj, p);
}
