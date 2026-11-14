/* USA 005F65DC (EU 005F65B4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713800;
extern uint32_t data_00713804;
extern uint32_t data_00713808;
extern uint32_t data_0071380C;
extern uint32_t data_00713810;
void func_005902C0(void);

static const char *const names_00713810[2] = {
    "Gm_DemoAButton",
    "T_Action_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F65DC(void) {
    fill_names((sead_SafeString *)&data_00713810, names_00713810, 2);
    data_00713800 = 0xFFFFFFFFu;
    data_00713804 = 0xFFFFFFFFu;
    data_00713808 = 0x00000000u;
    data_0071380C = 0x00000000u;
    func_005902C0();
}
