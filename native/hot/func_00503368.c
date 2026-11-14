/* USA 00503368 <- EU 00503340: Obj6EE3BC::~Obj6EE3BC() -> this   (80 caller files: the
 * inlined base-class destructor chain of an actor family)
 *   this[0] = data_006EE3BC; r = 0030E0F0(this + 0x184) (member dtor, returns its this);
 *   return 002312F4(r - 0x184)   (base dtor, tail call)
 *
 * Ghidra vs ARM: correct (EU 00503340-00503358). Confidence: high (flow), low (name). */
#include "hot.h"

extern char data_006EE3BC[];

int *func_0030E0F0(int *self);
int *func_002312F4(int *self);

int func_00503368(uint32_t self_w)
{
    char *self = P(self_w);
    W(self, 0) = DATA_W(data_006EE3BC);
    char *r = (char *)func_0030E0F0((int *)(self + 0x184));
    return (int)gp_u32(func_002312F4((int *)(r - 0x184)));
}
