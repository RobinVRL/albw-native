/* USA 005E08CC (EU 005E08A4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B6A8;
extern uint32_t data_0070B6AC;
extern uint32_t data_0070B6B0;
extern uint32_t data_0070B6B4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005E08CC(void) {
    data_0070B6A8 = 0xFFFFFFFFu;
    data_0070B6AC = 0xFFFFFFFFu;
    data_0070B6B0 = 0x00000000u;
    data_0070B6B4 = 0x00000000u;
}
