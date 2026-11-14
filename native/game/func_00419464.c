/* USA 00419464 (EU 00419444): constructor: base ctor 004195B4(this), vtable 006F0788 (+0x30 /
 * +0x44 secondary vtables at +0x44 / +0x50), sub-object 0040FA80(this+0x78, ...), fields
 * cleared, +0xB8 = -1. Returns this.
 * Native fix of the matched source (src/work8/lead/matched_1020/00419464.c): it was written
 * as `unsigned f(void)` calling 004195B4() with no argument (on ARM `this` stays in r0), so
 * natively the base ctor wrote through a stale stack value. Confidence: high. */
#include <stdint.h>

extern char data_006F0788[];
uint8_t *func_004195B4(uint8_t *self);
void func_0040FA80(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

#define U32(o) (*(uint32_t *)(t + (o)))

uint8_t *func_00419464(uint8_t *self)
{
    uint8_t *t = func_004195B4(self);
    uint32_t vt = (uint32_t)(uintptr_t)data_006F0788;
    U32(0x48) = 0;
    U32(0x4C) = 0;
    U32(0x54) = 0;
    U32(0x58) = 0;
    U32(0x44) = vt + 0x30;
    U32(0x50) = vt + 0x44;
    U32(0x00) = vt;
    func_0040FA80((uint32_t)(uintptr_t)(t + 0x78), vt + 0x30, vt + 0x44, vt);
    t[0x8C] = t[0x8D] = t[0x8E] = t[0x8F] = t[0x90] = 0;
    t[0xA1] = t[0xA2] = 0;
    U32(0xA4) = U32(0xA8) = U32(0xAC) = U32(0xB0) = U32(0xB4) = 0;
    U32(0xB8) = 0xFFFFFFFFu;
    U32(0xBC) = 0;
    U32(0xC0) = 0;
    return t;
}
