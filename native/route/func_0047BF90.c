/* USA 0047BF90 (EU 0047BF68): calc of a layout part (vtable data 006A5438): unless the state
 * machine at +0xF0 is already in state 0xB, and when 005228A4(*data_0070B850, *(+0x10)) is 0:
 * if the s8 +0xD0 (state of the machine at +0xCC) is 2 -> 0066E7A0(+0xF0, 0xB); else if one
 * of the two linked parts (*(+0x1F4), *(+0x1F8)) has s8 +0x3C in 1..5 -> 0066E7A0(+0xF0, 0xB)
 * and 0066E7A0(+0xCC, 2). Then StateMgr::exec (StateMgr at +0xF0).
 * Route: HUD/menu layout state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 0047BF68..0047C054 (`sub #1; cmp #5; blo/bhs`
 * unsigned range tests).  Confidence: high. */
#include "route.h"

extern uint32_t data_0070B850[];
int func_005228A4(int a, int b);
void func_0066E7A0(char *sm, int8_t newState);

void func_0047BF90(char *self)
{
    if (RF(self, 0xF4, uint8_t) != 0xB &&
        func_005228A4((int)data_0070B850[0], (int)RF(self, 0x10, uint32_t)) == 0) {
        if (RF(self, 0xD0, uint8_t) == 2) {
            func_0066E7A0(RAT(self, 0xF0), 0xB);
        } else if ((uint32_t)(RF(RP(self, 0x1F4), 0x3C, int8_t) - 1) < 5 ||
                   (uint32_t)(RF(RP(self, 0x1F8), 0x3C, int8_t) - 1) < 5) {
            func_0066E7A0(RAT(self, 0xF0), 0xB);
            func_0066E7A0(RAT(self, 0xCC), 2);
        }
    }
    route_statemgr_exec(RAT(self, 0xF0));
}
