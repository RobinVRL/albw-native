/* USA 005F5DA8 (EU 005F5D80): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (25 names), 13 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713770;
extern uint32_t data_00713774;
extern uint32_t data_00713778;
extern uint32_t data_0071377C;
extern uint32_t data_00713780;
extern uint32_t data_0079C174;
extern uint32_t data_0079C178;
extern uint32_t data_0079C17C;
extern uint32_t data_0079C180;
extern uint32_t data_0079C184;
extern uint32_t data_0079C188;
extern uint32_t data_0079C18C;
extern uint32_t data_0079C190;
extern uint32_t data_0079C194;
extern uint32_t data_0079C198;

static const char *const names_00713780[7] = {
    "Gm_SRCSettingB",
    "P_Bee_00",
    "P_Boots_00",
    "P_Torisetsu_00",
    "N_Item_00",
    "N_Item_01",
    "N_Item_02",
};
static const char *const names_0079C198[18] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "Loop",
    "In",
    "In",
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
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F5DA8(void) {
    fill_names((sead_SafeString *)&data_00713780, names_00713780, 7);
    fill_names((sead_SafeString *)&data_0079C198, names_0079C198, 18);
    data_00713770 = 0xFFFFFFFFu;
    data_00713774 = 0xFFFFFFFFu;
    data_00713778 = 0x00000000u;
    data_0071377C = 0x00000000u;
    data_0079C174 = 0x00000000u /* 0.0 f */;
    data_0079C178 = 0x3F800000u /* 1.0 f */;
    data_0079C17C = 0x40866666u /* 4.199999809265137 f */;
    data_0079C180 = 0x3FBAE148u /* 1.4600000381469727 f */;
    data_0079C184 = 0x3F59999Au /* 0.8500000238418579 f */;
    data_0079C188 = 0x00000000u /* 0.0 f */;
    data_0079C18C = 0x00000000u /* 0.0 f */;
    data_0079C190 = 0x3F800000u /* 1.0 f */;
    data_0079C194 = 0x00000000u /* 0.0 f */;
}
