/* USA 005EC89C (EU 005EC874): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007124E0;
extern uint32_t data_007124E4;
extern uint32_t data_007124E8;
extern uint32_t data_007124EC;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005EC89C(void) {
    data_007124E0 = 0xFFFFFFFFu;
    data_007124E4 = 0xFFFFFFFFu;
    data_007124E8 = 0x00000000u;
    data_007124EC = 0x00000000u;
}
