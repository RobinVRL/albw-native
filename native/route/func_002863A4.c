/* USA 002863A4 (EU 002863CC): calc of the actor class with vtable slot 006D9C44: clears +0x460;
 * when the collider *(+0x434) exists and *(+0x430)+0x61 is set, moves the collider centre to the
 * position +0x3D0 (y lowered by half its height +0x5C unless +0x410) and updates it (004356B4);
 * StateMgr::exec (StateMgr at +0x40C); model *(+0x458): bit 30 of +0x164,
 * 004D8AEC(model+0x80, yaw +0x3E8, position) (float result unused), 004CEAF0(model); tail
 * 001512E8(*(+0x45C)) when set.
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 002863CC..002864F4 (vmls = y - h*0.5 with the
 * product rounded first).  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "route.h"

void func_004356B4(int obj);
float func_004D8AEC(float *out, uint32_t yaw, float *pos);
void func_004CEAF0(int model);
void func_001512E8(int obj);

void func_002863A4(char *self)
{
    char *c = RP(self, 0x434);
    RF(self, 0x460, uint8_t) = 0;
    if (c != 0 && RF(RP(self, 0x430), 0x61, uint8_t) != 0) {
        float x = RF(self, 0x3D0, float), y = RF(self, 0x3D4, float), z = RF(self, 0x3D8, float);
        if (RF(self, 0x410, uint8_t) == 0) {
            float h = RF(c, 0x5C, float) * 0.5f;
            y = y - h;
        }
        RF(c, 4, float) = x;
        RF(c, 8, float) = y;
        RF(c, 0xC, float) = z;
        func_004356B4((int)RF(self, 0x434, uint32_t));
    }
    route_statemgr_exec(RAT(self, 0x40C));
    char *m = RP(self, 0x458);
    RF(m, 0x164, uint32_t) |= 0x40000000u;
    (void)func_004D8AEC((float *)RAT(m, 0x80), RF(self, 0x3E8, uint32_t), (float *)RAT(self, 0x3D0));
    func_004CEAF0((int)RF(self, 0x458, uint32_t));
    if (RF(self, 0x45C, uint32_t) != 0)
        func_001512E8((int)RF(self, 0x45C, uint32_t));
}
