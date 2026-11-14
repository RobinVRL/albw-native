/* USA 00246918 (EU 00246918): calc of the actor class with vtable slot 006D5C68: StateMgr::exec
 * (StateMgr at +0x414), then the model *(+0x410) matrix: bit 30 of +0x164, scale =
 * data_007A9254 * 0.5f (00115D70), rotation = the s32 angles +0x43C..+0x444 plus the global
 * offsets data_0070F378[0..2], 004917C0(model+0x80, &scale, &rot, position +0x3D0), then
 * 004CEAF0(model).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 00246918..00246A24 (stack layout scale sp+0,
 * rot sp+0xC, integer adds of the angles).  Confidence: high. */
#include "route.h"

extern uint32_t data_007A9254[], data_0070F378[];
int func_00115D70(float *out, float *v, float s);
void func_004917C0(float *m, float *scale, uint32_t *rot, float *pos);
void func_004CEAF0(int model);

void func_00246918(char *self)
{
    route_statemgr_exec(RAT(self, 0x414));
    char *m = RP(self, 0x410);
    RF(m, 0x164, uint32_t) |= 0x40000000u;
    float tmp[3], scale[3];
    func_00115D70(tmp, (float *)data_007A9254, 0.5f);
    memcpy(scale, tmp, sizeof scale);
    uint32_t rot[3];
    rot[0] = RF(self, 0x43C, uint32_t) + data_0070F378[0];
    rot[1] = RF(self, 0x440, uint32_t) + data_0070F378[1];
    rot[2] = RF(self, 0x444, uint32_t) + data_0070F378[2];
    func_004917C0((float *)RAT(m, 0x80), scale, rot, (float *)RAT(self, 0x3D0));
    func_004CEAF0((int)RF(self, 0x410, uint32_t));
}
