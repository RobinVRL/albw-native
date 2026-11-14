/* USA 005ED378 (EU 005ED350): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (10 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713B10;
extern uint32_t data_00713B14;
extern uint32_t data_00713B18;
extern uint32_t data_00713B1C;
extern uint32_t data_00713B20;
extern uint32_t data_0079C4EC;
void func_005902C0(void);

static const char *const names_00713B20[1] = {
    "Gm_MGCommonText",
};
static const char *const names_0079C4EC[9] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "N_Start_00",
    "N_TimeUp_00",
    "N_Finish_00",
    "N_PlayBall",
    "N_Failure_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005ED378(void) {
    fill_names((sead_SafeString *)&data_00713B20, names_00713B20, 1);
    fill_names((sead_SafeString *)&data_0079C4EC, names_0079C4EC, 9);
    data_00713B10 = 0xFFFFFFFFu;
    data_00713B14 = 0xFFFFFFFFu;
    data_00713B18 = 0x00000000u;
    data_00713B1C = 0x00000000u;
    func_005902C0();
}
