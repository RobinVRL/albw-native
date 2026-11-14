/* USA 00315B14 (EU 00315AF0): calc shared by moving-object classes (vtable slots 006D1084,
 * 006E0238, 006E2BB8, ...): timer +0x480 -= +0x484; velocity +0x3DC = speed +0x478 *
 * (sin, 0, cos)(yaw +0x3E8) (00115154), position += velocity (00115C54); +0x368 = position -
 * 1.5 * (sin, 0, cos); StateMgr::exec (StateMgr at +0x454); tail 00315878(this).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 00315AF0..00315C20 (sinCos(out sp+4, out sp,
 * angle), single vmul each, 0.0f stores).  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "route.h"

float func_00115154(float *s, float *c, uint32_t idx);
int func_00115C54(float *out, float *a, float *b);
int func_00115C70(float *out, float *a, float *b);
void func_00315878(char *self);

void func_00315B14(char *self)
{
    RF(self, 0x480, uint32_t) = RF(self, 0x480, uint32_t) - RF(self, 0x484, uint32_t);
    float sc[2] = { 0.0f, 0.0f }; /* sp+0 (c), sp+4 (s) */
    (void)func_00115154(&sc[1], &sc[0], RF(self, 0x3E8, uint32_t));
    float sp = RF(self, 0x478, float);
    RF(self, 0x3DC, float) = sp * sc[1];
    RF(self, 0x3E0, float) = 0.0f;
    RF(self, 0x3E4, float) = sp * sc[0];
    func_00115C54((float *)RAT(self, 0x3D0), (float *)RAT(self, 0x3D0), (float *)RAT(self, 0x3DC));
    float off[3] = { sc[1] * 1.5f, 0.0f, sc[0] * 1.5f };
    float d[3];
    func_00115C70(d, (float *)RAT(self, 0x3D0), off);
    memcpy(RAT(self, 0x368), d, sizeof d);
    route_statemgr_exec(RAT(self, 0x454));
    func_00315878(self);
}
