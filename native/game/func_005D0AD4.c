/* USA 005D0AD4 (EU 005D0AAC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007145C0;
extern uint32_t data_007145C4;
extern uint32_t data_007145C8;
extern uint32_t data_007145CC;
extern uint32_t data_0079C9A4;
void func_005902C0(uintptr_t);

static const char *const names_0079C9A4[4] = {
    "InOut",
    "InOut",
    "On",
    "Decide",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005D0AD4(void) {
    fill_names((sead_SafeString *)&data_0079C9A4, names_0079C9A4, 4);
    data_007145C0 = 0xFFFFFFFFu;
    data_007145C4 = 0xFFFFFFFFu;
    data_007145C8 = 0x00000000u;
    data_007145CC = 0x00000000u;
    func_005902C0(0x00000000u);
}
