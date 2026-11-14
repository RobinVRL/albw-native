/* USA 0014E428 <- EU 0014E428: actor "create effect/handle" wrapper:
 *     r = 0014DF18(self->[0x2D0], a, b, c, e, f);
 *     if (store) self->[0x34C] = r;
 *     return r;
 * Arguments: r0 self, r1 a, r2 b, r3 c, stack: store (+0), e (+4), f (+8).
 *
 * What was wrong: Ghidra typed it `void`, but r0 still holds 0014DF18's result at the `pop {pc}`
 * (only `strne r0, [r4, #0x34C]` touches it), and 137 Ghidra functions use the return value
 * (e.g. 002E0274 stores it at +0x47C). Natively they read garbage. Same parameter order as the
 * linked Ghidra signature, so existing callers stay ABI-compatible.
 *
 * Verified against EU 0014E428-0014E45C (stack args: ldm [sp+0x18] -> r5 = store, ip = e;
 * [sp+0x20] = f; passed to 0014DF18 as its 5th/6th stack arguments). Confidence: high. */
#include "robust.h"

void *func_0014DF18(void *mgr, uint32_t a, int32_t b, uint32_t c, uint8_t e, uint8_t f);

void *func_0014E428(char *self, uint32_t a, int32_t b, uint32_t c, int32_t store, uint8_t e, uint8_t f) {
    void *r = func_0014DF18(FLD(self, 0x2D0, void *), a, b, c, e, f);
    if (store != 0)
        FLD(self, 0x34C, void *) = r;
    return r;
}
