/* USA 00599018 (EU 00598FF0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C170;
extern uint32_t data_0070C174;
extern uint32_t data_0070C178;
extern uint32_t data_0070C17C;
extern uint32_t data_0075C5DC;
extern uint32_t data_0075C5E0;
extern uint32_t data_0075C5E4;
extern uint32_t data_0075C5E8;
extern uint32_t data_0075C5FC;
extern uint32_t data_0075C844;
extern uint32_t data_0075C848;
extern uint32_t data_0075C84C;
extern uint32_t data_0075C850;
extern uint32_t data_0075C864;
extern uint32_t data_0075CAAC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060A544(void);

static const char *const names_0075CAAC[2] = {
    "wait",
    "sink",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_00599018(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075C5DC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojRaft";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\202\242\202\251\202\276";
    fill_names((sead_SafeString *)&data_0075CAAC, names_0075CAAC, 2);
    data_0070C170 = 0xFFFFFFFFu;
    data_0070C174 = 0xFFFFFFFFu;
    data_0070C178 = 0x00000000u;
    data_0070C17C = 0x00000000u;
    data_0075C5DC = 0x00000000u;
    data_0075C5E0 = 0x00000005u;
    data_0075C5E4 = (uintptr_t)&data_0075C5E8;
    func_0019B51C((uintptr_t)&data_0075C5FC, (uintptr_t)&func_0060A544, 0x00000128u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0075C5DC, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075C844;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojLargeRaft";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\217\351\202\242\202\251\202\276";
    data_0075C844 = 0x00000000u;
    data_0075C848 = 0x00000005u;
    data_0075C84C = (uintptr_t)&data_0075C850;
    func_0019B51C((uintptr_t)&data_0075C864, (uintptr_t)&func_0060A544, 0x00000129u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0075C844, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
