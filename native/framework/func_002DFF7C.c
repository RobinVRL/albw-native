/* USA 002DFF7C (EU 002DFF58): SpawnParam::reset()   (102 caller files)
 *   int f(SpawnParam *this);   r0 on return = this + 0x10 (the add for the stm base; no caller
 *   is known to use it, kept for exactness)
 *   __aeabi_memclr4(this, 0x2C4); s16 +0x54 = +0x50 = +0x52 = +0x56 = -1;
 *   +0x10..+0x1B = the 3 words at data_007A9254 (default Vec3, read at run time).
 * EU 002DFF58-002DFF94. Round-2 Ghidra C: correct (incl. the this+0x10 result). Written natively
 * for a typed, 64-bit clean definition; memclr4 is done with memset (identical bytes).
 * Confidence: high. */
#include "framework.h"

extern uint32_t data_007A9254[];

int func_002DFF7C(void *self) {
    char *p = self;
    memset(p, 0, 0x2C4);
    FLD(p, 0x54, int16_t) = -1;
    FLD(p, 0x50, int16_t) = -1;
    FLD(p, 0x52, int16_t) = -1;
    FLD(p, 0x56, int16_t) = -1;
    uint32_t a = data_007A9254[0], b = data_007A9254[1], c = data_007A9254[2];
    FLD(p, 0x18, uint32_t) = c;
    FLD(p, 0x10, uint32_t) = a;
    FLD(p, 0x14, uint32_t) = b;
    return (int)gp_u32(p + 0x10);
}
