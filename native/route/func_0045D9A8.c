/* USA 0045D9A8 (EU 0045D980): calc of a HUD layout part (vtable slot 006F20E8) with three
 * state machines (+0x74, +0x98, +0xBC): runs StateMgr::exec on each, then shows/hides itself
 * from the save data *data_00711DE8: when +0x4BE0 is set and none of the 3 file slots
 * (stride 0x1604 from +0x9CC, byte +0xD76) is flagged and the third machine is in state 3 ->
 * timer +0x128 = 0, 002317C0(+0x128, 1.0f), state 0; otherwise (unless in state 2/3) -> timer
 * = 2, 002317C0(+0x128, 1.0f), state 2 (changeState 0066D78C).
 * Route: HUD/menu layout state machine.
 * Bug: all three state handlers were called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 0045D980..0045DB74 (the three dispatch
 * sequences, `mul 0x581; lsl #2` slot stride, the always-zero ip test, `cmp #2; cmpne #3`).
 * Confidence: high. */
#include "route.h"

extern uint32_t data_00711DE8[];
float func_002317C0(void *timer, float f);
void func_0066D78C(char *sm, uint32_t newState);

void func_0045D9A8(char *self)
{
    route_statemgr_exec(RAT(self, 0x74));
    route_statemgr_exec(RAT(self, 0x98));
    route_statemgr_exec(RAT(self, 0xBC));
    char *g = GPTR_TO(char, data_00711DE8[0]);
    int show = 1;
    if (RF(g, 0x4BE0, uint8_t) != 0) {
        show = 0;
        for (int i = 0; i < 3; i++)
            if (RF(g + 0x9CC + (uint32_t)i * 0x581 * 4, 0xD76, uint8_t) != 0) {
                show = 1;
                break;
            }
    }
    if (!show) {
        if (RF(self, 0xC0, uint8_t) == 3) {
            RF(self, 0x128, uint16_t) = 0;
            (void)func_002317C0(RAT(self, 0x128), 1.0f);
            func_0066D78C(RAT(self, 0xBC), 0);
        }
        return;
    }
    int8_t s = RF(self, 0xC0, int8_t);
    if (s == 2 || s == 3)
        return;
    RF(self, 0x128, uint16_t) = 2;
    (void)func_002317C0(RAT(self, 0x128), 1.0f);
    func_0066D78C(RAT(self, 0xBC), 2);
}
