/* USA 005F8CD0 (EU 005F8CA8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (12 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714038;
extern uint32_t data_0071403C;
extern uint32_t data_00714040;
extern uint32_t data_00714044;
extern uint32_t data_00714048;
extern uint32_t data_0079C7E4;
void func_005902C0(uintptr_t);

static const char *const names_00714048[1] = {
    "Gm_SRCShadowLinkInfoB",
};
static const char *const names_0079C7E4[11] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "In",
    "Out",
    "Loop",
    "Lv1",
    "Lv2",
    "Lv3",
    "Lv4",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F8CD0(void) {
    fill_names((sead_SafeString *)&data_00714048, names_00714048, 1);
    fill_names((sead_SafeString *)&data_0079C7E4, names_0079C7E4, 11);
    data_00714038 = 0xFFFFFFFFu;
    data_0071403C = 0xFFFFFFFFu;
    data_00714040 = 0x00000000u;
    data_00714044 = 0x00000000u;
    func_005902C0(0x00000000u);
}
