/* USA 004EDC9C (EU 004EDC74): Model::Model()  (0x48-byte bcl model holder, 116 caller files)
 *   int f(Model *this);   returns this
 *   sead::IDisposer::IDisposer(this, NULL, 3) (0010DA7C); vtbl = data_006ED880;
 *   +0x10 = +0x14 = +0x18 = 0; +0x1C = 1; +0x20 = 0; s16 +0x24 = 0; +0x28 = 0; s16 +0x2C = 0xFF;
 *   +0x30 = +0x34 = 0; +0x38 = this (self-link); +0x3C = +0x40 = 0; u8 +0x44 = 1.
 * EU 004EDC74-004EDCD0. Round-2 Ghidra C: correct. Written natively for a typed, 64-bit clean
 * definition (the +0x38 self pointer is a 32-bit game word). Confidence: high. */
#include "framework.h"

extern uint32_t data_006ED880[];
uint32_t func_0010DA7C(void *self, void *heap, uint32_t null_option); /* sead::IDisposer ctor */

int func_004EDC9C(void *self) {
    char *p = self;
    func_0010DA7C(p, 0, 3);
    FLD(p, 0x10, uint32_t) = 0;
    FLD(p, 0x00, uint32_t) = GPTR_OF(ALBW_LAUNDER(data_006ED880));
    FLD(p, 0x14, uint32_t) = 0;
    FLD(p, 0x18, uint32_t) = 0;
    FLD(p, 0x1C, uint32_t) = 1;
    FLD(p, 0x20, uint32_t) = 0;
    FLD(p, 0x24, uint16_t) = 0;
    FLD(p, 0x28, uint32_t) = 0;
    FLD(p, 0x2C, uint16_t) = 0xFF;
    FLD(p, 0x30, uint32_t) = 0;
    FLD(p, 0x34, uint32_t) = 0;
    FLD(p, 0x38, uint32_t) = gp_u32(p);
    FLD(p, 0x3C, uint32_t) = 0;
    FLD(p, 0x40, uint32_t) = 0;
    FLD(p, 0x44, uint8_t) = 1;
    return (int)gp_u32(p);
}
