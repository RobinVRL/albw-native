/* USA 005F2F70 (EU 005F2F48): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00725898;
extern uint32_t data_0072589C;
extern uint32_t data_007258A0;
extern uint32_t data_007258A4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005F2F70(void) {
    data_00725898 = 0xFFFFFFFFu;
    data_0072589C = 0xFFFFFFFFu;
    data_007258A0 = 0x00000000u;
    data_007258A4 = 0x00000000u;
}
