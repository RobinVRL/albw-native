/* USA 005B9544 (EU 005B951C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00725808;
extern uint32_t data_0072580C;
extern uint32_t data_00725810;
extern uint32_t data_00725814;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B9544(void) {
    data_00725808 = 0xFFFFFFFFu;
    data_0072580C = 0xFFFFFFFFu;
    data_00725810 = 0x00000000u;
    data_00725814 = 0x00000000u;
}
