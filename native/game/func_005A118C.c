/* USA 005A118C (EU 005A1164): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B750;
extern uint32_t data_0070B754;
extern uint32_t data_0070B758;
extern uint32_t data_0070B75C;
extern uint32_t data_0074F518;
void func_005902C0(void);

static const char *const names_0074F518[4] = {
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

void func_005A118C(void) {
    fill_names((sead_SafeString *)&data_0074F518, names_0074F518, 4);
    data_0070B750 = 0xFFFFFFFFu;
    data_0070B754 = 0xFFFFFFFFu;
    data_0070B758 = 0x00000000u;
    data_0070B75C = 0x00000000u;
    func_005902C0();
}
