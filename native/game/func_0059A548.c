/* USA 0059A548 (EU 0059A520): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709F38;
extern uint32_t data_00709F3C;
extern uint32_t data_00709F40;
extern uint32_t data_00709F44;
extern uint32_t data_00735364;
void func_005902C0(uintptr_t);

static const char *const names_00735364[4] = {
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

void func_0059A548(void) {
    fill_names((sead_SafeString *)&data_00735364, names_00735364, 4);
    data_00709F38 = 0xFFFFFFFFu;
    data_00709F3C = 0xFFFFFFFFu;
    data_00709F40 = 0x00000000u;
    data_00709F44 = 0x00000000u;
    func_005902C0(0x00000000u);
}
