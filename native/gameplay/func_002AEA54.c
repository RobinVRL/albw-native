/* USA 002AEA54 <- EU 002AEA30: enemy damage reaction state cRT_IceKnockBack (id 0x12), ENTER
 * delegate (state table built by the ctor 002B2590).
 *   s = 0.3; switch (actor[0x895]) { case 1: case 5: s = 0; case 4: s = 0.15; }
 *   002B0D7C(self, 0x12, 0xC, 0, s)                   (tail call, strength in s0)
 * (no hit-point test, unlike the other knock-back enters).
 * What was wrong (round 2): the converted body is `func_002B0D7C(param_1,0x12,0xc,0)`: the
 * whole strength selection on actor+0x895 is gone with the lost s0 argument (Ghidra's
 * 002B0D7C signature has no float parameter). Rewritten to pass it to the 5-argument native
 * func_002B0D7C. Verified against EU 002AEA30-002AEA74. Confidence: high. */
#include "gameplay.h"

float func_002B0D7C(int self, int id, uint32_t frames, int flag, float strength);

void func_002AEA54(int self_w) {
    char *self = (char *)gp_ptr((uint32_t)self_w);
    uint8_t c = FLD(GPTR(self, 0x34, char), 0x895, uint8_t);
    uint32_t s = 0x3E99999Au;                 /* 0.3 */
    if (c == 1 || c == 5)
        s = 0x00000000u;                      /* 0.0 */
    else if (c == 4)
        s = 0x3E19999Au;                      /* 0.15 */
    func_002B0D7C(self_w, 0x12, 0xC, 0, gp_u2f(s));
}
