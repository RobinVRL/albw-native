/* USA 005EB484 (EU 005EB45C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007143E0;
extern uint32_t data_007143E4;
extern uint32_t data_007143E8;
extern uint32_t data_007143EC;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EB484(void) {
    data_007143E0 = 0xFFFFFFFFu;
    data_007143E4 = 0xFFFFFFFFu;
    data_007143E8 = 0x00000000u;
    data_007143EC = 0x00000000u;
}
