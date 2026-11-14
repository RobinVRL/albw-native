/* USA 0012C790 <- EU 0012C790: StateFlag::onEvent()   (87 caller files; a small {mode s8 @+0xD,
 * state u8 @+0xE} state pair embedded in many objects)
 *   m = (s8)self[0xD]; s = self[0xE];
 *   if (m == 1 || (m == 3 && s == 3)) self[0xE] = (m == 3 && s == 3) ? 4 : 2;
 *   else if (m == 0 && s == 1)        self[0xE] = 0;
 *   return self (r0 untouched)
 *
 * Ghidra vs ARM: correct (EU 0012C790-0012C7E4; `*(char *)` is signed on the x86 build, as the
 * ARM ldrsb). Confidence: high (flow), low (name). */
#include "hot.h"

int func_0012C790(uint32_t self_w)
{
    char *self = P(self_w);
    int32_t m = FLD(self, 0xD, int8_t);
    if (m == 1 || (m == 3 && FLD(self, 0xE, uint8_t) == 3)) {
        FLD(self, 0xE, uint8_t) = (m == 3 && FLD(self, 0xE, uint8_t) == 3) ? 4 : 2;
    } else if (m == 0 && FLD(self, 0xE, uint8_t) == 1) {
        FLD(self, 0xE, uint8_t) = 0;
    }
    return (int)self_w;
}
