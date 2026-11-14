/* USA 005A7E98 (EU 005A7E70): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007128F0;
extern uint32_t data_007128F4;
extern uint32_t data_007128F8;
extern uint32_t data_007128FC;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A7E98(void) {
    data_007128F0 = 0xFFFFFFFFu;
    data_007128F4 = 0xFFFFFFFFu;
    data_007128F8 = 0x00000000u;
    data_007128FC = 0x00000000u;
}
