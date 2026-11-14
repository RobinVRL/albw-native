/* USA 005A9B3C (EU 005A9B14): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (19 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069669C;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A880;
extern uint32_t data_0070A888;
extern uint32_t data_0070A88C;
extern uint32_t data_0070A890;
extern uint32_t data_0070A894;
extern uint32_t data_0073BA3C;
extern uint32_t data_0073BA40;
extern uint32_t data_0073BA44;
extern uint32_t data_0073BA48;
extern uint32_t data_0073BA5C;
extern uint32_t data_0073BCA4;
extern uint32_t data_0073BD3C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006030A8(void);

static const char *const names_0073BCA4[19] = {
    "wait",
    "walk_st",
    "walk_md",
    "walk_ed",
    "attack_l_st",
    "attack_l_md",
    "attack_l_ed",
    "attack_r_st",
    "attack_r_md",
    "attack_r_ed",
    "turn_l_st",
    "turn_l_ed",
    "turn_r_st",
    "turn_r_ed",
    "damage",
    "piyopiyo",
    "dead_st",
    "dead_ed",
    "jitabata",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A9B3C(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyGapura";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203K\203v\203\211";
    data_0070A888 = 0xFFFFFFFFu;
    data_0070A88C = 0xFFFFFFFFu;
    data_0070A890 = 0x00000000u;
    data_0070A894 = 0x00000000u;
    data_0073BA3C = 0x00000000u;
    data_0073BA40 = 0x00000005u;
    data_0073BA44 = (uintptr_t)&data_0073BA48;
    uintptr_t v0 = data_0070A880;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069669C : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073BA3C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073BA5C, (uintptr_t)&func_006030A8, 0x0000025Au, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0073BA3C, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_0073BCA4, names_0073BCA4, 19);
    func_004FC6FC((uintptr_t)&data_0073BD3C, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
