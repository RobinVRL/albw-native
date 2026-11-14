/* USA 005E09A8 (EU 005E0980): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B740;
extern uint32_t data_0070B744;
extern uint32_t data_0070B748;
extern uint32_t data_0070B74C;
extern uint32_t data_0074F4EC;
void func_005902C0(void);

static const char *const names_0074F4EC[4] = {
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

void func_005E09A8(void) {
    fill_names((sead_SafeString *)&data_0074F4EC, names_0074F4EC, 4);
    data_0070B740 = 0xFFFFFFFFu;
    data_0070B744 = 0xFFFFFFFFu;
    data_0070B748 = 0x00000000u;
    data_0070B74C = 0x00000000u;
    func_005902C0();
}
