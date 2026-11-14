/* USA 005EDD30 (EU 005EDD08): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714DD0;
extern uint32_t data_00714DD4;
extern uint32_t data_00714DD8;
extern uint32_t data_00714DDC;
extern uint32_t data_00714DE0;
void func_005902C0(uintptr_t);

static const char *const names_00714DE0[1] = {
    "AudioSystem",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EDD30(void) {
    fill_names((sead_SafeString *)&data_00714DE0, names_00714DE0, 1);
    data_00714DD0 = 0xFFFFFFFFu;
    data_00714DD4 = 0xFFFFFFFFu;
    data_00714DD8 = 0x00000000u;
    data_00714DDC = 0x00000000u;
    func_005902C0((uintptr_t)&data_00714DE0);
}
