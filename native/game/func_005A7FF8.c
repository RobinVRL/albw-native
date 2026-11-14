/* USA 005A7FF8 (EU 005A7FD0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714238;
extern uint32_t data_0071423C;
extern uint32_t data_00714240;
extern uint32_t data_00714244;
extern uint32_t data_0079C89C;
void func_005902C0(uintptr_t);

static const char *const names_0079C89C[4] = {
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

void func_005A7FF8(void) {
    fill_names((sead_SafeString *)&data_0079C89C, names_0079C89C, 4);
    data_00714238 = 0xFFFFFFFFu;
    data_0071423C = 0xFFFFFFFFu;
    data_00714240 = 0x00000000u;
    data_00714244 = 0x00000000u;
    func_005902C0(0x00000000u);
}
