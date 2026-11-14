/* USA 005F698C (EU 005F6964): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716558;
extern uint32_t data_0071655C;
extern uint32_t data_00716560;
extern uint32_t data_00716564;
extern uint32_t data_00716568;
void func_005902C0(void);

static const char *const names_00716568[1] = {
    "SoundHeap",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F698C(void) {
    fill_names((sead_SafeString *)&data_00716568, names_00716568, 1);
    data_00716558 = 0xFFFFFFFFu;
    data_0071655C = 0xFFFFFFFFu;
    data_00716560 = 0x00000000u;
    data_00716564 = 0x00000000u;
    func_005902C0();
}
