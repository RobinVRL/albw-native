/* USA 005EF8F4 (EU 005EF8CC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713CB0;
extern uint32_t data_00713CB4;
extern uint32_t data_00713CB8;
extern uint32_t data_00713CBC;
extern uint32_t data_0079C61C;
void func_005902C0(void);

static const char *const names_0079C61C[4] = {
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

void func_005EF8F4(void) {
    fill_names((sead_SafeString *)&data_0079C61C, names_0079C61C, 4);
    data_00713CB0 = 0xFFFFFFFFu;
    data_00713CB4 = 0xFFFFFFFFu;
    data_00713CB8 = 0x00000000u;
    data_00713CBC = 0x00000000u;
    func_005902C0();
}
