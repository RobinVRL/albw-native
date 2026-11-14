/* USA 005AAFB4 (EU 005AAF8C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B858;
extern uint32_t data_0070B85C;
extern uint32_t data_0070B860;
extern uint32_t data_0070B864;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AAFB4(void) {
    data_0070B858 = 0xFFFFFFFFu;
    data_0070B85C = 0xFFFFFFFFu;
    data_0070B860 = 0x00000000u;
    data_0070B864 = 0x00000000u;
}
