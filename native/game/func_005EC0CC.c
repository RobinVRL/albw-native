/* USA 005EC0CC (EU 005EC0A4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (3 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C088;
extern uint32_t data_0070C08C;
extern uint32_t data_0070C090;
extern uint32_t data_0070C094;
extern uint32_t data_00758D88;
extern uint32_t data_00758D8C;
extern uint32_t data_00758D90;
extern uint32_t data_00758D94;
extern uint32_t data_00758DA8;
extern uint32_t data_00758FF0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00608C30(void);

static const char *const names_00758FF0[3] = {
    "fade1",
    "fade2",
    "fade3",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EC0CC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00758D88;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203W\203\205\203G\203\213\203\215\203b\203N\202\314\230X\220C";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojJewelRockCandle";
    fill_names((sead_SafeString *)&data_00758FF0, names_00758FF0, 3);
    data_0070C088 = 0xFFFFFFFFu;
    data_0070C08C = 0xFFFFFFFFu;
    data_0070C090 = 0x00000000u;
    data_0070C094 = 0x00000000u;
    data_00758D88 = 0x00000000u;
    data_00758D8C = 0x00000005u;
    data_00758D90 = (uintptr_t)&data_00758D94;
    func_0019B51C((uintptr_t)&data_00758DA8, (uintptr_t)&func_00608C30, 0x00000127u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00758D88, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
