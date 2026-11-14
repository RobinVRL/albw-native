/* USA 0028B054 (EU 0028B07C): calc of the actor class with vtable slot 006DA17C: when +0x5D4
 * is set only raises +0x2D7; else StateMgr::exec (StateMgr at +0x4F4), 00169A80(*(+0x580)),
 * 00168E9C(*(+0x580), *(+0x478), 0) and tail 004CEAF0(*(+0x478)) (model world matrix).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 0028B07C..0028B134 (`ldr r1, [r5, #0x478]!`
 * write-back: the following [r5, #0x108] is this+0x580).  Confidence: high. */
#include "route.h"

void func_00169A80(int obj);
void func_00168E9C(int a, int b, int c);
void func_004CEAF0(int model);

void func_0028B054(char *self)
{
    if (RF(self, 0x5D4, uint8_t) != 0) {
        RF(self, 0x2D7, uint8_t) = 1;
        return;
    }
    route_statemgr_exec(RAT(self, 0x4F4));
    func_00169A80((int)RF(self, 0x580, uint32_t));
    func_00168E9C((int)RF(self, 0x580, uint32_t), (int)RF(self, 0x478, uint32_t), 0);
    func_004CEAF0((int)RF(self, 0x478, uint32_t));
}
