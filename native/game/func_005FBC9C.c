/* USA 005FBC9C (EU 005FBC74): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714F10;
extern uint32_t data_00714F14;
extern uint32_t data_00714F18;
extern uint32_t data_00714F1C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005FBC9C(void) {
    data_00714F10 = 0xFFFFFFFFu;
    data_00714F14 = 0xFFFFFFFFu;
    data_00714F18 = 0x00000000u;
    data_00714F1C = 0x00000000u;
}
