/* USA 005FA5F0 (EU 005FA5C8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (9 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713AA0;
extern uint32_t data_00713AA4;
extern uint32_t data_00713AA8;
extern uint32_t data_00713AAC;
extern uint32_t data_00713AB0;
extern uint32_t data_0079C444;
void func_005902C0(uintptr_t);

static const char *const names_00713AB0[1] = {
    "Gm_AnalogTimerT",
};
static const char *const names_0079C444[8] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "In",
    "Out",
    "Meter",
    "Attention",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005FA5F0(void) {
    fill_names((sead_SafeString *)&data_00713AB0, names_00713AB0, 1);
    fill_names((sead_SafeString *)&data_0079C444, names_0079C444, 8);
    data_00713AA0 = 0xFFFFFFFFu;
    data_00713AA4 = 0xFFFFFFFFu;
    data_00713AA8 = 0x00000000u;
    data_00713AAC = 0x00000000u;
    func_005902C0(0x00000000u);
}
