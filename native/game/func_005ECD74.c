/* USA 005ECD74 (EU 005ECD4C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (5 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007134A0;
extern uint32_t data_007134A4;
extern uint32_t data_007134A8;
extern uint32_t data_007134AC;
extern uint32_t data_007134B0;
extern uint32_t data_0079BA74;
void func_005902C0(uintptr_t);

static const char *const names_007134B0[1] = {
    "L_Num_00",
};
static const char *const names_0079BA74[4] = {
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

void func_005ECD74(void) {
    fill_names((sead_SafeString *)&data_007134B0, names_007134B0, 1);
    fill_names((sead_SafeString *)&data_0079BA74, names_0079BA74, 4);
    data_007134A0 = 0xFFFFFFFFu;
    data_007134A4 = 0xFFFFFFFFu;
    data_007134A8 = 0x00000000u;
    data_007134AC = 0x00000000u;
    func_005902C0((uintptr_t)&data_007134B0);
}
