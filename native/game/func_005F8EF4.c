/* USA 005F8EF4 (EU 005F8ECC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 2 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714C64;
extern uint32_t data_00714C68;
extern uint32_t data_00714C98;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005F8EF4(void) {
    data_00714C64 = (uint32_t)(uintptr_t)&data_00714C98;
    data_00714C68 = (uint32_t)(uintptr_t)&data_00714C98;
}
