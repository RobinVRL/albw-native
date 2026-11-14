/* USA 005C23FC (EU 005C23D4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714510;
extern uint32_t data_00714514;
extern uint32_t data_00714518;
extern uint32_t data_0071451C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C23FC(void) {
    data_00714510 = 0xFFFFFFFFu;
    data_00714514 = 0xFFFFFFFFu;
    data_00714518 = 0x00000000u;
    data_0071451C = 0x00000000u;
}
