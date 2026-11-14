/* USA 005F6AD4 (EU 005F6AAC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709EE8;
extern uint32_t data_00709EEC;
extern uint32_t data_00709EF0;
extern uint32_t data_00709EF4;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F6AD4(void) {
    data_00709EE8 = 0xFFFFFFFFu;
    data_00709EEC = 0xFFFFFFFFu;
    data_00709EF0 = 0x00000000u;
    data_00709EF4 = 0x00000000u;
}
