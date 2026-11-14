/* USA 005B9654 (EU 005B962C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714EB8;
extern uint32_t data_00714EBC;
extern uint32_t data_00714EC0;
extern uint32_t data_00714EC4;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B9654(void) {
    data_00714EB8 = 0xFFFFFFFFu;
    data_00714EBC = 0xFFFFFFFFu;
    data_00714EC0 = 0x00000000u;
    data_00714EC4 = 0x00000000u;
}
