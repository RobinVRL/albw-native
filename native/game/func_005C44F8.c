/* USA 005C44F8 (EU 005C44D0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C948;
extern uint32_t data_0070C94C;
extern uint32_t data_0070C950;
extern uint32_t data_0070C954;
extern uint32_t data_00768050;
void func_005902C0(void);

static const char *const names_00768050[4] = {
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

void func_005C44F8(void) {
    fill_names((sead_SafeString *)&data_00768050, names_00768050, 4);
    data_0070C948 = 0xFFFFFFFFu;
    data_0070C94C = 0xFFFFFFFFu;
    data_0070C950 = 0x00000000u;
    data_0070C954 = 0x00000000u;
    func_005902C0();
}
