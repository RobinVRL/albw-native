/* compilefix: asm-verified rewrite taken from native/route/alt/func_002D5D40.c (route scout), preferred over
 * the compile-fixed Ghidra text this folder had (see README.md). */
/* USA 002D5D40 (EU 002D5D1C): message handler (virtual) of a player-carried object (wall-hit /
 * damage reactions: strings SE_PL_HIT_WALL, SE_PV_DAMAGE): switch on the s16 message id at
 * msg+2 (0x44..0x49, jump table 002D5D54): 0x44 random yaw (0x20000000-aligned) into +0x58;
 * 0x45 activate (002919DC, collider reset 004A9948(.., this+0xF0, 9), +0x128 / +0x120 from
 * 00537B48); 0x46 knock away (0028C8EC(+0x4C, 2), polar offset 0.08, 004D8490 0.11, +0x7C =
 * y + 0.45, sounds); 0x47 0028C8EC(+0x4C, 0); 0x48 sounds + 0028C8EC(+0x4C, 2); 0x49 +0x17C = 1.
 * Route: player/actor message handling (actor-player phase, depth 4); stub today.
 * Bug: the converted source did not compile (code-section string printed as `s_`+1).
 * Verified instruction by instruction against EU 002D5D1C..002D5FA4 incl. the 6-entry jump table
 * (r0 = 1 before the switch: the default/0x49 return value).  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "../route/route.h"

extern uint32_t data_00708998[], data_00711F50[], data_00709D28[], data_00709DF8[];
int func_00114608(uint32_t a, uint32_t b);
int func_002919DC(int obj);
void func_004A9948(int mgr, int col, uint32_t a);
int func_00537B48(int obj);
int func_0028C8EC(int obj, uint32_t n, uint32_t c, int *d);
int func_004D80A4(float *out, uint32_t angle, float radius);
int func_00115C54(float *out, float *a, float *b);
int func_004D8490(float *v, float s);
int func_004ED46C(int obj, int a);
int func_004EA104(int mgr, int *name, int a);
void func_004EAF8C(int mgr, int *name, int a);

static void play_hit_sounds(void)
{
    route_safestr s = route_safestr_make("SE_PL_HIT_WALL");
    func_004EA104((int)data_00711F50[0], (int *)&s, 0);
    s = route_safestr_make("SE_PV_DAMAGE");
    func_004EAF8C((int)data_00711F50[0], (int *)&s, 0);
}

int func_002D5D40(char *self, char *msg)
{
    uint32_t k = (uint32_t)(RF(msg, 2, int16_t) - 0x44);
    switch (k) {
    case 0: {
        RF(self, 0x151, uint8_t) = 0;
        uint32_t base = RF(RP(self, 0x3C), 0, uint32_t);
        uint32_t r = ((uint32_t)func_00114608(0x4D800000u, 0) + base) >> 29 << 29;
        RF(self, 0x58, uint32_t) = r;
        return (int)r;
    }
    case 1: {
        RF(self, 0x151, uint8_t) = 1;
        func_002919DC((int)RF(self, 0x2C, uint32_t));
        RF(RP(self, 0x2C), 0xC9, uint8_t) = 0;
        func_004A9948((int)data_00709D28[0], (int)GPTR_OF(RAT(self, 0xF0)), 9);
        uint32_t v = (uint32_t)func_00537B48((int)GPTR_OF(RP(self, 0x28) + 0x40C));
        RF(self, 0x128, uint32_t) = 0x30000000u | (v << 26);
        RF(self, 0x16C, uint32_t) = 0;
        char *p = RP(self, 0x30);
        RF(self, 0x170, uint32_t) = RF(p, 0, uint32_t);
        RF(self, 0x174, uint32_t) = RF(p, 4, uint32_t);
        RF(self, 0x178, uint32_t) = RF(p, 8, uint32_t);
        uint32_t n = ((uint32_t)func_00537B48((int)GPTR_OF(RP(self, 0x28) + 0x40C)) + 1) << 2;
        int8_t mode = RF(GPTR_TO(char, data_00709DF8[0]), 0x18, int8_t);
        if (mode == 7 || mode == 0x25)
            n >>= 1;
        RF(self, 0x120, uint16_t) = (uint16_t)n;
        return (int)n;
    }
    case 2: {
        RF(self, 0x151, uint8_t) = 0;
        func_0028C8EC((int)RF(self, 0x4C, uint32_t), 2, 0, 0);
        float *v = GPTR_TO(float, RF(self, 0x34, uint32_t));
        v[0] = 0.0f;
        v[1] = 0.0f;
        v[2] = 0.0f;
        RF(self, 0x78, uint32_t) = RF(RP(self, 0x30), 4, uint32_t);
        float off[3];
        func_004D80A4(off, RF(RP(self, 0x3C), 0, uint32_t) + 0x80000000u, 0.08f);
        off[1] = 0.0f;
        func_00115C54(GPTR_TO(float, RF(self, 0x34, uint32_t)), GPTR_TO(float, RF(self, 0x34, uint32_t)), off);
        func_004D8490(GPTR_TO(float, RF(self, 0x34, uint32_t)), 0.11f);
        RF(self, 0x7C, float) = RF(RP(self, 0x34), 4, float) + 0.45f;
        RF(self, 0x80, uint32_t) = RF(self, 0x78, uint32_t);
        RF(RP(self, 0x50), 0x4D0, float) = 0.0f;
        func_004ED46C((int)data_00708998[0], 7);
        play_hit_sounds();
        return 0;
    }
    case 3:
        return func_0028C8EC((int)RF(self, 0x4C, uint32_t), 0, 0, 0);
    case 4:
        func_004ED46C((int)data_00708998[0], 7);
        play_hit_sounds();
        return func_0028C8EC((int)RF(self, 0x4C, uint32_t), 2, 0, 0);
    case 5:
        RF(self, 0x17C, uint8_t) = 1;
        return 1;
    default:
        return 1;
    }
}
