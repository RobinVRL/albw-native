/* USA 005EC720 (EU 005EC6F8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 5 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007110B0;
extern uint32_t data_007110B8;
extern uint32_t data_007110BC;
extern uint32_t data_007110C0;
extern uint32_t data_007110C4;
extern uint32_t data_0079644C;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00118154(void);

static const char *const names_0079644C[4] = {
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

void func_005EC720(void) {
    fill_names((sead_SafeString *)&data_0079644C, names_0079644C, 4);
    data_007110B8 = 0xFFFFFFFFu;
    data_007110BC = 0xFFFFFFFFu;
    data_007110C0 = 0x00000000u;
    data_007110C4 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4CE38E39u, (uintptr_t)&func_00118154);
    data_007110B0 = ret0;
}
