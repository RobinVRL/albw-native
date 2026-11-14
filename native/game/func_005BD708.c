/* USA 005BD708 (EU 005BD6E0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B768;
extern uint32_t data_0070B76C;
extern uint32_t data_0070B770;
extern uint32_t data_0070B774;
extern uint32_t data_0074F538;
void func_005902C0(uintptr_t);

static const char *const names_0074F538[4] = {
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

void func_005BD708(void) {
    fill_names((sead_SafeString *)&data_0074F538, names_0074F538, 4);
    data_0070B768 = 0xFFFFFFFFu;
    data_0070B76C = 0xFFFFFFFFu;
    data_0070B770 = 0x00000000u;
    data_0070B774 = 0x00000000u;
    func_005902C0(0x00000000u);
}
