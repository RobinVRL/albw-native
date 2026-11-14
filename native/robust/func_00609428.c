/* USA 00609428 <- EU 00609400: create an actor (0x41C bytes) from its placement params:
 *   o = operator new(0x41C) (0010BAB4); if (!o) return NULL;
 *   o = 00150E40(o, params)                 (base actor ctor, returns this)
 *   o->vtbl = data_006E5DA4; o->[0x320] = data_006E5DA4 + 0x54 (second vtable)
 *   o->[0x40C] (byte) = 0;
 *   o->[0x410] = 0054D964(o, 0);            (effect slot 0)
 *   o->[0x414] = (u32)(s64)((float)o->s16[0x2C] * 0.01f * 11930465.0f)
 *                                          (degrees*100 -> 32-bit angle; 00114608 = __aeabi_f2lz)
 *   o->[0x418] = o->[0x48];
 *   004356B4(o->[0x410]); return o;
 *
 * What was wrong:
 *  - 00114608 is the float -> int64 runtime helper (softfp: float BITS in r0, int64 in r0:r1).
 *    Ghidra declared it (uint, uint) and passed `(uint)(value)` (a numeric float->uint
 *    conversion, not the bits) plus a garbage `extraout_r1`; natively the angle was wrong.
 *    Here it is the C conversion (int64_t)f, low word kept (only r0 is stored).
 *  - `fparam_0` (forwarded to 0054D964) is phantom: s0 is not set before that call and
 *    0054D964 takes no float (its own fparam_0 is the unmodelled float return of 0054DE54).
 *    0054D964 is called with its real 2 arguments (native/robust/func_0054D964.c).
 *
 * Verified against EU 00609400-00609494 (ldrsh for +0x2C, constants 0.01 = 0x3C23D70A and
 * 0x4B360B61 = 11930465.0f, r5 = o+4 so [r5,#0x44] is +0x48). Confidence: high. */
#include "robust.h"

void *func_0010BAB4(uint32_t size);
void *func_00150E40(void *self, void *params);
void *func_0054D964(void *self, uint32_t index);       /* native/robust */
void func_004356B4(void *obj);
extern char data_006E5DA4[];  /* vtable */

void *func_00609428(void *params) {
    char *o = func_0010BAB4(0x41C);
    if (o == NULL)
        return NULL;
    o = func_00150E40(o, params);
    FLD(o, 0x000, void *) = data_006E5DA4;
    FLD(o, 0x320, void *) = data_006E5DA4 + 0x54;
    FLD(o, 0x40C, uint8_t) = 0;
    FLD(o, 0x410, void *) = func_0054D964(o, 0);
    FLD(o, 0x414, uint32_t) = 0;
    float f = (float)FLD(o, 0x2C, int16_t);
    f = f * 0.01f;                          /* 0x3C23D70A */
    f = f * 11930465.0f;                    /* 0x4B360B61 */
    FLD(o, 0x414, uint32_t) = (uint32_t)(int64_t)f;
    FLD(o, 0x418, uint32_t) = FLD(o, 0x48, uint32_t);
    func_004356B4(FLD(o, 0x410, void *));
    return o;
}
