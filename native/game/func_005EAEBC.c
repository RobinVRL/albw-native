/* USA 005EAEBC (EU 005EAE94): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713D60;
extern uint32_t data_00713D64;
extern uint32_t data_00713D68;
extern uint32_t data_00713D6C;
extern uint32_t data_0079C63C;
void func_005902C0(void);

static const char *const names_0079C63C[4] = {
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

void func_005EAEBC(void) {
    fill_names((sead_SafeString *)&data_0079C63C, names_0079C63C, 4);
    data_00713D60 = 0xFFFFFFFFu;
    data_00713D64 = 0xFFFFFFFFu;
    data_00713D68 = 0x00000000u;
    data_00713D6C = 0x00000000u;
    func_005902C0();
}
