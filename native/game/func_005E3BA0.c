/* USA 005E3BA0 (EU 005E3B78): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (38 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007135F8;
extern uint32_t data_007135FC;
extern uint32_t data_00713600;
extern uint32_t data_00713604;
extern uint32_t data_00713608;
extern uint32_t data_0079BC8C;
void func_005902C0(uintptr_t);

static const char *const names_00713608[8] = {
    "Gm_MainSystemCollectB",
    "Gm_MainSystemCollectContentsB",
    "T_Rupee_00",
    "T_Kinsuta_00",
    "T_KimoB_00",
    "T_KimoY_00",
    "T_KimoP_00",
    "T_Kouseki_00",
};
static const char *const names_0079BC8C[30] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "L_Sword_00",
    "L_Clothes_00",
    "L_Shield_00",
    "L_Bracelet_00",
    "L_Glove_00",
    "L_Boots_00",
    "L_Mizukaki_00",
    "L_Bee_00",
    "L_Torisetsu_00",
    "L_PendantR_00",
    "L_PendantB_00",
    "L_PendantG_00",
    "L_Heart_00",
    "L_Rupee_00",
    "L_Kinsuta_00",
    "L_KimoB_00",
    "L_KimoY_00",
    "L_KimoP_00",
    "L_Kouseki_00",
    "L_Kjy_00",
    "L_Zor_00",
    "L_Grn_00",
    "L_Inp_00",
    "L_Mpl_00",
    "L_Rcy_00",
    "L_Sis_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E3BA0(void) {
    fill_names((sead_SafeString *)&data_00713608, names_00713608, 8);
    fill_names((sead_SafeString *)&data_0079BC8C, names_0079BC8C, 30);
    data_007135F8 = 0xFFFFFFFFu;
    data_007135FC = 0xFFFFFFFFu;
    data_00713600 = 0x00000000u;
    data_00713604 = 0x00000000u;
    func_005902C0(0x00000000u);
}
