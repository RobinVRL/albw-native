/* USA 005EBAA4 (EU 005EBA7C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716678;
extern uint32_t data_0071667C;
extern uint32_t data_00716680;
extern uint32_t data_00716684;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EBAA4(void) {
    data_00716678 = 0xFFFFFFFFu;
    data_0071667C = 0xFFFFFFFFu;
    data_00716680 = 0x00000000u;
    data_00716684 = 0x00000000u;
}
