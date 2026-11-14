/* USA 0059A3E8 (EU 0059A3C0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714A00;
extern uint32_t data_00714A04;
extern uint32_t data_00714A08;
extern uint32_t data_00714A0C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_0059A3E8(void) {
    data_00714A00 = 0xFFFFFFFFu;
    data_00714A04 = 0xFFFFFFFFu;
    data_00714A08 = 0x00000000u;
    data_00714A0C = 0x00000000u;
}
