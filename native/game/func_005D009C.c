/* USA 005D009C (EU 005D0074): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711D40;
extern uint32_t data_00711D44;
extern uint32_t data_00711D48;
extern uint32_t data_00711D4C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005D009C(void) {
    data_00711D40 = 0xFFFFFFFFu;
    data_00711D44 = 0xFFFFFFFFu;
    data_00711D48 = 0x00000000u;
    data_00711D4C = 0x00000000u;
}
