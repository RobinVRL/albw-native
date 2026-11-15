/* USA 0052FCA4 (EU 0052FC7C): find_if over an actor pointer array {+4 begin, +0xC end} from
 * `it`: the first element e != NULL with e->+0x2D7 == 0 and pred(e) true, else end
 * (it outside [begin, end] -> end). pred is a functor: pred->vt[0](pred, e).
 * Native fix of the generated Ghidra text: the predicate call lost r1 = the element
 * (EU 0052FCA4 `ldr r1, [r4]`). Confidence: high. */
#include <stdint.h>

typedef int (*PredFn)(void *pred, uint32_t e);

uint32_t *func_0052FCA4(uint8_t *self, void **pred, uint32_t *it)
{
    uint32_t *begin = (uint32_t *)(uintptr_t)*(uint32_t *)(self + 4);
    uint32_t *end = (uint32_t *)(uintptr_t)*(uint32_t *)(self + 0xc);
    if (it < begin || end < it) return end;
    for (; it != end; it++) {
        uint32_t e = *it;
        if (e && *(uint8_t *)(uintptr_t)(e + 0x2d7) == 0 &&
            ((PredFn)((void **)*pred)[0])(pred, e))
            return it;
        end = (uint32_t *)(uintptr_t)*(uint32_t *)(self + 0xc);
    }
    return it;
}
