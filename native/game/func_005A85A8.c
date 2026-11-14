/* USA 005A85A8 (EU 005A8580): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715100;
extern uint32_t data_00715104;
extern uint32_t data_00715108;
extern uint32_t data_0071510C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A85A8(void) {
    data_00715100 = 0xFFFFFFFFu;
    data_00715104 = 0xFFFFFFFFu;
    data_00715108 = 0x00000000u;
    data_0071510C = 0x00000000u;
}
