/* USA 004BFF60 <- EU 004BFF38: Actor::setPath(u8 a, u8 b, u8 c, u8 d, u32 e, Path *p, f32 f)
 * (53 caller files; d, e, p are stack arguments, f in s0)
 *   bytes self[0x7E7..0x7EA] = a, b, c, d; self[0x7E0] = f; self[0x7D4] = e (bit copy through
 *   s1); 001E686C(self + 0x7C4, p); self[0x7EB] = 1 & ~(self[0x8AC] >> 13);
 *   self[0x3DC..0x3E4] = 0.0f
 * Ghidra vs ARM: correct (EU 004BFF38-004BFF94). Confidence: high (flow), medium (names). */
#include "hot.h"

int func_001E686C(int path, uint32_t *p);

int func_004BFF60(uint32_t self_w, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e,
                  uint32_t p, float f)
{
    char *self = P(self_w);
    FLD(self, 0x7E7, uint8_t) = (uint8_t)a;
    FLD(self, 0x7E8, uint8_t) = (uint8_t)b;
    FLD(self, 0x7E9, uint8_t) = (uint8_t)c;
    FLD(self, 0x7EA, uint8_t) = (uint8_t)d;
    F(self, 0x7E0) = f;
    W(self, 0x7D4) = e;
    func_001E686C((int)(self_w + 0x7C4), (uint32_t *)P(p));
    FLD(self, 0x7EB, uint8_t) = (uint8_t)(1u & ~(W(self, 0x8AC) >> 13));
    F(self, 0x3DC) = 0.0f;
    F(self, 0x3E0) = 0.0f;
    F(self, 0x3E4) = 0.0f;
    return 0;
}
