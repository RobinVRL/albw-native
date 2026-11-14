/* USA 005A04A0 (EU 005A0478): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (9 names), 12 other stores, 4 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00698BE0;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AF00;
extern uint32_t data_0070AF04;
extern uint32_t data_0070AF08;
extern uint32_t data_0070AF10;
extern uint32_t data_0070AF14;
extern uint32_t data_0070AF18;
extern uint32_t data_0070AF1C;
extern uint32_t data_0074562C;
extern uint32_t data_00745630;
extern uint32_t data_00745634;
extern uint32_t data_00745638;
extern uint32_t data_0074564C;
extern uint32_t data_00745894;
extern uint32_t data_007458DC;
extern uint32_t data_007458E0;
extern uint32_t data_007458E4;
extern uint32_t data_007458E8;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011DAF8(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B090(void);

static const char *const names_00745894[9] = {
    "wait",
    "jump_st",
    "jump_md",
    "jump_ed",
    "damage",
    "dead_st",
    "dead_ed",
    "jitabata",
    "piyopiyo",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A04A0(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_00745894, names_00745894, 9);
    data_0070AF10 = 0xFFFFFFFFu;
    data_0070AF14 = 0xFFFFFFFFu;
    data_0070AF18 = 0x00000000u;
    data_0070AF1C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4D638E39u, (uintptr_t)&func_0011DAF8);
    data_0070AF04 = ret0;
    uintptr_t ret1 = func_00114608(0xCD638E39u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070AF08 = ret1;
    data_007458DC = 0x00000000u /* 0.0 f */;
    data_007458E0 = 0x3ECCCCCDu /* 0.4000000059604645 f */;
    data_007458E4 = 0xBF0CCCCDu /* -0.550000011920929 f */;
    func_004FC6FC((uintptr_t)&data_007458E8, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyRopa";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203\215\201[\203p";
    data_0074562C = 0x00000000u;
    data_00745630 = 0x00000005u;
    data_00745634 = (uintptr_t)&data_00745638;
    uintptr_t v0 = data_0070AF00;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00698BE0 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074562C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074564C, (uintptr_t)&func_0060B090, 0x00000202u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0074562C, (uintptr_t)((char *)stk + 32), v1);
}
