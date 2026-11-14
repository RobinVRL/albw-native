/* USA 005902C0 <- EU 00590298: an empty member function (`bx lr`): returns r0 = this
 * (185 caller files: trivial destructor / no-op virtual used by many classes).
 * Matched source rejected by the matched-ABI check -> Ghidra C (which is right).
 * Confidence: high. */
#include "hot.h"

int func_005902C0(uint32_t self_w)
{
    return (int)self_w;
}
