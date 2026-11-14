/* USA 005A3804 (EU 005A37DC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007142D0;
extern uint32_t data_007142D4;
extern uint32_t data_007142D8;
extern uint32_t data_007142DC;
extern uint32_t data_0079C8BC;
void func_005902C0(uintptr_t);

static const char *const names_0079C8BC[4] = {
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

void func_005A3804(void) {
    fill_names((sead_SafeString *)&data_0079C8BC, names_0079C8BC, 4);
    data_007142D0 = 0xFFFFFFFFu;
    data_007142D4 = 0xFFFFFFFFu;
    data_007142D8 = 0x00000000u;
    data_007142DC = 0x00000000u;
    func_005902C0(0x00000000u);
}
