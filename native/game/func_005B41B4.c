/* USA 005B41B4 (EU 005B418C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (6 names), 13 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BF50;
extern uint32_t data_0070BF54;
extern uint32_t data_0070BF58;
extern uint32_t data_0070BF5C;
extern uint32_t data_00753F98;
extern uint32_t data_00753F9C;
extern uint32_t data_00753FA0;
extern uint32_t data_00753FA4;
extern uint32_t data_00753FB8;
extern uint32_t data_00754200;
extern uint32_t data_00754204;
extern uint32_t data_00754208;
extern uint32_t data_0075420C;
extern uint32_t data_00754220;
extern uint32_t data_00754468;
extern uint32_t data_0075446C;
extern uint32_t data_00754470;
extern uint32_t data_00754474;
extern uint32_t data_00754488;
extern uint32_t data_007546D0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603D3C(void);
void func_00604DD0(void);
void func_00604DF8(void);

static const char *const names_007546D0[6] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "open",
    "close",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B41B4(void) {
    uintptr_t stk[18];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00753F98;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojDoorChurch";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\213\263\211\357\202\314\224\340";
    fill_names((sead_SafeString *)&data_007546D0, names_007546D0, 6);
    data_0070BF50 = 0xFFFFFFFFu;
    data_0070BF54 = 0xFFFFFFFFu;
    data_0070BF58 = 0x00000000u;
    data_0070BF5C = 0x00000000u;
    data_00753F98 = 0x00000000u;
    data_00753F9C = 0x00000005u;
    data_00753FA0 = (uintptr_t)&data_00753FA4;
    func_0019B51C((uintptr_t)&data_00753FB8, (uintptr_t)&func_00604DD0, 0x000000B8u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00753F98, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00754200;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojDoorHyrule";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203n\203C\203\211\203\213\217\351\224\340\201i\221\345\201j";
    data_00754200 = 0x00000000u;
    data_00754204 = 0x00000005u;
    data_00754208 = (uintptr_t)&data_0075420C;
    func_0019B51C((uintptr_t)&data_00754220, (uintptr_t)&func_00604DF8, 0x000000BBu, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00754200, (uintptr_t)((char *)stk + 40), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00754468;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"MojDoorGanon";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\203\215\203E\203\211\203\213\217\351\220\263\226\312\224\340";
    data_00754468 = 0x00000000u;
    data_0075446C = 0x00000005u;
    data_00754470 = (uintptr_t)&data_00754474;
    func_0019B51C((uintptr_t)&data_00754488, (uintptr_t)&func_00603D3C, 0x000000BAu, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_00754468, (uintptr_t)((char *)stk + 56), 0x00000000u);
}
