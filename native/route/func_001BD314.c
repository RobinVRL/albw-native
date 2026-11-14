/* USA 001BD314 (EU 001BD314): calc of the actor class with vtable slot 006CF348: actor common
 * update 0014E2A0(this, *(+0x45C), 0, 0x1008, this+0x460, 0); StateMgr::exec (StateMgr at
 * +0x40C); frame counter +0x444 up to +0x448 (unsigned) calling 001BD088(this) when reached;
 * model *(+0x430): rotation 00491E80(model+0x80, 0, yaw +0x3E8, 0), translation = position,
 * animation 00169A80/00168E9C(*(+0x434), model, 0), 004CEAF0(model); +0x451 =
 * 00588BF0(this, 0).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 001BD314..001BD458 (strd stack args, `bhs`,
 * `movhs/blhs`).  Confidence: high. */
#include "route.h"

uint32_t func_0014E2A0(char *self, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, int a6);
void func_001BD088(char *self);
int func_00491E80(float *m, uint32_t ax, uint32_t ay, uint32_t az);
void func_00169A80(int obj);
void func_00168E9C(int a, int b, int c);
void func_004CEAF0(int model);
int func_00588BF0(char *self, int a);

void func_001BD314(char *self)
{
    func_0014E2A0(self, RF(self, 0x45C, uint32_t), 0, 0x1008, GPTR_OF(RAT(self, 0x460)), 0);
    route_statemgr_exec(RAT(self, 0x40C));
    uint32_t end = RF(self, 0x448, uint32_t), n = RF(self, 0x444, uint32_t);
    if (n < end) {
        n += 1;
        RF(self, 0x444, uint32_t) = n;
        if (n >= end)
            func_001BD088(self);
    }
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
    RF(self, 0x451, uint8_t) = (uint8_t)func_00588BF0(self, 0);
}
