/* USA 005FCDA0 (EU 005FCD78): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007256C0;
extern uint32_t data_007256C4;
extern uint32_t data_007256C8;
extern uint32_t data_007256CC;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005FCDA0(void) {
    data_007256C0 = 0xFFFFFFFFu;
    data_007256C4 = 0xFFFFFFFFu;
    data_007256C8 = 0x00000000u;
    data_007256CC = 0x00000000u;
}
