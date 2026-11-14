/* USA 005B90D8 (EU 005B90B0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (12 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714520;
extern uint32_t data_00714524;
extern uint32_t data_00714528;
extern uint32_t data_0071452C;
extern uint32_t data_0079C8DC;
void func_005902C0(void);

static const char *const names_0079C8DC[12] = {
    "Life0-1",
    "Life1-0",
    "Life1-2",
    "Life2-1",
    "Life2-3",
    "Life3-2",
    "Life3-4",
    "Life4-3",
    "In",
    "SetInactive",
    "SetActive",
    "WaitActive",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B90D8(void) {
    fill_names((sead_SafeString *)&data_0079C8DC, names_0079C8DC, 12);
    data_00714520 = 0xFFFFFFFFu;
    data_00714524 = 0xFFFFFFFFu;
    data_00714528 = 0x00000000u;
    data_0071452C = 0x00000000u;
    func_005902C0();
}
