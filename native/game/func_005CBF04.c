/* USA 005CBF04 (EU 005CBEDC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709E30;
extern uint32_t data_00709E34;
extern uint32_t data_00709E38;
extern uint32_t data_00709E3C;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CBF04(void) {
    data_00709E30 = 0xFFFFFFFFu;
    data_00709E34 = 0xFFFFFFFFu;
    data_00709E38 = 0x00000000u;
    data_00709E3C = 0x00000000u;
}
