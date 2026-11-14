/* USA 005E0ED8 (EU 005E0EB0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BF60;
extern uint32_t data_0070BF64;
extern uint32_t data_0070BF68;
extern uint32_t data_0070BF6C;
extern uint32_t data_00754700;
extern uint32_t data_00754704;
extern uint32_t data_00754708;
extern uint32_t data_0075470C;
extern uint32_t data_00754720;
extern uint32_t data_00754968;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006077E8(void);

static const char *const names_00754968[4] = {
    "open",
    "close",
    "open",
    "close",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E0ED8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00754700;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\221S\226\305\203V\203\203\203b\203^\201[";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojDoorHolocaust";
    fill_names((sead_SafeString *)&data_00754968, names_00754968, 4);
    data_0070BF60 = 0xFFFFFFFFu;
    data_0070BF64 = 0xFFFFFFFFu;
    data_0070BF68 = 0x00000000u;
    data_0070BF6C = 0x00000000u;
    data_00754700 = 0x00000000u;
    data_00754704 = 0x00000005u;
    data_00754708 = (uintptr_t)&data_0075470C;
    func_0019B51C((uintptr_t)&data_00754720, (uintptr_t)&func_006077E8, 0x000000B1u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00754700, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
