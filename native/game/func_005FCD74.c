/* USA 005FCD74 (EU 005FCD4C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713250;
extern uint32_t data_00713254;
extern uint32_t data_00713258;
extern uint32_t data_0071325C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005FCD74(void) {
    data_00713250 = 0xFFFFFFFFu;
    data_00713254 = 0xFFFFFFFFu;
    data_00713258 = 0x00000000u;
    data_0071325C = 0x00000000u;
}
