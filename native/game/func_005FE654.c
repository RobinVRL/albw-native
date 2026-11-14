/* USA 005FE654 (EU 005FE62C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007125C8;
extern uint32_t data_007125CC;
extern uint32_t data_007125D0;
extern uint32_t data_007125D4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005FE654(void) {
    data_007125C8 = 0xFFFFFFFFu;
    data_007125CC = 0xFFFFFFFFu;
    data_007125D0 = 0x00000000u;
    data_007125D4 = 0x00000000u;
}
