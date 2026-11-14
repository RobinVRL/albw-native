/* USA 005CB614 (EU 005CB5EC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007159C8;
extern uint32_t data_007159CC;
extern uint32_t data_007159D0;
extern uint32_t data_007159D4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005CB614(void) {
    data_007159C8 = 0xFFFFFFFFu;
    data_007159CC = 0xFFFFFFFFu;
    data_007159D0 = 0x00000000u;
    data_007159D4 = 0x00000000u;
}
