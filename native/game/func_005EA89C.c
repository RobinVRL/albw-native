/* USA 005EA89C (EU 005EA874): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00710FF0;
extern uint32_t data_00710FF4;
extern uint32_t data_00710FF8;
extern uint32_t data_00710FFC;
extern uint32_t data_00796124;
void func_005902C0(uintptr_t);

static const char *const names_00796124[4] = {
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

void func_005EA89C(void) {
    fill_names((sead_SafeString *)&data_00796124, names_00796124, 4);
    data_00710FF0 = 0xFFFFFFFFu;
    data_00710FF4 = 0xFFFFFFFFu;
    data_00710FF8 = 0x00000000u;
    data_00710FFC = 0x00000000u;
    func_005902C0(0x00000000u);
}
