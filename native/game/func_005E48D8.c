/* USA 005E48D8 (EU 005E48B0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00725700;
extern uint32_t data_00725704;
extern uint32_t data_00725708;
extern uint32_t data_0072570C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005E48D8(void) {
    data_00725700 = 0xFFFFFFFFu;
    data_00725704 = 0xFFFFFFFFu;
    data_00725708 = 0x00000000u;
    data_0072570C = 0x00000000u;
}
