/* USA 005B0154 (EU 005B012C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (12 names), 13 other stores, 7 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00696D40;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AA38;
extern uint32_t data_0070AA3C;
extern uint32_t data_0070AA40;
extern uint32_t data_0070AA44;
extern uint32_t data_0070AA48;
extern uint32_t data_0070AA4C;
extern uint32_t data_0070AA50;
extern uint32_t data_0070AA58;
extern uint32_t data_0070AA5C;
extern uint32_t data_0070AA60;
extern uint32_t data_0070AA64;
extern uint32_t data_0073DEC4;
extern uint32_t data_0073DEC8;
extern uint32_t data_0073DECC;
extern uint32_t data_0073DED0;
extern uint32_t data_0073DEE4;
extern uint32_t data_0073E12C;
extern uint32_t data_0073E18C;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00116CA8(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060396C(void);

static const char *const names_0073E12C[12] = {
    "wait",
    "walk",
    "run",
    "shock",
    "guard",
    "crash",
    "damage",
    "dead_st",
    "dead_ed",
    "piyopiyo",
    "jitabata",
    "approach",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B0154(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0073E12C, names_0073E12C, 12);
    data_0070AA58 = 0xFFFFFFFFu;
    data_0070AA5C = 0xFFFFFFFFu;
    data_0070AA60 = 0x00000000u;
    data_0070AA64 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4B360B61u, (uintptr_t)&func_00116CA8);
    data_0070AA3C = ret0;
    uintptr_t ret1 = func_00114608(0x4CB60B61u, 0x00000000u);
    data_0070AA40 = ret1;
    uintptr_t ret2 = func_00114608(0x4DE38E39u, 0x00000000u);
    data_0070AA44 = ret2;
    data_0070AA48 = ret2;
    uintptr_t ret3 = func_00114608(0x4AB60B61u, (uintptr_t)&data_0070AA48);
    data_0070AA4C = ret3;
    uintptr_t ret4 = func_00114608(0x4C360B61u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"HipLoop";
    data_0070AA50 = ret4;
    func_004FC5F8((uintptr_t)&data_0073E18C, (uintptr_t)((char *)stk + 24), 0x00000000u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"EnemyHipLoop";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203q\203b\203v\203\213\201[\203v";
    data_0073DEC4 = 0x00000000u;
    data_0073DEC8 = 0x00000005u;
    data_0073DECC = (uintptr_t)&data_0073DED0;
    uintptr_t v0 = data_0070AA38;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00696D40 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073DEC4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073DEE4, (uintptr_t)&func_0060396C, 0x00000245u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0073DEC4, (uintptr_t)((char *)stk + 40), v1);
}
