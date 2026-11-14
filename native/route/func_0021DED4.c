/* USA 0021DED4 (EU 0021DED4): calc shared by enemy actor classes (vtable slots 006D3518,
 * 006DAFBC, 006EDFA4) on the enemy base 004F70A8: outside state 6, flags +0xA00 when the target
 * *(*(+0x438)) is not the player's (005568E8(*data_0070FB60)) and enters state 6 when
 * 004F8998(this, 0, 0) asks; StateMgr::exec (StateMgr at +0x8BC); unless 00520EE4: either
 * resets (+0xA08 = 0, vy = 004F944C()) when 00521078, or counts +0xA08 (back to state 0 after
 * 10 frames outside states 0/4/6/7) and applies gravity vy -= 004F898C() floored at -0.2; then
 * 004F48F0 / 004F5588 / 004F5BD8(this, 0, 0) and the model rotation 00491624(&m, 0, yaw, 0) ->
 * 0015133C(*(+0x41C), &m).
 * Route: actor state machine (enemy).
 * Bugs: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); float
 * returns of 004F944C / 004F898C / 004F48F0 / 004F5588 / 00491624 declared float.
 * Verified instruction by instruction against EU 0021DED4..0021E0B0 (`movne/strbne`, signed
 * `ble #0xA`, `cmp #0; cmpne #7`, vcmpe `vmovlo`).  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "route.h"

extern uint32_t data_0070FB60[];
int func_004F70A8(char *self);
uint32_t func_005568E8(int player);
int func_004F8998(char *self, int a, char *b);
void func_0065E254(char *sm, uint32_t newState);
int func_00520EE4(char *self);
int func_00521078(char *self);
float func_004F944C(void);
float func_004F898C(void);
float func_004F48F0(char *self);
float func_004F5588(char *self);
int func_004F5BD8(char *A, uint32_t *src, int **force, float *unused);
float func_00491624(float *m, uint32_t ax, uint32_t ay, uint32_t az);
void func_0015133C(int obj, void *m);

void func_0021DED4(char *self)
{
    if (func_004F70A8(self) == 0)
        return;
    char *sm = RAT(self, 0x8BC);
    if (RF(self, 0x8C0, uint8_t) != 6) {
        char *t = RP(self, 0x438);
        if (RF(t, 0, uint32_t) != 0) {
            uint32_t x = func_005568E8((int)data_0070FB60[0]);
            if (RF(t, 0, uint32_t) != x)
                RF(self, 0xA00, uint8_t) = 1;
        }
        if (func_004F8998(self, 0, 0) != 0)
            func_0065E254(sm, 6);
    }
    route_statemgr_exec(sm);
    if (func_00520EE4(self) == 0) {
        if (func_00521078(self) != 0) {
            RF(self, 0xA08, int32_t) = 0;
            RF(self, 0x3E0, float) = func_004F944C();
        } else {
            int8_t s = RF(self, 0x8C0, int8_t);
            if (s != 6 && s != 4) {
                if (RF(self, 0xA08, int32_t) > 10 && s != 0 && s != 7)
                    func_0065E254(sm, 0);
                RF(self, 0xA08, int32_t) = RF(self, 0xA08, int32_t) + 1;
                float g = func_004F898C();
                float vy = RF(self, 0x3E0, float) - g;
                if (vy < -0.2f)
                    vy = -0.2f;
                RF(self, 0x3E0, float) = vy;
            }
        }
    }
    (void)func_004F48F0(self);
    (void)func_004F5588(self);
    func_004F5BD8(self, 0, 0, 0);
    float m[9];
    (void)func_00491624(m, 0, RF(self, 0x3E8, uint32_t), 0);
    func_0015133C((int)RF(self, 0x41C, uint32_t), m);
}
