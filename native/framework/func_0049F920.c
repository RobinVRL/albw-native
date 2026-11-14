/* USA 0049F920 (EU 0049F8F8): sead::TaskBase::CreateArg ctor variant (on the boot path:
 * 004ECA48 and 0048E718 build the root/prepare task arguments with it)
 *   int f(CreateArg *this, const TaskClassID *cls);   returns this
 *   001031B4(this, cls)  (base CreateArg ctor: 8-byte class id, 4 x 0x14 method slots at +8,
 *                         +0x58.. cleared, +0x74 = -1, +0x78 = 1; returns this);
 *   n = *(s32 *)data_0079E048 (number of method trees);
 *   for (i = 0; i < n; i++) slot(i).+0x10 (u8) = 1;          slot(i) = this + 8 + i * 0x14
 *   t = this->+0x58; n = *data_0079E048 (re-read);
 *   if (t < (u32)n) { for (i = 0; i < n; i++) slot(i).+0x12 (u8) = (t != i);  this->+0x58 = t; }
 *   u8 this->+0x78 = 0.
 * Both loops run only for n > 0 (signed: `cmp r1,#0; ble`), the range test is unsigned (bhs).
 * Round-2 Ghidra C: correct, but typed `void` (ARM r0 = this) and its 2nd parameter is a 32-bit
 * `undefined4` in the callers' prototype: taken as uint32_t (M64PTR-safe).
 * The base ctor 001031B4 is the boot agent's native/game/func_001031B4.c (2 parameters).
 * Verified against EU 0049F8F8-0049F980. Confidence: high. */
#include "framework.h"

extern int32_t data_0079E048;
uint32_t func_001031B4(void *self, void *cls);

int func_0049F920(void *self, uint32_t cls_w) {
    char *p = self;
    func_001031B4(p, gp_ptr(cls_w));
    char *slots = p + 8;
    int32_t n = data_0079E048;
    for (int32_t i = 0; i < n; i++)
        FLD(slots + i * 0x14, 0x10, uint8_t) = 1;
    uint32_t t = FLD(p, 0x58, uint32_t);
    n = data_0079E048;
    if (t < (uint32_t)n) {
        for (int32_t i = 0; i < n; i++)
            FLD(slots + i * 0x14, 0x12, uint8_t) = (t != (uint32_t)i);
        FLD(p, 0x58, uint32_t) = t;
    }
    FLD(p, 0x78, uint8_t) = 0;
    return (int)gp_u32(p);
}
