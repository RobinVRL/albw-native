/* USA 005EDF70 (EU 005EDF48): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00706E68;
extern uint32_t data_00706E6C;
extern uint32_t data_00706E70;
extern uint32_t data_00706E74;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EDF70(void) {
    data_00706E68 = 0xFFFFFFFFu;
    data_00706E6C = 0xFFFFFFFFu;
    data_00706E70 = 0x00000000u;
    data_00706E74 = 0x00000000u;
}
