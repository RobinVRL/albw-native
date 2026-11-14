/* USA 005EF844 (EU 005EF81C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713C50;
extern uint32_t data_00713C54;
extern uint32_t data_00713C58;
extern uint32_t data_00713C5C;
extern uint32_t data_0079C5BC;
void func_005902C0(uintptr_t);

static const char *const names_0079C5BC[4] = {
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

void func_005EF844(void) {
    fill_names((sead_SafeString *)&data_0079C5BC, names_0079C5BC, 4);
    data_00713C50 = 0xFFFFFFFFu;
    data_00713C54 = 0xFFFFFFFFu;
    data_00713C58 = 0x00000000u;
    data_00713C5C = 0x00000000u;
    func_005902C0(0x00000000u);
}
