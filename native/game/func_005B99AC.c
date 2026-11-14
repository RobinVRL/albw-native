/* USA 005B99AC (EU 005B9984): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708800;
extern uint32_t data_00708804;
extern uint32_t data_00708808;
extern uint32_t data_0070880C;
extern uint32_t data_0072D82C;
extern uint32_t data_0072D830;
extern uint32_t data_0072D834;
extern uint32_t data_0072D838;
extern uint32_t data_0072D84C;
extern uint32_t data_0072DA94;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604710(void);

static const char *const names_0072DA94[4] = {
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

void func_005B99AC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072D82C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\211\357\230b\203G\203\212\203A";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"AreaEventTalk";
    fill_names((sead_SafeString *)&data_0072DA94, names_0072DA94, 4);
    data_00708800 = 0xFFFFFFFFu;
    data_00708804 = 0xFFFFFFFFu;
    data_00708808 = 0x00000000u;
    data_0070880C = 0x00000000u;
    data_0072D82C = 0x00000000u;
    data_0072D830 = 0x00000005u;
    data_0072D834 = (uintptr_t)&data_0072D838;
    func_0019B51C((uintptr_t)&data_0072D84C, (uintptr_t)&func_00604710, 0x0000017Au, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0072D82C, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
