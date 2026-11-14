/* USA 005EDEF0 (EU 005EDEC8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714CD8;
extern uint32_t data_00714CDC;
extern uint32_t data_00714CE0;
extern uint32_t data_00714CE4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005EDEF0(void) {
    data_00714CD8 = 0xFFFFFFFFu;
    data_00714CDC = 0xFFFFFFFFu;
    data_00714CE0 = 0x00000000u;
    data_00714CE4 = 0x00000000u;
}
