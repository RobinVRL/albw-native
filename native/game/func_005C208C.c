/* USA 005C208C (EU 005C2064): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713820;
extern uint32_t data_00713824;
extern uint32_t data_00713828;
extern uint32_t data_0071382C;
extern uint32_t data_00713830;
void func_005902C0(void);

static const char *const names_00713830[1] = {
    "Cm_SkipB",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C208C(void) {
    fill_names((sead_SafeString *)&data_00713830, names_00713830, 1);
    data_00713820 = 0xFFFFFFFFu;
    data_00713824 = 0xFFFFFFFFu;
    data_00713828 = 0x00000000u;
    data_0071382C = 0x00000000u;
    func_005902C0();
}
