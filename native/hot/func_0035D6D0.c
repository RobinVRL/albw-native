/* USA 0035D6D0 <- EU 0035D6AC: Obj6E3FAC::~Obj6E3FAC() -> this   (80 caller files)
 *   this[0] = data_006E3FAC; if (this[0x14]) 0030DAA0(this[0x14], this) (unregister); return this
 * Matched source rejected by the matched-ABI check -> Ghidra C (correct). Verified EU
 * 0035D6AC-0035D6D0. Confidence: high (flow), low (name). */
#include "hot.h"

extern char data_006E3FAC[];

int func_0030DAA0(int owner, int obj);

int func_0035D6D0(uint32_t self_w)
{
    char *self = P(self_w);
    W(self, 0) = DATA_W(data_006E3FAC);
    if (W(self, 0x14) != 0)
        func_0030DAA0((int)W(self, 0x14), (int)self_w);
    return (int)self_w;
}
