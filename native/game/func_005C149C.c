/* USA 005C149C (EU 005C1474): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (10 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FAF8;
extern uint32_t data_0070FAFC;
extern uint32_t data_0070FB00;
extern uint32_t data_0070FB04;
extern uint32_t data_00795124;
extern uint32_t data_00795128;
extern uint32_t data_0079512C;
extern uint32_t data_00795130;
extern uint32_t data_00795144;
extern uint32_t data_0079538C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605648(void);

static const char *const names_0079538C[10] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "struggle",
    "wait",
    "ride",
    "rise",
    "talk",
    "dive",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C149C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00795124;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\216q\213T(\221\345)\202\320\202\301\202\255\202\350\202\251\202\246\202\350";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjTurtleTurn";
    fill_names((sead_SafeString *)&data_0079538C, names_0079538C, 10);
    data_0070FAF8 = 0xFFFFFFFFu;
    data_0070FAFC = 0xFFFFFFFFu;
    data_0070FB00 = 0x00000000u;
    data_0070FB04 = 0x00000000u;
    data_00795124 = 0x00000000u;
    data_00795128 = 0x00000005u;
    data_0079512C = (uintptr_t)&data_00795130;
    func_0019B51C((uintptr_t)&data_00795144, (uintptr_t)&func_00605648, 0x0000008Cu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00795124, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
