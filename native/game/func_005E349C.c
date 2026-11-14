/* USA 005E349C (EU 005E3474): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007121A0;
extern uint32_t data_007121A4;
extern uint32_t data_007121A8;
extern uint32_t data_007121AC;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E349C(void) {
    data_007121A0 = 0xFFFFFFFFu;
    data_007121A4 = 0xFFFFFFFFu;
    data_007121A8 = 0x00000000u;
    data_007121AC = 0x00000000u;
}
