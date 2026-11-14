/* USA 005C1950 (EU 005C1928): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 12 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711CF0;
extern uint32_t data_00711CF4;
extern uint32_t data_00711CF8;
extern uint32_t data_00711CFC;
extern uint32_t data_00711D00;
extern uint32_t data_00711D04;
extern uint32_t data_0079658C;
extern uint32_t data_007965AC;
extern uint32_t data_007965B0;
extern uint32_t data_007965B4;
extern uint32_t data_007965B8;
extern uint32_t data_007965BC;
extern uint32_t data_007965C0;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011C7B8(void);

static const char *const names_0079658C[4] = {
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

void func_005C1950(void) {
    fill_names((sead_SafeString *)&data_0079658C, names_0079658C, 4);
    data_00711CF8 = 0xFFFFFFFFu;
    data_00711CFC = 0xFFFFFFFFu;
    data_00711D00 = 0x00000000u;
    data_00711D04 = 0x00000000u;
    data_007965AC = 0x3F800000u /* 1.0 f */;
    data_007965B0 = 0x00000000u /* 0.0 f */;
    data_007965B4 = 0x00000000u /* 0.0 f */;
    data_007965B8 = 0xBF800000u /* -1.0 f */;
    data_007965BC = 0x00000000u /* 0.0 f */;
    data_007965C0 = 0x00000000u /* 0.0 f */;
    uintptr_t ret0 = func_00114608(0x4DE38E39u, (uintptr_t)&func_0011C7B8);
    data_00711CF0 = ret0;
    data_00711CF4 = ret0;
}
