/* USA 005F24F0 (EU 005F24C8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (32 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007136A0;
extern uint32_t data_007136A4;
extern uint32_t data_007136A8;
extern uint32_t data_007136AC;
extern uint32_t data_007136B0;
extern uint32_t data_0079BE24;
void func_005902C0(void);

static const char *const names_007136B0[1] = {
    "Gm_SRCMainSystemBaseB",
};
static const char *const names_0079BE24[31] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "InIcon",
    "Heart2Line",
    "Heart1Line",
    "OutIcon",
    "Loop",
    "Lv1",
    "Lv2",
    "Lv3",
    "Lv4",
    "L_Sword_00",
    "L_Shield_00",
    "L_Clothes_00",
    "L_ItemY_00",
    "L_ItemX_00",
    "L_YbtnItem_00",
    "L_XbtnItem_00",
    "P_Sword_00",
    "P_MSword_00",
    "P_MSword_01",
    "P_MSword_02",
    "P_Swim_00",
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

void func_005F24F0(void) {
    fill_names((sead_SafeString *)&data_007136B0, names_007136B0, 1);
    fill_names((sead_SafeString *)&data_0079BE24, names_0079BE24, 31);
    data_007136A0 = 0xFFFFFFFFu;
    data_007136A4 = 0xFFFFFFFFu;
    data_007136A8 = 0x00000000u;
    data_007136AC = 0x00000000u;
    func_005902C0();
}
