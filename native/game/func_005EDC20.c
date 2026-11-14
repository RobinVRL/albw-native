/* USA 005EDC20 (EU 005EDBF8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00725878;
extern uint32_t data_0072587C;
extern uint32_t data_00725880;
extern uint32_t data_00725884;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EDC20(void) {
    data_00725878 = 0xFFFFFFFFu;
    data_0072587C = 0xFFFFFFFFu;
    data_00725880 = 0x00000000u;
    data_00725884 = 0x00000000u;
}
