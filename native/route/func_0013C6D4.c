/* USA 0013C6D4 (EU 0013C6D4): calc of the actor class with vtable slot 006C74B8: StateMgr::exec
 * (StateMgr at +0x418), then the model: sets bit 30 of *(model+0x164), 004D8AEC(model+0x80,
 * yaw *(this+0x3E8), copy of the position +0x3D0) (float result unused), 004CEAF0(model),
 * 00169A80(*(this+0x414)), 00168E9C(*(this+0x414), model, 0); model = *(this+0x410).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 0013C6D4..0013C7B0 (ldm/stm position copy,
 * orr #0x40000000).  Confidence: high. */
#include "route.h"

float func_004D8AEC(float *out, uint32_t yaw, float *pos);
void func_004CEAF0(int model);
void func_00169A80(int obj);
void func_00168E9C(int a, int b, int c);

void func_0013C6D4(char *self)
{
    route_statemgr_exec(RAT(self, 0x418));
    uint32_t pos[3];
    memcpy(pos, RAT(self, 0x3D0), sizeof pos);
    char *m = RP(self, 0x410);
    RF(m, 0x164, uint32_t) |= 0x40000000u;
    (void)func_004D8AEC((float *)RAT(m, 0x80), RF(self, 0x3E8, uint32_t), (float *)pos);
    func_004CEAF0((int)RF(self, 0x410, uint32_t));
    func_00169A80((int)RF(self, 0x414, uint32_t));
    func_00168E9C((int)RF(self, 0x414, uint32_t), (int)RF(self, 0x410, uint32_t), 0);
}
