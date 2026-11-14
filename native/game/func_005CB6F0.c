/* USA 005CB6F0 (EU 005CB6C8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714F80;
extern uint32_t data_00714F84;
extern uint32_t data_00714F88;
extern uint32_t data_00714F8C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CB6F0(void) {
    data_00714F80 = 0xFFFFFFFFu;
    data_00714F84 = 0xFFFFFFFFu;
    data_00714F88 = 0x00000000u;
    data_00714F8C = 0x00000000u;
}
