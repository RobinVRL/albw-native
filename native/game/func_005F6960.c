/* USA 005F6960 (EU 005F6938): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714E28;
extern uint32_t data_00714E2C;
extern uint32_t data_00714E30;
extern uint32_t data_00714E34;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F6960(void) {
    data_00714E28 = 0xFFFFFFFFu;
    data_00714E2C = 0xFFFFFFFFu;
    data_00714E30 = 0x00000000u;
    data_00714E34 = 0x00000000u;
}
