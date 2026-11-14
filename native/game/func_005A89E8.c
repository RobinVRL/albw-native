/* USA 005A89E8 (EU 005A89C0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007153A0;
extern uint32_t data_007153A4;
extern uint32_t data_007153A8;
extern uint32_t data_007153AC;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005A89E8(void) {
    data_007153A0 = 0xFFFFFFFFu;
    data_007153A4 = 0xFFFFFFFFu;
    data_007153A8 = 0x00000000u;
    data_007153AC = 0x00000000u;
}
