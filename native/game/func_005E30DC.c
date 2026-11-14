/* USA 005E30DC (EU 005E30B4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (11 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FAE8;
extern uint32_t data_0070FAEC;
extern uint32_t data_0070FAF0;
extern uint32_t data_0070FAF4;
extern uint32_t data_00794E64;
extern uint32_t data_00794E68;
extern uint32_t data_00794E6C;
extern uint32_t data_00794E70;
extern uint32_t data_00794E84;
extern uint32_t data_007950CC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607F58(void);

static const char *const names_007950CC[11] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "wait_bullied",
    "wait",
    "jump",
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

void func_005E30DC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00794E64;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\216q\213T(\217\254)\202\242\202\266\202\337\202\347\202\352\202\304\202\351\201B";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjTurtleBullied";
    fill_names((sead_SafeString *)&data_007950CC, names_007950CC, 11);
    data_0070FAE8 = 0xFFFFFFFFu;
    data_0070FAEC = 0xFFFFFFFFu;
    data_0070FAF0 = 0x00000000u;
    data_0070FAF4 = 0x00000000u;
    data_00794E64 = 0x00000000u;
    data_00794E68 = 0x00000005u;
    data_00794E6C = (uintptr_t)&data_00794E70;
    func_0019B51C((uintptr_t)&data_00794E84, (uintptr_t)&func_00607F58, 0x0000008Eu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00794E64, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
