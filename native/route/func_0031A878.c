/* USA 0031A878 (EU 0031A854): calc of the actor class with vtable slot 006E05E8: when u16 +0x38
 * is set, 00588BF0(this, 1) holds and the state (s8 +0x424) is 0, changes state to 5
 * (006652A4); StateMgr::exec (StateMgr at +0x420); animation 00169A80(*(+0x444)) /
 * 00168E9C(*(+0x444), *(+0x454), 0); 0031A208(this); copies the position +0x3D0 into
 * *(+0x790)+4 and tail-calls 004356B4(*(+0x790)) (collider).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 0031A854..0031A940.  Confidence: high. */
#include "route.h"

int func_00588BF0(char *self, int a);
void func_006652A4(char *sm, uint32_t newState);
void func_00169A80(int obj);
void func_00168E9C(int a, int b, int c);
void func_0031A208(char *self);
void func_004356B4(int obj);

void func_0031A878(char *self)
{
    if (RF(self, 0x38, uint16_t) != 0 && func_00588BF0(self, 1) != 0 && RF(self, 0x424, uint8_t) == 0)
        func_006652A4(RAT(self, 0x420), 5);
    route_statemgr_exec(RAT(self, 0x420));
    func_00169A80((int)RF(self, 0x444, uint32_t));
    func_00168E9C((int)RF(self, 0x444, uint32_t), (int)RF(self, 0x454, uint32_t), 0);
    func_0031A208(self);
    memcpy(RP(self, 0x790) + 4, RAT(self, 0x3D0), 12);
    func_004356B4((int)RF(self, 0x790, uint32_t));
}
