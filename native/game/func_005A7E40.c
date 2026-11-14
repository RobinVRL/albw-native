/* USA 005A7E40 (EU 005A7E18): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007124B8;
extern uint32_t data_007124BC;
extern uint32_t data_007124C0;
extern uint32_t data_007124C4;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A7E40(void) {
    data_007124B8 = 0xFFFFFFFFu;
    data_007124BC = 0xFFFFFFFFu;
    data_007124C0 = 0x00000000u;
    data_007124C4 = 0x00000000u;
}
