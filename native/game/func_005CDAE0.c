/* USA 005CDAE0 (EU 005CDAB8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B8F8;
extern uint32_t data_0070B8FC;
extern uint32_t data_0070B900;
extern uint32_t data_0070B904;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CDAE0(void) {
    data_0070B8F8 = 0xFFFFFFFFu;
    data_0070B8FC = 0xFFFFFFFFu;
    data_0070B900 = 0x00000000u;
    data_0070B904 = 0x00000000u;
}
