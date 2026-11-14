/* USA 001D91D8 (EU 001D91D8): calc of the actor class with vtable slot 006D184C: timer +0x480
 * count-down, 0034CA24(*(+0x43C)), actor common update 0014E2A0(this, *(+0x460), this+0x440,
 * 0x1600, this+0x450, 0), StateMgr::exec (StateMgr at +0x414); then, when the target object
 * *(+0x43C) is active and the state is not 2/3 and the timer and +0x49F are clear: counter
 * +0x490 up to +0x494 and changes state (0065CACC) to 3 when done, else to 2 or 1 from the
 * target's s8 +0x21 / byte +0x23; when the target is inactive clears +0x49F once the timer
 * ran out.
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 001D91D8..001D9358 (`subne/strne`, stm stack
 * args {this+0x450, 0}, `cmp #3; cmpne #2`, `ldrbeq/cmpeq`, `addlo/strlo; blo`, the
 * 1 / 3+(0x23 != 2) / 0xD -> 2 else 1 selection).  Confidence: high. */
#include "route.h"

void func_0034CA24(int obj);
uint32_t func_0014E2A0(char *self, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, int a6);
void func_0065CACC(char *sm, uint32_t newState);

void func_001D91D8(char *self)
{
    if (RF(self, 0x480, uint32_t) != 0)
        RF(self, 0x480, uint32_t) -= 1;
    func_0034CA24((int)RF(self, 0x43C, uint32_t));
    func_0014E2A0(self, RF(self, 0x460, uint32_t), GPTR_OF(RAT(self, 0x440)), 0x1600,
                  GPTR_OF(RAT(self, 0x450)), 0);
    char *sm = RAT(self, 0x414);
    route_statemgr_exec(sm);

    char *t = RP(self, 0x43C);
    if (RF(t, 0, uint32_t) == 0) {
        if (RF(self, 0x480, uint32_t) == 0)
            RF(self, 0x49F, uint8_t) = 0;
        return;
    }
    int8_t s = RF(self, 0x418, int8_t);
    if (s == 3 || s == 2)
        return;
    if (RF(self, 0x480, uint32_t) != 0 || RF(self, 0x49F, uint8_t) != 0)
        return;
    uint32_t a = RF(self, 0x490, uint32_t), b = RF(self, 0x494, uint32_t);
    if (a < b) {
        a += 1;
        RF(self, 0x490, uint32_t) = a;
    }
    if (!(a < b)) {
        func_0065CACC(sm, 3);
        return;
    }
    int8_t k = RF(t, 0x21, int8_t);
    uint32_t ns;
    if (k == 1)
        ns = 2;
    else if (k == 3 && RF(t, 0x23, uint8_t) != 2)
        ns = 2;
    else if (k == 0xD)
        ns = 2;
    else
        ns = 1;
    func_0065CACC(sm, ns);
}
