/* USA 005A399C (EU 005A3974): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715970;
extern uint32_t data_00715974;
extern uint32_t data_00715978;
extern uint32_t data_0071597C;


void func_005A399C(void) {
    data_00715970 = 0xFFFFFFFFu;
    data_00715974 = 0xFFFFFFFFu;
    data_00715978 = 0x00000000u;
    data_0071597C = 0x00000000u;
}
