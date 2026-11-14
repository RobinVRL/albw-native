/* USA 005EB01C (EU 005EAFF4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (11 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713E18;
extern uint32_t data_00713E1C;
extern uint32_t data_00713E20;
extern uint32_t data_00713E24;
extern uint32_t data_00713E28;
extern uint32_t data_0079C6BC;
void func_005902C0(void);

static const char *const names_00713E28[3] = {
    "Gm_PauseT",
    "T_Message_00",
    "T_GmOvr_00",
};
static const char *const names_0079C6BC[8] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "L_Btn_01_T_GmOvr_00",
    "L_Btn_00_T_GmOvr_00",
    "L_Btn_02_T_GmOvr_00",
    "L_Btn_03_T_GmOvr_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EB01C(void) {
    fill_names((sead_SafeString *)&data_00713E28, names_00713E28, 3);
    fill_names((sead_SafeString *)&data_0079C6BC, names_0079C6BC, 8);
    data_00713E18 = 0xFFFFFFFFu;
    data_00713E1C = 0xFFFFFFFFu;
    data_00713E20 = 0x00000000u;
    data_00713E24 = 0x00000000u;
    func_005902C0();
}
