/* USA 005CDB38 (EU 005CDB10): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 5 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BA10;
extern uint32_t data_0070BA18;
extern uint32_t data_0070BA1C;
extern uint32_t data_0070BA20;
extern uint32_t data_0070BA24;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CDB38(void) {
    data_0070BA10 = 0x00000000u;
    data_0070BA18 = 0xFFFFFFFFu;
    data_0070BA1C = 0xFFFFFFFFu;
    data_0070BA20 = 0x00000000u;
    data_0070BA24 = 0x00000000u;
}
