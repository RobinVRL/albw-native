/* USA 0019A848 <- EU 0019A848: ObjGroup::reset()   (196 caller files)
 * self: +0x28 sead::OffsetList {head node {prev +0x28, next +0x2C}, count +0x30, offset +0x34}
 * of objects with a node at obj+offset; +0x38, +0x3C, +0x48 "flush" flag, +0x4C/+0x4D.
 *
 *   if (self[0x48]) {                         flush everything
 *       if (count) for each obj: 001E05CC(obj, 5)
 *       self[0x48] = 0
 *       if (count) for each obj (next read first): 00110DB8(obj, 5)   (state 5 != 0: no erase,
 *                                                the compiler kept the dead `cmp sb, #0`)
 *   } else for each obj (next read before the body):
 *       if (00588224(*data_00711F50, 0052F210(obj), 0x08000000)
 *           || (obj[0x109] && obj[0x10A])) {  remove
 *           00110DB8(obj, 0); 0010F1F8(&node); --count;      (ListNode::erase_)
 *       }
 *   self[0x3C] = -1; self[0x38] = 0; self[0x4C] = self[0x4D] = 0
 * Iteration as on ARM: obj = node - offset with the offset re-read from self only at the start
 * of each loop (r6/r8), end = &head - offset; erase uses the offset re-read from self.
 *
 * Ghidra vs ARM: control flow right. The converted callers declare 0010F1F8 (ListNode::erase_,
 * which never touches s0) as `float f(int *, float)` and Ghidra threads an undefined `in_s0`
 * through it; here it is declared like its winning definition (native/core: void(void *)).
 * Return: r0 = -1 (left by the `mvn r0, #0` of the +0x3C store; no caller reads it).
 * Verified EU 0019A848-0019A9D4. Confidence: high (flow), low (names). */
#include "hot.h"

extern char data_00711F50[];

int func_001E05CC(int obj, uint32_t arg);
int func_00110DB8(int obj, int state);
int func_0052F210(int obj);
int func_00588224(int mgr, uint32_t id, uint32_t mask);
void func_0010F1F8(void *node);   /* ListNode::erase_, native/core/sead_list.c */

int func_0019A848(uint32_t self_w)
{
    char *self = P(self_w);
    uint32_t head = self_w + 0x28;

    if (FLD(self, 0x48, uint8_t) != 0) {
        if (W(self, 0x30) != 0) {
            uint32_t off = W(self, 0x34);
            uint32_t end = head - off;
            for (uint32_t o = W(self, 0x2C) - off; o != end; o = W(P(o + off), 4) - off)
                func_001E05CC((int)o, 5);
        }
        FLD(self, 0x48, uint8_t) = 0;
        if (W(self, 0x30) != 0) {
            uint32_t off = W(self, 0x34);
            uint32_t o = W(self, 0x2C) - off;
            uint32_t nx = W(P(o + off), 4);
            uint32_t end = head - off;
            while (o != end) {
                func_00110DB8((int)o, 5);
                o = nx - off;
                nx = W(P(nx), 4);
            }
        }
    } else {
        uint32_t off = W(self, 0x34);
        uint32_t o = W(self, 0x2C) - off;
        uint32_t nx = W(P(o + off), 4);
        uint32_t end = head - off;
        while (o != end) {
            uint32_t id = (uint32_t)func_0052F210((int)o);
            if (func_00588224((int)W(data_00711F50, 0), id, 0x08000000u) != 0 ||
                (FLD(P(o), 0x109, uint8_t) != 0 && FLD(P(o), 0x10A, uint8_t) != 0)) {
                func_00110DB8((int)o, 0);
                func_0010F1F8((int *)P(W(self, 0x34) + o));
                W(self, 0x30) = W(self, 0x30) - 1;
            }
            o = nx - off;
            nx = W(P(nx), 4);
        }
    }
    W(self, 0x3C) = 0xFFFFFFFFu;
    W(self, 0x38) = 0;
    FLD(self, 0x4C, uint8_t) = 0;
    FLD(self, 0x4D, uint8_t) = 0;
    return -1;                      /* r0 = the mvn r0, #0 of the -1 store */
}
