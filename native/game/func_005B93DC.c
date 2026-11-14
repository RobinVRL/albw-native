/* USA 005B93DC (EU 005B93B4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714C60;
extern uint32_t data_00716488;
extern uint32_t data_0071648C;
extern uint32_t data_00716490;
extern uint32_t data_00716494;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B93DC(void) {
    data_00716488 = (uint32_t)(uintptr_t)&data_00714C60;
    data_0071648C = (uint32_t)(uintptr_t)&data_00716488;
    data_00716490 = (uint32_t)(uintptr_t)&data_00716488;
    data_00716494 = (uint32_t)(uintptr_t)&data_00716488;
}
