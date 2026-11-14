/* compilefix: asm-verified rewrite taken from native/route/alt/func_00345F20.c (route scout), preferred over
 * the compile-fixed Ghidra text this folder had (see README.md). */
/* USA 00345F20 (EU 00345EFC): player equipment model (re)loader. Reads the 11 equipment levels
 * from the save data (0055696C(*data_0070FB60, id) for ids 4,3,4,6,0xB,8,7,9,0xA,0xC,0xD) and
 * the level of id 0x1F; when anything changed since the last call (cached at this+0x3D8.. and
 * the s8 this+0x430), loads "PlayerItem/" + name[item][level-1] (string table 006A3288) +
 * ".bch" for every item through 00504D48 and stores the first model of each resource (or the
 * "Shooter" model, item 4) into the player's model slots (+0x2C..+0x5C), the resources at
 * this+0x404.. . Returns 1 when it reloaded, else 0.
 * Route: Link's creation / first update (his sword, shield, items models).
 * Bug: the converted Ghidra source did not compile (`local_1b0[0]._0_1_` partial-field syntax):
 * tripwire stub in the link.  Note: the callee EU 00556944 has two USA names in eu_usa_map
 * (0055696C and 005569A4, both "matched" natively as DIFFERENT functions); the matched
 * 0055696C (const Save*, uint) is the getter this code calls (Ghidra used it too), 005569A4
 * (S*, Vec3*) is not.
 * Verified instruction by instruction against EU 00345EFC..00346510: the three 11-entry jump
 * tables (ids above; result switch 0->+0x3C, 1->+0x54, 2->+0x38, 3->+0x40, 4->00533400
 * "Shooter" ->+0x50, 5->+0x2C, 6->+0x30, 7->+0x34, 8->+0x4C, 9->+0x58, 10->+0x5C), the
 * `movne r5, #1` change flag, `subs/movlt 0` + sxtb level compare, data_0070BC24 set from
 * 0019B04C(*data_006930E0)+0x214 and cleared at the end, the stack frame at the ARM sp offsets
 * (FixedSafeString<256> at sp+4, load arg at sp+0x110..0x15C, SafeString temps at sp+0x168 and
 * sp+0x178), the string pointer moved through s16 as raw bits, `cmp; ldrhi` first-model reads.
 * 001E2444's 4th argument is a dead register on ARM (passed 0).  Confidence: high. */
#include "../route/route.h"

extern uint32_t data_0070FB60[], data_00712538[], data_006930E0[], data_0070BC24[],
    data_006F5BD0[], data_006A3288[], data_006C57E0[], data_006A3338[], data_0070BC28[];
int func_0055696C(int save, int id);
int func_001E1EA8(int obj);
int func_0019B04C(int obj);
int *func_001E2444(int param_1, int *param_2, int param_3, uint32_t param_4);
int func_00504D48(int mgr, int arg);
int func_00533400(int res, int *name);
void *func_0010E3C4(void *dst, const void *src, uint32_t n);
uint64_t func_00689928(int *fss, int *str, uint32_t n);

#define SP(off, T) RF(sp, off, T)

static int item_id(uint32_t i)
{
    switch (i & 0xFF) {
    case 0: case 2: return 4;
    case 1: return 3;
    case 3: return 6;
    case 4: return 0xB;
    case 5: return 8;
    case 6: return 7;
    case 7: return 9;
    case 8: return 0xA;
    case 9: return 0xC;
    case 10: return 0xD;
    default: return 0x2D;
    }
}

static uint32_t first_model(char *res)
{
    return RF(res, 0xC8, uint32_t) != 0 ? RF(RP(res, 0xD0), 0, uint32_t) : 0;
}

