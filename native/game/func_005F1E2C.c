/* USA 005F1E2C (EU 005F1E04): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711DA8;
extern uint32_t data_00711DAC;
extern uint32_t data_00711DB0;
extern uint32_t data_00711DB4;
extern uint32_t data_00796610;
void func_005902C0(uintptr_t);

static const char *const names_00796610[4] = {
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

void func_005F1E2C(void) {
    fill_names((sead_SafeString *)&data_00796610, names_00796610, 4);
    data_00711DA8 = 0xFFFFFFFFu;
    data_00711DAC = 0xFFFFFFFFu;
    data_00711DB0 = 0x00000000u;
    data_00711DB4 = 0x00000000u;
    func_005902C0(0x00000000u);
}
