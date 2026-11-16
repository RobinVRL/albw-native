/* USA 002E6448 (EU 002E6424): calc of the enemy actor class with vtable slot 006DDF94 (enemy base
 * 004F70A8): 003521F0(this+0x324, 00556E94(player)); when active: outside states 6/9 flags
 * +0xA00 when the target is not the player's and enters state 6 on 004F8998(this, 0, 0);
 * StateMgr::exec (StateMgr at +0x8BC); vertical speed reset (+0xA1C = 0, 004F944C) or the
 * +0xA1C counter (back to state 0 after 10 frames outside states 0/6/7) and gravity floored at
 * -0.2; 004F48F0 / 004F5588 / 004F5BD8(this, 0, 1); animation 00169A80(*(+0xA7C)) /
 * 00168E9C(*(+0xA7C), *(+0x40C), 1); model rotation 00491624 -> 0015133C(*(+0x41C), &m).
 * Route: actor state machine (enemy).
 * Bugs: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); float
 * returns of the 004F base helpers / 00491624 declared float.
 * Verified instruction by instruction against EU 002E6424..002E6634.  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "route.h"

extern uint32_t data_0070FB60[];
int func_00556E64(int player);
int func_003521F0(void *p, int a);
int func_004F70A8(char *self);
uint32_t func_005568E8(int player);
int func_004F8998(char *self, int a, char *b);
void func_00663FA8(char *sm, uint32_t newState);
int func_00520EE4(char *self);
int func_00521078(char *self);
float func_004F944C(void);
float func_004F898C(void);
float func_004F48F0(char *self);
float func_004F5588(char *self);
int func_004F5BD8(char *A, uint32_t *src, int **force, float *unused);
void func_00169A80(int obj);
void func_00168E9C(int a, int b, int c);
float func_00491624(float *m, uint32_t ax, uint32_t ay, uint32_t az);
void func_0015133C(int obj, void *m);

void func_002E6448(char *self)
{
    func_003521F0(RAT(self, 0x324), func_00556E64((int)data_0070FB60[0]));
    if (func_004F70A8(self) == 0)
        return;
    char *sm = RAT(self, 0x8BC);
    int8_t s = RF(self, 0x8C0, int8_t);
    if (s != 6 && s != 9) {
        char *t = RP(self, 0x438);
        if (RF(t, 0, uint32_t) != 0) {
            uint32_t x = func_005568E8((int)data_0070FB60[0]);
            if (RF(t, 0, uint32_t) != x)
                RF(self, 0xA00, uint8_t) = 1;
        }
        if (func_004F8998(self, 0, 0) != 0)
            func_00663FA8(sm, 6);
    }
    route_statemgr_exec(sm);
    if (func_00520EE4(self) == 0) {
        if (func_00521078(self) != 0) {
            RF(self, 0xA1C, int32_t) = 0;
            RF(self, 0x3E0, float) = func_004F944C();
        } else if ((s = RF(self, 0x8C0, int8_t)) != 6) {
            if (RF(self, 0xA1C, int32_t) > 10 && s != 0 && s != 7)
                func_00663FA8(sm, 0);
            RF(self, 0xA1C, int32_t) = RF(self, 0xA1C, int32_t) + 1;
            float g = func_004F898C();
            float vy = RF(self, 0x3E0, float) - g;
            if (vy < -0.2f)
                vy = -0.2f;
            RF(self, 0x3E0, float) = vy;
        }
    }
    (void)func_004F48F0(self);
    (void)func_004F5588(self);
    func_004F5BD8(self, 0, (int **)1, 0);
    func_00169A80((int)RF(self, 0xA7C, uint32_t));
    func_00168E9C((int)RF(self, 0xA7C, uint32_t), (int)RF(self, 0x40C, uint32_t), 1);
    float m[9];
    (void)func_00491624(m, 0, RF(self, 0x3E8, uint32_t), 0);
    func_0015133C((int)RF(self, 0x41C, uint32_t), m);
}
