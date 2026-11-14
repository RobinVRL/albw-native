/* USA 0054DDF4 <- EU 0054DDCC: Actor::getAttachSlot(u32 i) -> Slot*   (74 caller files)
 * Falls through into 0054DE00 (EU 0054DDD8): r0 = self[0x2D0] + 0x18, then
 *   i < 4 ? r0 + i * 0x38 + 0xD0 : 0
 * Matched source rejected by the matched-ABI check -> Ghidra C (correct, the fall-through was
 * merged). Confidence: high (flow), low (name). */
#include "hot.h"

int func_0054DDF4(uint32_t self_w, uint32_t i)
{
    uint32_t b = W(P(self_w), 0x2D0) + 0x18;
    return i < 4 ? (int)(b + i * 0x38 + 0xD0) : 0;
}
