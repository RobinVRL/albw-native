/* USA 005AE880 (EU 005AE858): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713180;
extern uint32_t data_00713184;
extern uint32_t data_00713188;
extern uint32_t data_0071318C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AE880(void) {
    data_00713180 = 0xFFFFFFFFu;
    data_00713184 = 0xFFFFFFFFu;
    data_00713188 = 0x00000000u;
    data_0071318C = 0x00000000u;
}
