/* USA 005AEF50 (EU 005AEF28): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709C98;
extern uint32_t data_00709C9C;
extern uint32_t data_00709CA0;
extern uint32_t data_00709CA4;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AEF50(void) {
    data_00709C98 = 0xFFFFFFFFu;
    data_00709C9C = 0xFFFFFFFFu;
    data_00709CA0 = 0x00000000u;
    data_00709CA4 = 0x00000000u;
}
