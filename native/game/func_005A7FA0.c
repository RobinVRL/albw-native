/* USA 005A7FA0 (EU 005A7F78): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713340;
extern uint32_t data_00713344;
extern uint32_t data_00713348;
extern uint32_t data_0071334C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A7FA0(void) {
    data_00713340 = 0xFFFFFFFFu;
    data_00713344 = 0xFFFFFFFFu;
    data_00713348 = 0x00000000u;
    data_0071334C = 0x00000000u;
}
