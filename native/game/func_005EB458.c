/* USA 005EB458 (EU 005EB430): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714178;
extern uint32_t data_0071417C;
extern uint32_t data_00714180;
extern uint32_t data_00714184;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EB458(void) {
    data_00714178 = 0xFFFFFFFFu;
    data_0071417C = 0xFFFFFFFFu;
    data_00714180 = 0x00000000u;
    data_00714184 = 0x00000000u;
}
