/* USA 005F7A58 (EU 005F7A30): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713CE8;
extern uint32_t data_00713CEC;
extern uint32_t data_00713CF0;
extern uint32_t data_00713CF4;
extern uint32_t data_00713CF8;
extern uint32_t data_00713D00;
void func_005902C0(uintptr_t);

static const char *const names_00713CF8[2] = {
    "Mn_KeyBoardGuideT",
    "T_Message_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F7A58(void) {
    fill_names((sead_SafeString *)&data_00713CF8, names_00713CF8, 2);
    data_00713CE8 = 0xFFFFFFFFu;
    data_00713CEC = 0xFFFFFFFFu;
    data_00713CF0 = 0x00000000u;
    data_00713CF4 = 0x00000000u;
    func_005902C0((uintptr_t)&data_00713D00);
}
