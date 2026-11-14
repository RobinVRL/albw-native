/* USA 005F3164 (EU 005F313C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007086F8;
extern uint32_t data_007086FC;
extern uint32_t data_00708700;
extern uint32_t data_00708704;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005F3164(void) {
    data_007086F8 = 0xFFFFFFFFu;
    data_007086FC = 0xFFFFFFFFu;
    data_00708700 = 0x00000000u;
    data_00708704 = 0x00000000u;
}
