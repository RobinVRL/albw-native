/* USA 00157BF0 (EU 00157BF4): calc of the enemy actor class with vtable slot 006C8280 (enemy
 * base 004F70A8): eases the float +0xA48 (mirrored to +0x574) toward 0 or 0.28 by 5 % depending
 * on 00556E94(player); counter +0xA34 up to +0xA38; when active: outside states 9/10 flags
 * +0xA00 when the target is not the player's and enters state 9 when 004F8998(this, 0, 0);
 * StateMgr::exec (StateMgr at +0x8BC); vertical speed reset (004F944C) / gravity (004F898C,
 * floor -0.2, not in state 9); 004F48F0 / 004F5588 / 004F5BD8(this, 0, 0); keeps the position
 * in +0xA08..+0xA10.
 * Route: actor state machine (enemy).
 * Bugs: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); float
 * returns of the 004F base helpers declared float.
 * Verified instruction by instruction against EU 00157BF4..00157DEC (vneg + vmla easing, unfused
 * product, `addlo/strlo`, `cmp #9; cmpne #0xA`, vcmpe `vmovlo`).  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "route.h"

extern uint32_t data_0070FB60[];
int func_00556E94(int player);
int func_004F70A8(char *self);
uint32_t func_005568E8(int player);
int func_004F8998(char *self, int a, char *b);
void func_00657FA0(char *sm, uint32_t newState);
int func_00520EE4(char *self);
int func_00521078(char *self);
float func_004F944C(void);
float func_004F898C(void);
float func_004F48F0(char *self);
float func_004F5588(char *self);
int func_004F5BD8(char *A, uint32_t *src, int **force, float *unused);

void func_00157BF0(char *self)
{
    float f = RF(self, 0xA48, float);
    if (func_00556E94((int)data_0070FB60[0]) != 0) {
        float d = -f;
        f = f + d * 0.05f;
    } else {
        float d = 0.28f - f;
        f = f + d * 0.05f;
    }
    RF(self, 0xA48, float) = f;
    RF(self, 0x574, float) = f;
    if (RF(self, 0xA34, uint32_t) < RF(self, 0xA38, uint32_t))
        RF(self, 0xA34, uint32_t) += 1;
    if (func_004F70A8(self) == 0)
        return;
    char *sm = RAT(self, 0x8BC);
    int8_t s = RF(self, 0x8C0, int8_t);
    if (s != 9 && s != 10) {
        char *t = RP(self, 0x438);
        if (RF(t, 0, uint32_t) != 0) {
            uint32_t x = func_005568E8((int)data_0070FB60[0]);
            if (RF(t, 0, uint32_t) != x)
                RF(self, 0xA00, uint8_t) = 1;
        }
        if (func_004F8998(self, 0, 0) != 0)
            func_00657FA0(sm, 9);
    }
    route_statemgr_exec(sm);
    if (func_00520EE4(self) == 0) {
        if (func_00521078(self) != 0) {
            RF(self, 0x3E0, float) = func_004F944C();
        } else if (RF(self, 0x8C0, uint8_t) != 9) {
            float g = func_004F898C();
            float vy = RF(self, 0x3E0, float) - g;
            if (vy < -0.2f)
                vy = -0.2f;
            RF(self, 0x3E0, float) = vy;
        }
    }
    (void)func_004F48F0(self);
    (void)func_004F5588(self);
    func_004F5BD8(self, 0, 0, 0);
    RF(self, 0xA08, uint32_t) = RF(self, 0x3D0, uint32_t);
    RF(self, 0xA0C, uint32_t) = RF(self, 0x3D4, uint32_t);
    RF(self, 0xA10, uint32_t) = RF(self, 0x3D8, uint32_t);
}
