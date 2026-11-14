/* USA 003196BC (EU 00319698): calc of the actor class with vtable slot 006E0530: StateMgr::exec
 * (StateMgr at +0x49C), then the model *(+0x410): sets bit 30 of +0x164, 004D8AEC(model+0x80,
 * yaw +0x3E8, copy of the position +0x3D0) (float result unused), 004CEAF0(model), and the two
 * animation objects +0x414 / +0x418 (00169A80, 00168E9C(anim, model, 0)).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 00319698..00319794.  Confidence: high. */
#include "route.h"

float func_004D8AEC(float *out, uint32_t yaw, float *pos);
void func_004CEAF0(int model);
void func_00169A80(int obj);
void func_00168E9C(int a, int b, int c);

void func_003196BC(char *self)
{
    route_statemgr_exec(RAT(self, 0x49C));
    uint32_t pos[3];
    memcpy(pos, RAT(self, 0x3D0), sizeof pos);
    char *m = RP(self, 0x410);
    RF(m, 0x164, uint32_t) |= 0x40000000u;
    (void)func_004D8AEC((float *)RAT(m, 0x80), RF(self, 0x3E8, uint32_t), (float *)pos);
    func_004CEAF0((int)RF(self, 0x410, uint32_t));
    func_00169A80((int)RF(self, 0x414, uint32_t));
    func_00168E9C((int)RF(self, 0x414, uint32_t), (int)RF(self, 0x410, uint32_t), 0);
    func_00169A80((int)RF(self, 0x418, uint32_t));
    func_00168E9C((int)RF(self, 0x418, uint32_t), (int)RF(self, 0x410, uint32_t), 0);
}
