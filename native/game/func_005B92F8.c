/* USA 005B92F8 (EU 005B92D0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714978;
extern uint32_t data_0071497C;
extern uint32_t data_00714980;
extern uint32_t data_00714984;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005B92F8(void) {
    data_00714978 = 0x43323000u;
    data_0071497C = 0xFFFFFD21u;
    data_00714980 = 0x07898BFFu;
    data_00714984 = 0x00000574u;
}
