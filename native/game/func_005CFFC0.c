/* USA 005CFFC0 (EU 005CFF98): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711100;
extern uint32_t data_00711104;
extern uint32_t data_00711108;
extern uint32_t data_0071110C;
extern uint32_t data_007964EC;
void func_005902C0(uintptr_t);

static const char *const names_007964EC[4] = {
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

void func_005CFFC0(void) {
    fill_names((sead_SafeString *)&data_007964EC, names_007964EC, 4);
    data_00711100 = 0xFFFFFFFFu;
    data_00711104 = 0xFFFFFFFFu;
    data_00711108 = 0x00000000u;
    data_0071110C = 0x00000000u;
    func_005902C0(0x00000000u);
}
