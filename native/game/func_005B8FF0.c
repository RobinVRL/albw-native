/* USA 005B8FF0 (EU 005B8FC8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (5 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714220;
extern uint32_t data_00714224;
extern uint32_t data_00714228;
extern uint32_t data_0071422C;
extern uint32_t data_00714230;
extern uint32_t data_0079C87C;
void func_005902C0(uintptr_t);

static const char *const names_00714230[1] = {
    "Gm_RupeeT",
};
static const char *const names_0079C87C[4] = {
    "N_KimoB_00",
    "N_KimoY_00",
    "N_KimoP_00",
    "N_GameCoin_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B8FF0(void) {
    fill_names((sead_SafeString *)&data_00714230, names_00714230, 1);
    fill_names((sead_SafeString *)&data_0079C87C, names_0079C87C, 4);
    data_00714220 = 0xFFFFFFFFu;
    data_00714224 = 0xFFFFFFFFu;
    data_00714228 = 0x00000000u;
    data_0071422C = 0x00000000u;
    func_005902C0(0x00000000u);
}
