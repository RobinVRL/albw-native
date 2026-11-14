/* USA 005F6160 (EU 005F6138): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (30 names), 13 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007137B8;
extern uint32_t data_007137BC;
extern uint32_t data_007137C0;
extern uint32_t data_007137C4;
extern uint32_t data_007137C8;
extern uint32_t data_0079C228;
extern uint32_t data_0079C22C;
extern uint32_t data_0079C230;
extern uint32_t data_0079C234;
extern uint32_t data_0079C238;
extern uint32_t data_0079C23C;
extern uint32_t data_0079C240;
extern uint32_t data_0079C244;
extern uint32_t data_0079C248;
extern uint32_t data_0079C24C;

static const char *const names_007137C8[7] = {
    "Gm_SRCSettingT",
    "P_Bee_00",
    "P_Boots_00",
    "P_Torisetsu_00",
    "N_Item_00",
    "N_Item_01",
    "N_Item_02",
};
static const char *const names_0079C24C[23] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "Loop",
    "In",
    "Out",
    "Heart1Line",
    "Heart2Line",
    "Change",
    "InBtn",
    "OutBtn",
    "L_Sword_00",
    "L_Shield_00",
    "L_Clothes_00",
    "L_ItemYBtn_00",
    "L_ItemXBtn_00",
    "L_BtnL_00",
    "L_BtnR_00",
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

void func_005F6160(void) {
    fill_names((sead_SafeString *)&data_007137C8, names_007137C8, 7);
    fill_names((sead_SafeString *)&data_0079C24C, names_0079C24C, 23);
    data_007137B8 = 0xFFFFFFFFu;
    data_007137BC = 0xFFFFFFFFu;
    data_007137C0 = 0x00000000u;
    data_007137C4 = 0x00000000u;
    data_0079C228 = 0x00000000u /* 0.0 f */;
    data_0079C22C = 0x3F666666u /* 0.8999999761581421 f */;
    data_0079C230 = 0x40D00000u /* 6.5 f */;
    data_0079C234 = 0x3FB33333u /* 1.399999976158142 f */;
    data_0079C238 = 0x3F333333u /* 0.699999988079071 f */;
    data_0079C23C = 0x00000000u /* 0.0 f */;
    data_0079C240 = 0x00000000u /* 0.0 f */;
    data_0079C244 = 0x3F800000u /* 1.0 f */;
    data_0079C248 = 0x00000000u /* 0.0 f */;
}
