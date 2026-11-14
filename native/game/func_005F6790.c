/* USA 005F6790 (EU 005F6768): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (5 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713E48;
extern uint32_t data_00713E4C;
extern uint32_t data_00713E50;
extern uint32_t data_00713E54;
extern uint32_t data_00713E58;
extern uint32_t data_0079C6FC;
void func_005902C0(void);

static const char *const names_00713E58[1] = {
    "Ed_PlayRecordT",
};
static const char *const names_0079C6FC[4] = {
    "InNormal",
    "OutNormal",
    "InHard",
    "OutHard",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F6790(void) {
    fill_names((sead_SafeString *)&data_00713E58, names_00713E58, 1);
    fill_names((sead_SafeString *)&data_0079C6FC, names_0079C6FC, 4);
    data_00713E48 = 0xFFFFFFFFu;
    data_00713E4C = 0xFFFFFFFFu;
    data_00713E50 = 0x00000000u;
    data_00713E54 = 0x00000000u;
    func_005902C0();
}
