/* USA 004A9120 <- EU 004A90F8: ColMgr::unregister(?, Collider *c)   (50 caller files)
 *   if ((o = c[0x5C])) { c[0x5C] = 0; ListNode::erase_(c + 0x50); --o[8]; }   (cell list)
 *   if ((o = c[0x4C])) { c[0x4C] = 0; ListNode::erase_(c + 0x40); --o[8]; }   (manager list)
 * Return: r0 as on ARM (c + 0x40, or o[8] - 1 after the second unlink); unused.
 * Ghidra vs ARM: correct (in_s0 threaded through the erase calls only). Confidence: high. */
#include "hot.h"

void func_0010F1F8(void *node);   /* native/core */

int func_004A9120(uint32_t mgr, uint32_t c_w)
{
    char *c = P(c_w);
    uint32_t o = W(c, 0x5C);
    if (o != 0) {
        W(c, 0x5C) = 0;
        func_0010F1F8(c + 0x50);
        W(P(o), 8) = W(P(o), 8) - 1;
    }
    o = W(c, 0x4C);
    if (o == 0)
        return (int)(c_w + 0x40);
    W(c, 0x4C) = 0;
    func_0010F1F8(c + 0x40);
    uint32_t n = W(P(o), 8) - 1;
    W(P(o), 8) = n;
    return (int)n;
}
