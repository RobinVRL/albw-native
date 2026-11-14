/* USA 005FA7C8 (EU 005FA7A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716668;
extern uint32_t data_0071666C;
extern uint32_t data_00716670;
extern uint32_t data_00716674;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005FA7C8(void) {
    data_00716668 = 0xFFFFFFFFu;
    data_0071666C = 0xFFFFFFFFu;
    data_00716670 = 0x00000000u;
    data_00716674 = 0x00000000u;
}
