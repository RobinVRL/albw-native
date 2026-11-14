/* USA 00490A18 (EU 004909F0): sead::MethodTreeNode::pushBackChild(this, child): under the tree's
 * CriticalSection (this+0x3C, may be NULL): detach child's tree node (child+0x10, 0049FB60),
 * give the child (and its first two grand-children, via 0057EA74) this tree's CS pointer,
 * then append (0049FBC4(this+0x10, child ? child+0x10 : NULL)).
 * Native fix of the "matched" source (src/work8/ds_srv/ds1/func_00490A18.c, auto-converted
 * Ghidra): the CS lock 0010C0B8 and unlock 0010EEE0 were called without their argument
 * (ARM: r0 = [this+0x3C] at EU 004909FC / 00490A78), so natively they locked garbage and
 * hung on an uninitialised lock word. Rewritten from the EU disassembly. Confidence: high. */
#include <stdint.h>

void func_0010C0B8(void *cs);
void func_0010EEE0(void *cs);
void func_0049FB60(void *node);
void func_0049FBC4(void *node, void *child_node);
void func_0057EA74(void *obj, uint32_t cs);

#define U32(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))
#define PTR(v) ((void *)(uintptr_t)(v))

void func_00490A18(uint8_t *self, uint8_t *child)
{
    if (U32(self, 0x3C))
        func_0010C0B8(PTR(U32(self, 0x3C)));
    func_0049FB60(child + 0x10);
    U32(child, 0x3C) = U32(self, 0x3C);
    uint32_t n = U32(child, 0x14);
    uint32_t c = n ? U32(PTR(n), 0x10) : 0;
    if (n && c) {
        uint32_t cs = U32(self, 0x3C);
        U32(PTR(c), 0x3C) = cs;
        uint32_t m = U32(PTR(c), 0x14);
        uint32_t o = m ? U32(PTR(m), 0x10) : 0;
        if (m && o)
            func_0057EA74(PTR(o), cs);
        m = U32(PTR(c), 0x18);
        o = m ? U32(PTR(m), 0x10) : 0;
        if (m && o)
            func_0057EA74(PTR(o), cs);
    }
    func_0049FBC4(self + 0x10, child ? child + 0x10 : 0);
    if (U32(self, 0x3C))
        func_0010EEE0(PTR(U32(self, 0x3C)));
}
