/* USA 005A8AA0 (EU 005A8A78): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715448;
extern uint32_t data_0071544C;
extern uint32_t data_00715450;
extern uint32_t data_00715454;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A8AA0(void) {
    data_00715448 = 0xFFFFFFFFu;
    data_0071544C = 0xFFFFFFFFu;
    data_00715450 = 0x00000000u;
    data_00715454 = 0x00000000u;
}
