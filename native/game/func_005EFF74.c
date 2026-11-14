/* USA 005EFF74 (EU 005EFF4C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007257E0;
extern uint32_t data_007257E4;
extern uint32_t data_007257E8;
extern uint32_t data_007257EC;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EFF74(void) {
    data_007257E0 = 0xFFFFFFFFu;
    data_007257E4 = 0xFFFFFFFFu;
    data_007257E8 = 0x00000000u;
    data_007257EC = 0x00000000u;
}
