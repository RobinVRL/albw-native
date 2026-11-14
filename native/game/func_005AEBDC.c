/* USA 005AEBDC (EU 005AEBB4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 12 other stores, 5 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_006F75FC;
extern uint32_t data_00715218;
extern uint32_t data_0071521C;
extern uint32_t data_00715220;
extern uint32_t data_00715224;
extern uint32_t data_00715228;
extern uint32_t data_0071522C;
extern uint32_t data_0079E03C;
extern uint32_t data_0079E048;
extern uint32_t data_0079E04C;
extern uint32_t data_0079E050;
extern uint32_t data_0079E054;
extern uint32_t data_0079E064;
extern uint32_t data_0079E080;
extern uint32_t data_0079E084;
extern uint32_t data_0079E088;
extern uint32_t data_0079E08C;
uintptr_t func_0010B830(uintptr_t);
void func_0010B3EC(uintptr_t, uintptr_t, uintptr_t);
void func_0049BA90(uintptr_t);
void func_005902C0(uintptr_t);


void func_005AEBDC(void) {
    data_00715218 = (uintptr_t)&data_006F75FC;
    data_0071521C = 0x00000000u;
    data_00715220 = 0xFFFFFFFFu;
    data_00715224 = 0xFFFFFFFFu;
    data_00715228 = 0x00000000u;
    data_0071522C = 0x00000000u;
    func_0049BA90((uintptr_t)&data_0079E03C);
    data_0079E048 = 0x00000000u;
    data_0079E04C = 0x00000000u;
    data_0079E050 = 0x00000000u;
    func_0010B3EC((uintptr_t)&data_0079E048, 0x00000004u, (uintptr_t)&data_0079E054);
    data_0079E080 = 0x00000000u;
    data_0079E084 = 0x00000000u;
    data_0079E088 = 0x00000000u;
    func_0010B3EC((uintptr_t)&data_0079E080, 0x00000004u, (uintptr_t)&data_0079E08C);
    uintptr_t ret3 = func_0010B830((uintptr_t)&data_0079E064);
    func_005902C0(ret3);
}
