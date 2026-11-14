/* USA 005E34F4 (EU 005E34CC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712498;
extern uint32_t data_0071249C;
extern uint32_t data_007124A0;
extern uint32_t data_007124A4;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E34F4(void) {
    data_00712498 = 0xFFFFFFFFu;
    data_0071249C = 0xFFFFFFFFu;
    data_007124A0 = 0x00000000u;
    data_007124A4 = 0x00000000u;
}
