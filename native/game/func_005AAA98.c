/* USA 005AAA98 (EU 005AAA70): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (7 names), 10 other stores, 5 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069AAF0;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B4C0;
extern uint32_t data_0070B4C4;
extern uint32_t data_0070B4C8;
extern uint32_t data_0070B4CC;
extern uint32_t data_0070B4D0;
extern uint32_t data_0070B4D4;
extern uint32_t data_0070B4D8;
extern uint32_t data_0070B4DC;
extern uint32_t data_0074C80C;
extern uint32_t data_0074C810;
extern uint32_t data_0074C814;
extern uint32_t data_0074C818;
extern uint32_t data_0074C82C;
extern uint32_t data_0074CA74;
extern uint32_t data_0074CAAC;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011DB14(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603180(void);

static const char *const names_0074CA74[7] = {
    "freeze",
    "awake",
    "walk",
    "walk_sideL",
    "walk_sideR",
    "damage_fire",
    "damage_fire",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AAA98(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0074CA74, names_0074CA74, 7);
    data_0070B4D0 = 0xFFFFFFFFu;
    data_0070B4D4 = 0xFFFFFFFFu;
    data_0070B4D8 = 0x00000000u;
    data_0070B4DC = 0x00000000u;
    uintptr_t ret0 = func_00114608(0xCDAAAAABu, (uintptr_t)&func_0011DB14);
    data_0070B4C4 = ret0;
    uintptr_t ret1 = func_00114608(0x4E7D27D3u, 0x00000000u);
    data_0070B4C8 = ret1;
    uintptr_t ret2 = func_00114608(0x4C638E39u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070B4CC = ret2;
    func_004FC6FC((uintptr_t)&data_0074CAAC, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyTainon";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203^\203C\203m\203\223";
    data_0074C80C = 0x00000000u;
    data_0074C810 = 0x00000005u;
    data_0074C814 = (uintptr_t)&data_0074C818;
    uintptr_t v0 = data_0070B4C0;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069AAF0 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074C80C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074C82C, (uintptr_t)&func_00603180, 0x00000264u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0074C80C, (uintptr_t)((char *)stk + 32), v1);
}
