/* USA 005D0F74 (EU 005D0F4C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00706D00;
extern uint32_t data_00706D04;
extern uint32_t data_00706D08;
extern uint32_t data_00706D0C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005D0F74(void) {
    data_00706D00 = 0xFFFFFFFFu;
    data_00706D04 = 0xFFFFFFFFu;
    data_00706D08 = 0x00000000u;
    data_00706D0C = 0x00000000u;
}
