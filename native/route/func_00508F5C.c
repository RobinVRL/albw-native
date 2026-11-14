/* USA 00508F5C (EU 00508F34): calc of the actor class with vtable slot 006EE7DC (a falling
 * object): counter +0x4A0 up to +0x4A4, actor common update 0014E2A0(this, *(+0x41C),
 * this+0x4E8, 0x1600, 0, 0), StateMgr::exec (StateMgr at +0x510), gravity (vy -= 0.06, floor
 * -0.2), +0x4C4 = +0x438, position += velocity, box push-out 0014EEC8(this, &push, this+0x42C,
 * 0xDDF, s0 = 0.5f), then the two animation objects +0x414 / +0x418 against model +0x410.
 * Route: actor state machine.
 * Bugs: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); the float
 * register argument s0 = 0.5f of 0014EEC8 is passed explicitly.
 * Verified instruction by instruction against EU 00508F34..0050909C (vcmpe `vmovlo` clamp,
 * push vector initialised from data_007A9260, `ldr r1, [r4, #0x410]!`).  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "route.h"

extern uint32_t data_007A9260[];
uint32_t func_0014E2A0(char *self, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, int a6);
int func_00115C54(float *out, float *a, float *b);
int func_0014EEC8(char *self, float *push, float *box, uint32_t flags, float f);
void func_00169A80(int obj);
void func_00168E9C(int a, int b, int c);

void func_00508F5C(char *self)
{
    if (RF(self, 0x4A0, uint32_t) < RF(self, 0x4A4, uint32_t))
        RF(self, 0x4A0, uint32_t) += 1;
    func_0014E2A0(self, RF(self, 0x41C, uint32_t), GPTR_OF(RAT(self, 0x4E8)), 0x1600, 0, 0);
    route_statemgr_exec(RAT(self, 0x510));
    float vy = RF(self, 0x3E0, float) - 0.06f;
    if (vy < -0.2f)
        vy = -0.2f;
    RF(self, 0x3E0, float) = vy;
    RF(self, 0x4C4, uint32_t) = RF(self, 0x438, uint32_t);
    func_00115C54((float *)RAT(self, 0x3D0), (float *)RAT(self, 0x3D0), (float *)RAT(self, 0x3DC));
    float push[3];
    memcpy(push, data_007A9260, sizeof push);
    if (func_0014EEC8(self, push, (float *)RAT(self, 0x42C), 0xDDF, 0.5f) != 0)
        func_00115C54((float *)RAT(self, 0x3D0), (float *)RAT(self, 0x3D0), push);
    func_00169A80((int)RF(self, 0x414, uint32_t));
    func_00168E9C((int)RF(self, 0x414, uint32_t), (int)RF(self, 0x410, uint32_t), 0);
    func_00169A80((int)RF(self, 0x418, uint32_t));
    func_00168E9C((int)RF(self, 0x418, uint32_t), (int)RF(self, 0x410, uint32_t), 0);
}
