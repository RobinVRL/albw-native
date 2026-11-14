/* USA 005E38C8 (EU 005E38A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712EF8;
extern uint32_t data_00712EFC;
extern uint32_t data_00712F00;
extern uint32_t data_00712F04;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005E38C8(void) {
    data_00712EF8 = 0xFFFFFFFFu;
    data_00712EFC = 0xFFFFFFFFu;
    data_00712F00 = 0x00000000u;
    data_00712F04 = 0x00000000u;
}
