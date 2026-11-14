/* USA 005ED294 (EU 005ED26C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (5 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713940;
extern uint32_t data_00713944;
extern uint32_t data_00713948;
extern uint32_t data_0071394C;
extern uint32_t data_00713950;
extern uint32_t data_0079C3C4;
void func_005902C0(uintptr_t);

static const char *const names_00713950[1] = {
    "Gm_Pin",
};
static const char *const names_0079C3C4[4] = {
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

void func_005ED294(void) {
    fill_names((sead_SafeString *)&data_00713950, names_00713950, 1);
    fill_names((sead_SafeString *)&data_0079C3C4, names_0079C3C4, 4);
    data_00713940 = 0xFFFFFFFFu;
    data_00713944 = 0xFFFFFFFFu;
    data_00713948 = 0x00000000u;
    data_0071394C = 0x00000000u;
    func_005902C0((uintptr_t)&data_00713950);
}
