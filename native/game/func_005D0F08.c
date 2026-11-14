/* USA 005D0F08 (EU 005D0EE0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007164F8;
extern uint32_t data_007164FC;
extern uint32_t data_00716500;
extern uint32_t data_00716504;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005D0F08(void) {
    data_007164F8 = 0xFFFFFFFFu;
    data_007164FC = 0xFFFFFFFFu;
    data_00716500 = 0x00000000u;
    data_00716504 = 0x00000000u;
}
