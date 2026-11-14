/* USA 005EDBF4 (EU 005EDBCC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00722A98;
extern uint32_t data_00722A9C;
extern uint32_t data_00722AA0;
extern uint32_t data_00722AA4;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EDBF4(void) {
    data_00722A98 = 0xFFFFFFFFu;
    data_00722A9C = 0xFFFFFFFFu;
    data_00722AA0 = 0x00000000u;
    data_00722AA4 = 0x00000000u;
}
