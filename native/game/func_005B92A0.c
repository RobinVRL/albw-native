/* USA 005B92A0 (EU 005B9278): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714AD8;
extern uint32_t data_00714ADC;
extern uint32_t data_00714AE0;
extern uint32_t data_00714AE4;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B92A0(void) {
    data_00714AD8 = 0xFFFFFFFFu;
    data_00714ADC = 0xFFFFFFFFu;
    data_00714AE0 = 0x00000000u;
    data_00714AE4 = 0x00000000u;
}
