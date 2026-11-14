/* USA 005E43E0 (EU 005E43B8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713D28;
extern uint32_t data_00713D2C;
extern uint32_t data_00713D30;
extern uint32_t data_00713D34;
extern uint32_t data_00713D38;
void func_005902C0(uintptr_t);

static const char *const names_00713D38[1] = {
    "Gm_MaskKinstaBtn",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E43E0(void) {
    fill_names((sead_SafeString *)&data_00713D38, names_00713D38, 1);
    data_00713D28 = 0xFFFFFFFFu;
    data_00713D2C = 0xFFFFFFFFu;
    data_00713D30 = 0x00000000u;
    data_00713D34 = 0x00000000u;
    func_005902C0((uintptr_t)&data_00713D38);
}
