/* USA 005CE944 (EU 005CE91C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 5 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D820;
extern uint32_t data_0070D828;
extern uint32_t data_0070D82C;
extern uint32_t data_0070D830;
extern uint32_t data_0070D834;
extern uint32_t data_00725970;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005CE944(void) {
    data_0070D820 = (uint32_t)(uintptr_t)&data_00725970;
    data_0070D828 = 0xFFFFFFFFu;
    data_0070D82C = 0xFFFFFFFFu;
    data_0070D830 = 0x00000000u;
    data_0070D834 = 0x00000000u;
}
