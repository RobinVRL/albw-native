/* USA 005C3C14 (EU 005C3BEC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (13 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00698CD0;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AF38;
extern uint32_t data_0070AF40;
extern uint32_t data_0070AF44;
extern uint32_t data_0070AF48;
extern uint32_t data_0070AF4C;
extern uint32_t data_0070AF50;
extern uint32_t data_00745E88;
extern uint32_t data_00745E8C;
extern uint32_t data_00745E90;
extern uint32_t data_00745E94;
extern uint32_t data_00745EA8;
extern uint32_t data_007460F0;
extern uint32_t data_00746148;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605918(void);

static const char *const names_007460F0[11] = {
    "walk",
    "eat_st",
    "eat_ed",
    "spit",
    "run",
    "damage",
    "piyopiyo",
    "jitabata",
    "appearance",
    "dead_st",
    "dead_ed",
};
static const char *const names_0070AF50[2] = {
    "twinkle",
    "RupeeSilver",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C3C14(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_007460F0, names_007460F0, 11);
    data_0070AF40 = 0xFFFFFFFFu;
    data_0070AF44 = 0xFFFFFFFFu;
    data_0070AF48 = 0x00000000u;
    data_0070AF4C = 0x00000000u;
    func_004FC6FC((uintptr_t)&data_00746148, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyRupeeLike";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203\213\203s\201[\203\211\203C\203N";
    fill_names((sead_SafeString *)&data_0070AF50, names_0070AF50, 2);
    data_00745E88 = 0x00000000u;
    data_00745E8C = 0x00000005u;
    data_00745E90 = (uintptr_t)&data_00745E94;
    uintptr_t v0 = data_0070AF38;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00698CD0 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00745E88;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00745EA8, (uintptr_t)&func_00605918, 0x00000014u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00745E88, (uintptr_t)((char *)stk + 32), v1);
}
