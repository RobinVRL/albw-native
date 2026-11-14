/* USA 005D00C8 (EU 005D00A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711D70;
extern uint32_t data_00711D74;
extern uint32_t data_00711D78;
extern uint32_t data_00711D7C;
extern uint32_t data_007965F0;
void func_005902C0(void);

static const char *const names_007965F0[4] = {
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

void func_005D00C8(void) {
    fill_names((sead_SafeString *)&data_007965F0, names_007965F0, 4);
    data_00711D70 = 0xFFFFFFFFu;
    data_00711D74 = 0xFFFFFFFFu;
    data_00711D78 = 0x00000000u;
    data_00711D7C = 0x00000000u;
    func_005902C0();
}
