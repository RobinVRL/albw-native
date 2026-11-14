/* USA 005C25D0 (EU 005C25A8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714E60;
extern uint32_t data_00714E64;
extern uint32_t data_00714E68;
extern uint32_t data_00714E6C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005C25D0(void) {
    data_00714E60 = 0xFFFFFFFFu;
    data_00714E64 = 0xFFFFFFFFu;
    data_00714E68 = 0x00000000u;
    data_00714E6C = 0x00000000u;
}
