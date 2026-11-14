/* USA 005CDB0C (EU 005CDAE4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B9D8;
extern uint32_t data_0070B9DC;
extern uint32_t data_0070B9E0;
extern uint32_t data_0070B9E4;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CDB0C(void) {
    data_0070B9D8 = 0xFFFFFFFFu;
    data_0070B9DC = 0xFFFFFFFFu;
    data_0070B9E0 = 0x00000000u;
    data_0070B9E4 = 0x00000000u;
}
