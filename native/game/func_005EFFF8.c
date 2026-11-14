/* USA 005EFFF8 (EU 005EFFD0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716760;
extern uint32_t data_00716764;
extern uint32_t data_00716768;
extern uint32_t data_0071676C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EFFF8(void) {
    data_00716760 = 0xFFFFFFFFu;
    data_00716764 = 0xFFFFFFFFu;
    data_00716768 = 0x00000000u;
    data_0071676C = 0x00000000u;
}
