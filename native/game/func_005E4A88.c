/* USA 005E4A88 (EU 005E4A60): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 8 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F54EC;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714F28;
extern uint32_t data_00714F2C;
extern uint32_t data_00714F30;
extern uint32_t data_00714F34;
extern uint32_t data_0079DB90;
extern uint32_t data_0079DB94;
extern uint32_t data_0079DB98;
extern uint32_t data_0079DB9C;
void func_005902C0(uintptr_t);


void func_005E4A88(void) {
    data_00714F28 = 0xFFFFFFFFu;
    data_00714F2C = 0xFFFFFFFFu;
    data_00714F30 = 0x00000000u;
    data_00714F34 = 0x00000000u;
    data_0079DB90 = (uintptr_t)&data_006F54EC;
    data_0079DB94 = (uintptr_t)&data_0079DB94;
    data_0079DB98 = (uintptr_t)&data_0079DB94;
    data_0079DB9C = 0x00000000u;
    func_005902C0((uintptr_t)&data_0079DB90);
}
