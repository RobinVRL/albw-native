/* USA 005EB534 (EU 005EB50C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007161C8;
extern uint32_t data_007161CC;
extern uint32_t data_007161D0;
extern uint32_t data_007161D4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005EB534(void) {
    data_007161C8 = 0xFFFFFFFFu;
    data_007161CC = 0xFFFFFFFFu;
    data_007161D0 = 0x00000000u;
    data_007161D4 = 0x00000000u;
}
