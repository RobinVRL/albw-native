/* USA 005F78DC (EU 005F78B4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712F08;
extern uint32_t data_00712F0C;
extern uint32_t data_00712F10;
extern uint32_t data_00712F14;
extern uint32_t data_0079B9B0;
void func_005902C0(void);

static const char *const names_0079B9B0[4] = {
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

void func_005F78DC(void) {
    fill_names((sead_SafeString *)&data_0079B9B0, names_0079B9B0, 4);
    data_00712F08 = 0xFFFFFFFFu;
    data_00712F0C = 0xFFFFFFFFu;
    data_00712F10 = 0x00000000u;
    data_00712F14 = 0x00000000u;
    func_005902C0();
}
