/* USA 005F292C (EU 005F2904): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (6 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713B40;
extern uint32_t data_00713B44;
extern uint32_t data_00713B48;
extern uint32_t data_00713B4C;
extern uint32_t data_00713B50;
extern uint32_t data_0079C534;
void func_005902C0(void);

static const char *const names_00713B50[2] = {
    "Gm_GameOverT",
    "T_Message_00",
};
static const char *const names_0079C534[4] = {
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

void func_005F292C(void) {
    fill_names((sead_SafeString *)&data_00713B50, names_00713B50, 2);
    fill_names((sead_SafeString *)&data_0079C534, names_0079C534, 4);
    data_00713B40 = 0xFFFFFFFFu;
    data_00713B44 = 0xFFFFFFFFu;
    data_00713B48 = 0x00000000u;
    data_00713B4C = 0x00000000u;
    func_005902C0();
}
