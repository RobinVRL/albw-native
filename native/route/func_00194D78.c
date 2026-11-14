/* USA 00194D78 (EU 00194D78): calc of the actor class with vtable slot 006CDC88 (also called by
 * 00246E3C): request byte +0x4CD (1: state 1, 2/3: 003521F0(+0x324, 1) and state 2 of the
 * machine at +0x490 via 00659910), StateMgr::exec (StateMgr at +0x490), animation update
 * 00169A80/00168E9C(*(+0x4B4), *(+0x480), 0) when +0x4CB == 3 and +0x4CA == 0, then follows the
 * height of the global object 00520FC0 (+4): when it moved by more than 0.001 (or NaN) moves the
 * collider *(+0x40C) to (x, h + 0.5, z) (004356B4) and stores h in +0x4C4.
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 00194D78..00194EE0 (vcmpe `bhi`/`bge`
 * branch structure with NaN taking the update path).  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "route.h"

void func_00659910(char *sm, uint32_t newState);
int func_003521F0(void *p, int a);
void func_00169A80(int obj);
void func_00168E9C(int a, int b, int c);
uint32_t func_00520FC0(void);
void func_004356B4(int obj);

void func_00194D78(char *self)
{
    uint8_t req = RF(self, 0x4CD, uint8_t);
    if (req == 1) {
        func_00659910(RAT(self, 0x490), 1);
    } else if (req == 2 || req == 3) {
        func_003521F0(RAT(self, 0x324), 1);
        func_00659910(RAT(self, 0x490), 2);
    }
    route_statemgr_exec(RAT(self, 0x490));
    if (RF(self, 0x4CB, uint8_t) == 3 && RF(self, 0x4CA, uint8_t) == 0 && RF(self, 0x4B4, uint32_t) != 0) {
        func_00169A80((int)RF(self, 0x4B4, uint32_t));
        func_00168E9C((int)RF(self, 0x4B4, uint32_t), (int)RF(self, 0x480, uint32_t), 0);
    }
    char *g = GPTR_TO(char, func_00520FC0());
    float h = RF(g, 4, float);
    float d = RF(self, 0x4C4, float) - h;
    if (-0.001f > d || !(0.001f >= d)) {
        char *c = RP(self, 0x40C);
        RF(c, 4, uint32_t) = RF(self, 0x3D0, uint32_t);
        RF(c, 8, float) = h + 0.5f;
        RF(c, 0xC, uint32_t) = RF(self, 0x3D8, uint32_t);
        func_004356B4((int)RF(self, 0x40C, uint32_t));
        RF(self, 0x4C4, float) = h;
    }
}
