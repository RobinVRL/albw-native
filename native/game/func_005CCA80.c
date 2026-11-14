/* USA 005CCA80 (EU 005CCA58): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 14 other stores, 8 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00696B54;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A9A8;
extern uint32_t data_0070A9AC;
extern uint32_t data_0070A9B0;
extern uint32_t data_0070A9B4;
extern uint32_t data_0070A9B8;
extern uint32_t data_0070A9BC;
extern uint32_t data_0070A9C0;
extern uint32_t data_0070A9C4;
extern uint32_t data_0070A9C8;
extern uint32_t data_0070A9CC;
extern uint32_t data_0070A9D0;
extern uint32_t data_0070A9D4;
extern uint32_t data_0073D0D4;
extern uint32_t data_0073D0D8;
extern uint32_t data_0073D0DC;
extern uint32_t data_0073D0E0;
extern uint32_t data_0073D0F4;
extern uint32_t data_0073D33C;
extern uint32_t data_0073D34C;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011CC6C(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006068A0(void);

static const char *const names_0073D33C[2] = {
    "fire_head",
    "end_head",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CCA80(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0073D33C, names_0073D33C, 2);
    data_0070A9C8 = 0xFFFFFFFFu;
    data_0070A9CC = 0xFFFFFFFFu;
    data_0070A9D0 = 0x00000000u;
    data_0070A9D4 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4B360B61u, (uintptr_t)&func_0011CC6C);
    data_0070A9AC = ret0;
    uintptr_t ret1 = func_00114608(0x4BB60B61u, 0x00000000u);
    data_0070A9B0 = ret1;
    uintptr_t ret2 = func_00114608(0x4C638E39u, 0x00000000u);
    data_0070A9B4 = ret2;
    uintptr_t ret3 = func_00114608(0x00000000u, 0x00000000u);
    data_0070A9B8 = ret3;
    uintptr_t ret4 = func_00114608(0x4CE38E39u, 0x00000000u);
    data_0070A9BC = ret4;
    uintptr_t ret5 = func_00114608(0x4D638E39u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"HagureBoss_head";
    data_0070A9C0 = ret5;
    data_0070A9C4 = ret1;
    func_004FC5F8((uintptr_t)&data_0073D34C, (uintptr_t)((char *)stk + 24), 0x00000002u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\202\315\202\256\202\352\203{\203X\223\252";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyHagureHead";
    data_0073D0D4 = 0x00000000u;
    data_0073D0D8 = 0x00000005u;
    data_0073D0DC = (uintptr_t)&data_0073D0E0;
    uintptr_t v0 = data_0070A9A8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00696B54 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073D0D4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073D0F4, (uintptr_t)&func_006068A0, 0x00000016u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0073D0D4, (uintptr_t)((char *)stk + 32), v1);
}
