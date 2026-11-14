/* USA 004BC7BC <- EU 004BC794: Actor::hideModel() (once)   (117 caller files)
 *   if (self[0x860]) return;  self[0x860] = 1;
 *   004CF478(self[0x7A0], 0)  (main model draw state off; r2 = 0 passed along, unused)
 *   self[0x919] = 1;  if (self[0x7A4]) 004CF478(self[0x7A4], 0)   (second model)
 *   if (self[0x78C]) 00151148(self[0x78C], 0)
 *   if (self + 0x410 != 0) self[0x471] = 0      (`adds/strbne`: compiler's null check of an
 *                                                embedded base pointer)
 *   if (self[0x86C]) self[0x86C][0x44] = 0
 *   self[0x3DC..0x3E4] = 0.0f (velocity); (u16)self[0x84C] = (u16)self[0x84E] = 0
 * Return (r0, no reader): the nonzero flag byte on the early exit, else 0.
 *
 * Ghidra vs ARM: correct (EU 004BC794-004BC820). Confidence: high (flow), low (name). */
#include "hot.h"

int func_004CF478(uint32_t model, int32_t state);
float func_00151148(int obj, int arg);   /* converted definition returns float (tail call 002C34A4) */

int func_004BC7BC(uint32_t self_w)
{
    char *self = P(self_w);
    uint8_t f = FLD(self, 0x860, uint8_t);
    if (f != 0)
        return f;
    FLD(self, 0x860, uint8_t) = 1;
    func_004CF478(W(self, 0x7A0), 0);
    FLD(self, 0x919, uint8_t) = 1;
    if (W(self, 0x7A4) != 0)
        func_004CF478(W(self, 0x7A4), 0);
    if (W(self, 0x78C) != 0)
        func_00151148((int)W(self, 0x78C), 0);
    if (self_w + 0x410 != 0)
        FLD(self, 0x471, uint8_t) = 0;
    uint32_t o = W(self, 0x86C);
    if (o != 0)
        FLD(P(o), 0x44, uint8_t) = 0;
    F(self, 0x3DC) = 0.0f;
    F(self, 0x3E0) = 0.0f;
    F(self, 0x3E4) = 0.0f;
    FLD(self, 0x84C, uint16_t) = 0;
    FLD(self, 0x84E, uint16_t) = 0;
    return 0;
}
