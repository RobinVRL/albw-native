/* USA 005A1E30 (EU 005A1E08): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C118;
extern uint32_t data_0070C11C;
extern uint32_t data_0070C120;
extern uint32_t data_0070C124;
extern uint32_t data_0070C128;
extern uint32_t data_0075A8E0;
extern uint32_t data_0075A8E4;
extern uint32_t data_0075A8E8;
extern uint32_t data_0075A8EC;
extern uint32_t data_0075A900;
extern uint32_t data_0075AB48;
extern uint32_t data_0075AB4C;
extern uint32_t data_0075AB50;
extern uint32_t data_0075AB54;
extern uint32_t data_0075AB68;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B2A0(void);

static const char *const names_0070C128[1] = {
    "Water_Field",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A1E30(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075A8E0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojPebbleLight";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\217\254\220\316\201i\214\365) ";
    fill_names((sead_SafeString *)&data_0070C128, names_0070C128, 1);
    data_0070C118 = 0xFFFFFFFFu;
    data_0070C11C = 0xFFFFFFFFu;
    data_0070C120 = 0x00000000u;
    data_0070C124 = 0x00000000u;
    data_0075A8E0 = 0x00000000u;
    data_0075A8E4 = 0x00000005u;
    data_0075A8E8 = (uintptr_t)&data_0075A8EC;
    func_0019B51C((uintptr_t)&data_0075A900, (uintptr_t)&func_0060B2A0, 0x0000012Fu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0075A8E0, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075AB48;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojPebbleDark";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\217\254\220\316\201i\210\305) ";
    data_0075AB48 = 0x00000000u;
    data_0075AB4C = 0x00000005u;
    data_0075AB50 = (uintptr_t)&data_0075AB54;
    func_0019B51C((uintptr_t)&data_0075AB68, (uintptr_t)&func_0060B2A0, 0x00000130u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0075AB48, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
