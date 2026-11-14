/* USA 0059FAE8 (EU 0059FAC0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A200;
extern uint32_t data_0070A204;
extern uint32_t data_0070A208;
extern uint32_t data_0070A20C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_0059FAE8(void) {
    data_0070A200 = 0xFFFFFFFFu;
    data_0070A204 = 0xFFFFFFFFu;
    data_0070A208 = 0x00000000u;
    data_0070A20C = 0x00000000u;
}
