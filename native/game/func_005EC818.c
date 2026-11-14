/* USA 005EC818 (EU 005EC7F0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711D08;
extern uint32_t data_00711D0C;
extern uint32_t data_00711D10;
extern uint32_t data_00711D14;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EC818(void) {
    data_00711D08 = 0xFFFFFFFFu;
    data_00711D0C = 0xFFFFFFFFu;
    data_00711D10 = 0x00000000u;
    data_00711D14 = 0x00000000u;
}
