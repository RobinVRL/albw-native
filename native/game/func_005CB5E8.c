/* USA 005CB5E8 (EU 005CB5C0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714AC8;
extern uint32_t data_00714ACC;
extern uint32_t data_00714AD0;
extern uint32_t data_00714AD4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005CB5E8(void) {
    data_00714AC8 = 0xFFFFFFFFu;
    data_00714ACC = 0xFFFFFFFFu;
    data_00714AD0 = 0x00000000u;
    data_00714AD4 = 0x00000000u;
}
