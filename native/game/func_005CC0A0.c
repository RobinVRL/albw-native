/* USA 005CC0A0 (EU 005CC078): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (46 names), 90 other stores, 19 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006969BC;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A910;
extern uint32_t data_0070A914;
extern uint32_t data_0070A918;
extern uint32_t data_0070A91C;
extern uint32_t data_0070A920;
extern uint32_t data_0070A924;
extern uint32_t data_0070A928;
extern uint32_t data_0070A92C;
extern uint32_t data_0070A930;
extern uint32_t data_0070A934;
extern uint32_t data_0070A938;
extern uint32_t data_0070A93C;
extern uint32_t data_0070A940;
extern uint32_t data_0070A944;
extern uint32_t data_0070A948;
extern uint32_t data_0070A94C;
extern uint32_t data_0070A950;
extern uint32_t data_0070A954;
extern uint32_t data_0070A958;
extern uint32_t data_0070A95C;
extern uint32_t data_0070A960;
extern uint32_t data_0070A964;
extern uint32_t data_0070A968;
extern uint32_t data_0070A96C;
extern uint32_t data_0070A970;
extern uint32_t data_0070A974;
extern uint32_t data_0070A978;
extern uint32_t data_0070A97C;
extern uint32_t data_0070A980;
extern uint32_t data_0070A984;
extern uint32_t data_0070A988;
extern uint32_t data_0070A98C;
extern uint32_t data_0070A990;
extern uint32_t data_0070A998;
extern uint32_t data_0070A99C;
extern uint32_t data_0070A9A0;
extern uint32_t data_0070A9A4;
extern uint32_t data_0073CBE8;
extern uint32_t data_0073CBEC;
extern uint32_t data_0073CBF0;
extern uint32_t data_0073CBF4;
extern uint32_t data_0073CC08;
extern uint32_t data_0073CE50;
extern uint32_t data_0073CFC0;
extern uint32_t data_0073CFC4;
extern uint32_t data_0073CFC8;
extern uint32_t data_0073CFCC;
extern uint32_t data_0073CFD0;
extern uint32_t data_0073CFD4;
extern uint32_t data_0073CFD8;
extern uint32_t data_0073CFDC;
extern uint32_t data_0073CFE0;
extern uint32_t data_0073CFE4;
extern uint32_t data_0073CFE8;
extern uint32_t data_0073CFEC;
extern uint32_t data_0073CFF0;
extern uint32_t data_0073CFF4;
extern uint32_t data_0073CFF8;
extern uint32_t data_0073CFFC;
extern uint32_t data_0073D000;
extern uint32_t data_0073D004;
extern uint32_t data_0073D008;
extern uint32_t data_0073D00C;
extern uint32_t data_0073D010;
extern uint32_t data_0073D014;
extern uint32_t data_0073D018;
extern uint32_t data_0073D01C;
extern uint32_t data_0073D020;
extern uint32_t data_0073D024;
extern uint32_t data_0073D028;
extern uint32_t data_0073D02C;
extern uint32_t data_0073D030;
extern uint32_t data_0073D034;
extern uint32_t data_0073D038;
extern uint32_t data_0073D03C;
extern uint32_t data_0073D040;
extern uint32_t data_0073D044;
extern uint32_t data_0073D048;
extern uint32_t data_0073D04C;
extern uint32_t data_0073D050;
extern uint32_t data_0073D054;
extern uint32_t data_0073D058;
extern uint32_t data_0073D05C;
extern uint32_t data_0073D060;
extern uint32_t data_0073D064;
extern uint32_t data_0073D068;
extern uint32_t data_0073D06C;
extern uint32_t data_0073D070;
extern uint32_t data_0073D074;
extern uint32_t data_0073D078;
extern uint32_t data_0073D07C;
extern uint32_t data_0073D080;
extern uint32_t data_0073D084;
extern uint32_t data_0073D088;
extern uint32_t data_0073D08C;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011A1FC(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606874(void);

static const char *const names_0073CE50[46] = {
    "HagureBoss",
    "HagureBoss_shield",
    "HagureBoss_sword",
    "walk0",
    "walk_gachi",
    "walk_tate0",
    "attack_sword0",
    "attack_sword_kaeshi0",
    "attack_sword_ed",
    "attack_sword_tate0",
    "kaiten_st",
    "kaiten",
    "kaiten_ed",
    "fire_st",
    "fire",
    "fire_ed",
    "find",
    "lost0",
    "lost_walk0",
    "chance0",
    "throw0",
    "separate",
    "warp",
    "warp_ed",
    "wait_last",
    "attack_sword_last_st",
    "attack_sword_last0",
    "attack_sword_last_ed",
    "lost_damage0",
    "lost_damage0",
    "lost_damage_ed",
    "end_st",
    "end_ed",
    "walk_tate_st",
    "appear",
    "opening",
    "FireTHard",
    "FireLHard",
    "FireRHard",
    "FireHeadHard",
    "FireBHard",
    "FireTSoft",
    "FireLSoft",
    "FireRSoft",
    "FireHeadSoft",
    "FireBSoft",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CC0A0(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0073CE50, names_0073CE50, 46);
    data_0070A998 = 0xFFFFFFFFu;
    data_0070A99C = 0xFFFFFFFFu;
    data_0070A9A0 = 0x00000000u;
    data_0070A9A4 = 0x00000000u;
    data_0073CFC0 = 0x41880000u /* 17.0 f */;
    data_0073CFC4 = 0x00000000u /* 0.0 f */;
    data_0073CFC8 = 0xC1DC0000u /* -27.5 f */;
    data_0073CFCC = 0x42080000u /* 34.0 f */;
    data_0073CFD0 = 0x00000000u /* 0.0 f */;
    data_0073CFD4 = 0xC0F00000u /* -7.5 f */;
    uintptr_t ret0 = func_00114608(0x00000000u, (uintptr_t)&func_0011A1FC);
    data_0070A914 = ret0;
    uintptr_t ret1 = func_00114608(0x4C638E39u, 0x00000000u);
    data_0070A918 = ret1;
    uintptr_t ret2 = func_00114608(0x4E800000u, 0x00000000u);
    data_0070A91C = ret2;
    uintptr_t ret3 = func_00114608(0x4B360B61u, 0x00000000u);
    data_0070A920 = ret3;
    uintptr_t ret4 = func_00114608(0x4CE38E39u, 0x00000000u);
    data_0070A924 = ret4;
    data_0070A928 = ret3;
    data_0070A92C = ret4;
    data_0070A930 = ret0;
    data_0073CFD8 = 0x3FE66666u /* 1.7999999523162842 f */;
    data_0073CFDC = 0x41700000u /* 15.0 f */;
    data_0073CFE0 = 0x40800000u /* 4.0 f */;
    data_0073CFE4 = 0x3F99999Au /* 1.2000000476837158 f */;
    data_0073CFE8 = 0x41700000u /* 15.0 f */;
    data_0073CFEC = 0x404CCCCDu /* 3.200000047683716 f */;
    data_0073CFF0 = 0x3F19999Au /* 0.6000000238418579 f */;
    data_0073CFF4 = 0x00000000u /* 0.0 f */;
    data_0073CFF8 = 0xBF000000u /* -0.5 f */;
    data_0073CFFC = 0x3F19999Au /* 0.6000000238418579 f */;
    data_0073D000 = 0x00000000u /* 0.0 f */;
    data_0073D004 = 0x3F000000u /* 0.5 f */;
    uintptr_t ret5 = func_00114608(0x4BB60B61u, (uintptr_t)&data_0070A92C);
    data_0070A934 = ret5;
    uintptr_t ret6 = func_00114608(0x4AB60B61u, 0x00000000u);
    data_0070A938 = ret6;
    uintptr_t ret7 = func_00114608(0x463A69DDu, 0x00000000u);
    data_0070A93C = ret7;
    data_0070A940 = ret5;
    uintptr_t ret8 = func_00114608(0x4991A2B4u, (uintptr_t)&data_0070A940);
    data_0070A944 = ret8;
    data_0070A948 = ret7;
    data_0070A94C = ret6;
    uintptr_t ret9 = func_00114608(0x4C360B61u, (uintptr_t)&data_0070A94C);
    data_0070A950 = ret9;
    uintptr_t ret10 = func_00114608(0x4D582D83u, 0x00000000u);
    data_0070A954 = ret10;
    data_0070A958 = ret3;
    data_0070A95C = ret9;
    uintptr_t ret11 = func_00114608(0x4911A2B4u, (uintptr_t)&data_0070A95C);
    data_0070A960 = ret11;
    data_0070A964 = ret5;
    data_0070A968 = ret6;
    data_0070A96C = ret9;
    data_0070A970 = ret8;
    uintptr_t ret12 = func_00114608(0x4C088889u, (uintptr_t)&data_0070A970);
    data_0070A974 = ret12;
    uintptr_t ret13 = func_00114608(0x4BE38E39u, 0x00000000u);
    data_0070A978 = ret13;
    uintptr_t ret14 = func_00114608(0x4E000000u, 0x00000000u);
    data_0070A97C = ret14;
    data_0070A980 = ret14;
    uintptr_t ret15 = func_00114608(0x4D638E39u, (uintptr_t)&data_0070A980);
    data_0070A984 = ret15;
    uintptr_t ret16 = func_00114608(0xCCE38E39u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 28);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 28) = 0x0u;
    *(uint8_t *)((char *)stk + 29) = 0x0u;
    *(uint8_t *)((char *)stk + 30) = 0x0u;
    *(uint8_t *)((char *)stk + 31) = 0xFFu;
    *(uint8_t *)((char *)stk + 32) = 0xFFu;
    data_0070A988 = ret16;
    data_0070A98C = ret15;
    data_0070A990 = ret1;
    data_0073D008 = 0x3F800000u /* 1.0 f */;
    data_0073D00C = 0x00000000u /* 0.0 f */;
    data_0073D010 = 0x00000000u /* 0.0 f */;
    data_0073D014 = 0x3F800000u /* 1.0 f */;
    data_0073D018 = 0x40600000u /* 3.5 f */;
    data_0073D01C = 0x40600000u /* 3.5 f */;
    data_0073D020 = 0x00000000u /* 0.0 f */;
    data_0073D024 = 0xC0533333u /* -3.299999952316284 f */;
    data_0073D028 = 0x00000000u /* 0.0 f */;
    data_0073D02C = 0x00000000u /* 0.0 f */;
    data_0073D030 = 0x3F800000u /* 1.0 f */;
    data_0073D034 = 0x00000000u /* 0.0 f */;
    data_0073D038 = 0x00000000u /* 0.0 f */;
    data_0073D03C = 0x00000000u /* 0.0 f */;
    data_0073D040 = 0x00000000u /* 0.0 f */;
    data_0073D044 = 0x00000000u /* 0.0 f */;
    data_0073D048 = 0x3F800000u /* 1.0 f */;
    data_0073D04C = 0x3F000000u /* 0.5 f */;
    data_0073D050 = 0xC0000000u /* -2.0 f */;
    data_0073D054 = 0x41000000u /* 8.0 f */;
    data_0073D058 = 0x40000000u /* 2.0 f */;
    data_0073D05C = 0x00000000u /* 0.0 f */;
    data_0073D060 = 0x41200000u /* 10.0 f */;
    data_0073D064 = 0x3FC00000u /* 1.5 f */;
    data_0073D068 = 0x00000000u /* 0.0 f */;
    data_0073D06C = 0x41000000u /* 8.0 f */;
    data_0073D070 = 0x3FC00000u /* 1.5 f */;
    data_0073D074 = 0x00000000u /* 0.0 f */;
    data_0073D078 = 0x40A00000u /* 5.0 f */;
    data_0073D07C = 0x3F800000u /* 1.0 f */;
    data_0073D080 = 0x00000000u /* 0.0 f */;
    data_0073D084 = 0x00000000u /* 0.0 f */;
    data_0073D088 = 0x00000000u /* 0.0 f */;
    func_004FC5F8((uintptr_t)&data_0073D08C, (uintptr_t)&data_0073CE50, 0x00000000u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 28), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\202\315\202\256\202\352\203{\203X";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyHagureBoss";
    data_0073CBE8 = 0x00000000u;
    data_0073CBEC = 0x00000005u;
    data_0073CBF0 = (uintptr_t)&data_0073CBF4;
    uintptr_t v0 = data_0070A910;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006969BC : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073CBE8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073CC08, (uintptr_t)&func_00606874, 0x00000018u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0073CBE8, (uintptr_t)((char *)stk + 16), v1);
}
