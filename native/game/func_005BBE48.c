/* USA 005BBE48 (EU 005BBE20): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (12 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00697944;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AC98;
extern uint32_t data_0070ACA0;
extern uint32_t data_0070ACA4;
extern uint32_t data_0070ACA8;
extern uint32_t data_0070ACAC;
extern uint32_t data_007417D8;
extern uint32_t data_007417DC;
extern uint32_t data_007417E0;
extern uint32_t data_007417E4;
extern uint32_t data_007417F8;
extern uint32_t data_00741A40;
extern uint32_t data_00741AA0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006049E0(void);

static const char *const names_00741A40[12] = {
    "walk",
    "eat_st",
    "eat_ed",
    "spit",
    "run",
    "damage",
    "piyopiyo",
    "jitabata",
    "swallow_st",
    "swallow_ed",
    "belch",
    "dead",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BBE48(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_00741A40, names_00741A40, 12);
    data_0070ACA0 = 0xFFFFFFFFu;
    data_0070ACA4 = 0xFFFFFFFFu;
    data_0070ACA8 = 0x00000000u;
    data_0070ACAC = 0x00000000u;
    func_004FC6FC((uintptr_t)&data_00741AA0, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyLikeLike";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203\211\203C\203N\203\211\203C\203N";
    data_007417D8 = 0x00000000u;
    data_007417DC = 0x00000005u;
    data_007417E0 = (uintptr_t)&data_007417E4;
    uintptr_t v0 = data_0070AC98;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00697944 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007417D8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007417F8, (uintptr_t)&func_006049E0, 0x00000013u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007417D8, (uintptr_t)((char *)stk + 32), v1);
}
