/* USA 005C2D10 (EU 005C2CE8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007088A0;
extern uint32_t data_007088A4;
extern uint32_t data_007088A8;
extern uint32_t data_007088AC;
extern uint32_t data_0072F330;
extern uint32_t data_0072F334;
extern uint32_t data_0072F338;
extern uint32_t data_0072F33C;
extern uint32_t data_0072F350;
extern uint32_t data_0072F598;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605794(void);

static const char *const names_0072F598[4] = {
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

void func_005C2D10(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072F330;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203V\203\223\203v\203\213\211\357\230b\203G\203\212\203A";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"AreaSimpleTalk";
    fill_names((sead_SafeString *)&data_0072F598, names_0072F598, 4);
    data_007088A0 = 0xFFFFFFFFu;
    data_007088A4 = 0xFFFFFFFFu;
    data_007088A8 = 0x00000000u;
    data_007088AC = 0x00000000u;
    data_0072F330 = 0x00000000u;
    data_0072F334 = 0x00000005u;
    data_0072F338 = (uintptr_t)&data_0072F33C;
    func_0019B51C((uintptr_t)&data_0072F350, (uintptr_t)&func_00605794, 0x00000184u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0072F330, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
