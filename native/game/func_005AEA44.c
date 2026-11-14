/* USA 005AEA44 (EU 005AEA1C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716290;
extern uint32_t data_00716294;
extern uint32_t data_00716298;
extern uint32_t data_0071629C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AEA44(void) {
    data_00716290 = 0xFFFFFFFFu;
    data_00716294 = 0xFFFFFFFFu;
    data_00716298 = 0x00000000u;
    data_0071629C = 0x00000000u;
}
