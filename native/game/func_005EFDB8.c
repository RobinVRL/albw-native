/* USA 005EFDB8 (EU 005EFD90): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714D20;
extern uint32_t data_00714D24;
extern uint32_t data_00714D28;
extern uint32_t data_00714D2C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005EFDB8(void) {
    data_00714D20 = 0xFFFFFFFFu;
    data_00714D24 = 0xFFFFFFFFu;
    data_00714D28 = 0x00000000u;
    data_00714D2C = 0x00000000u;
}
