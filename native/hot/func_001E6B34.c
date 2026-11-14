/* USA 001E6B34 <- EU 001E6B34: Actor::isKindOf-style RTTI check (56 caller files):
 * returns 1 when `type` is the address of one of four static class-type records, each
 * lazily initialised behind a function-local static guard (00100174 = __cxa_guard_acquire):
 *   guard 007260E4 -> 007260E8 = data_006F6314;  guard 00726A60 -> 00726A64 = data_006F5D5C;
 *   guard 00725B44 -> 00725B48 = data_006F64F4;  guard 007278D8 -> 007278DC = data_006F5D08;
 * each record is initialised just before its comparison (as on ARM). The `mov r0, r0` after
 * each init sits where __cxa_guard_release would be (no call in the binary).
 * Ghidra vs ARM: correct (EU 001E6B34-001E6C54). Confidence: high (flow), medium (name). */
#include "hot.h"

extern char data_007260E4[], data_007260E8[], data_006F6314[], data_00726A60[], data_00726A64[],
    data_006F5D5C[], data_00725B44[], data_00725B48[], data_006F64F4[], data_007278D8[],
    data_007278DC[], data_006F5D08[];

int func_00100174(uint32_t *g);

static int is(char *guard, char *rec, char *val, uint32_t type)
{
    if (!(W(guard, 0) & 1) && func_00100174((uint32_t *)guard) != 0)
        W(rec, 0) = DATA_W(val);
    return DATA_W(rec) == type;
}

int func_001E6B34(uint32_t type)
{
    if (is(data_007260E4, data_007260E8, data_006F6314, type)) return 1;
    if (is(data_00726A60, data_00726A64, data_006F5D5C, type)) return 1;
    if (is(data_00725B44, data_00725B48, data_006F64F4, type)) return 1;
    if (is(data_007278D8, data_007278DC, data_006F5D08, type)) return 1;
    return 0;
}
