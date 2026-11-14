/* USA 005B8DB0 (EU 005B8D88): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007126E8;
extern uint32_t data_007126EC;
extern uint32_t data_007126F0;
extern uint32_t data_007126F4;
extern uint32_t data_00799604;
extern uint32_t data_00799608;
extern uint32_t data_0079960C;
extern uint32_t data_00799610;
extern uint32_t data_00799624;
extern uint32_t data_0079986C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604680(void);

static const char *const names_0079986C[4] = {
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

void func_005B8DB0(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00799604;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203A\203C\203e\203\200\203C\203x\203\223\203g\203^\203O";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"TagItemEvent";
    fill_names((sead_SafeString *)&data_0079986C, names_0079986C, 4);
    data_007126E8 = 0xFFFFFFFFu;
    data_007126EC = 0xFFFFFFFFu;
    data_007126F0 = 0x00000000u;
    data_007126F4 = 0x00000000u;
    data_00799604 = 0x00000000u;
    data_00799608 = 0x00000005u;
    data_0079960C = (uintptr_t)&data_00799610;
    func_0019B51C((uintptr_t)&data_00799624, (uintptr_t)&func_00604680, 0x000000A7u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00799604, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
