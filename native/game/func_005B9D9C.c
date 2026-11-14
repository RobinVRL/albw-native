/* USA 005B9D9C (EU 005B9D74): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (9 names), 25 other stores, 7 calls, 5 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069545C;
extern uint32_t data_00695460;
extern uint32_t data_00695464;
extern uint32_t data_00695468;
extern uint32_t data_0069546C;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A610;
extern uint32_t data_0070A614;
extern uint32_t data_0070A618;
extern uint32_t data_0070A61C;
extern uint32_t data_0070A620;
extern uint32_t data_0070A628;
extern uint32_t data_0070A62C;
extern uint32_t data_0070A630;
extern uint32_t data_0070A634;
extern uint32_t data_00737050;
extern uint32_t data_00737054;
extern uint32_t data_00737058;
extern uint32_t data_0073705C;
extern uint32_t data_00737070;
extern uint32_t data_007372B8;
extern uint32_t data_007372BC;
extern uint32_t data_007372C0;
extern uint32_t data_007372C4;
extern uint32_t data_007372D8;
extern uint32_t data_00737520;
extern uint32_t data_00737524;
extern uint32_t data_00737528;
extern uint32_t data_0073752C;
extern uint32_t data_00737540;
extern uint32_t data_00737788;
extern uint32_t data_0073778C;
extern uint32_t data_00737790;
extern uint32_t data_00737794;
extern uint32_t data_007377A8;
extern uint32_t data_007379F0;
extern uint32_t data_007379F4;
extern uint32_t data_007379F8;
extern uint32_t data_007379FC;
extern uint32_t data_00737A10;
extern uint32_t data_00737C58;
extern uint32_t data_00737CA0;
extern uint32_t data_00737CA4;
extern uint32_t data_00737CA8;
extern uint32_t data_00737CAC;
extern uint32_t data_00737CB0;
extern uint32_t data_00737CB4;
extern uint32_t data_00737CB8;
extern uint32_t data_00737D00;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060483C(void);
void func_00604938(void);
void func_00604978(void);
void func_0060AFB8(void);
void func_0060AFF8(void);

static const char *const names_00737C58[9] = {
    "wait00",
    "spark_st",
    "spark_md",
    "spark_ed",
    "damage",
    "dead_st",
    "dead_ed",
    "piyopiyo",
    "appear",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B9D9C(void) {
    uintptr_t stk[32];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyBiri";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203r\203\212";
    data_0070A628 = 0xFFFFFFFFu;
    data_0070A62C = 0xFFFFFFFFu;
    data_0070A630 = 0x00000000u;
    data_0070A634 = 0x00000000u;
    data_00737050 = 0x00000000u;
    data_00737054 = 0x00000005u;
    data_00737058 = (uintptr_t)&data_0073705C;
    uintptr_t v0 = data_0070A610;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069545C : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00737050;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00737070, (uintptr_t)&func_0060AFF8, 0x00000220u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_00737050, (uintptr_t)((char *)stk + 48), v1);
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"EnemyBari";
    *(uintptr_t *)((char *)stk + 72) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 76) = (uintptr_t)"\203o\203\212";
    data_007372B8 = 0x00000000u;
    data_007372BC = 0x00000005u;
    data_007372C0 = (uintptr_t)&data_007372C4;
    uintptr_t v2 = data_0070A614;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_00695460 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007372B8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 72);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007372D8, (uintptr_t)&func_0060AFB8, 0x00000221u, (uintptr_t)((char *)stk + 56), (uintptr_t)&data_007372B8, (uintptr_t)((char *)stk + 72), v3);
    *(uintptr_t *)((char *)stk + 80) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 84) = (uintptr_t)"EnemyKatabari";
    *(uintptr_t *)((char *)stk + 88) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 92) = (uintptr_t)"\203o\203\212\203J\203^";
    data_00737520 = 0x00000000u;
    data_00737524 = 0x00000005u;
    data_00737528 = (uintptr_t)&data_0073752C;
    uintptr_t v4 = data_0070A618;
    uintptr_t v5 = v4 == 0x0u ? (uintptr_t)&data_00695464 : v4;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00737520;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 88);
    *(uintptr_t *)((char *)stk + 8) = v5;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00737540, (uintptr_t)&func_00604938, 0x00000223u, (uintptr_t)((char *)stk + 80), (uintptr_t)&data_00737520, (uintptr_t)((char *)stk + 88), v5);
    *(uintptr_t *)((char *)stk + 64) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 68) = (uintptr_t)"EnemyKatabiri";
    *(uintptr_t *)((char *)stk + 96) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 100) = (uintptr_t)"\203r\203\212\203J\203^";
    data_00737788 = 0x00000000u;
    data_0073778C = 0x00000005u;
    data_00737790 = (uintptr_t)&data_00737794;
    uintptr_t v6 = data_0070A61C;
    uintptr_t v7 = v6 == 0x0u ? (uintptr_t)&data_00695468 : v6;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00737788;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 96);
    *(uintptr_t *)((char *)stk + 8) = v7;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007377A8, (uintptr_t)&func_00604978, 0x00000222u, (uintptr_t)((char *)stk + 64), (uintptr_t)&data_00737788, (uintptr_t)((char *)stk + 96), v7);
    *(uintptr_t *)((char *)stk + 104) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 108) = (uintptr_t)"EnemyGigabari";
    *(uintptr_t *)((char *)stk + 112) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 116) = (uintptr_t)"\203M\203K\203o\203\212";
    data_007379F0 = 0x00000000u;
    data_007379F4 = 0x00000005u;
    data_007379F8 = (uintptr_t)&data_007379FC;
    uintptr_t v8 = data_0070A620;
    uintptr_t v9 = v8 == 0x0u ? (uintptr_t)&data_0069546C : v8;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007379F0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 112);
    *(uintptr_t *)((char *)stk + 8) = v9;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00737A10, (uintptr_t)&func_0060483C, 0x00000224u, (uintptr_t)((char *)stk + 104), (uintptr_t)&data_007379F0, (uintptr_t)((char *)stk + 112), v9);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 20);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 20) = 0x0u;
    *(uint8_t *)((char *)stk + 21) = 0x0u;
    *(uint8_t *)((char *)stk + 22) = 0x0u;
    *(uint8_t *)((char *)stk + 23) = 0xFFu;
    *(uint8_t *)((char *)stk + 24) = 0xFFu;
    fill_names((sead_SafeString *)&data_00737C58, names_00737C58, 9);
    data_00737CA0 = 0x00000000u /* 0.0 f */;
    data_00737CA4 = 0x3F266666u /* 0.6499999761581421 f */;
    data_00737CA8 = 0xBF266666u /* -0.6499999761581421 f */;
    data_00737CAC = 0x00000000u /* 0.0 f */;
    data_00737CB0 = 0x3F666666u /* 0.8999999761581421 f */;
    data_00737CB4 = 0xBF666666u /* -0.8999999761581421 f */;
    func_004FC6FC((uintptr_t)&data_00737CB8, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 20), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 28);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 28) = 0x0u;
    *(uint8_t *)((char *)stk + 29) = 0x0u;
    *(uint8_t *)((char *)stk + 30) = 0x0u;
    *(uint8_t *)((char *)stk + 31) = 0xFFu;
    *(uint8_t *)((char *)stk + 32) = 0x1u;
    func_004FC6FC((uintptr_t)&data_00737D00, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 28), 0x0000000Bu);
}
