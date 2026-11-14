/* USA 0025B874 <- EU 0025B874 (outside the function table): Obj6D68BC::~Obj6D68BC() -> this
 * (69 caller files: an IDisposer-derived member with a registration handle at +0x10)
 *   this[0] = data_006D68BC; if (this[0x10]) { 001DFECC(this[0x10], this) (unregister);
 *   this[0x10] = this[0x14] = 0; }  return 004A1520(this) (sead::IDisposer dtor, tail call)
 * Note: the function table has bogus entries 0025B88C / 0025B894 inside this body.
 *
 * Ghidra vs ARM: correct but typed void (the tail call's r0 = this is the dtor result; callers'
 * prototype is int). Verified EU 0025B874-0025B8AC. Confidence: high (flow), low (name). */
#include "hot.h"

extern char data_006D68BC[];

int func_001DFECC(int owner, int obj);
void *func_004A1520(void *self);

int func_0025B874(uint32_t self_w)
{
    char *self = P(self_w);
    W(self, 0) = DATA_W(data_006D68BC);
    if (W(self, 0x10) != 0) {
        func_001DFECC((int)W(self, 0x10), (int)gp_u32(self));
        W(self, 0x10) = 0;
        W(self, 0x14) = 0;
    }
    return (int)gp_u32(func_004A1520(self));
}
