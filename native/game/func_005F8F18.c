/* USA 005F8F18 (EU 005F8EF0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715988;
extern uint32_t data_0071598C;
extern uint32_t data_00715990;
extern uint32_t data_00715994;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F8F18(void) {
    data_00715988 = 0xFFFFFFFFu;
    data_0071598C = 0xFFFFFFFFu;
    data_00715990 = 0x00000000u;
    data_00715994 = 0x00000000u;
}
