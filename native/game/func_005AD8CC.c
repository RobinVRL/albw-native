/* USA 005AD8CC (EU 005AD8A4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (5 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F680;
extern uint32_t data_0070F684;
extern uint32_t data_0070F688;
extern uint32_t data_0070F68C;
extern uint32_t data_0070F690;
extern uint32_t data_00789C44;
extern uint32_t data_00789C48;
extern uint32_t data_00789C4C;
extern uint32_t data_00789C50;
extern uint32_t data_00789C64;
extern uint32_t data_00789EAC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603740(void);

static const char *const names_0070F690[1] = {
    "KinStaTen",
};
static const char *const names_00789EAC[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AD8CC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00789C44;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203L\203\223\203X\203^10";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjKinSta10";
    fill_names((sead_SafeString *)&data_0070F690, names_0070F690, 1);
    fill_names((sead_SafeString *)&data_00789EAC, names_00789EAC, 4);
    data_0070F680 = 0xFFFFFFFFu;
    data_0070F684 = 0xFFFFFFFFu;
    data_0070F688 = 0x00000000u;
    data_0070F68C = 0x00000000u;
    data_00789C44 = 0x00000000u;
    data_00789C48 = 0x00000005u;
    data_00789C4C = (uintptr_t)&data_00789C50;
    func_0019B51C((uintptr_t)&data_00789C64, (uintptr_t)&func_00603740, 0x00000088u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00789C44, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
