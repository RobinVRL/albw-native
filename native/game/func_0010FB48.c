/* USA 0010FB48 (EU 0010FB48): fixed-size object pool: allocate one element (lock, pop the free
 * list at +0x24, count +0x2c, optional clear via 0010F8B8 when flag +0x14 bit 0, unlock).
 * Native fix of the Ghidra decompilation: the lock call 0010C0C0 had lost its argument
 * (pool + 0x30, the CriticalSection; the unlock already had it). Confidence: high. */
#include <stdint.h>

void func_0010C0C0(void *cs);
void func_0010C160(void *cs);
void func_0010F8B8(void *begin, void *end, uint32_t value);

void *func_0010FB48(void *pool_)
{
    uint8_t *pool = (uint8_t *)pool_;
    void *cs = pool + 0x30;
    func_0010C0C0(cs);
    uint32_t *elem = *(uint32_t **)(pool + 0x24);
    if (elem) {
        *(uint32_t *)(pool + 0x24) = elem[0];          /* next free (32-bit link, as on 3DS) */
        *(int32_t *)(pool + 0x2c) += 1;
        if (*(uint32_t *)(pool + 0x14) & 1)
            func_0010F8B8(elem, (uint8_t *)elem + *(uint32_t *)(pool + 0x18), 0);
    }
    func_0010C160(cs);
    return elem;
}
