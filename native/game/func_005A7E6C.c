/* USA 005A7E6C (EU 005A7E44): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712528;
extern uint32_t data_0071252C;
extern uint32_t data_00712530;
extern uint32_t data_00712534;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005A7E6C(void) {
    data_00712528 = 0xFFFFFFFFu;
    data_0071252C = 0xFFFFFFFFu;
    data_00712530 = 0x00000000u;
    data_00712534 = 0x00000000u;
}
