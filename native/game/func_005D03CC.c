/* USA 005D03CC (EU 005D03A4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713DA8;
extern uint32_t data_00713DAC;
extern uint32_t data_00713DB0;
extern uint32_t data_00713DB4;
extern uint32_t data_0079C67C;
void func_005902C0(void);

static const char *const names_0079C67C[4] = {
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

void func_005D03CC(void) {
    fill_names((sead_SafeString *)&data_0079C67C, names_0079C67C, 4);
    data_00713DA8 = 0xFFFFFFFFu;
    data_00713DAC = 0xFFFFFFFFu;
    data_00713DB0 = 0x00000000u;
    data_00713DB4 = 0x00000000u;
    func_005902C0();
}
