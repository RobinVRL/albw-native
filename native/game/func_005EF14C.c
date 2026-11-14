/* USA 005EF14C (EU 005EF124): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (7 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713418;
extern uint32_t data_0071341C;
extern uint32_t data_00713420;
extern uint32_t data_00713424;
extern uint32_t data_00713428;
extern uint32_t data_00713438;
extern uint32_t data_0079BA28;
void func_005902C0(uintptr_t);

static const char *const names_00713428[3] = {
    "L_NumKinsuta_00",
    "N_Kinsuta_00",
    "SE_S_KINSTA_COUNT",
};
static const char *const names_0079BA28[4] = {
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

void func_005EF14C(void) {
    fill_names((sead_SafeString *)&data_00713428, names_00713428, 3);
    fill_names((sead_SafeString *)&data_0079BA28, names_0079BA28, 4);
    data_00713418 = 0xFFFFFFFFu;
    data_0071341C = 0xFFFFFFFFu;
    data_00713420 = 0x00000000u;
    data_00713424 = 0x00000000u;
    func_005902C0((uintptr_t)&data_00713438);
}
