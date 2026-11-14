/* USA 005BF920 (EU 005BF8F8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D7F0;
extern uint32_t data_0070D7F4;
extern uint32_t data_0070D7F8;
extern uint32_t data_0070D7FC;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BF920(void) {
    data_0070D7F0 = 0xFFFFFFFFu;
    data_0070D7F4 = 0xFFFFFFFFu;
    data_0070D7F8 = 0x00000000u;
    data_0070D7FC = 0x00000000u;
}
