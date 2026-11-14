/* USA 005B6438 (EU 005B6410): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C3E0;
extern uint32_t data_0070C3E4;
extern uint32_t data_0070C3E8;
extern uint32_t data_0070C3EC;
extern uint32_t data_0070C3F0;
extern uint32_t data_007642BC;
extern uint32_t data_007642C0;
extern uint32_t data_007642C4;
extern uint32_t data_007642C8;
extern uint32_t data_007642DC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603F24(void);

static const char *const names_0070C3F0[1] = {
    "WaterExit",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B6438(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007642BC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\220\205\227\254\217o\214\373";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojWaterExit";
    fill_names((sead_SafeString *)&data_0070C3F0, names_0070C3F0, 1);
    data_0070C3E0 = 0xFFFFFFFFu;
    data_0070C3E4 = 0xFFFFFFFFu;
    data_0070C3E8 = 0x00000000u;
    data_0070C3EC = 0x00000000u;
    data_007642BC = 0x00000000u;
    data_007642C0 = 0x00000005u;
    data_007642C4 = (uintptr_t)&data_007642C8;
    func_0019B51C((uintptr_t)&data_007642DC, (uintptr_t)&func_00603F24, 0x0000000Fu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007642BC, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
