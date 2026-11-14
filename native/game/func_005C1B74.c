/* USA 005C1B74 (EU 005C1B4C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007123F0;
extern uint32_t data_007123F4;
extern uint32_t data_007123F8;
extern uint32_t data_007123FC;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C1B74(void) {
    data_007123F0 = 0xFFFFFFFFu;
    data_007123F4 = 0xFFFFFFFFu;
    data_007123F8 = 0x00000000u;
    data_007123FC = 0x00000000u;
}
