/* USA 005F6934 (EU 005F690C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714F70;
extern uint32_t data_00714F74;
extern uint32_t data_00714F78;
extern uint32_t data_00714F7C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005F6934(void) {
    data_00714F70 = 0xFFFFFFFFu;
    data_00714F74 = 0xFFFFFFFFu;
    data_00714F78 = 0x00000000u;
    data_00714F7C = 0x00000000u;
}
