/* USA 005C28D4 (EU 005C28AC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00706CF0;
extern uint32_t data_00706CF4;
extern uint32_t data_00706CF8;
extern uint32_t data_00706CFC;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005C28D4(void) {
    data_00706CF0 = 0xFFFFFFFFu;
    data_00706CF4 = 0xFFFFFFFFu;
    data_00706CF8 = 0x00000000u;
    data_00706CFC = 0x00000000u;
}
