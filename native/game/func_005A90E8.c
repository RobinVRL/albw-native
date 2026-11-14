/* USA 005A90E8 (EU 005A90C0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 9 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_006F5C84;
extern uint32_t data_00706E48;
extern uint32_t data_00706E4C;
extern uint32_t data_00706E50;
extern uint32_t data_00706E54;
extern uint32_t data_00727A1C;
extern uint32_t data_00727A20;
extern uint32_t data_00727A24;
extern uint32_t data_00727A28;
extern uint32_t data_00727C27;
void func_005902C0(uintptr_t);


void func_005A90E8(void) {
    data_00706E48 = 0xFFFFFFFFu;
    data_00706E4C = 0xFFFFFFFFu;
    data_00706E50 = 0x00000000u;
    data_00706E54 = 0x00000000u;
    data_00727A1C = (uintptr_t)&data_006F5C84;
    data_00727A20 = (uintptr_t)&data_00727A28;
    data_00727A24 = 0x00000200u;
    *(uint8_t *)&data_00727A28 = 0x0u;
    *(uint8_t *)&data_00727C27 = 0x0u;
    func_005902C0((uintptr_t)&data_00727A1C);
}
