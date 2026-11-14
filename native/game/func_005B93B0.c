/* USA 005B93B0 (EU 005B9388): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007149F0;
extern uint32_t data_007149F4;
extern uint32_t data_007149F8;
extern uint32_t data_007149FC;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B93B0(void) {
    data_007149F0 = 0xFFFFFFFFu;
    data_007149F4 = 0xFFFFFFFFu;
    data_007149F8 = 0x00000000u;
    data_007149FC = 0x00000000u;
}
