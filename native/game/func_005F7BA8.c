/* USA 005F7BA8 (EU 005F7B80): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715420;
extern uint32_t data_00715424;
extern uint32_t data_00715428;
extern uint32_t data_0071542C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F7BA8(void) {
    data_00715420 = 0xFFFFFFFFu;
    data_00715424 = 0xFFFFFFFFu;
    data_00715428 = 0x00000000u;
    data_0071542C = 0x00000000u;
}
