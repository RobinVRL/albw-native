/* USA 003248BC (EU 00324898), verified instruction by instruction:
 *   bool f(Obj *p, const Input *q):  if (p->flags (+8) & (1 << (q->kind (+0x20, u16) & 31))) return 0;
 *                                    p->second (+4) = q->+0x1C; p->first (+0) = q->+0x28; return 1;
 * Replaces the matched source build/decomp/src/work8/permuter_match/003248BC.cpp, whose
 * permuter-generated body reads uninitialised dummies (perm_t60 / perm_t83): clang compiled it to
 * no instructions at all, so every call ran on into the next function (FUN_002906b8, "take fire
 * damage") with a wrong object - the shield (R) crashed (BOOT_LOG 144). */
#include <stdint.h>

int func_003248BC(uint32_t *p, const uint8_t *q)
{
    uint32_t kind = *(const uint16_t *)(q + 0x20) & 31;
    if (p[2] & (1u << kind))
        return 0;
    p[1] = *(const uint32_t *)(q + 0x1C);
    p[0] = *(const uint32_t *)(q + 0x28);
    return 1;
}
