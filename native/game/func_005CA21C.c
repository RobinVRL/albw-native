/* USA 005CA21C (EU 005CA1F4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712190;
extern uint32_t data_00712194;
extern uint32_t data_00712198;
extern uint32_t data_0071219C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CA21C(void) {
    data_00712190 = 0xFFFFFFFFu;
    data_00712194 = 0xFFFFFFFFu;
    data_00712198 = 0x00000000u;
    data_0071219C = 0x00000000u;
}
