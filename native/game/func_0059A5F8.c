/* USA 0059A5F8 (EU 0059A5D0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (10 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A508;
extern uint32_t data_0070A50C;
extern uint32_t data_0070A510;
extern uint32_t data_0070A514;
extern uint32_t data_00735DE4;
void func_005902C0(void);

static const char *const names_00735DE4[10] = {
    "Option_0",
    "Option_1",
    "Option_2",
    "Option_3",
    "Option_4",
    "Option_5",
    "Option_6",
    "Option_7",
    "Option_8",
    "Option_9",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_0059A5F8(void) {
    fill_names((sead_SafeString *)&data_00735DE4, names_00735DE4, 10);
    data_0070A508 = 0xFFFFFFFFu;
    data_0070A50C = 0xFFFFFFFFu;
    data_0070A510 = 0x00000000u;
    data_0070A514 = 0x00000000u;
    func_005902C0();
}
