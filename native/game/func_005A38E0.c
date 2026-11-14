/* USA 005A38E0 (EU 005A38B8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714750;
extern uint32_t data_00714754;
extern uint32_t data_00714758;
extern uint32_t data_0071475C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A38E0(void) {
    data_00714750 = 0xFFFFFFFFu;
    data_00714754 = 0xFFFFFFFFu;
    data_00714758 = 0x00000000u;
    data_0071475C = 0x00000000u;
}
