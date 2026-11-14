/* USA 005C66E0 (EU 005C66B8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (5 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F3B8;
extern uint32_t data_0070F3BC;
extern uint32_t data_0070F3C0;
extern uint32_t data_0070F3C4;
extern uint32_t data_00784254;
extern uint32_t data_00784258;
extern uint32_t data_0078425C;
extern uint32_t data_00784260;
extern uint32_t data_00784274;
extern uint32_t data_007844BC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606344(void);

static const char *const names_007844BC[5] = {
    "twinkle_st",
    "twinkle",
    "twinkle_ed",
    "twinkle_fail",
    "twinkle_low",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C66E0(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00784254;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\220\350\202\242\211\256\202\314\220\205\217\273";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjCrystalBall";
    fill_names((sead_SafeString *)&data_007844BC, names_007844BC, 5);
    data_0070F3B8 = 0xFFFFFFFFu;
    data_0070F3BC = 0xFFFFFFFFu;
    data_0070F3C0 = 0x00000000u;
    data_0070F3C4 = 0x00000000u;
    data_00784254 = 0x00000000u;
    data_00784258 = 0x00000005u;
    data_0078425C = (uintptr_t)&data_00784260;
    func_0019B51C((uintptr_t)&data_00784274, (uintptr_t)&func_00606344, 0x00000053u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00784254, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
