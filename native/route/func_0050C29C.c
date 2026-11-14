/* USA 0050C29C (EU 0050C274): calc of the actor class with vtable slot 006EEA04: actor common
 * update 0014E2A0(this, *(+0x420), this+0x480, 0x1000, this+0x490, 0), StateMgr::exec
 * (StateMgr at +0x44C), animation 00169A80(*(+0x410)) / 00168E9C(*(+0x410), *(+0x40C), 0),
 * 0050BE88(this), model translation = position +0x3D0 + offset +0x42C written into the model
 * matrix (+0x8C/+0x9C/+0xAC, bit 30 of +0x164), 004CEAF0(model), then falls through
 * (`mov r0, r0`) into the next function, USA 0050C3B4 (EU 0050C38C), with r0 = this.
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 0050C274..0050C388 (strd stack args
 * {this+0x490, 0}, Vec3 add into the stack, word stores).  Confidence: high. */
#include "route.h"

uint32_t func_0014E2A0(char *self, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, int a6);
void func_00169A80(int obj);
void func_00168E9C(int a, int b, int c);
void func_0050BE88(char *self);
int func_00115C54(float *out, float *a, float *b);
void func_004CEAF0(int model);
void func_0050C3B4(char *self);

void func_0050C29C(char *self)
{
    func_0014E2A0(self, RF(self, 0x420, uint32_t), GPTR_OF(RAT(self, 0x480)), 0x1000,
                  GPTR_OF(RAT(self, 0x490)), 0);
    route_statemgr_exec(RAT(self, 0x44C));
    func_00169A80((int)RF(self, 0x410, uint32_t));
    func_00168E9C((int)RF(self, 0x410, uint32_t), (int)RF(self, 0x40C, uint32_t), 0);
    func_0050BE88(self);
    float t[3];
    func_00115C54(t, (float *)RAT(self, 0x3D0), (float *)RAT(self, 0x42C));
    char *m = RP(self, 0x40C);
    RF(m, 0x164, uint32_t) |= 0x40000000u;
    memcpy(RAT(m, 0x8C), &t[0], 4);
    memcpy(RAT(m, 0x9C), &t[1], 4);
    memcpy(RAT(m, 0xAC), &t[2], 4);
    func_004CEAF0((int)RF(self, 0x40C, uint32_t));
    func_0050C3B4(self);
}
