/* USA 005B6544 (EU 005B651C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C3F8;
extern uint32_t data_0070C3FC;
extern uint32_t data_0070C400;
extern uint32_t data_0070C404;
extern uint32_t data_00764524;
extern uint32_t data_00764528;
extern uint32_t data_0076452C;
extern uint32_t data_00764530;
extern uint32_t data_00764544;
extern uint32_t data_0076478C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603F50(void);

static const char *const names_0076478C[2] = {
    "appear",
    "fade",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B6544(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00764524;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojWaterFlow";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\220\205\227\254";
    data_0070C3F8 = 0xFFFFFFFFu;
    data_0070C3FC = 0xFFFFFFFFu;
    data_0070C400 = 0x00000000u;
    data_0070C404 = 0x00000000u;
    data_00764524 = 0x00000000u;
    data_00764528 = 0x00000005u;
    data_0076452C = (uintptr_t)&data_00764530;
    func_0019B51C((uintptr_t)&data_00764544, (uintptr_t)&func_00603F50, 0x000000FEu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00764524, (uintptr_t)((char *)stk + 24), 0x00000000u);
    fill_names((sead_SafeString *)&data_0076478C, names_0076478C, 2);
}
