/* USA 005BE9E8 (EU 005BE9C0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (3 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C198;
extern uint32_t data_0070C19C;
extern uint32_t data_0070C1A0;
extern uint32_t data_0070C1A4;
extern uint32_t data_0075CD24;
extern uint32_t data_0075CD28;
extern uint32_t data_0075CD2C;
extern uint32_t data_0075CD30;
extern uint32_t data_0075CD44;
extern uint32_t data_0075CF8C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604F00(void);

static const char *const names_0075CF8C[3] = {
    "RupeePaint_green",
    "RupeePaint_blue",
    "RupeePaint_red",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BE9E8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075CD24;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojRupeePaint";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\227\216\217\221\202\253\203\213\203s\201[";
    data_0070C198 = 0xFFFFFFFFu;
    data_0070C19C = 0xFFFFFFFFu;
    data_0070C1A0 = 0x00000000u;
    data_0070C1A4 = 0x00000000u;
    data_0075CD24 = 0x00000000u;
    data_0075CD28 = 0x00000005u;
    data_0075CD2C = (uintptr_t)&data_0075CD30;
    func_0019B51C((uintptr_t)&data_0075CD44, (uintptr_t)&func_00604F00, 0x0000012Cu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0075CD24, (uintptr_t)((char *)stk + 24), 0x00000000u);
    fill_names((sead_SafeString *)&data_0075CF8C, names_0075CF8C, 3);
}
