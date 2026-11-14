/* USA 005F77F0 (EU 005F77C8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 8 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711D18;
extern uint32_t data_00711D20;
extern uint32_t data_00711D24;
extern uint32_t data_00711D28;
extern uint32_t data_00711D2C;
extern uint32_t data_007965C4;
extern uint32_t data_007965E4;
extern uint32_t data_007965E8;
extern uint32_t data_007965EC;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00119954(void);

static const char *const names_007965C4[4] = {
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

void func_005F77F0(void) {
    fill_names((sead_SafeString *)&data_007965C4, names_007965C4, 4);
    data_00711D20 = 0xFFFFFFFFu;
    data_00711D24 = 0xFFFFFFFFu;
    data_00711D28 = 0x00000000u;
    data_00711D2C = 0x00000000u;
    data_007965E4 = 0x00000000u /* 0.0 f */;
    data_007965E8 = 0x00000000u /* 0.0 f */;
    data_007965EC = 0xC0A00000u /* -5.0 f */;
    uintptr_t ret0 = func_00114608(0x4B360B61u, (uintptr_t)&func_00119954);
    data_00711D18 = ret0;
}
