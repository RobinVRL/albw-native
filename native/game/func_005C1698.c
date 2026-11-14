/* USA 005C1698 (EU 005C1670): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (11 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FB08;
extern uint32_t data_0070FB0C;
extern uint32_t data_0070FB10;
extern uint32_t data_0070FB14;
extern uint32_t data_007953DC;
extern uint32_t data_007953E0;
extern uint32_t data_007953E4;
extern uint32_t data_007953E8;
extern uint32_t data_007953FC;
extern uint32_t data_00795644;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605670(void);

static const char *const names_00795644[11] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "wait_wall",
    "jump",
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

void func_005C1698(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007953DC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\216q\213T(\222\206)Wall";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjTurtleWall";
    fill_names((sead_SafeString *)&data_00795644, names_00795644, 11);
    data_0070FB08 = 0xFFFFFFFFu;
    data_0070FB0C = 0xFFFFFFFFu;
    data_0070FB10 = 0x00000000u;
    data_0070FB14 = 0x00000000u;
    data_007953DC = 0x00000000u;
    data_007953E0 = 0x00000005u;
    data_007953E4 = (uintptr_t)&data_007953E8;
    func_0019B51C((uintptr_t)&data_007953FC, (uintptr_t)&func_00605670, 0x0000008Du, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007953DC, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
