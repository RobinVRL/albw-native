/* USA 005E42D0 (EU 005E42A8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007138A0;
extern uint32_t data_007138A4;
extern uint32_t data_007138A8;
extern uint32_t data_007138AC;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E42D0(void) {
    data_007138A0 = 0xFFFFFFFFu;
    data_007138A4 = 0xFFFFFFFFu;
    data_007138A8 = 0x00000000u;
    data_007138AC = 0x00000000u;
}
