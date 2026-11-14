/* USA 005C28A8 (EU 005C2880): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00706CD0;
extern uint32_t data_00706CD4;
extern uint32_t data_00706CD8;
extern uint32_t data_00706CDC;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C28A8(void) {
    data_00706CD0 = 0xFFFFFFFFu;
    data_00706CD4 = 0xFFFFFFFFu;
    data_00706CD8 = 0x00000000u;
    data_00706CDC = 0x00000000u;
}
