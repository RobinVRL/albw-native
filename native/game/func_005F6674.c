/* USA 005F6674 (EU 005F664C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (5 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713928;
extern uint32_t data_0071392C;
extern uint32_t data_00713930;
extern uint32_t data_00713934;
extern uint32_t data_00713938;
extern uint32_t data_0079C3A4;
void func_005902C0(void);

static const char *const names_00713938[1] = {
    "Gm_PinMenuWindow",
};
static const char *const names_0079C3A4[4] = {
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

void func_005F6674(void) {
    fill_names((sead_SafeString *)&data_00713938, names_00713938, 1);
    fill_names((sead_SafeString *)&data_0079C3A4, names_0079C3A4, 4);
    data_00713928 = 0xFFFFFFFFu;
    data_0071392C = 0xFFFFFFFFu;
    data_00713930 = 0x00000000u;
    data_00713934 = 0x00000000u;
    func_005902C0();
}
