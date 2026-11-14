/* USA 005C6D50 (EU 005C6D28): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F868;
extern uint32_t data_0070F86C;
extern uint32_t data_0070F870;
extern uint32_t data_0070F874;
extern uint32_t data_0078D5F0;
extern uint32_t data_0078D5F4;
extern uint32_t data_0078D5F8;
extern uint32_t data_0078D5FC;
extern uint32_t data_0078D610;
extern uint32_t data_0078D858;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006064A4(void);

static const char *const names_0078D858[4] = {
    "wait",
    "fall_st",
    "fall_md",
    "fall_ed",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C6D50(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078D5F0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203I\203E\203\200\203K\203C\202\314\212L";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjOmugaiShell";
    fill_names((sead_SafeString *)&data_0078D858, names_0078D858, 4);
    data_0070F868 = 0xFFFFFFFFu;
    data_0070F86C = 0xFFFFFFFFu;
    data_0070F870 = 0x00000000u;
    data_0070F874 = 0x00000000u;
    data_0078D5F0 = 0x00000000u;
    data_0078D5F4 = 0x00000005u;
    data_0078D5F8 = (uintptr_t)&data_0078D5FC;
    func_0019B51C((uintptr_t)&data_0078D610, (uintptr_t)&func_006064A4, 0x0000025Eu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0078D5F0, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
