/* USA 005D0D44 (EU 005D0D1C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715358;
extern uint32_t data_0071535C;
extern uint32_t data_00715360;
extern uint32_t data_00715364;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005D0D44(void) {
    data_00715358 = 0xFFFFFFFFu;
    data_0071535C = 0xFFFFFFFFu;
    data_00715360 = 0x00000000u;
    data_00715364 = 0x00000000u;
}
