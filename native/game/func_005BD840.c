/* USA 005BD840 (EU 005BD818): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B868;
extern uint32_t data_0070B86C;
extern uint32_t data_0070B870;
extern uint32_t data_0070B874;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005BD840(void) {
    data_0070B868 = 0xFFFFFFFFu;
    data_0070B86C = 0xFFFFFFFFu;
    data_0070B870 = 0x00000000u;
    data_0070B874 = 0x00000000u;
}
