/* USA 0059A4F0 (EU 0059A4C8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00706E28;
extern uint32_t data_00706E2C;
extern uint32_t data_00706E30;
extern uint32_t data_00706E34;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_0059A4F0(void) {
    data_00706E28 = 0xFFFFFFFFu;
    data_00706E2C = 0xFFFFFFFFu;
    data_00706E30 = 0x00000000u;
    data_00706E34 = 0x00000000u;
}
