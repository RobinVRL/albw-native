/* USA 005AFA9C (EU 005AFA74): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (9 names), 22 other stores, 9 calls, 3 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00696400;
extern uint32_t data_00696404;
extern uint32_t data_00696408;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A7F8;
extern uint32_t data_0070A7FC;
extern uint32_t data_0070A800;
extern uint32_t data_0070A804;
extern uint32_t data_0070A808;
extern uint32_t data_0070A80C;
extern uint32_t data_0070A810;
extern uint32_t data_0070A814;
extern uint32_t data_0070A818;
extern uint32_t data_0070A820;
extern uint32_t data_0070A824;
extern uint32_t data_0070A828;
extern uint32_t data_0070A82C;
extern uint32_t data_0073AC80;
extern uint32_t data_0073AC84;
extern uint32_t data_0073AC88;
extern uint32_t data_0073AC8C;
extern uint32_t data_0073ACA0;
extern uint32_t data_0073AEE8;
extern uint32_t data_0073AEEC;
extern uint32_t data_0073AEF0;
extern uint32_t data_0073AEF4;
extern uint32_t data_0073AF08;
extern uint32_t data_0073B150;
extern uint32_t data_0073B154;
extern uint32_t data_0073B158;
extern uint32_t data_0073B15C;
extern uint32_t data_0073B170;
extern uint32_t data_0073B3B8;
extern uint32_t data_0073B400;
extern uint32_t data_0073B404;
extern uint32_t data_0073B408;
extern uint32_t data_0073B40C;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00116F80(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603918(void);

static const char *const names_0073B3B8[9] = {
    "wait",
    "walk",
    "eye_close",
    "eye_open",
    "damage",
    "dead_st",
    "dead_ed",
    "piyopiyo",
    "jitabata",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AFA9C(void) {
    uintptr_t stk[20];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyEyegore";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\227\316\203A\203C\203S\201[\203\213";
    data_0070A820 = 0xFFFFFFFFu;
    data_0070A824 = 0xFFFFFFFFu;
    data_0070A828 = 0x00000000u;
    data_0070A82C = 0x00000000u;
    data_0073AC80 = 0x00000000u;
    data_0073AC84 = 0x00000005u;
    data_0073AC88 = (uintptr_t)&data_0073AC8C;
    uintptr_t v0 = data_0070A7F8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00696400 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073AC80;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073ACA0, (uintptr_t)&func_00603918, 0x0000020Bu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0073AC80, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyBlueEyegore";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\220\302\203A\203C\203S\201[\203\213";
    data_0073AEE8 = 0x00000000u;
    data_0073AEEC = 0x00000005u;
    data_0073AEF0 = (uintptr_t)&data_0073AEF4;
    uintptr_t v2 = data_0070A7FC;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_00696404 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073AEE8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073AF08, (uintptr_t)&func_00603918, 0x0000020Cu, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0073AEE8, (uintptr_t)((char *)stk + 48), v3);
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"EnemyRedEyegore";
    *(uintptr_t *)((char *)stk + 64) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 68) = (uintptr_t)"\220\324\203A\203C\203S\201[\203\213";
    data_0073B150 = 0x00000000u;
    data_0073B154 = 0x00000005u;
    data_0073B158 = (uintptr_t)&data_0073B15C;
    uintptr_t v4 = data_0070A800;
    uintptr_t v5 = v4 == 0x0u ? (uintptr_t)&data_00696408 : v4;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073B150;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 64);
    *(uintptr_t *)((char *)stk + 8) = v5;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073B170, (uintptr_t)&func_00603918, 0x0000020Du, (uintptr_t)((char *)stk + 56), (uintptr_t)&data_0073B150, (uintptr_t)((char *)stk + 64), v5);
    fill_names((sead_SafeString *)&data_0073B3B8, names_0073B3B8, 9);
    uintptr_t ret3 = func_00114608(0x4C638E39u, (uintptr_t)&func_00116F80);
    data_0070A804 = ret3;
    uintptr_t ret4 = func_00114608(0x4C9F49F5u, 0x00000000u);
    data_0070A808 = ret4;
    data_0073B400 = 0x00000000u /* 0.0 f */;
    data_0073B404 = 0x3F99999Au /* 1.2000000476837158 f */;
    data_0073B408 = 0xBF4CCCCDu /* -0.800000011920929 f */;
    uintptr_t ret5 = func_00114608(0xCC9F49F5u, 0x00000000u);
    data_0070A80C = ret5;
    uintptr_t ret6 = func_00114608(0x4C360B61u, 0x00000000u);
    data_0070A810 = ret6;
    data_0070A814 = ret3;
    uintptr_t ret7 = func_00114608(0x4AB60B61u, (uintptr_t)&data_0070A814);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0x2u;
    data_0070A818 = ret7;
    func_004FC6FC((uintptr_t)&data_0073B40C, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
