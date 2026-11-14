/* USA 005A8278 (EU 005A8250): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715948;
extern uint32_t data_0071594C;
extern uint32_t data_00715950;
extern uint32_t data_00715954;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A8278(void) {
    data_00715948 = 0xFFFFFFFFu;
    data_0071594C = 0xFFFFFFFFu;
    data_00715950 = 0x00000000u;
    data_00715954 = 0x00000000u;
}
