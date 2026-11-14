/* USA 005E4930 (EU 005E4908): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714B18;
extern uint32_t data_00714B1C;
extern uint32_t data_00714B20;
extern uint32_t data_00714B24;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E4930(void) {
    data_00714B18 = 0xFFFFFFFFu;
    data_00714B1C = 0xFFFFFFFFu;
    data_00714B20 = 0x00000000u;
    data_00714B24 = 0x00000000u;
}
