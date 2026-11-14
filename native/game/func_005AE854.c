/* USA 005AE854 (EU 005AE82C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712500;
extern uint32_t data_00712504;
extern uint32_t data_00712508;
extern uint32_t data_0071250C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AE854(void) {
    data_00712500 = 0xFFFFFFFFu;
    data_00712504 = 0xFFFFFFFFu;
    data_00712508 = 0x00000000u;
    data_0071250C = 0x00000000u;
}
