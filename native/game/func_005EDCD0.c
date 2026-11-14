/* USA 005EDCD0 (EU 005EDCA8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714D98;
extern uint32_t data_00714D9C;
extern uint32_t data_00714DA0;
extern uint32_t data_00714DA4;
extern uint32_t data_00714DA8;
void func_005902C0(void);

static const char *const names_00714DA8[1] = {
    "AudioPlayer",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EDCD0(void) {
    fill_names((sead_SafeString *)&data_00714DA8, names_00714DA8, 1);
    data_00714D98 = 0xFFFFFFFFu;
    data_00714D9C = 0xFFFFFFFFu;
    data_00714DA0 = 0x00000000u;
    data_00714DA4 = 0x00000000u;
    func_005902C0();
}
