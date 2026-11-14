/* USA 005AAFE0 (EU 005AAFB8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B8C0;
extern uint32_t data_0070B8C4;
extern uint32_t data_0070B8C8;
extern uint32_t data_0070B8CC;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AAFE0(void) {
    data_0070B8C0 = 0xFFFFFFFFu;
    data_0070B8C4 = 0xFFFFFFFFu;
    data_0070B8C8 = 0x00000000u;
    data_0070B8CC = 0x00000000u;
}
