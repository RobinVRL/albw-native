/* compilefix: asm-verified rewrite taken from native/route/alt/func_00227AD4.c (route scout), preferred over
 * the compile-fixed Ghidra text this folder had (see README.md). */
/* USA 00227AD4 (EU 00227AD4): calc of the enemy actor class with vtable slot 006D37E0:
 * 00227CA4(this), StateMgr::exec (StateMgr at +0x468), sets the hit-check enable byte
 * *(+0x604)+0x44 (0 when fainted +0x73C or in state 0/5), box push-out 0014EEC8(this, &push,
 * data_007A9260, 0xDDF, s0 = 2.5f) applied horizontally, 00227374, the u16 hit counter +0x73E
 * (+1 while +0x74A, else 0; +0x74A cleared), the per-frame helpers 00226BBC 002249B0 002283D4
 * 00227894 00224D78, and the "SE_EN_FAINT" sound 001507D8 when 005811E8(this+0x40C) says so.
 * Route: actor state machine (enemy).
 * Bugs: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); s0 = 2.5f
 * of 0014EEC8 passed explicitly; 002283D4 returns a float (declared float).
 * Verified instruction by instruction against EU 00227AD4..00227C7C.  Confidence: high. */
#include "../route/route.h"

extern uint32_t data_007A9260[];
void func_00227CA4(char *self);
int func_0014EEC8(char *self, float *push, float *box, uint32_t flags, float f);
int func_00115C54(float *out, float *a, float *b);
void func_00227374(char *self);
void func_00226BBC(char *self);
void func_002249B0(char *self);
float func_002283D4(char *self);
void func_00227894(char *self);
void func_00224D78(char *self);
int func_005811E8(void *p);
int func_001507D8(char *self, void *name, int a);

void func_00227AD4(char *self)
{
    func_00227CA4(self);
    route_statemgr_exec(RAT(self, 0x468));
    int8_t s = RF(self, 0x46C, int8_t);
    RF(RP(self, 0x604), 0x44, uint8_t) = (RF(self, 0x73C, uint8_t) != 0 || s == 5 || s == 0) ? 0 : 1;
    float push[3];
    memcpy(push, data_007A9260, sizeof push);
    if (func_0014EEC8(self, push, (float *)data_007A9260, 0xDDF, 2.5f) != 0) {
        push[1] = 0.0f;
        func_00115C54((float *)RAT(self, 0x3D0), (float *)RAT(self, 0x3D0), push);
    }
    func_00227374(self);
    if (RF(self, 0x74A, uint8_t) == 0)
        RF(self, 0x73E, uint16_t) = 0;
    else
        RF(self, 0x73E, uint16_t) += 1;
    RF(self, 0x74A, uint8_t) = 0;
    func_00226BBC(self);
    func_002249B0(self);
    (void)func_002283D4(self);
    func_00227894(self);
    func_00224D78(self);
    if (func_005811E8(RAT(self, 0x40C)) != 0) {
        route_safestr name = route_safestr_make("SE_EN_FAINT");
        func_001507D8(self, &name, 0);
    }
}
