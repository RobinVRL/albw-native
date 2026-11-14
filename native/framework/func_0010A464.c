/* USA 0010A464 (EU 0010A464): constructor of an IDisposer-derived framework object
 * (vtable data_006D68BC, 71 caller files; identity of the class not named yet).
 *   int f(Obj *this);   returns this
 *   sead::IDisposer::IDisposer(this, NULL, HeapNullOption 3) (0010DA7C); vtbl = data_006D68BC;
 *   +0x10 = +0x14 = +0x2C = +0x30 = 0; +0x34 = +0x38 = +0x3C = +0x40 = -1; +0x44 = +0x48 = +0x4C
 *   = 0; u8 +0x50 = 0; u8 +0x51 = 0xFF; +0x58 = 0.  (+0x18..+0x28, +0x52..+0x57 untouched)
 * EU 0010A464-0010A4C4 (str through r0 written back to this+0x14). Round-2 Ghidra C: correct.
 * Written natively for a typed, 64-bit clean definition; `this` is used directly after the base
 * constructor (it returns this: native/returns_this.json). Confidence: high. */
#include "framework.h"

extern uint32_t data_006D68BC[];
uint32_t func_0010DA7C(void *self, void *heap, uint32_t null_option); /* sead::IDisposer ctor */

int func_0010A464(void *self) {
    char *p = self;
    func_0010DA7C(p, 0, 3);
    FLD(p, 0x00, uint32_t) = GPTR_OF(ALBW_LAUNDER(data_006D68BC));
    FLD(p, 0x10, uint32_t) = 0;
    FLD(p, 0x14, uint32_t) = 0;
    FLD(p, 0x2C, uint32_t) = 0;
    FLD(p, 0x30, uint32_t) = 0;
    FLD(p, 0x34, int32_t) = -1;
    FLD(p, 0x38, int32_t) = -1;
    FLD(p, 0x3C, int32_t) = -1;
    FLD(p, 0x44, uint32_t) = 0;
    FLD(p, 0x40, int32_t) = -1;
    FLD(p, 0x48, uint32_t) = 0;
    FLD(p, 0x4C, uint32_t) = 0;
    FLD(p, 0x50, uint8_t) = 0;
    FLD(p, 0x51, uint8_t) = 0xFF;
    FLD(p, 0x58, uint32_t) = 0;
    return (int)gp_u32(p);
}
