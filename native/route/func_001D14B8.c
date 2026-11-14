/* USA 001D14B8 (EU 001D14B8): calc shared by the actor classes with vtable slots 006C7720,
 * 006D148C, 006ED440: when +0x5DF != 2 and +0x5E0 == 1: StateMgr::exec (StateMgr at +0x4FC),
 * 00169A80(*(+0x4F8)), 00168E9C(*(+0x4F8), *(+0x4F4), 0), 001D134C(this); in state 8 raises
 * +0x2D7 once the u32 +0x59C reaches +0x5A0 (unsigned). Returns 1.
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 001D14B8..001D1594 (`movhs/strbhs`).
 * Confidence: high. */
#include "route.h"

void func_00169A80(int obj);
void func_00168E9C(int a, int b, int c);
void func_001D134C(char *self);

int func_001D14B8(char *self)
{
    if (RF(self, 0x5DF, uint8_t) != 2 && RF(self, 0x5E0, uint8_t) == 1) {
        route_statemgr_exec(RAT(self, 0x4FC));
        func_00169A80((int)RF(self, 0x4F8, uint32_t));
        func_00168E9C((int)RF(self, 0x4F8, uint32_t), (int)RF(self, 0x4F4, uint32_t), 0);
        func_001D134C(self);
        if (RF(self, 0x500, uint8_t) == 8 && RF(self, 0x59C, uint32_t) >= RF(self, 0x5A0, uint32_t))
            RF(self, 0x2D7, uint8_t) = 1;
    }
    return 1;
}
