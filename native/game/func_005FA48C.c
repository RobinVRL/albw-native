/* USA 005FA48C (EU 005FA464): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (8 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713748;
extern uint32_t data_0071374C;
extern uint32_t data_00713750;
extern uint32_t data_00713754;
extern uint32_t data_00713758;
extern uint32_t data_0079C144;
void func_005902C0(void);

static const char *const names_00713758[2] = {
    "Gm_SRCRecordListT",
    "Gm_SRCRecordListIndexT",
};
static const char *const names_0079C144[6] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "In",
    "Out",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005FA48C(void) {
    fill_names((sead_SafeString *)&data_00713758, names_00713758, 2);
    fill_names((sead_SafeString *)&data_0079C144, names_0079C144, 6);
    data_00713748 = 0xFFFFFFFFu;
    data_0071374C = 0xFFFFFFFFu;
    data_00713750 = 0x00000000u;
    data_00713754 = 0x00000000u;
    func_005902C0();
}
