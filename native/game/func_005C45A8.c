/* USA 005C45A8 (EU 005C4580): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 1 sead::SafeString name tables (4 names) and 5 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C968;
extern uint32_t data_0070C970;
extern uint32_t data_0070C974;
extern uint32_t data_0070C978;
extern uint32_t data_0070C97C;
extern uint32_t data_007687A8;

static const char *const names_007687A8[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C45A8(void) {
    fill_names((sead_SafeString *)&data_007687A8, names_007687A8, 4);
    data_0070C968 = 0x00000000u;
    data_0070C970 = 0xFFFFFFFFu;
    data_0070C974 = 0xFFFFFFFFu;
    data_0070C978 = 0x00000000u;
    data_0070C97C = 0x00000000u;
}
