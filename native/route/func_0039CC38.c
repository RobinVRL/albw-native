/* USA 0039CC38 (EU 0039CC14): calc of the actor class with vtable slot 006E7DF0:
 * 00151148(*(this+0x43C), 0) (float result unused), StateMgr::exec of the StateMgr at +0x40C,
 * position += velocity (00115C54(+0x3D0, +0x3D0, +0x3DC)), 0039CAF0(this), copies the position
 * into *(this+0x438)+4..+0xC and tail-calls 004356B4(*(this+0x438)) (collider update).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 0039CC14..0039CCD8 (sm +0x40C: state +0x410,
 * table +0x428, owner +0x420, anim +0x41C; word copies of the position).  Confidence: high. */
#include "route.h"

float func_00151148(int obj, int a);
int func_00115C54(float *out, float *a, float *b);
void func_0039CAF0(char *self);
void func_004356B4(int obj);

void func_0039CC38(char *self)
{
    (void)func_00151148((int)RF(self, 0x43C, uint32_t), 0);
    route_statemgr_exec(RAT(self, 0x40C));
    func_00115C54((float *)RAT(self, 0x3D0), (float *)RAT(self, 0x3D0), (float *)RAT(self, 0x3DC));
    func_0039CAF0(self);
    char *o = RP(self, 0x438);
    RF(o, 4, uint32_t) = RF(self, 0x3D0, uint32_t);
    RF(o, 8, uint32_t) = RF(self, 0x3D4, uint32_t);
    RF(o, 0xC, uint32_t) = RF(self, 0x3D8, uint32_t);
    func_004356B4((int)RF(self, 0x438, uint32_t));
}
