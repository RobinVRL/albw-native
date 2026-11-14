/* USA 00281C4C (EU 00281C74): calc of the actor class with vtable slot 006D88A4: while +0x993
 * is set and the manager *data_00709F30 exists, polls 004C684C(mgr, this+0x99C, s16 +0x32) and
 * clears +0x993 when it succeeds; StateMgr::exec (StateMgr at +0x960); 004BC8D8(this); tail
 * 004BEA40(this, 0).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 00281C74..00281D38 (`movne/strbne`, sm +0x960:
 * state +0x964, table +0x97C, owner +0x974, anim +0x970; tail call r1 = 0).
 * Confidence: high. */
#include "route.h"

extern uint32_t data_00709F30[];
int func_004C684C(int mgr, void *p, int id);
void func_004BC8D8(char *self);
void func_004BEA40(char *self, int a);

void func_00281C4C(char *self)
{
    if (RF(self, 0x993, uint8_t) != 0 && data_00709F30[0] != 0) {
        if (func_004C684C((int)data_00709F30[0], RAT(self, 0x99C), RF(self, 0x32, int16_t)) != 0)
            RF(self, 0x993, uint8_t) = 0;
    }
    route_statemgr_exec(RAT(self, 0x960));
    func_004BC8D8(self);
    func_004BEA40(self, 0);
}
