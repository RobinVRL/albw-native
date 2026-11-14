/* USA 005E4854 (EU 005E482C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007147B0;
extern uint32_t data_007147B4;
extern uint32_t data_007147B8;
extern uint32_t data_007147BC;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E4854(void) {
    data_007147B0 = 0xFFFFFFFFu;
    data_007147B4 = 0xFFFFFFFFu;
    data_007147B8 = 0x00000000u;
    data_007147BC = 0x00000000u;
}
