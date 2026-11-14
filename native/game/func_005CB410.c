/* USA 005CB410 (EU 005CB3E8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 5 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714918;
extern uint32_t data_0071491C;
extern uint32_t data_00714920;
extern uint32_t data_00714924;
extern uint32_t data_0079CC50;
extern uint32_t data_0079CC68;
void func_00100118(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0010DEB0(uintptr_t);
void func_003E4484(void);
void func_005902C0(uintptr_t);


void func_005CB410(void) {
    data_00714918 = 0xFFFFFFFFu;
    data_0071491C = 0xFFFFFFFFu;
    data_00714920 = 0x00000000u;
    data_00714924 = 0x00000000u;
    func_00100118((uintptr_t)&data_0079CC50, (uintptr_t)&func_003E4484, 0x0000000Cu, 0x00000002u);
    data_0079CC68 = 0x00000000u;
    func_0010DEB0((uintptr_t)&data_0079CC68);
    func_005902C0((uintptr_t)&data_0079CC68);
}
