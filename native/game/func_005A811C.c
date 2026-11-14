/* USA 005A811C (EU 005A80F4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715848;
extern uint32_t data_0071584C;
extern uint32_t data_00715850;
extern uint32_t data_00715854;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A811C(void) {
    data_00715848 = 0xFFFFFFFFu;
    data_0071584C = 0xFFFFFFFFu;
    data_00715850 = 0x00000000u;
    data_00715854 = 0x00000000u;
}
