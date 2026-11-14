/* USA 005EDB18 (EU 005EDAF0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007162B0;
extern uint32_t data_007162B4;
extern uint32_t data_007162B8;
extern uint32_t data_007162BC;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EDB18(void) {
    data_007162B0 = 0xFFFFFFFFu;
    data_007162B4 = 0xFFFFFFFFu;
    data_007162B8 = 0x00000000u;
    data_007162BC = 0x00000000u;
}
