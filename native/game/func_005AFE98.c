/* USA 005AFE98 (EU 005AFE70): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (14 names), 12 other stores, 4 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006965C4;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A860;
extern uint32_t data_0070A864;
extern uint32_t data_0070A868;
extern uint32_t data_0070A870;
extern uint32_t data_0070A874;
extern uint32_t data_0070A878;
extern uint32_t data_0070A87C;
extern uint32_t data_0073B710;
extern uint32_t data_0073B714;
extern uint32_t data_0073B718;
extern uint32_t data_0073B71C;
extern uint32_t data_0073B730;
extern uint32_t data_0073B978;
extern uint32_t data_0073B9E8;
extern uint32_t data_0073B9EC;
extern uint32_t data_0073B9F0;
extern uint32_t data_0073B9F4;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011DF90(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603944(void);

static const char *const names_0073B978[14] = {
    "wait",
    "dead_st",
    "dead_ed",
    "damage",
    "damage_big",
    "run",
    "up",
    "walk",
    "slip_st",
    "slip_md",
    "slip_ed",
    "appear",
    "jitabata",
    "piyopiyo",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AFE98(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0073B978, names_0073B978, 14);
    data_0070A870 = 0xFFFFFFFFu;
    data_0070A874 = 0xFFFFFFFFu;
    data_0070A878 = 0x00000000u;
    data_0070A87C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4EC00000u, (uintptr_t)&func_0011DF90);
    data_0070A864 = ret0;
    uintptr_t ret1 = func_00114608(0x4C360B61u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070A868 = ret1;
    data_0073B9E8 = 0x00000000u /* 0.0 f */;
    data_0073B9EC = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_0073B9F0 = 0xBF19999Au /* -0.6000000238418579 f */;
    func_004FC6FC((uintptr_t)&data_0073B9F4, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyFunguin";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203t\203@\203\223\203M\203\223";
    data_0073B710 = 0x00000000u;
    data_0073B714 = 0x00000005u;
    data_0073B718 = (uintptr_t)&data_0073B71C;
    uintptr_t v0 = data_0070A860;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006965C4 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073B710;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073B730, (uintptr_t)&func_00603944, 0x0000026Cu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0073B710, (uintptr_t)((char *)stk + 32), v1);
}
