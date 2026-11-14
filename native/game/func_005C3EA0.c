/* USA 005C3EA0 (EU 005C3E78): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 6 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B880;
extern uint32_t data_0070B884;
extern uint32_t data_0070B888;
extern uint32_t data_0070B88C;
extern uint32_t data_0070B890;
extern uint32_t data_0070B894;
extern uint32_t data_00714C90;
extern uint32_t data_00714C9C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C3EA0(void) {
    data_0070B880 = (uint32_t)(uintptr_t)&data_00714C9C;
    data_0070B884 = (uint32_t)(uintptr_t)&data_00714C90;
    data_0070B888 = 0xFFFFFFFFu;
    data_0070B88C = 0xFFFFFFFFu;
    data_0070B890 = 0x00000000u;
    data_0070B894 = 0x00000000u;
}
