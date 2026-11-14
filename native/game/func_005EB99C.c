/* USA 005EB99C (EU 005EB974): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714FE8;
extern uint32_t data_00714FEC;
extern uint32_t data_00714FF0;
extern uint32_t data_00714FF4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005EB99C(void) {
    data_00714FE8 = 0xFFFFFFFFu;
    data_00714FEC = 0xFFFFFFFFu;
    data_00714FF0 = 0x00000000u;
    data_00714FF4 = 0x00000000u;
}
