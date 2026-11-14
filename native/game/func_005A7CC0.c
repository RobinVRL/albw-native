/* USA 005A7CC0 (EU 005A7C98): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711E38;
extern uint32_t data_00711E3C;
extern uint32_t data_00711E40;
extern uint32_t data_00711E44;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A7CC0(void) {
    data_00711E38 = 0xFFFFFFFFu;
    data_00711E3C = 0xFFFFFFFFu;
    data_00711E40 = 0x00000000u;
    data_00711E44 = 0x00000000u;
}
