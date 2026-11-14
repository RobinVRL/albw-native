/* USA 003AA330 (EU 003AA30C): per-frame update (this, msg) of the object class with vtable slot
 * 006E8A00: on mode 3 (+0x1E9) or msg[0] == 2: 0057EAC0(+0x234) and 00539418(this, msg[1],
 * {0, 0, 0, min(2 * +0x1E4, 1.0)}); otherwise, with +0x1D4 > 0 and *(+0x1EC)+0x50 == 2: on
 * msg[0] == 0 animates the two parts (+0x1F8 / +0x31C against model +0x1F4, scale 4000,
 * 004CEAF0) and then always 003BB8EC(this, msg[0]); unless +0x214 == 5: in mode 2 locks
 * +0x134 (0010961C), notifies the listener *(+0x17C) (slot 0 with (listener, cs, 1)), sets
 * +0x178 = 1, unlocks (00109698) and raises *data_00709DF8+0x66; finally StateMgr::exec
 * (StateMgr at +0x210) when the virtual +0x64 says so.
 * Route: actor/object state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 003AA30C..003AA504 (`cmp #3; ldrbne; cmpne #2`,
 * signed `ble` on +0x1D4, vcmpe `vmovhs` clamp (NaN -> 1.0)).  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "route.h"

extern uint32_t data_00709DF8[];
void func_0057EAC0(void *p);
void func_00539418(char *self, uint32_t a, float *v);
void func_00169A80(int obj);
void func_00168E9C(int a, int b, int c);
void func_004CEAF0(int model);
int func_003BB8EC(char *self, int a);
void func_0010961C(void *cs);
void func_00109698(void *cs);

void func_003AA330(char *self, uint8_t *msg)
{
    uint32_t arg = RF(msg, 4, uint32_t);
    if (RF(self, 0x1E9, uint8_t) == 3 || msg[0] == 2) {
        func_0057EAC0(RAT(self, 0x234));
        float s = RF(self, 0x1E4, float) * 2.0f;
        if (!(s < 1.0f))
            s = 1.0f;
        float v[4] = { 0.0f, 0.0f, 0.0f, s };
        func_00539418(self, arg, v);
    } else if (RF(self, 0x1D4, int32_t) > 0 && RF(RP(self, 0x1EC), 0x50, uint8_t) == 2) {
        if (msg[0] == 0) {
            func_00169A80((int)RF(self, 0x1F8, uint32_t));
            func_00168E9C((int)RF(self, 0x1F8, uint32_t), (int)RF(self, 0x1F4, uint32_t), 0);
            func_00169A80((int)RF(self, 0x31C, uint32_t));
            func_00168E9C((int)RF(self, 0x31C, uint32_t), (int)RF(self, 0x1F4, uint32_t), 0);
            char *m = RP(self, 0x1F4);
            RF(m, 0x164, uint32_t) |= 0x40000000u;
            RF(m, 0x74, float) = 4000.0f;
            RF(m, 0x78, float) = 4000.0f;
            RF(m, 0x7C, float) = 4000.0f;
            func_004CEAF0((int)RF(self, 0x1F4, uint32_t));
        }
        func_003BB8EC(self, msg[0]);
    }
    if (RF(self, 0x214, uint8_t) == 5)
        return;
    if (RF(self, 0x1E9, uint8_t) == 2) {
        char *cs = RAT(self, 0x134);
        func_0010961C(cs);
        char *l = RP(cs, 0x48);
        if (l != 0)
            RVFN(void (*)(char *, char *, int), l, 0)(l, cs, 1);
        RF(cs, 0x44, uint32_t) = 1;
        func_00109698(cs);
        char *g = GPTR_TO(char, data_00709DF8[0]);
        if (g != 0)
            RF(g, 0x66, uint8_t) = 1;
    }
    if (RVFN(int (*)(char *), self, 0x64)(self) != 0)
        route_statemgr_exec(RAT(self, 0x210));
}
