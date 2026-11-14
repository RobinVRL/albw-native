/* USA 0059C094 (EU 0059C06C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (6 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BEF0;
extern uint32_t data_0070BEF4;
extern uint32_t data_0070BEF8;
extern uint32_t data_0070BEFC;
extern uint32_t data_00753338;
extern uint32_t data_0075333C;
extern uint32_t data_00753340;
extern uint32_t data_00753344;
extern uint32_t data_00753358;
extern uint32_t data_007535A0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060AB4C(void);

static const char *const names_007535A0[6] = {
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

void func_0059C094(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00753338;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"BIÌúL";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojDiary";
    fill_names((sead_SafeString *)&data_007535A0, names_007535A0, 6);
    data_0070BEF0 = 0xFFFFFFFFu;
    data_0070BEF4 = 0xFFFFFFFFu;
    data_0070BEF8 = 0x00000000u;
    data_0070BEFC = 0x00000000u;
    data_00753338 = 0x00000000u;
    data_0075333C = 0x00000005u;
    data_00753340 = (uintptr_t)&data_00753344;
    func_0019B51C((uintptr_t)&data_00753358, (uintptr_t)&func_0060AB4C, 0x00000137u, (uintptr_t)((char *)stk + 24));
}
