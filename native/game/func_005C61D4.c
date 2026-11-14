/* USA 005C61D4 (EU 005C61AC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070EBB0;
extern uint32_t data_0070EBB4;
extern uint32_t data_0070EBB8;
extern uint32_t data_0070EBBC;
extern uint32_t data_0077E1E0;
void func_005902C0(uintptr_t);

static const char *const names_0077E1E0[4] = {
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

void func_005C61D4(void) {
    fill_names((sead_SafeString *)&data_0077E1E0, names_0077E1E0, 4);
    data_0070EBB0 = 0xFFFFFFFFu;
    data_0070EBB4 = 0xFFFFFFFFu;
    data_0070EBB8 = 0x00000000u;
    data_0070EBBC = 0x00000000u;
    func_005902C0(0x00000000u);
}
