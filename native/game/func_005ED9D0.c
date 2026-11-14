/* USA 005ED9D0 (EU 005ED9A8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714730;
extern uint32_t data_00714734;
extern uint32_t data_00714738;
extern uint32_t data_0071473C;
extern uint32_t data_0079CA98;
void func_005902C0(void);

static const char *const names_0079CA98[4] = {
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

void func_005ED9D0(void) {
    fill_names((sead_SafeString *)&data_0079CA98, names_0079CA98, 4);
    data_00714730 = 0xFFFFFFFFu;
    data_00714734 = 0xFFFFFFFFu;
    data_00714738 = 0x00000000u;
    data_0071473C = 0x00000000u;
    func_005902C0();
}
