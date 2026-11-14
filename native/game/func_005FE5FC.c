/* USA 005FE5FC (EU 005FE5D4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714FB0;
extern uint32_t data_00714FB4;
extern uint32_t data_00714FB8;
extern uint32_t data_00714FBC;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005FE5FC(void) {
    data_00714FB0 = 0xFFFFFFFFu;
    data_00714FB4 = 0xFFFFFFFFu;
    data_00714FB8 = 0x00000000u;
    data_00714FBC = 0x00000000u;
}
