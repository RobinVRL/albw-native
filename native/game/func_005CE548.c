/* USA 005CE548 (EU 005CE520): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C228;
extern uint32_t data_0070C22C;
extern uint32_t data_0070C230;
extern uint32_t data_0070C234;
extern uint32_t data_0070C238;
extern uint32_t data_0075DCCC;
extern uint32_t data_0075DCD0;
extern uint32_t data_0075DCD4;
extern uint32_t data_0075DCD8;
extern uint32_t data_0075DCEC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606BC4(void);

static const char *const names_0070C238[1] = {
    "SoliderPaint",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CE548(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075DCCC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojSoliderPaint";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\227\216\217\221\202\253\225\272\216m";
    data_0070C228 = 0xFFFFFFFFu;
    data_0070C22C = 0xFFFFFFFFu;
    data_0070C230 = 0x00000000u;
    data_0070C234 = 0x00000000u;
    data_0075DCCC = 0x00000000u;
    data_0075DCD0 = 0x00000005u;
    data_0075DCD4 = (uintptr_t)&data_0075DCD8;
    func_0019B51C((uintptr_t)&data_0075DCEC, (uintptr_t)&func_00606BC4, 0x0000012Au, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0075DCCC, (uintptr_t)((char *)stk + 24), 0x00000000u);
    fill_names((sead_SafeString *)&data_0070C238, names_0070C238, 1);
}
