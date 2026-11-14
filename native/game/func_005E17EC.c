/* USA 005E17EC (EU 005E17C4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D838;
extern uint32_t data_0070D83C;
extern uint32_t data_0070D840;
extern uint32_t data_0070D844;
extern uint32_t data_0076F0D0;
void func_005902C0(void);

static const char *const names_0076F0D0[4] = {
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

void func_005E17EC(void) {
    fill_names((sead_SafeString *)&data_0076F0D0, names_0076F0D0, 4);
    data_0070D838 = 0xFFFFFFFFu;
    data_0070D83C = 0xFFFFFFFFu;
    data_0070D840 = 0x00000000u;
    data_0070D844 = 0x00000000u;
    func_005902C0();
}
