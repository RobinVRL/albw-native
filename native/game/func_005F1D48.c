/* USA 005F1D48 (EU 005F1D20): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711158;
extern uint32_t data_0071115C;
extern uint32_t data_00711160;
extern uint32_t data_00711164;
extern uint32_t data_0079652C;
void func_005902C0(void);

static const char *const names_0079652C[4] = {
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

void func_005F1D48(void) {
    fill_names((sead_SafeString *)&data_0079652C, names_0079652C, 4);
    data_00711158 = 0xFFFFFFFFu;
    data_0071115C = 0xFFFFFFFFu;
    data_00711160 = 0x00000000u;
    data_00711164 = 0x00000000u;
    func_005902C0();
}
