/* USA 005ED528 (EU 005ED500): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713FB8;
extern uint32_t data_00713FBC;
extern uint32_t data_00713FC0;
extern uint32_t data_00713FC4;
extern uint32_t data_00713FC8;
void func_005902C0(void);

static const char *const names_00713FC8[2] = {
    "Cm_SelectFrame",
    "W_SelectCursor_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005ED528(void) {
    fill_names((sead_SafeString *)&data_00713FC8, names_00713FC8, 2);
    data_00713FB8 = 0xFFFFFFFFu;
    data_00713FBC = 0xFFFFFFFFu;
    data_00713FC0 = 0x00000000u;
    data_00713FC4 = 0x00000000u;
    func_005902C0();
}
