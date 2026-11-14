/* USA 004C07D8 <- EU 004C07B0: Actor::resetTargetIds()   (164 caller files)
 *   self[0x858] = 0; self[0x85F] = 0; (u16)self[0x904..0x90E] = 0xFFFF (six ids)
 * Return: r0 = self + 0x900 (left by the `add r0, r0, #0x900`), unused.
 * Matched source rejected by the matched-ABI check -> Ghidra C (correct). Verified EU
 * 004C07B0-004C07DC. Confidence: high (flow), low (name). */
#include "hot.h"

int func_004C07D8(uint32_t self_w)
{
    char *self = P(self_w);
    FLD(self, 0x858, uint8_t) = 0;
    FLD(self, 0x85F, uint8_t) = 0;
    for (int o = 0x904; o <= 0x90E; o += 2)
        FLD(self, o, uint16_t) = 0xFFFF;
    return (int)(self_w + 0x900);
}
