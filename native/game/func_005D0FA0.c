/* USA 005D0FA0 (EU 005D0F78): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00706DD0;
extern uint32_t data_00706DD4;
extern uint32_t data_00706DD8;
extern uint32_t data_00706DDC;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005D0FA0(void) {
    data_00706DD0 = 0xFFFFFFFFu;
    data_00706DD4 = 0xFFFFFFFFu;
    data_00706DD8 = 0x00000000u;
    data_00706DDC = 0x00000000u;
}
