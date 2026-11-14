/* USA 005E4448 (EU 005E4420): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (9 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007141C0;
extern uint32_t data_007141C4;
extern uint32_t data_007141C8;
extern uint32_t data_007141CC;
extern uint32_t data_007141D0;
extern uint32_t data_007141F0;
extern uint32_t data_0079C85C;
void func_005902C0(uintptr_t);

static const char *const names_007141D0[5] = {
    "Gm_WarpChoices",
    "Gm_WarpBtnL",
    "Gm_WarpBtnD",
    "Gm_WarpIconL",
    "Gm_WarpIconD",
};
static const char *const names_0079C85C[4] = {
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

void func_005E4448(void) {
    fill_names((sead_SafeString *)&data_007141D0, names_007141D0, 5);
    fill_names((sead_SafeString *)&data_0079C85C, names_0079C85C, 4);
    data_007141C0 = 0xFFFFFFFFu;
    data_007141C4 = 0xFFFFFFFFu;
    data_007141C8 = 0x00000000u;
    data_007141CC = 0x00000000u;
    func_005902C0((uintptr_t)&data_007141F0);
}
