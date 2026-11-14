/* USA 005841A8 <- EU 00584180: Game::findNext(u32 kind, Actor **it) -> Actor*
 * (symbol_aliases: _ZN4Game8findNextEiPP5Actor; 136 caller files)
 *   key = {data_006E5CD0, kind} (8-byte filter object on the stack);
 *   return 0052FCA4(self + 0x3DBBC (ActorMgr), &key, it)
 * Matched source rejected by the matched-ABI check -> Ghidra C (correct). Verified EU
 * 00584180-005841A8. Confidence: high. */
#include "hot.h"

extern char data_006E5CD0[];

int func_0052FCA4(int mgr, uint32_t *key, int *it);

int func_005841A8(uint32_t self_w, uint32_t kind, uint32_t it_w)
{
    uint32_t key[2] = { DATA_W(data_006E5CD0), kind };
    return func_0052FCA4((int)(self_w + 0x3DBBC), key, (int *)P(it_w));
}
