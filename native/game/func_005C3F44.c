/* USA 005C3F44 (EU 005C3F1C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BA30;
extern uint32_t data_0070BA34;
extern uint32_t data_0070BA38;
extern uint32_t data_0070BA3C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005C3F44(void) {
    data_0070BA30 = 0xFFFFFFFFu;
    data_0070BA34 = 0xFFFFFFFFu;
    data_0070BA38 = 0x00000000u;
    data_0070BA3C = 0x00000000u;
}
