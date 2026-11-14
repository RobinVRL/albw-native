/* USA 0028F270 <- EU 0028F298: forward to the class-0xB action (if it exists):
 *   if (info[act->id].kind == 0xB && act->obj) 003776F8(act->obj, r1, r2, r3);
 * on the player action component (the object at player+0x14): +0x42 s16 current action id, +0x48 current action object; data_007111A8 = 178 x 16-byte action-info table (built by the static initialiser 005C88D4 with the State_* names; byte 0 = action class), indexed by the action id. Returns nothing meaningful (r0 is left as act or act->obj; 003776F8 is void and
 * no caller reads r0). Reached by fall-through from 0028F268.
 * What was wrong: nothing in this half (r1-r3 are its params); see 0028F268.
 * Verified against EU 0028F298-0028F2C8 (push {r4,r5} only to free r4/ip). Confidence: high. */
#include "gameplay.h"

extern const uint8_t data_007111A8[];
int func_003776F8(int act, float *a1, int a2, int a3);

void func_0028F270(void *ac, float *a1, int a2, int a3) {
    int16_t id = FLD(ac, 0x42, int16_t);
    if (data_007111A8[id * 16] != 0xB)
        return;
    uint32_t obj = FLD(ac, 0x48, uint32_t);
    if (obj == 0)
        return;
    func_003776F8((int)obj, a1, a2, a3);
}
