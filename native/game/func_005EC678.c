/* USA 005EC678 (EU 005EC650): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00710DF0;
extern uint32_t data_00710DF4;
extern uint32_t data_00710DF8;
extern uint32_t data_00710DFC;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EC678(void) {
    data_00710DF0 = 0xFFFFFFFFu;
    data_00710DF4 = 0xFFFFFFFFu;
    data_00710DF8 = 0x00000000u;
    data_00710DFC = 0x00000000u;
}
