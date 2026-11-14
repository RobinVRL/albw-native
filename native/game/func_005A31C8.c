/* USA 005A31C8 (EU 005A31A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (19 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F660;
extern uint32_t data_0070F664;
extern uint32_t data_0070F668;
extern uint32_t data_0070F66C;
extern uint32_t data_0070F670;
extern uint32_t data_00789954;
extern uint32_t data_00789958;
extern uint32_t data_0078995C;
extern uint32_t data_00789960;
extern uint32_t data_00789974;
extern uint32_t data_00789BBC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B544(void);

static const char *const names_0070F670[2] = {
    "KinStaWater",
    "KinStaWater",
};
static const char *const names_00789BBC[17] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "wait",
    "bound",
    "struggle",
    "guard",
    "guard_hand",
    "bound_tornado",
    "bound_struggle",
    "absorb",
    "absorb_player",
    "walk",
    "walk_jump",
    "absorb",
    "absorb_player",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A31C8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00789954;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203L\203\223\203X\203^";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjKinSta";
    fill_names((sead_SafeString *)&data_0070F670, names_0070F670, 2);
    fill_names((sead_SafeString *)&data_00789BBC, names_00789BBC, 17);
    data_0070F660 = 0xFFFFFFFFu;
    data_0070F664 = 0xFFFFFFFFu;
    data_0070F668 = 0x00000000u;
    data_0070F66C = 0x00000000u;
    data_00789954 = 0x00000000u;
    data_00789958 = 0x00000005u;
    data_0078995C = (uintptr_t)&data_00789960;
    func_0019B51C((uintptr_t)&data_00789974, (uintptr_t)&func_0060B544, 0x0000007Fu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00789954, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
