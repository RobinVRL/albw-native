/* USA 005CCCAC (EU 005CCC84): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (8 names), 8 other stores, 3 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006971D8;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AB10;
extern uint32_t data_0070AB14;
extern uint32_t data_0070AB18;
extern uint32_t data_0070AB1C;
extern uint32_t data_0070AB20;
extern uint32_t data_0070AB24;
extern uint32_t data_0073F8B0;
extern uint32_t data_0073F8B4;
extern uint32_t data_0073F8B8;
extern uint32_t data_0073F8BC;
extern uint32_t data_0073F8D0;
extern uint32_t data_0073FB18;
extern uint32_t data_0073FB58;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011DEE8(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006068C8(void);

static const char *const names_0073FB18[8] = {
    "wait",
    "division",
    "union",
    "rebound",
    "damage",
    "jitabata",
    "piyopiyo",
    "dead",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CCCAC(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0073FB18, names_0073FB18, 8);
    data_0070AB18 = 0xFFFFFFFFu;
    data_0070AB1C = 0xFFFFFFFFu;
    data_0070AB20 = 0x00000000u;
    data_0070AB24 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4B360B61u, (uintptr_t)&func_0011DEE8);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"Giibo";
    data_0070AB14 = ret0;
    func_004FC5F8((uintptr_t)&data_0073FB58, (uintptr_t)((char *)stk + 24), 0x00000000u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"EnemyJellyGiibo";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203M\201[\203{(\212O\221\244)";
    data_0073F8B0 = 0x00000000u;
    data_0073F8B4 = 0x00000005u;
    data_0073F8B8 = (uintptr_t)&data_0073F8BC;
    uintptr_t v0 = data_0070AB10;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006971D8 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073F8B0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073F8D0, (uintptr_t)&func_006068C8, 0x0000026Eu, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0073F8B0, (uintptr_t)((char *)stk + 40), v1);
}
