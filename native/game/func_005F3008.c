/* USA 005F3008 (EU 005F2FE0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714E48;
extern uint32_t data_00714E4C;
extern uint32_t data_00714E50;
extern uint32_t data_00714E54;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005F3008(void) {
    data_00714E48 = 0xFFFFFFFFu;
    data_00714E4C = 0xFFFFFFFFu;
    data_00714E50 = 0x00000000u;
    data_00714E54 = 0x00000000u;
}
