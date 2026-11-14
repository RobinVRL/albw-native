/* USA 005B9B04 (EU 005B9ADC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708830;
extern uint32_t data_00708834;
extern uint32_t data_00708838;
extern uint32_t data_0070883C;
extern uint32_t data_0072E494;
extern uint32_t data_0072E498;
extern uint32_t data_0072E49C;
extern uint32_t data_0072E4A0;
extern uint32_t data_0072E4B4;
extern uint32_t data_0072E6FC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604738(void);

static const char *const names_0072E6FC[4] = {
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

void func_005B9B04(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072E494;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\217\211\211\361\203Z\201[\203u\203G\203\212\203A";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"AreaFirstSave";
    fill_names((sead_SafeString *)&data_0072E6FC, names_0072E6FC, 4);
    data_00708830 = 0xFFFFFFFFu;
    data_00708834 = 0xFFFFFFFFu;
    data_00708838 = 0x00000000u;
    data_0070883C = 0x00000000u;
    data_0072E494 = 0x00000000u;
    data_0072E498 = 0x00000005u;
    data_0072E49C = (uintptr_t)&data_0072E4A0;
    func_0019B51C((uintptr_t)&data_0072E4B4, (uintptr_t)&func_00604738, 0x00000185u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0072E494, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
