/* USA 00217E58 (EU 00217E58): calc of the enemy actor class with vtable slot 006D2DD8 (enemy base
 * 004F70A8) that hurts the player on contact: while the cooldown +0x8F4 is 0 and the touched
 * object *(+0x43C) is active, reacts to its s8 kind +0x21 (5: player hit 002917A4(player,
 * position, 0, 0.2f), cooldown 0x16; 8: 00291A38(player, position, 0.2f), cooldown 50; 0xE:
 * 00291FE0(player, position, 0.2f), cooldown 50; each followed by 004FA124(this, kind, 0) and
 * 004F9FC4(this, object)); otherwise counts the cooldown down. Then StateMgr::exec (StateMgr at
 * +0x8C0), 004F48F0 / 004F5588, 004F5174(this, horizontal distance^2 to 00520FC0 below 400 by a
 * signed bit compare), tail 004F5BD8(this, 0, 0).
 * Route: actor state machine (enemy, damages Link).
 * Bugs: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); the
 * player-hit calls get their position and s0 strength (0.2f) as the native gameplay rewrites
 * expect; float returns of 004F48F0 / 004F5588 declared float.
 * Verified instruction by instruction against EU 00217E58..00218068 (`subne/strne; beq`,
 * vmul + vmla distance, `cmp r0, #0x43C80000; movlt`).  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "route.h"

extern uint32_t data_0070FB60[];
int func_004F70A8(char *self);
int func_002917A4(uint32_t player_w, float *pos, uint8_t flag, float power);
int func_00291A38(uint32_t player_w, float *pos, float power);
int func_00291FE0(uint32_t player_w, float *pos, float power);
void func_004FA124(char *self, int kind, int a);
void func_004F9FC4(char *self, uint32_t obj);
float func_004F48F0(char *self);
float func_004F5588(char *self);
uint32_t func_00520FC0(void);
void func_004F5174(char *self, int a);
int func_004F5BD8(char *A, uint32_t *src, int **force, float *unused);

void func_00217E58(char *self)
{
    if (func_004F70A8(self) == 0)
        return;
    uint32_t c = RF(self, 0x8F4, uint32_t);
    if (c != 0) {
        RF(self, 0x8F4, uint32_t) = c - 1;
    } else {
        char *o = RP(self, 0x43C);
        if (RF(o, 0, uint32_t) != 0) {
            int8_t k = RF(o, 0x21, int8_t);
            int hit = 1;
            if (k == 5) {
                func_002917A4(data_0070FB60[0], (float *)RAT(self, 0x3D0), 0, 0.2f);
                RF(self, 0x8F4, uint32_t) = 0x16;
            } else if (k == 8) {
                func_00291A38(data_0070FB60[0], (float *)RAT(self, 0x3D0), 0.2f);
                RF(self, 0x8F4, uint32_t) = 0x32;
            } else if (k == 0xE) {
                func_00291FE0(data_0070FB60[0], (float *)RAT(self, 0x3D0), 0.2f);
                RF(self, 0x8F4, uint32_t) = 0x32;
            } else {
                hit = 0;
            }
            if (hit) {
                func_004FA124(self, RF(RP(self, 0x43C), 0x21, int8_t), 0);
                func_004F9FC4(self, RF(self, 0x43C, uint32_t));
            }
        }
    }
    route_statemgr_exec(RAT(self, 0x8C0));
    (void)func_004F48F0(self);
    (void)func_004F5588(self);
    char *p = GPTR_TO(char, func_00520FC0());
    float dx = RF(p, 0, float) - RF(self, 0x3D0, float);
    float dz = RF(p, 8, float) - RF(self, 0x3D8, float);
    float d = dx * dx;
    d = d + dz * dz;
    int32_t bits;
    memcpy(&bits, &d, 4);
    func_004F5174(self, bits < 0x43C80000 ? 1 : 0);
    func_004F5BD8(self, 0, 0, 0);
}
