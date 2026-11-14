/* USA 005C0844 (EU 005C081C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 3 sead::SafeString name tables (11 names), 8 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F6D0;
extern uint32_t data_0070F6D8;
extern uint32_t data_0070F6DC;
extern uint32_t data_0070F6E0;
extern uint32_t data_0070F6E4;
extern uint32_t data_0070F6E8;
extern uint32_t data_0078A8D4;
extern uint32_t data_0078A8D8;
extern uint32_t data_0078A8DC;
extern uint32_t data_0078A8E0;
extern uint32_t data_0078A8F4;
extern uint32_t data_0078AB3C;
extern uint32_t data_0078AB5C;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00116C54(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006054D8(void);

static const char *const names_0078AB3C[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};
static const char *const names_0070F6E8[1] = {
    "LittleBird",
};
static const char *const names_0078AB5C[6] = {
    "fly",
    "glide",
    "landing",
    "wait",
    "grooming",
    "hopping",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C0844(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0078AB3C, names_0078AB3C, 4);
    data_0070F6D8 = 0xFFFFFFFFu;
    data_0070F6DC = 0xFFFFFFFFu;
    data_0070F6E0 = 0x00000000u;
    data_0070F6E4 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4CE38E39u, (uintptr_t)&func_00116C54);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078A8D4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"¬¹";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjLittleBird";
    fill_names((sead_SafeString *)&data_0070F6E8, names_0070F6E8, 1);
    fill_names((sead_SafeString *)&data_0078AB5C, names_0078AB5C, 6);
    data_0070F6D0 = ret0;
    data_0078A8D4 = 0x00000000u;
    data_0078A8D8 = 0x00000005u;
    data_0078A8DC = (uintptr_t)&data_0078A8E0;
    func_0019B51C((uintptr_t)&data_0078A8F4, (uintptr_t)&func_006054D8, 0x00000075u, (uintptr_t)((char *)stk + 24));
}
