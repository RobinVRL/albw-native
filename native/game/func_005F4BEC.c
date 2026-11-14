/* USA 005F4BEC (EU 005F4BC4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C038;
extern uint32_t data_0070C03C;
extern uint32_t data_0070C040;
extern uint32_t data_0070C044;
extern uint32_t data_0070C048;
extern uint32_t data_00758620;
extern uint32_t data_00758624;
extern uint32_t data_00758628;
extern uint32_t data_0075862C;
extern uint32_t data_00758640;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609BC8(void);

static const char *const names_0070C048[1] = {
    "SoliderPaintHyrule",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F4BEC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00758620;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojHyruleSoliderPaint";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\227\216\217\221\202\253\203n\203C\203\211\203\213\225\272\216m";
    data_0070C038 = 0xFFFFFFFFu;
    data_0070C03C = 0xFFFFFFFFu;
    data_0070C040 = 0x00000000u;
    data_0070C044 = 0x00000000u;
    data_00758620 = 0x00000000u;
    data_00758624 = 0x00000005u;
    data_00758628 = (uintptr_t)&data_0075862C;
    func_0019B51C((uintptr_t)&data_00758640, (uintptr_t)&func_00609BC8, 0x00000133u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00758620, (uintptr_t)((char *)stk + 24), 0x00000000u);
    fill_names((sead_SafeString *)&data_0070C048, names_0070C048, 1);
}
