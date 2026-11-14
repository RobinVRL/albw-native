/* USA 0033912C (EU 00339108): calc of the actor class with vtable slot 006E268C: actor common
 * update 0014E2A0(this, *(+0x438), this+0x440, 0x1008, 0, 0) unless +0x410; StateMgr::exec
 * (StateMgr at +0x40C); model *(+0x430): rotation 00491E80(model+0x80, 0, yaw +0x3E8, 0),
 * translation = position +0x3D0 (+0x8C/+0x9C/+0xAC, bit 30 of +0x164); animation
 * 00169A80(*(+0x434)) / 00168E9C(*(+0x434), model, 0); tail 004CEAF0(model).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 00339108..00339220.  Confidence: high. */
#include "route.h"

uint32_t func_0014E2A0(char *self, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, int a6);
int func_00491E80(float *m, uint32_t ax, uint32_t ay, uint32_t az);
void func_00169A80(int obj);
void func_00168E9C(int a, int b, int c);
void func_004CEAF0(int model);

void func_0033912C(char *self)
{
    if (RF(self, 0x410, uint8_t) == 0)
        func_0014E2A0(self, RF(self, 0x438, uint32_t), GPTR_OF(RAT(self, 0x440)), 0x1008, 0, 0);
    route_statemgr_exec(RAT(self, 0x40C));
    char *m = RP(self, 0x430);
    RF(m, 0x164, uint32_t) |= 0x40000000u;
    func_00491E80((float *)RAT(m, 0x80), 0, RF(self, 0x3E8, uint32_t), 0);
    m = RP(self, 0x430);
    RF(m, 0x164, uint32_t) |= 0x40000000u;
    RF(m, 0x8C, uint32_t) = RF(self, 0x3D0, uint32_t);
    RF(m, 0x9C, uint32_t) = RF(self, 0x3D4, uint32_t);
    RF(m, 0xAC, uint32_t) = RF(self, 0x3D8, uint32_t);
    func_00169A80((int)RF(self, 0x434, uint32_t));
    func_00168E9C((int)RF(self, 0x434, uint32_t), (int)RF(self, 0x430, uint32_t), 0);
    func_004CEAF0((int)RF(self, 0x430, uint32_t));
}
