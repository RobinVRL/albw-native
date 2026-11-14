/* USA 0038E8C8 <- EU 0038E8A4: player wall-merge action, EXIT (vtable slot +0x18 of the
 * wall-merge action class, vptr data_006E6D78; see func_0038E13C.c). Called as
 * vt[+0x18](self, next_id) (EU 002914AC); ARM live-in r0 only.
 *   if (self+0xA4 (u8) != 0) { 0038E900(self, (s8)self[0xA5], (s8)self[0xA6]); a4 = a5 = a6 = 0; }
 * Returns r0 = 0 on both paths (the loaded flag / the stored zero).
 *
 * Round 2: correct (ldrsb as `(int)*(char *)`, signed char on x86 too); rewritten so the action's
 * three slots are one consistent unit with the int-word `self` of the other two.
 * Verified against EU 0038E8A4-0038E8D8. Confidence: high. */
#include "gameplay.h"

int func_0038E900(int param_1, unsigned param_2, unsigned param_3);   /* round-2 definition */

int func_0038E8C8(uint32_t self_w) {
    char *self = (char *)gp_ptr(self_w);
    if (FLD(self, 0xA4, uint8_t) == 0)
        return 0;
    func_0038E900((int)self_w, (unsigned)(int32_t)FLD(self, 0xA5, int8_t),
                  (unsigned)(int32_t)FLD(self, 0xA6, int8_t));   /* ldrsb */
    FLD(self, 0xA4, uint8_t) = 0;
    FLD(self, 0xA5, uint8_t) = 0;
    FLD(self, 0xA6, uint8_t) = 0;
    return 0;
}
