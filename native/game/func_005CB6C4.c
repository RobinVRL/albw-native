/* USA 005CB6C4 (EU 005CB69C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007165F8;
extern uint32_t data_007165FC;
extern uint32_t data_00716600;
extern uint32_t data_00716604;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CB6C4(void) {
    data_007165F8 = 0xFFFFFFFFu;
    data_007165FC = 0xFFFFFFFFu;
    data_00716600 = 0x00000000u;
    data_00716604 = 0x00000000u;
}
