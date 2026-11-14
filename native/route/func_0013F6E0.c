/* USA 0013F6E0 (EU 0013F6E0): calc of the actor class with vtable slot 006C7668: decrements
 * the counter +0x50C; first call (+0x51E) with +0x51D set: 004CF478(*(+0x410), 0, 0),
 * 00151148(*(+0x414), 0) (float result unused), 0013F1D0(this, 1); StateMgr::exec (StateMgr at
 * +0x460); 0014064C(this) unless +0x521. Returns 1.
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 0013F6E0..0013F7C0 (r1 = r2 = 0 for
 * 004CF478, `moveq/bleq`).  Confidence: high. */
#include "route.h"

uint32_t func_004CF478(void *self, int32_t a, int32_t b);
float func_00151148(int obj, int a);
void func_0013F1D0(char *self, int a);
void func_0014064C(char *self);

int func_0013F6E0(char *self)
{
    RF(self, 0x50C, uint32_t) -= 1;
    if (RF(self, 0x51E, uint8_t) == 0) {
        RF(self, 0x51E, uint8_t) = 1;
        if (RF(self, 0x51D, uint8_t) != 0) {
            func_004CF478(RP(self, 0x410), 0, 0);
            (void)func_00151148((int)RF(self, 0x414, uint32_t), 0);
            func_0013F1D0(self, 1);
        }
    }
    route_statemgr_exec(RAT(self, 0x460));
    if (RF(self, 0x521, uint8_t) == 0)
        func_0014064C(self);
    return 1;
}
