/* USA 00581D60 <- EU 00581D38: SaveSlotRef::getValue() -> s32   (81 caller files)
 *   d = self[0x38]; if (!d) return -1; i = *(s16 *)(d + 0x15B40); if (i < 0) return -1;
 *   e = d + i * 0x50C + 0x183C (0x143 words per record); return e ? e[0x3C0] : -1
 * (the `movs` null test of the computed record address is kept).
 *
 * Ghidra vs ARM: correct (EU 00581D38-00581D78). Confidence: high (flow), low (names). */
#include "hot.h"

int func_00581D60(uint32_t self_w)
{
    uint32_t d = W(P(self_w), 0x38);
    if (d == 0)
        return -1;
    int32_t i = FLD(P(d), 0x15B40, int16_t);
    if (i < 0)
        return -1;
    uint32_t e = d + (uint32_t)((int32_t)i * 0x143) * 4u + 0x183C;
    if (e == 0)
        return -1;
    return (int)W(P(e), 0x3C0);
}
