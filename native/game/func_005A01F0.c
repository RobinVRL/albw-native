/* USA 005A01F0 (EU 005A01C8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (8 names), 13 other stores, 3 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006988A8;
extern uint32_t data_006988AC;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AEC8;
extern uint32_t data_0070AECC;
extern uint32_t data_0070AED0;
extern uint32_t data_0070AED4;
extern uint32_t data_0070AED8;
extern uint32_t data_0070AEDC;
extern uint32_t data_007450B0;
extern uint32_t data_007450B4;
extern uint32_t data_007450B8;
extern uint32_t data_007450BC;
extern uint32_t data_007450D0;
extern uint32_t data_00745318;
extern uint32_t data_0074531C;
extern uint32_t data_00745320;
extern uint32_t data_00745324;
extern uint32_t data_00745338;
extern uint32_t data_00745580;
extern uint32_t data_007455C0;
extern uint32_t data_007455C4;
extern uint32_t data_007455C8;
extern uint32_t data_007455CC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B064(void);

static const char *const names_00745580[8] = {
    "wait",
    "walk",
    "appear",
    "jitabata",
    "piyopiyo",
    "damage",
    "dead_st",
    "dead_ed",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A01F0(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyPopo";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203|\203|";
    data_0070AED0 = 0xFFFFFFFFu;
    data_0070AED4 = 0xFFFFFFFFu;
    data_0070AED8 = 0x00000000u;
    data_0070AEDC = 0x00000000u;
    data_007450B0 = 0x00000000u;
    data_007450B4 = 0x00000005u;
    data_007450B8 = (uintptr_t)&data_007450BC;
    uintptr_t v0 = data_0070AEC8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006988A8 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007450B0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007450D0, (uintptr_t)&func_0060B064, 0x00000225u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007450B0, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyRedPopo";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\220\324\203|\203|";
    data_00745318 = 0x00000000u;
    data_0074531C = 0x00000005u;
    data_00745320 = (uintptr_t)&data_00745324;
    uintptr_t v2 = data_0070AECC;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_006988AC : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00745318;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00745338, (uintptr_t)&func_0060B064, 0x00000226u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_00745318, (uintptr_t)((char *)stk + 48), v3);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_00745580, names_00745580, 8);
    data_007455C0 = 0x00000000u /* 0.0 f */;
    data_007455C4 = 0x3F000000u /* 0.5 f */;
    data_007455C8 = 0xBF000000u /* -0.5 f */;
    func_004FC6FC((uintptr_t)&data_007455CC, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
