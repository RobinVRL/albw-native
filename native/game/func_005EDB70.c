/* USA 005EDB70 (EU 005EDB48): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714B08;
extern uint32_t data_00714B0C;
extern uint32_t data_00714B10;
extern uint32_t data_00714B14;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EDB70(void) {
    data_00714B08 = 0xFFFFFFFFu;
    data_00714B0C = 0xFFFFFFFFu;
    data_00714B10 = 0x00000000u;
    data_00714B14 = 0x00000000u;
}
