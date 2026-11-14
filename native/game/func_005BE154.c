/* USA 005BE154 (EU 005BE12C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (9 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BEB8;
extern uint32_t data_0070BEBC;
extern uint32_t data_0070BEC0;
extern uint32_t data_0070BEC4;
extern uint32_t data_0070BEC8;
extern uint32_t data_00752B98;
extern uint32_t data_00752B9C;
extern uint32_t data_00752BA0;
extern uint32_t data_00752BA4;
extern uint32_t data_00752BB8;
extern uint32_t data_00752E00;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604DA4(void);

static const char *const names_0070BEC8[1] = {
    "CrossBoard",
};
static const char *const names_00752E00[8] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "CrossBoard_Lv1",
    "CrossBoard_Lv2",
    "CrossBoard_Lv3",
    "CrossBoard_Lv4",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BE154(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00752B98;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\202\267\202\352\210\341\202\242\212\305\224\302";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojCrossBoard";
    fill_names((sead_SafeString *)&data_0070BEC8, names_0070BEC8, 1);
    fill_names((sead_SafeString *)&data_00752E00, names_00752E00, 8);
    data_0070BEB8 = 0xFFFFFFFFu;
    data_0070BEBC = 0xFFFFFFFFu;
    data_0070BEC0 = 0x00000000u;
    data_0070BEC4 = 0x00000000u;
    data_00752B98 = 0x00000000u;
    data_00752B9C = 0x00000005u;
    data_00752BA0 = (uintptr_t)&data_00752BA4;
    func_0019B51C((uintptr_t)&data_00752BB8, (uintptr_t)&func_00604DA4, 0x000000F1u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00752B98, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
