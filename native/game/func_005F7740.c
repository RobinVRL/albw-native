/* USA 005F7740 (EU 005F7718): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D7C0;
extern uint32_t data_0070D7C4;
extern uint32_t data_0070D7C8;
extern uint32_t data_0070D7CC;
extern uint32_t data_0076F0B0;
void func_005902C0(void);

static const char *const names_0076F0B0[4] = {
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

void func_005F7740(void) {
    fill_names((sead_SafeString *)&data_0076F0B0, names_0076F0B0, 4);
    data_0070D7C0 = 0xFFFFFFFFu;
    data_0070D7C4 = 0xFFFFFFFFu;
    data_0070D7C8 = 0x00000000u;
    data_0070D7CC = 0x00000000u;
    func_005902C0();
}
