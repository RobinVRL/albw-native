/* USA 0024E934 (EU 0024E934): calc of the actor class with vtable slot 006D6300: when the
 * model *(+0x40C) exists and its +0x30 byte is set, updates the two animation objects +0x410 /
 * +0x414 (00169A80 + 00168E9C(anim, model, 0)) and the model matrix 004CEAF0(model); then
 * StateMgr::exec (StateMgr at +0x41C).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 0024E934..0024EA14 (`ldrbne/cmpne/beq`).
 * Confidence: high. */
#include "route.h"

void func_00169A80(int obj);
void func_00168E9C(int a, int b, int c);
void func_004CEAF0(int model);

void func_0024E934(char *self)
{
    char *m = RP(self, 0x40C);
    if (m != 0 && RF(m, 0x30, uint8_t) != 0) {
        if (RF(self, 0x410, uint32_t) != 0) {
            func_00169A80((int)RF(self, 0x410, uint32_t));
            func_00168E9C((int)RF(self, 0x410, uint32_t), (int)RF(self, 0x40C, uint32_t), 0);
        }
        if (RF(self, 0x414, uint32_t) != 0) {
            func_00169A80((int)RF(self, 0x414, uint32_t));
            func_00168E9C((int)RF(self, 0x414, uint32_t), (int)RF(self, 0x40C, uint32_t), 0);
        }
        func_004CEAF0((int)RF(self, 0x40C, uint32_t));
    }
    route_statemgr_exec(RAT(self, 0x41C));
}
