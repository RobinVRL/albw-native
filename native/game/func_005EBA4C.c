/* USA 005EBA4C (EU 005EBA24): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715290;
extern uint32_t data_00715294;
extern uint32_t data_00715298;
extern uint32_t data_0071529C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EBA4C(void) {
    data_00715290 = 0xFFFFFFFFu;
    data_00715294 = 0xFFFFFFFFu;
    data_00715298 = 0x00000000u;
    data_0071529C = 0x00000000u;
}
