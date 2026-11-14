/* USA 005EB218 (EU 005EB1F0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (15 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713E60;
extern uint32_t data_00713E64;
extern uint32_t data_00713E68;
extern uint32_t data_00713E6C;
extern uint32_t data_00713E70;
extern uint32_t data_0079C71C;
void func_005902C0(uintptr_t);

static const char *const names_00713E70[3] = {
    "Gm_SRCResultT",
    "L_RupeeNumS_00",
    "L_RupeeNumL_00",
};
static const char *const names_0079C71C[12] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "In",
    "CountEnd",
    "Out",
    "LinkColor",
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

void func_005EB218(void) {
    fill_names((sead_SafeString *)&data_00713E70, names_00713E70, 3);
    fill_names((sead_SafeString *)&data_0079C71C, names_0079C71C, 12);
    data_00713E60 = 0xFFFFFFFFu;
    data_00713E64 = 0xFFFFFFFFu;
    data_00713E68 = 0x00000000u;
    data_00713E6C = 0x00000000u;
    func_005902C0(0x00000000u);
}
