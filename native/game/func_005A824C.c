/* USA 005A824C (EU 005A8224): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714A70;
extern uint32_t data_00714A74;
extern uint32_t data_00714A78;
extern uint32_t data_00714A7C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A824C(void) {
    data_00714A70 = 0xFFFFFFFFu;
    data_00714A74 = 0xFFFFFFFFu;
    data_00714A78 = 0x00000000u;
    data_00714A7C = 0x00000000u;
}
