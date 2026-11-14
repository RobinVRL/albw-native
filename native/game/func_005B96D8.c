/* USA 005B96D8 (EU 005B96B0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007151C8;
extern uint32_t data_007151CC;
extern uint32_t data_007151D0;
extern uint32_t data_007151D4;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B96D8(void) {
    data_007151C8 = 0xFFFFFFFFu;
    data_007151CC = 0xFFFFFFFFu;
    data_007151D0 = 0x00000000u;
    data_007151D4 = 0x00000000u;
}
