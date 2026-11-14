/* USA 005B98FC (EU 005B98D4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708768;
extern uint32_t data_0070876C;
extern uint32_t data_00708770;
extern uint32_t data_00708774;
extern uint32_t data_0072AC64;
void func_005902C0(uintptr_t);

static const char *const names_0072AC64[4] = {
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

void func_005B98FC(void) {
    fill_names((sead_SafeString *)&data_0072AC64, names_0072AC64, 4);
    data_00708768 = 0xFFFFFFFFu;
    data_0070876C = 0xFFFFFFFFu;
    data_00708770 = 0x00000000u;
    data_00708774 = 0x00000000u;
    func_005902C0(0x00000000u);
}
