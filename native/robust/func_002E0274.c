/* USA 002E0274 <- EU 002E0250: actor constructor (derived from the 001E4414 base; vtables
 * data_006DD918 / +0x5C). Called as ctor(self, params, r2, r3) by derived classes (002C6868 ...).
 *
 *   base ctor 001E4414(self, params, r2, r3); set vtables;
 *   self->f[0x498] = 0054DE3C(self, 0, 1);            half height of shape entry 0 (float)
 *   self->[0x49C]  = 0054D964(self, 0);               attached shape object
 *   self->[0x4A0..0x4AC] = { &data_006F49BC, self, data_006942F4[0], data_006942F4[1] }  (delegate)
 *   self->f[0x4B0..0x4B8] = data_007A9260 (Vec3); self->[0x4BC] = self->[0x4BD] = 0;
 *   if (type(self) is data_00693328 or data_00693334) { if (00588BF0(self,1) && !self->u16[0x30]) -> hidden }
 *   else if (00588BF0(self,1)) -> hidden
 *   hidden: 00547514(self + 4); self->[0x2D7] = 1; return self;
 *   else: 0014EB3C(self); dir = self->f[0x374..0x37C]; normalise (00115DC8); dir *= 0.15;
 *         003249E0(self, 0); 00324964(self); self->[0x47C] = 0014E428(self, 1, 0, 0, 1, 0, 0);
 *         003249B4(self); return self;
 *
 * What was wrong: 0054DE3C (float in s0) was decompiled as void(void), so Ghidra turned its
 * result into a phantom float parameter `fparam_0` of this constructor: the stored height was the
 * caller's garbage `in_s0` (002C6868 and the other derived constructors pass an uninitialised
 * float), and the same phantom went to 0054D964. Fixed together with native/robust/
 * func_0054DE3C.c / func_0054DE54.c / func_0054D964.c. Callers that still pass the phantom float
 * (5th argument) are harmless: it is ignored here.
 *
 * Verified against EU 002E0250-002E03EC: pool words 002E03F0 (vtable), 002E03F4 data_006942F4,
 * 002E03F8 data_006F49BC, 002E03FC data_007A9260, 002E0400 data_00693328, 002E0404
 * data_00693334, 002E0408 0.15f; `stm r1, {r0, r4}` stores {&data_006F49BC, self} at +0x4A0;
 * the not-hidden path branches to 002E0368, skipping the [0x2D7] store; 0014E428 stack args
 * are [sp]=1, [sp+4]=0, [sp+8]=0. Confidence: high. */
#include <stdbool.h>
#include "robust.h"

extern char data_006DD918[];   /* vtable */
extern char data_006F49BC[];   /* vtable of the delegate at +0x4A0 */
extern uint32_t data_006942F4[2];
extern float data_007A9260[3];
extern uint32_t data_00693328;
extern uint32_t data_00693334;

char *func_001E4414(void *self, void *params, uint32_t r2, uint32_t r3);
float func_0054DE3C(char *actor, uint32_t idx, int32_t axis);
void *func_0054D964(char *actor, uint32_t idx);
uint32_t func_00588BE4(void *actor);
bool func_00588BF0(void *actor, int flag);
void func_00547514(void *p);
void func_0014EB3C(void *actor);
void func_00115DC8(float *v);
void func_00115D70(float *out, float *v, float s);
void func_003249E0(char *self, uint32_t index);
void func_00324964(void *actor);
void *func_0014E428(void *actor, uint32_t a, int32_t b, uint32_t c, int32_t d, uint8_t e, uint8_t f);
void func_003249B4(void *actor);

char *func_002E0274(void *thisp, void *params, uint32_t r2, uint32_t r3) {
    char *self = func_001E4414(thisp, params, r2, r3);
    FLD(self, 0x000, char *) = data_006DD918;
    FLD(self, 0x320, char *) = data_006DD918 + 0x5C;
    FLD(self, 0x498, float) = func_0054DE3C(self, 0, 1);
    FLD(self, 0x49C, void *) = func_0054D964(self, 0);
    FLD(self, 0x4AC, uint32_t) = data_006942F4[1];
    FLD(self, 0x4A8, uint32_t) = data_006942F4[0];
    FLD(self, 0x4A0, char *) = data_006F49BC;
    FLD(self, 0x4A4, char *) = self;
    float *dir = (float *)AT(self, 0x4B0);
    dir[0] = data_007A9260[0];
    dir[1] = data_007A9260[1];
    dir[2] = data_007A9260[2];
    FLD(self, 0x4BC, uint8_t) = 0;
    FLD(self, 0x4BD, uint8_t) = 0;
    bool hidden;
    if (func_00588BE4(self) == data_00693328 || func_00588BE4(self) == data_00693334)
        hidden = func_00588BF0(self, 1) && FLD(self, 0x30, uint16_t) == 0;
    else
        hidden = func_00588BF0(self, 1);
    if (hidden) {
        func_00547514(self + 4);
        FLD(self, 0x2D7, uint8_t) = 1;
        return self;
    }
    func_0014EB3C(self);
    dir[0] = FLD(self, 0x374, float);
    dir[1] = FLD(self, 0x378, float);
    dir[2] = FLD(self, 0x37C, float);
    func_00115DC8(dir);
    func_00115D70(dir, dir, 0.15f);
    func_003249E0(self, 0);
    func_00324964(self);
    FLD(self, 0x47C, void *) = func_0014E428(self, 1, 0, 0, 1, 0, 0);
    func_003249B4(self);
    return self;
}
