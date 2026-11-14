/* USA 005A3728 (EU 005A3700): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713330;
extern uint32_t data_00713334;
extern uint32_t data_00713338;
extern uint32_t data_0071333C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A3728(void) {
    data_00713330 = 0xFFFFFFFFu;
    data_00713334 = 0xFFFFFFFFu;
    data_00713338 = 0x00000000u;
    data_0071333C = 0x00000000u;
}
