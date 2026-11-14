/* USA 0035CD60 (EU 0035CD3C): calc of the actor class with vtable slot 006E3ED4: clears +0x4CC,
 * s16 timer +0x51C count-down, actor common update 0014E2A0(this, *(+0x498), this+0x538, 0x202,
 * 0, 0), StateMgr::exec (StateMgr at +0x4F8); vertical speed: -1e-5 when 0052107C (on ground)
 * outside states 3/4, else gravity -0.1 floored at -0.5; 00325150(this); box push-out
 * 0014EEC8(this, &push, this+0x49C, 0xDDF, s0 = float +0x4AC), lifting the actor by a positive
 * push.y outside states 3/4; model *(+0x4F0) rotation / translation / 004CEAF0; tail
 * 001512B4(*(+0x4F4), position).
 * Route: actor state machine.
 * Bugs: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); s0 of
 * 0014EEC8 (the float at +0x4AC) passed explicitly.
 * Verified instruction by instruction against EU 0035CD3C..0035CF20 (`cmp; ldrsbne; cmpne #3;
 * cmpne #4; beq` chains, vcmpe `vmovlo` / `ble`).  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "route.h"

extern uint32_t data_007A9260[];
uint32_t func_0014E2A0(char *self, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, int a6);
int func_0052107C(char *self);
void func_00325150(char *self);
int func_0014EEC8(char *self, float *push, float *box, uint32_t flags, float f);
int func_00491E80(float *m, uint32_t ax, uint32_t ay, uint32_t az);
void func_004CEAF0(int model);
void func_001512B4(int obj, float *pos);

void func_0035CD60(char *self)
{
    RF(self, 0x4CC, uint8_t) = 0;
    int32_t t = RF(self, 0x51C, int16_t) - 1;
    if (t < 0)
        t = 0;
    RF(self, 0x51C, uint16_t) = (uint16_t)t;
    func_0014E2A0(self, RF(self, 0x498, uint32_t), GPTR_OF(RAT(self, 0x538)), 0x202, 0, 0);
    route_statemgr_exec(RAT(self, 0x4F8));
    int8_t s;
    if (func_0052107C(self) != 0 && (s = RF(self, 0x4FC, int8_t)) != 3 && s != 4) {
        RF(self, 0x3E0, float) = -1e-05f;
    } else {
        float vy = RF(self, 0x3E0, float) - 0.1f;
        if (vy < -0.5f)
            vy = -0.5f;
        RF(self, 0x3E0, float) = vy;
    }
    func_00325150(self);
    float push[3];
    memcpy(push, data_007A9260, sizeof push);
    if (func_0014EEC8(self, push, (float *)RAT(self, 0x49C), 0xDDF, RF(self, 0x4AC, float)) != 0 &&
        (s = RF(self, 0x4FC, int8_t)) != 3 && s != 4) {
        if (push[1] > 0.0f)
            RF(self, 0x3D4, float) = RF(self, 0x3D4, float) + push[1];
    }
    char *m = RP(self, 0x4F0);
    RF(m, 0x164, uint32_t) |= 0x40000000u;
    func_00491E80((float *)RAT(m, 0x80), 0, RF(self, 0x3E8, uint32_t), 0);
    m = RP(self, 0x4F0);
    RF(m, 0x164, uint32_t) |= 0x40000000u;
    RF(m, 0x8C, uint32_t) = RF(self, 0x3D0, uint32_t);
    RF(m, 0x9C, uint32_t) = RF(self, 0x3D4, uint32_t);
    RF(m, 0xAC, uint32_t) = RF(self, 0x3D8, uint32_t);
    func_004CEAF0((int)RF(self, 0x4F0, uint32_t));
    func_001512B4((int)RF(self, 0x4F4, uint32_t), (float *)RAT(self, 0x3D0));
}
