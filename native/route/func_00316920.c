/* USA 00316920 (EU 003168FC): calc shared by several actor classes (vtable slots 006D6240,
 * 006D6788, 006DA320, ...): StateMgr::exec (StateMgr at +0x40C), actor common update
 * 0014F510(this, *(this+0x430), this+0x464, 0x1800, 0, 0), then the model matrix from the
 * position +0x3D0 and the rotation {0, *(this+0x3E8), 0} via 0049216C(this+0x48C, &rot,
 * this+0x3D0) (float result unused).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 003168FC..003169C8 (stack words sp+8 = 0,
 * sp+0xC = +0x3E8, sp+0x10 = 0).  Confidence: high. */
#include "route.h"

void func_0014F510(char *self, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, int a6);
float func_0049216C(float *out, uint32_t *rot, float *pos);

void func_00316920(char *self)
{
    route_statemgr_exec(RAT(self, 0x40C));
    func_0014F510(self, RF(self, 0x430, uint32_t), GPTR_OF(RAT(self, 0x464)), 0x1800, 0, 0);
    uint32_t rot[3] = { 0, RF(self, 0x3E8, uint32_t), 0 };
    (void)func_0049216C((float *)RAT(self, 0x48C), rot, (float *)RAT(self, 0x3D0));
}
