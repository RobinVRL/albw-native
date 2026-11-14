/* USA 00487828 (EU 00487800): calc shared by 10 layout/menu part classes (vtable slots
 * 006F23F0, 006F2944, 006F2A00, ...): base calc 00440C48(this), StateMgr::exec (StateMgr at
 * +0xE4), then when the u16 at +0x10A is 2 and the timer object at +0x108 is idle (00532C78),
 * re-arms it (+0x110 = *(this+0x1C), +0x10A = 6, +0x108 = 0) and tail-calls 002317C0(+0x108,
 * 1.0f).
 * Route: title menu / file select / HUD layout parts (route phases 3 and 7).
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar4)()`).
 * Verified instruction by instruction against EU 00487800..004878C4 (state s8 +0xE8, exec table
 * +0x100, owner +0xF8, counter +0xE4, anim +0xF4; ldrh +0x10A; strh order; vldr s0 = 1.0f
 * tail call; r1-r3 at the tail call are not read by 002317C0).  Confidence: high. */
#include "route.h"

int func_00440C48(char *self);
int func_00532C78(void *timer);
float func_002317C0(void *timer, float f);

void func_00487828(char *self)
{
    func_00440C48(self);
    route_statemgr_exec(RAT(self, 0xE4));
    if (RF(self, 0x10A, uint16_t) == 2 && func_00532C78(RAT(self, 0x108)) == 0) {
        RF(self, 0x110, uint32_t) = RF(self, 0x1C, uint32_t);
        RF(self, 0x10A, uint16_t) = 6;
        RF(self, 0x108, uint16_t) = 0;
        (void)func_002317C0(RAT(self, 0x108), 1.0f);
    }
}
