/* USA 005EDDE0 (EU 005EDDB8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716770;
extern uint32_t data_00716774;
extern uint32_t data_00716778;
extern uint32_t data_0071677C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EDDE0(void) {
    data_00716770 = 0xFFFFFFFFu;
    data_00716774 = 0xFFFFFFFFu;
    data_00716778 = 0x00000000u;
    data_0071677C = 0x00000000u;
}
