/* USA 005F7B24 (EU 005F7AFC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007162C8;
extern uint32_t data_007162CC;
extern uint32_t data_007162D0;
extern uint32_t data_007162D4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005F7B24(void) {
    data_007162C8 = 0xFFFFFFFFu;
    data_007162CC = 0xFFFFFFFFu;
    data_007162D0 = 0x00000000u;
    data_007162D4 = 0x00000000u;
}
