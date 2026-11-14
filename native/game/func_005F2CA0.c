/* USA 005F2CA0 (EU 005F2C78): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (14 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713C70;
extern uint32_t data_00713C74;
extern uint32_t data_00713C78;
extern uint32_t data_00713C7C;
extern uint32_t data_00713C80;
extern uint32_t data_0079C5DC;
void func_005902C0(uintptr_t);

static const char *const names_00713C80[6] = {
    "Gm_SelectPowerUpT",
    "N_ItemName_00",
    "N_Area_00",
    "N_Area_00",
    "ItemNameUpper",
    "T_ItemNameCancel_00",
};
static const char *const names_0079C5DC[8] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "In",
    "Decide",
    "ScrollL",
    "ScrollR",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F2CA0(void) {
    fill_names((sead_SafeString *)&data_00713C80, names_00713C80, 6);
    fill_names((sead_SafeString *)&data_0079C5DC, names_0079C5DC, 8);
    data_00713C70 = 0xFFFFFFFFu;
    data_00713C74 = 0xFFFFFFFFu;
    data_00713C78 = 0x00000000u;
    data_00713C7C = 0x00000000u;
    func_005902C0(0x00000000u);
}
