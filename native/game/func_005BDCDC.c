/* USA 005BDCDC (EU 005BDCB4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 14 other stores, 6 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D8B0;
extern uint32_t data_0070D8B4;
extern uint32_t data_0070D8B8;
extern uint32_t data_0070D8BC;
extern uint32_t data_0070D8C0;
extern uint32_t data_0070D8C8;
extern uint32_t data_0070D8CC;
extern uint32_t data_0070D8D0;
extern uint32_t data_0070D8D4;
extern uint32_t data_0076F70C;
extern uint32_t data_0076F710;
extern uint32_t data_0076F714;
extern uint32_t data_0076F718;
extern uint32_t data_0076F72C;
extern uint32_t data_0076F974;
extern uint32_t data_0076F998;
extern uint32_t data_0076F99C;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011B638(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604CF4(void);

static const char *const names_0076F974[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BDCDC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0076F974, names_0076F974, 4);
    data_0070D8C8 = 0xFFFFFFFFu;
    data_0070D8CC = 0xFFFFFFFFu;
    data_0070D8D0 = 0x00000000u;
    data_0070D8D4 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0xCD638E39u, (uintptr_t)&func_0011B638);
    data_0070D8B0 = ret0;
    uintptr_t ret1 = func_00114608(0xCC638E39u, 0x00000000u);
    data_0070D8B4 = ret1;
    uintptr_t ret2 = func_00114608(0x4CB60B61u, 0x00000000u);
    data_0070D8B8 = ret2;
    uintptr_t ret3 = func_00114608(0x4C360B61u, 0x00000000u);
    data_0070D8BC = ret3;
    uintptr_t ret4 = func_00114608(0x4D360B61u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076F70C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"X^WAp{[";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MiniGameRSObj";
    data_0070D8C0 = ret4;
    data_0076F70C = 0x00000000u;
    data_0076F710 = 0x00000005u;
    data_0076F714 = (uintptr_t)&data_0076F718;
    data_0076F998 = 0x00000000u;
    data_0076F99C = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0076F72C, (uintptr_t)&func_00604CF4, 0x00000022u, (uintptr_t)((char *)stk + 24));
}
