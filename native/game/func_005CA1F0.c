/* USA 005CA1F0 (EU 005CA1C8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711F40;
extern uint32_t data_00711F44;
extern uint32_t data_00711F48;
extern uint32_t data_00711F4C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CA1F0(void) {
    data_00711F40 = 0xFFFFFFFFu;
    data_00711F44 = 0xFFFFFFFFu;
    data_00711F48 = 0x00000000u;
    data_00711F4C = 0x00000000u;
}