int func_00345F20(char *self)
{
    int changed = 0;
    for (int32_t i = 0; i < 0xB; i++) {
        if (func_0055696C((int)data_0070FB60[0], item_id(i)) != RF(self, 0x3D8 + i * 4, int32_t))
            changed = 1;
        RF(self, 0x3D8 + i * 4, int32_t) = func_0055696C((int)data_0070FB60[0], item_id(i));
    }
    int32_t lv = func_0055696C((int)data_0070FB60[0], 0x1F) - 2;
    if (lv < 0)
        lv = 0;
    int8_t lv8 = (int8_t)lv;
    if (RF(self, 0x430, int8_t) != lv8)
        RF(self, 0x430, int8_t) = lv8;
    else if (!changed)
        return 0;

    _Alignas(8) char sp[0x194];
    memset(sp, 0, sizeof sp);
    SP(0x180, uint32_t) = (uint32_t)func_001E1EA8((int)data_00712538[0]);
    data_0070BC24[0] = RF(GPTR_TO(char, func_0019B04C((int)data_006930E0[0])), 0x214, uint32_t);
    for (uint32_t i = 0; (int32_t)i < 0xB; i++) {
        int32_t lvl = func_0055696C((int)data_0070FB60[0], item_id(i));
        if (lvl == 0)
            lvl = 2;
        uint32_t name = RF(data_006A3288, i * 16 + lvl * 4 - 4, uint32_t); /* vldr s16: raw bits */
        SP(0x110, uint32_t) = GPTR_OF(data_006F5988);
        SP(0x114, uint32_t) = GPTR_OF(data_006C57E0);
        SP(0x118, uint32_t) = 0;
        SP(0x11C, uint32_t) = 0;
        SP(0x120, uint32_t) = 0x20;
        SP(0x12C, uint32_t) = 0;
        SP(0x124, uint32_t) = 0;
        SP(0x140, uint32_t) = GPTR_OF(data_006A3338); /* "World" */
        SP(0x128, uint32_t) = 0;
        SP(0x130, uint32_t) = 0;
        SP(0x134, uint32_t) = 0;
        SP(0x138, uint32_t) = 0;
        SP(0x13C, uint32_t) = GPTR_OF(data_006F5988);
        SP(0x144, uint8_t) = 7;
        SP(0x145, uint8_t) = 4;
        SP(0x150, uint32_t) = GPTR_OF("");
        SP(0x146, uint8_t) = 0;
        SP(0x148, uint8_t) = 0;
        SP(0x147, uint8_t) = 0;
        SP(0x15C, uint8_t) = 1;
        SP(0x154, uint32_t) = 0;
        SP(0x14C, uint32_t) = GPTR_OF(data_006F5988);
        SP(0x158, uint32_t) = 0;
        SP(8, uint32_t) = GPTR_OF(sp + 0x10);
        SP(0xC, int32_t) = 0x100;
        SP(0x10F, uint8_t) = 0;
        SP(0x10, uint8_t) = 0;
        SP(4, uint32_t) = GPTR_OF(data_006F5BD0);
        char *tmp = sp + 0x178;
        SP(0x17C, uint32_t) = GPTR_OF("PlayerItem/");
        SP(0x178, uint32_t) = GPTR_OF(data_006F5988);
        char *buf = RP(sp, 8);
        RVFN(void (*)(char *), tmp, 8)(tmp);
        const char *s = RP(sp, 0x17C);
        int32_t n = 0;
        for (;;) {
            if (s[n] == 0) {
                if (n > 0x40000)
                    n = 0;
                break;
            }
            n++;
            if (n > 0x40000) {
                n = 0;
                break;
            }
        }
        if (SP(0xC, int32_t) <= n)
            n = SP(0xC, int32_t) - 1;
        RVFN(void (*)(char *), tmp, 8)(tmp);
        func_0010E3C4(buf, RP(sp, 0x17C), (uint32_t)n);
        buf[n] = 0;
        SP(0x178, uint32_t) = GPTR_OF(data_006F5988);
        SP(0x17C, uint32_t) = name;
        func_00689928((int *)(sp + 4), (int *)tmp, 0xFFFFFFFFu);
        SP(0x17C, uint32_t) = GPTR_OF(".bch");
        SP(0x178, uint32_t) = GPTR_OF(data_006F5988);
        func_00689928((int *)(sp + 4), (int *)tmp, 0xFFFFFFFFu);
        SP(0x145, uint8_t) = 0xFF;
        SP(0x147, uint8_t) = 0;
        SP(0x154, uint32_t) = SP(0x180, uint32_t);
        SP(0x15C, uint8_t) = 0;
        SP(0x150, uint32_t) = SP(8, uint32_t);
        SP(0x158, uint32_t) = GPTR_OF(func_001E2444((int)data_00712538[0], (int *)(sp + 4), -1, 0));
        char *res = GPTR_TO(char, func_00504D48((int)data_0070BC28[0], (int)GPTR_OF(sp + 0x110)));
        switch (i) {
        case 0: RF(self, 0x3C, uint32_t) = first_model(res); break;
        case 1: RF(self, 0x54, uint32_t) = first_model(res); break;
        case 2: RF(self, 0x38, uint32_t) = first_model(res); break;
        case 3: RF(self, 0x40, uint32_t) = first_model(res); break;
        case 4: {
            SP(0x16C, uint32_t) = GPTR_OF("Shooter");
            SP(0x168, uint32_t) = GPTR_OF(data_006F5988);
            RF(self, 0x50, int32_t) = func_00533400((int)GPTR_OF(res), (int *)(sp + 0x168));
            break;
        }
        case 5: RF(self, 0x2C, uint32_t) = first_model(res); break;
        case 6: RF(self, 0x30, uint32_t) = first_model(res); break;
        case 7: RF(self, 0x34, uint32_t) = first_model(res); break;
        case 8: RF(self, 0x4C, uint32_t) = first_model(res); break;
        case 9: RF(self, 0x58, uint32_t) = first_model(res); break;
        case 10: RF(self, 0x5C, uint32_t) = first_model(res); break;
        default: break;
        }
        RSETP(self, 0x404 + i * 4, res);
    }
    data_0070BC24[0] = 0;
    return 1;
}
