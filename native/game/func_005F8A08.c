/* USA 005F8A08 (EU 005F89E0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (22 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713718;
extern uint32_t data_0071371C;
extern uint32_t data_00713720;
extern uint32_t data_00713724;
extern uint32_t data_00713728;
extern uint32_t data_0079C06C;
void func_005902C0(void);

static const char *const names_00713728[1] = {
    "Gm_SRCStartT",
};
static const char *const names_0079C06C[21] = {
    "In",
    "Out",
    "InInfo",
    "Loop",
    "Heart1Line",
    "Heart2Line",
    "L_Sword_00",
    "L_Shield_00",
    "L_Clothes_00",
    "L_ItemY_00",
    "L_ItemX_00",
    "Lv1",
    "Lv2",
    "Lv3",
    "Lv4",
    "P_Bee_00",
    "P_Boots_00",
    "P_Torisetsu_00",
    "N_Item_00",
    "N_Item_01",
    "N_Item_02",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F8A08(void) {
    fill_names((sead_SafeString *)&data_00713728, names_00713728, 1);
    fill_names((sead_SafeString *)&data_0079C06C, names_0079C06C, 21);
    data_00713718 = 0xFFFFFFFFu;
    data_0071371C = 0xFFFFFFFFu;
    data_00713720 = 0x00000000u;
    data_00713724 = 0x00000000u;
    func_005902C0();
}
