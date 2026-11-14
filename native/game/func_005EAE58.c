/* USA 005EAE58 (EU 005EAE30): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713D40;
extern uint32_t data_00713D44;
extern uint32_t data_00713D48;
extern uint32_t data_00713D4C;
extern uint32_t data_00713D50;
void func_005902C0(void);

static const char *const names_00713D50[1] = {
    "Cm_LoadIconT",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EAE58(void) {
    fill_names((sead_SafeString *)&data_00713D50, names_00713D50, 1);
    data_00713D40 = 0xFFFFFFFFu;
    data_00713D44 = 0xFFFFFFFFu;
    data_00713D48 = 0x00000000u;
    data_00713D4C = 0x00000000u;
    func_005902C0();
}
