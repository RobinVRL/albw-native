/* USA 005EF34C (EU 005EF324): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (5 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713540;
extern uint32_t data_00713544;
extern uint32_t data_00713548;
extern uint32_t data_0071354C;
extern uint32_t data_00713550;
extern uint32_t data_0079BC40;
void func_005902C0(uintptr_t);

static const char *const names_00713550[1] = {
    "Gm_PinSticked",
};
static const char *const names_0079BC40[4] = {
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

void func_005EF34C(void) {
    fill_names((sead_SafeString *)&data_00713550, names_00713550, 1);
    fill_names((sead_SafeString *)&data_0079BC40, names_0079BC40, 4);
    data_00713540 = 0xFFFFFFFFu;
    data_00713544 = 0xFFFFFFFFu;
    data_00713548 = 0x00000000u;
    data_0071354C = 0x00000000u;
    func_005902C0((uintptr_t)&data_00713550);
}
