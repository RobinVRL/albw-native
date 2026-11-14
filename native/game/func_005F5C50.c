/* USA 005F5C50 (EU 005F5C28): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (7 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007133F0;
extern uint32_t data_007133F4;
extern uint32_t data_007133F8;
extern uint32_t data_007133FC;
extern uint32_t data_00713400;
extern uint32_t data_0079BA08;
void func_005902C0(void);

static const char *const names_00713400[3] = {
    "L_NumGameCoin_00",
    "N_GameCoin_00",
    "SE_S_GAME_COIN_COUNT",
};
static const char *const names_0079BA08[4] = {
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

void func_005F5C50(void) {
    fill_names((sead_SafeString *)&data_00713400, names_00713400, 3);
    fill_names((sead_SafeString *)&data_0079BA08, names_0079BA08, 4);
    data_007133F0 = 0xFFFFFFFFu;
    data_007133F4 = 0xFFFFFFFFu;
    data_007133F8 = 0x00000000u;
    data_007133FC = 0x00000000u;
    func_005902C0();
}
