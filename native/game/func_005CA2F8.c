/* USA 005CA2F8 (EU 005CA2D0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007124C8;
extern uint32_t data_007124CC;
extern uint32_t data_007124D0;
extern uint32_t data_007124D4;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CA2F8(void) {
    data_007124C8 = 0xFFFFFFFFu;
    data_007124CC = 0xFFFFFFFFu;
    data_007124D0 = 0x00000000u;
    data_007124D4 = 0x00000000u;
}
