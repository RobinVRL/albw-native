/* USA 005CB2B8 (EU 005CB290): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (5 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713E00;
extern uint32_t data_00713E04;
extern uint32_t data_00713E08;
extern uint32_t data_00713E0C;
extern uint32_t data_00713E10;
extern uint32_t data_0079C69C;
void func_005902C0(void);

static const char *const names_00713E10[1] = {
    "Cm_ScreenB",
};
static const char *const names_0079C69C[4] = {
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

void func_005CB2B8(void) {
    fill_names((sead_SafeString *)&data_00713E10, names_00713E10, 1);
    fill_names((sead_SafeString *)&data_0079C69C, names_0079C69C, 4);
    data_00713E00 = 0xFFFFFFFFu;
    data_00713E04 = 0xFFFFFFFFu;
    data_00713E08 = 0x00000000u;
    data_00713E0C = 0x00000000u;
    func_005902C0();
}
