/* USA 00521078 <- EU 00521038 (outside the function table): Actor::hasGroundFlags() -> bool
 * (63 caller files)  `mov r0, r0` then falls into EU 0052103C: (self[0x39C] & 7) != 0
 * Ghidra C correct. Confidence: high (flow), low (name). */
#include "hot.h"

int func_00521078(uint32_t self_w)
{
    return (W(P(self_w), 0x39C) & 7) != 0;
}
