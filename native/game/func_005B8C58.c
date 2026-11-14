/* USA 005B8C58 (EU 005B8C30): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007126C8;
extern uint32_t data_007126CC;
extern uint32_t data_007126D0;
extern uint32_t data_007126D4;
extern uint32_t data_00798EAC;
extern uint32_t data_00798EB0;
extern uint32_t data_00798EB4;
extern uint32_t data_00798EB8;
extern uint32_t data_00798ECC;
extern uint32_t data_00799114;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604654(void);

static const char *const names_00799114[4] = {
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

void func_005B8C58(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00798EAC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\211\357\230b\203^\203O";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"TagEventTalk";
    fill_names((sead_SafeString *)&data_00799114, names_00799114, 4);
    data_007126C8 = 0xFFFFFFFFu;
    data_007126CC = 0xFFFFFFFFu;
    data_007126D0 = 0x00000000u;
    data_007126D4 = 0x00000000u;
    data_00798EAC = 0x00000000u;
    data_00798EB0 = 0x00000005u;
    data_00798EB4 = (uintptr_t)&data_00798EB8;
    func_0019B51C((uintptr_t)&data_00798ECC, (uintptr_t)&func_00604654, 0x000000A1u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00798EAC, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
