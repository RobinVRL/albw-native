/* USA 005BD62C (EU 005BD604): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B678;
extern uint32_t data_0070B67C;
extern uint32_t data_0070B680;
extern uint32_t data_0070B684;
extern uint32_t data_0074F184;
void func_005902C0(uintptr_t);

static const char *const names_0074F184[4] = {
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

void func_005BD62C(void) {
    fill_names((sead_SafeString *)&data_0074F184, names_0074F184, 4);
    data_0070B678 = 0xFFFFFFFFu;
    data_0070B67C = 0xFFFFFFFFu;
    data_0070B680 = 0x00000000u;
    data_0070B684 = 0x00000000u;
    func_005902C0(0x00000000u);
}
