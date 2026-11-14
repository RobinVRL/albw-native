/* USA 005ED80C (EU 005ED7E4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (5 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007141A8;
extern uint32_t data_007141AC;
extern uint32_t data_007141B0;
extern uint32_t data_007141B4;
extern uint32_t data_007141B8;
extern uint32_t data_0079C83C;
void func_005902C0(void);

static const char *const names_007141B8[1] = {
    "Gm_SelectWarpPointT",
};
static const char *const names_0079C83C[4] = {
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

void func_005ED80C(void) {
    fill_names((sead_SafeString *)&data_007141B8, names_007141B8, 1);
    fill_names((sead_SafeString *)&data_0079C83C, names_0079C83C, 4);
    data_007141A8 = 0xFFFFFFFFu;
    data_007141AC = 0xFFFFFFFFu;
    data_007141B0 = 0x00000000u;
    data_007141B4 = 0x00000000u;
    func_005902C0();
}
