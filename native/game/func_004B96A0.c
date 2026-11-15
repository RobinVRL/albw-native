/* USA 004B96A0 (EU 004B9678): remove a node from an intrusive list and re-sort the list.
 *   if (node->m1c != 0 || node->m18 != 0) {
 *       ListNode::erase_(node + this->m64);          (0010F1F8)
 *       this->m60 -= 1;
 *       sort(this + 0x58, this->m64, 002C0028);      (0049F434, tail call)
 *   }
 * The matched source passed the comparator as the integer 0x2c0028: armcc's literal-pool word
 * (EU 004B96C4 = 002C0004, i.e. USA 002C0028) printed as a number, so the sort called address
 * 0x002C0028 (boot stop 108). The function pointer here is the real one; the neighbour 004B96F0
 * already passes func_002C0028. Rewritten from the EU disassembly (EU 004B9678..004B96C0).
 * Confidence: high. */
#include <stdint.h>

#define W(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))

extern void func_0010F1F8(void *node);
extern void func_0049F434(void *list, int32_t offset, void *cmp_fn);
extern void func_002C0028(void);

void func_004B96A0(void *self, void *node)
{
    if (W(node, 0x1c) == 0 && W(node, 0x18) == 0)
        return;
    func_0010F1F8((uint8_t *)node + W(self, 0x64));
    W(self, 0x60) -= 1;
    func_0049F434((uint8_t *)self + 0x58, (int32_t)W(self, 0x64), (void *)func_002C0028);
}
