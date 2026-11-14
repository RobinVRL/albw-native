/* USA 004EE484 <- EU 004EE45C: Obj6ED898::Obj6ED898() -> this   (96 caller files; an embedded
 * 0x64-byte member object: base 0010DA7C(this, 0, 3), vtable data_006ED898, two empty lists)
 *   t = 0010DA7C(this, 0, 3); t[0] = data_006ED898; t[0x10] = t[0x14] = 0; (u16)t[0x18] = 0xFF;
 *   t[0x1C] = 0; bytes t[0x20] = 0x0F, t[0x21] = t[0x22] = 0xFF; (u16)t[0x30] = 0;
 *   t[0x34] = 1.0f; t[0x38] = 0; t[0x3C] = 1.0f; t[0x40] = t[0x44] = 0;
 *   t[0x48] = t, t[0x4C] = 0, t[0x50] = t[0x54] = 0, t[0x58] = t, t[0x5C] = 0;
 *   bytes t[0x60] = 0, t[0x61] = 1; then t[0x20] = 0, t[0x21] = 0x1F, t[0x23] = 0 (the byte
 *   fields are written twice, as on ARM); t[0x24..0x2C] = 0.0f; (u16)t[0x32] = 0xFFFF
 *   return t (r0 = the base ctor's return)
 *
 * Ghidra vs ARM: correct (EU 004EE45C-004EE508); Ghidra returns param_1 instead of the base
 * ctor's r0 (the same value: 0010DA7C returns its this). Confidence: high (flow), low (name). */
#include "hot.h"

extern char data_006ED898[];

int func_0010DA7C(uint32_t *self, uint32_t a, int b);

int func_004EE484(uint32_t self_w)
{
    uint32_t tw = (uint32_t)func_0010DA7C((uint32_t *)P(self_w), 0, 3);
    char *t = P(tw);
    W(t, 0x00) = DATA_W(data_006ED898);
    W(t, 0x10) = 0;
    W(t, 0x14) = 0;
    FLD(t, 0x18, uint16_t) = 0xFF;
    W(t, 0x1C) = 0;
    FLD(t, 0x20, uint8_t) = 0x0F;
    FLD(t, 0x21, uint8_t) = 0xFF;
    FLD(t, 0x22, uint8_t) = 0xFF;
    FLD(t, 0x30, uint16_t) = 0;
    F(t, 0x34) = 1.0f;
    W(t, 0x38) = 0;
    F(t, 0x3C) = 1.0f;
    W(t, 0x40) = 0;
    W(t, 0x44) = 0;
    W(t, 0x48) = tw;
    W(t, 0x4C) = 0;
    W(t, 0x50) = 0;
    W(t, 0x54) = 0;
    W(t, 0x58) = tw;
    W(t, 0x5C) = 0;
    FLD(t, 0x60, uint8_t) = 0;
    FLD(t, 0x61, uint8_t) = 1;
    FLD(t, 0x20, uint8_t) = 0;
    FLD(t, 0x21, uint8_t) = 0x1F;
    FLD(t, 0x23, uint8_t) = 0;
    F(t, 0x24) = 0.0f;
    F(t, 0x28) = 0.0f;
    F(t, 0x2C) = 0.0f;
    FLD(t, 0x32, uint16_t) = 0xFFFF;
    return (int)tw;
}
