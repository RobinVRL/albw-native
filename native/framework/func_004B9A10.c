/* USA 004B9A10 (EU 004B99E8): Base450::Base450(bool)   (69 caller files; actor-side base with
 * a second (IDisposer) base at +0x38, two intrusive list heads, vtable data_006EB32C)
 *   int f(Base450 *this, u8 flag);   returns this
 *   001B6E04(this) (base ctor, returns this); sead::IDisposer::IDisposer(this + 0x38, NULL, 3);
 *   vtbl +0x00 = data_006EB32C, +0x38 = data_006EB32C + 0x54 (secondary vtable);
 *   list A at +0x48: { +0x48 = +0x4C = &+0x48, +0x50 = 0 };  list B at +0x58: { +0x58 = +0x5C =
 *   &+0x58, +0x60 = 0 };  +0x68 = 2; +0x6C = 0; u8 +0x70 = flag; +0x54 = 4; +0x64 = 0x18;
 *   +0x10 = this; +0x18 |= 0x180.
 * EU 004B99E8-004B9A68. Round-2 Ghidra C: correct. Written natively for a typed, 64-bit clean
 * definition (self-links are 32-bit game words). Prototype = callers' `int f(undefined4 *,
 * undefined1)`. Confidence: high. */
#include "framework.h"

extern uint32_t data_006EB32C[];
uint32_t func_001B6E04(void *self);                                   /* base ctor */
uint32_t func_0010DA7C(void *self, void *heap, uint32_t null_option); /* sead::IDisposer ctor */

int func_004B9A10(void *self, uint8_t flag) {
    char *p = self;
    func_001B6E04(p);
    func_0010DA7C(p + 0x38, 0, 3);
    uint32_t vt = GPTR_OF(ALBW_LAUNDER(data_006EB32C));
    FLD(p, 0x00, uint32_t) = vt;
    FLD(p, 0x38, uint32_t) = vt + 0x54;
    uint32_t a = gp_u32(p + 0x48);
    FLD(p, 0x4C, uint32_t) = a;
    FLD(p, 0x50, uint32_t) = 0;
    FLD(p, 0x48, uint32_t) = a;
    uint32_t b = gp_u32(p + 0x58);
    FLD(p, 0x5C, uint32_t) = b;
    FLD(p, 0x60, uint32_t) = 0;
    FLD(p, 0x58, uint32_t) = b;
    FLD(p, 0x68, uint32_t) = 2;
    FLD(p, 0x6C, uint32_t) = 0;
    FLD(p, 0x70, uint8_t) = flag;
    FLD(p, 0x54, uint32_t) = 4;
    FLD(p, 0x64, uint32_t) = 0x18;
    FLD(p, 0x10, uint32_t) = gp_u32(p);
    FLD(p, 0x18, uint32_t) |= 0x180;
    return (int)gp_u32(p);
}
