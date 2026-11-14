/* USA 005931A4 (EU 0059317C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 7 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709D54;
extern uint32_t data_00709D58;
extern uint32_t data_00709D5C;
extern uint32_t data_00709D60;
extern uint32_t data_00709D64;
extern uint32_t data_00709D68;
extern uint32_t data_00709D6C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005931A4(void) {
    data_00709D54 = 0x00000000u;
    data_00709D58 = 0x00000000u;
    data_00709D5C = 0x00000000u;
    data_00709D60 = 0xFFFFFFFFu;
    data_00709D64 = 0xFFFFFFFFu;
    data_00709D68 = 0x00000000u;
    data_00709D6C = 0x00000000u;
}
