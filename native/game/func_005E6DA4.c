/* USA 005E6DA4 (EU 005E6D7C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (18 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C1A8;
extern uint32_t data_0070C1AC;
extern uint32_t data_0070C1B0;
extern uint32_t data_0070C1B4;
extern uint32_t data_0075CFA4;
extern uint32_t data_0075CFA8;
extern uint32_t data_0075CFAC;
extern uint32_t data_0075CFB0;
extern uint32_t data_0075CFC4;
extern uint32_t data_0075D20C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00608658(void);

static const char *const names_0075D20C[18] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "point1",
    "point2",
    "point3",
    "point4",
    "point5",
    "point6",
    "point7",
    "SagesAppear1",
    "SagesAppear2",
    "SagesAppear3",
    "SagesAppear4",
    "SagesAppear5",
    "SagesAppear6",
    "SagesAppear7",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E6DA4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075CFA4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\214\253\216\322\202\314\212\324\202\314\221\253\217\352";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojSagesPlaceStep";
    fill_names((sead_SafeString *)&data_0075D20C, names_0075D20C, 18);
    data_0070C1A8 = 0xFFFFFFFFu;
    data_0070C1AC = 0xFFFFFFFFu;
    data_0070C1B0 = 0x00000000u;
    data_0070C1B4 = 0x00000000u;
    data_0075CFA4 = 0x00000000u;
    data_0075CFA8 = 0x00000005u;
    data_0075CFAC = (uintptr_t)&data_0075CFB0;
    func_0019B51C((uintptr_t)&data_0075CFC4, (uintptr_t)&func_00608658, 0x0000011Bu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0075CFA4, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
