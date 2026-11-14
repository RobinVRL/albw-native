/* USA 005EB854 (EU 005EB82C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714DF8;
extern uint32_t data_00714DFC;
extern uint32_t data_00714E00;
extern uint32_t data_00714E04;
extern uint32_t data_00714E08;
void func_005902C0(uintptr_t);

static const char *const names_00714E08[1] = {
    "AudioFxObject",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EB854(void) {
    fill_names((sead_SafeString *)&data_00714E08, names_00714E08, 1);
    data_00714DF8 = 0xFFFFFFFFu;
    data_00714DFC = 0xFFFFFFFFu;
    data_00714E00 = 0x00000000u;
    data_00714E04 = 0x00000000u;
    func_005902C0((uintptr_t)&data_00714E08);
}
