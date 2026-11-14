/* USA 005ECE88 (EU 005ECE60): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007135D0;
extern uint32_t data_007135D4;
extern uint32_t data_007135D8;
extern uint32_t data_007135DC;
extern uint32_t data_007135E0;
void func_005902C0(void);

static const char *const names_007135E0[1] = {
    "Mn_LoadIconT",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005ECE88(void) {
    fill_names((sead_SafeString *)&data_007135E0, names_007135E0, 1);
    data_007135D0 = 0xFFFFFFFFu;
    data_007135D4 = 0xFFFFFFFFu;
    data_007135D8 = 0x00000000u;
    data_007135DC = 0x00000000u;
    func_005902C0();
}
