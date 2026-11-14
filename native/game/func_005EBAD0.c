/* USA 005EBAD0 (EU 005EBAA8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007152B0;
extern uint32_t data_007152B4;
extern uint32_t data_007152B8;
extern uint32_t data_007152BC;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005EBAD0(void) {
    data_007152B0 = 0xFFFFFFFFu;
    data_007152B4 = 0xFFFFFFFFu;
    data_007152B8 = 0x00000000u;
    data_007152BC = 0x00000000u;
}
