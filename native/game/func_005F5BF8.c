/* USA 005F5BF8 (EU 005F5BD0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713300;
extern uint32_t data_00713304;
extern uint32_t data_00713308;
extern uint32_t data_0071330C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F5BF8(void) {
    data_00713300 = 0xFFFFFFFFu;
    data_00713304 = 0xFFFFFFFFu;
    data_00713308 = 0x00000000u;
    data_0071330C = 0x00000000u;
}
