/* USA 005CD624 (EU 005CD5FC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (15 names), 18 other stores, 4 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069B054;
extern uint32_t data_0069B058;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B5C8;
extern uint32_t data_0070B5CC;
extern uint32_t data_0070B5D0;
extern uint32_t data_0070B5D4;
extern uint32_t data_0070B5D8;
extern uint32_t data_0070B5DC;
extern uint32_t data_0070B5E0;
extern uint32_t data_0070B5E4;
extern uint32_t data_0074DA64;
extern uint32_t data_0074DA68;
extern uint32_t data_0074DA6C;
extern uint32_t data_0074DA70;
extern uint32_t data_0074DA84;
extern uint32_t data_0074DCCC;
extern uint32_t data_0074DCD0;
extern uint32_t data_0074DCD4;
extern uint32_t data_0074DCD8;
extern uint32_t data_0074DCEC;
extern uint32_t data_0074DF34;
extern uint32_t data_0074DFAC;
extern uint32_t data_0074DFB0;
extern uint32_t data_0074DFB4;
extern uint32_t data_0074DFB8;
extern uint32_t data_0074DFBC;
extern uint32_t data_0074DFC0;
extern uint32_t data_0074DFC4;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00117300(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606984(void);

static const char *const names_0074DF34[15] = {
    "opening",
    "opening_l",
    "opening_r",
    "wait",
    "wait_water",
    "walk_st",
    "walk_md",
    "walk_ed",
    "attack_st",
    "attack_md",
    "attack_ed",
    "revive",
    "wait_water",
    "damage",
    "dead",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CD624(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0074DF34, names_0074DF34, 15);
    data_0070B5D8 = 0xFFFFFFFFu;
    data_0070B5DC = 0xFFFFFFFFu;
    data_0070B5E0 = 0x00000000u;
    data_0070B5E4 = 0x00000000u;
    data_0074DFAC = 0x3F800000u /* 1.0 f */;
    data_0074DFB0 = 0x3F800000u /* 1.0 f */;
    data_0074DFB4 = 0x3F800000u /* 1.0 f */;
    data_0074DFB8 = 0x3FC00000u /* 1.5 f */;
    data_0074DFBC = 0x3FC00000u /* 1.5 f */;
    data_0074DFC0 = 0x3FC00000u /* 1.5 f */;
    uintptr_t ret0 = func_00114608(0x4CE38E39u, (uintptr_t)&func_00117300);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x1u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070B5D0 = ret0;
    data_0070B5D4 = ret0;
    func_004FC6FC((uintptr_t)&data_0074DFC4, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyWirtShield";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203\217\201[\203g\202\314\203V\201[\203\213\203h";
    data_0074DA64 = 0x00000000u;
    data_0074DA68 = 0x00000005u;
    data_0074DA6C = (uintptr_t)&data_0074DA70;
    uintptr_t v0 = data_0070B5C8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069B054 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074DA64;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074DA84, (uintptr_t)&func_00606984, 0x0000023Fu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0074DA64, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyUraWirtShield";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203\215\203E\203\211\203\213\227p\203\217\201[\203g\202\314\203V\201[\203\213\203h";
    data_0074DCCC = 0x00000000u;
    data_0074DCD0 = 0x00000005u;
    data_0074DCD4 = (uintptr_t)&data_0074DCD8;
    uintptr_t v2 = data_0070B5CC;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_0069B058 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074DCCC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074DCEC, (uintptr_t)&func_00606984, 0x00000241u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0074DCCC, (uintptr_t)((char *)stk + 48), v3);
}
