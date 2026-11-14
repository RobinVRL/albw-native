/* USA 005EACEC (EU 005EACC4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 1 sead::SafeString name tables (2 names) and 5 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007135B0;
extern uint32_t data_007135B4;
extern uint32_t data_007135B8;
extern uint32_t data_007135BC;
extern uint32_t data_007135C0;
extern uint32_t data_007135C8;
void func_00100000(void);
void func_005902C0(uint32_t, uint32_t, uint32_t);  /* tail call */
void func_00688D9C(void);

static const char *const names_007135C0[2] = {
    "Gm_WarpBalloon",
    "T_DungeonName_00",
};

static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005EACEC(void) {
    fill_names((SafeString *)&data_007135C0, names_007135C0, 2);
    data_007135B0 = 0xFFFFFFFFu;
    data_007135B4 = 0xFFFFFFFFu;
    data_007135B8 = 0x00000000u;
    data_007135BC = 0x00000000u;
    func_005902C0((uint32_t)(uintptr_t)&data_007135C8, (uint32_t)(uintptr_t)&func_00688D9C, (uint32_t)(uintptr_t)&func_00100000);
}
