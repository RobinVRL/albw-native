/* USA 001512B4 <- EU 001512B4: ColliderRef::setPosWithOffset(const Vec3 *pos)  (101 caller files)
 *   c = self[0x1C]; tmp = *pos + self[4..0xC] (00115C54 Vec3::setAdd(out, a, b));
 *   c[0x88..0x90] = tmp (word copy); c[0xA0] = 1 (dirty); return 1 (r0 of the last `mov`)
 *
 * Ghidra vs ARM: correct (EU 001512B4-001512E4). Confidence: high (flow), low (names). */
#include "hot.h"

int func_00115C54(float *out, float *a, float *b);

int func_001512B4(uint32_t self_w, uint32_t pos_w)
{
    float *pos = (float *)P(pos_w);
    char *self = P(self_w);
    char *c = P(W(self, 0x1C));
    uint32_t tmp[3];
    func_00115C54((float *)tmp, pos, (float *)(self + 4));
    W(c, 0x88) = tmp[0];
    W(c, 0x8C) = tmp[1];
    W(c, 0x90) = tmp[2];
    FLD(c, 0xA0, uint8_t) = 1;
    return 1;
}
