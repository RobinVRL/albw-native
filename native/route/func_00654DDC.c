/* USA 00654DDC (EU 00654DB4): calc of an enemy actor class (vtable slots 006D3260, 006E14BC),
 * built on the enemy base 004F70A8 / 004F5588 / 004F5BD8: u16 timer +0x8E4 count-down; when the
 * base update 004F70A8 says the enemy is active: forced switch to state 8 (exit 0065DF0C, set
 * 003931EC, enter 0065DF78) when not in state 8/9, not blocked (0058A960) and 004F8998(this, 0, 0)
 * asks for it; 004FB0D8(this, this+0x3E0); StateMgr::exec (StateMgr at +0x8F0); gravity
 * 004F8964(this+0x3E0, 1, 004F898C()); 004F48F0 / 004F5588 / 004F5BD8(this, 0, 0); and with
 * +0x916 set and the player *data_0070FB60 present, hands the joint matrix (+0x8D0 of the model
 * *(+0x40C)) to 0028F81C(player, &m, s8 +0x8EC, u16 +0x8EA).
 * (00654DDC and 00655D90 are the same code for two classes with different state handlers.)
 * Route: actor state machine (enemies of the first field areas).
 * Bugs: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); the
 * float-returning helpers 004F48F0 / 004F5588 are declared float (x87 balance on i386).
 * Verified instruction by instruction against EU 00654DB4 (`cmp #8; cmpne #9`, ldr-writeback
 * `[r4, #0x40c]!` so +0x4C4 is this+0x8D0, 48-byte joint stride).  Confidence: high. */
#include "route.h"

extern uint32_t data_0070FB60[];
int func_004F70A8(char *self);
int func_0058A960(char *self);
int func_004F8998(char *self, int a, char *b);
void func_0065DF0C(char *sm, uint32_t s);
void func_003931EC(void *sm, uint32_t state);
void func_0065DF78(char *sm);
int func_004FB0D8(char *self, float *p);
float func_004F898C(void);
void func_004F8964(float *p, int a, float f);
float func_004F48F0(char *self);
float func_004F5588(char *self);
int func_004F5BD8(char *A, uint32_t *src, int **force, float *unused);
int func_001119F4(uint32_t *dst, uint32_t *src);
void func_0011FE98(float *out, float *m);
int func_0028F81C(int player, void *p, int a, uint32_t b);

void func_00654DDC(char *self)
{
    if (RF(self, 0x8E4, uint16_t) != 0)
        RF(self, 0x8E4, uint16_t) -= 1;
    if (func_004F70A8(self) == 0)
        return;
    int8_t s = RF(self, 0x8F4, int8_t);
    if (s != 8 && s != 9 && func_0058A960(self) == 0 && func_004F8998(self, 0, 0) != 0) {
        func_0065DF0C(RAT(self, 0x8F0), 8);
        func_003931EC(RAT(self, 0x8F0), 8);
        func_0065DF78(RAT(self, 0x8F0));
    }
    func_004FB0D8(self, (float *)RAT(self, 0x3E0));
    route_statemgr_exec(RAT(self, 0x8F0));
    func_004F8964((float *)RAT(self, 0x3E0), 1, func_004F898C());
    (void)func_004F48F0(self);
    (void)func_004F5588(self);
    func_004F5BD8(self, 0, 0, 0);
    if (RF(self, 0x916, uint8_t) == 0)
        return;
    uint32_t player = data_0070FB60[0];
    if (player == 0)
        return;
    char *j = RP(RP(RP(self, 0x40C), 0x24), 0x14) + RF(self, 0x8D0, uint32_t) * 48;
    uint32_t m[12];
    float out[12];
    func_001119F4(m, (uint32_t *)j);
    func_0011FE98(out, (float *)m);
    func_0028F81C((int)player, out, RF(self, 0x8EC, int8_t), RF(self, 0x8EA, uint16_t));
}
