/* USA 005EDEC4 (EU 005EDE9C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715320;
extern uint32_t data_00715324;
extern uint32_t data_00715328;
extern uint32_t data_0071532C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EDEC4(void) {
    data_00715320 = 0xFFFFFFFFu;
    data_00715324 = 0xFFFFFFFFu;
    data_00715328 = 0x00000000u;
    data_0071532C = 0x00000000u;
}
