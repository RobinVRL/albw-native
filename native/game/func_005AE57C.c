/* USA 005AE57C (EU 005AE554): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FAB8;
extern uint32_t data_0070FABC;
extern uint32_t data_0070FAC0;
extern uint32_t data_0070FAC4;
extern uint32_t data_0070FAC8;
extern uint32_t data_00794950;
extern uint32_t data_00794954;
extern uint32_t data_00794958;
extern uint32_t data_0079495C;
extern uint32_t data_00794970;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006037EC(void);

static const char *const names_0070FAC8[1] = {
    "float",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AE57C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00794950;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203g\203\211\203C\203t\203H\201[\203X";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjTriForce";
    fill_names((sead_SafeString *)&data_0070FAC8, names_0070FAC8, 1);
    data_0070FAB8 = 0xFFFFFFFFu;
    data_0070FABC = 0xFFFFFFFFu;
    data_0070FAC0 = 0x00000000u;
    data_0070FAC4 = 0x00000000u;
    data_00794950 = 0x00000000u;
    data_00794954 = 0x00000005u;
    data_00794958 = (uintptr_t)&data_0079495C;
    func_0019B51C((uintptr_t)&data_00794970, (uintptr_t)&func_006037EC, 0x00000091u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00794950, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
