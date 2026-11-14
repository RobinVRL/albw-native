/* USA 0059DA00 (EU 0059D9D8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (6 names), 8 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006A0BC0;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F328;
extern uint32_t data_0070F330;
extern uint32_t data_0070F334;
extern uint32_t data_0070F338;
extern uint32_t data_0070F33C;
extern uint32_t data_00782808;
extern uint32_t data_0078280C;
extern uint32_t data_00782810;
extern uint32_t data_00782814;
extern uint32_t data_00782828;
extern uint32_t data_00782A70;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060ADD0(void);

static const char *const names_00782A70[6] = {
    "damage",
    "start",
    "damage",
    "walk",
    "birth",
    "start",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_0059DA00(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070F330 = 0xFFFFFFFFu;
    data_0070F334 = 0xFFFFFFFFu;
    data_0070F338 = 0x00000000u;
    data_0070F33C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4C638E39u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00782808;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = (uintptr_t)&data_006A0BC0;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\221\345\203o\203N\203_\203\223";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjBombL";
    fill_names((sead_SafeString *)&data_00782A70, names_00782A70, 6);
    data_0070F328 = ret0;
    data_00782808 = 0x00000000u;
    data_0078280C = 0x00000005u;
    data_00782810 = (uintptr_t)&data_00782814;
    func_0019B51C((uintptr_t)&data_00782828, (uintptr_t)&func_0060ADD0, 0x00000070u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00782808, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_006A0BC0);
}
