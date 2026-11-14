/* USA 005E4904 (EU 005E48DC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00725710;
extern uint32_t data_00725714;
extern uint32_t data_00725718;
extern uint32_t data_0072571C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E4904(void) {
    data_00725710 = 0xFFFFFFFFu;
    data_00725714 = 0xFFFFFFFFu;
    data_00725718 = 0x00000000u;
    data_0072571C = 0x00000000u;
}
