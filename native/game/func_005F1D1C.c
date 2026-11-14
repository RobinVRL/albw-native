/* USA 005F1D1C (EU 005F1CF4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711078;
extern uint32_t data_0071107C;
extern uint32_t data_00711080;
extern uint32_t data_00711084;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F1D1C(void) {
    data_00711078 = 0xFFFFFFFFu;
    data_0071107C = 0xFFFFFFFFu;
    data_00711080 = 0x00000000u;
    data_00711084 = 0x00000000u;
}
