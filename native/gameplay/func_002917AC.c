/* USA 002917AC <- EU 002917D4: PlayerAction::onHit(pos, flag, power) on the player action component (the object at player+0x14): +0x42 s16 current action id, +0x48 current action object; data_007111A8 = 178 x 16-byte action-info table (built by the static initialiser 005C88D4 with the State_* names; byte 0 = action class), indexed by the action id.
 *   if (info[act->id].kind == 2) return 0031EDC4(act->obj, pos, flag, power); else return 0;
 * 0031EDC4 is the class-2 action's hit/knock-back reaction (reads the attacker position, the
 * flag byte at +0x158 and the strength; "RollCut" special case). Reached by fall-through from
 * the wrapper 002917A4 (39 enemy callers: pos = enemy+0x3D0, flag = 0).
 *
 * What was wrong: Ghidra gave it 3 params (r0-r2) and lost s0 (in_s0): the strength passed on
 * was an uninitialised float.
 * Verified against EU 002917D4-002917F4: ldrsh [r0,#0x42]; ldrb [tbl, id, lsl #4]; cmp #2;
 * movne r0,#0 / bx lr; else r0 = [r0,#0x48], tail b 0031EDC4 with r1, r2, s0 untouched.
 * Confidence: high. */
#include "gameplay.h"

extern const uint8_t data_007111A8[];
int func_0031EDC4(int act, float *pos, uint8_t flag, float power);

int func_002917AC(void *ac, float *pos, uint8_t flag, float power) {
    int16_t id = FLD(ac, 0x42, int16_t);
    if (data_007111A8[id * 16] != 2)
        return 0;
    return func_0031EDC4((int)FLD(ac, 0x48, uint32_t), pos, flag, power);
}
