/* USA 005B9274 (EU 005B924C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714810;
extern uint32_t data_00714814;
extern uint32_t data_00714818;
extern uint32_t data_0071481C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B9274(void) {
    data_00714810 = 0xFFFFFFFFu;
    data_00714814 = 0xFFFFFFFFu;
    data_00714818 = 0x00000000u;
    data_0071481C = 0x00000000u;
}
