/* USA 005A7EC4 (EU 005A7E9C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712F78;
extern uint32_t data_00712F7C;
extern uint32_t data_00712F80;
extern uint32_t data_00712F84;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005A7EC4(void) {
    data_00712F78 = 0xFFFFFFFFu;
    data_00712F7C = 0xFFFFFFFFu;
    data_00712F80 = 0x00000000u;
    data_00712F84 = 0x00000000u;
}
