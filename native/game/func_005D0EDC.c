/* USA 005D0EDC (EU 005D0EB4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007153D8;
extern uint32_t data_007153DC;
extern uint32_t data_007153E0;
extern uint32_t data_007153E4;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005D0EDC(void) {
    data_007153D8 = 0xFFFFFFFFu;
    data_007153DC = 0xFFFFFFFFu;
    data_007153E0 = 0x00000000u;
    data_007153E4 = 0x00000000u;
}
