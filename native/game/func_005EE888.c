/* USA 005EE888 (EU 005EE860): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00710D88;
extern uint32_t data_00710D8C;
extern uint32_t data_00710D90;
extern uint32_t data_00710D94;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EE888(void) {
    data_00710D88 = 0xFFFFFFFFu;
    data_00710D8C = 0xFFFFFFFFu;
    data_00710D90 = 0x00000000u;
    data_00710D94 = 0x00000000u;
}
