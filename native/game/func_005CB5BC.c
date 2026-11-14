/* USA 005CB5BC (EU 005CB594): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716278;
extern uint32_t data_0071627C;
extern uint32_t data_00716280;
extern uint32_t data_00716284;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CB5BC(void) {
    data_00716278 = 0xFFFFFFFFu;
    data_0071627C = 0xFFFFFFFFu;
    data_00716280 = 0x00000000u;
    data_00716284 = 0x00000000u;
}
