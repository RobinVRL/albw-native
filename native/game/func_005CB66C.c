/* USA 005CB66C (EU 005CB644): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716580;
extern uint32_t data_00716584;
extern uint32_t data_00716588;
extern uint32_t data_0071658C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CB66C(void) {
    data_00716580 = 0xFFFFFFFFu;
    data_00716584 = 0xFFFFFFFFu;
    data_00716588 = 0x00000000u;
    data_0071658C = 0x00000000u;
}
