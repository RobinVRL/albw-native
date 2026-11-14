/* USA 00490988 (EU 00490960): message-data object init(this, data, heap): sets the MsgStdBn
 * allocator hooks (0011F054 with 00490A04/00490A00, heap in 0x00715330), m4 = parse(data)
 * (0011EE2C), m8 = 0011EC80(m4) (first section value, < 0 = failure: release and clear), hooks
 * reset; returns success (s >= 0).
 * Native fix of the matched source (src/work8/sol2/session3/00490988_dh.cpp): 0011EC80 was
 * called without its argument (r0 = m4, the parse result, at EU 0049098C). Confidence: high. */
#include <stdint.h>

extern uint32_t data_00715330;
void func_00490A00(void);
void func_00490A04(void);
void func_0011F054(void *alloc, void *free_fn);
void *func_0011EE2C(uint32_t data);
int32_t func_0011EC80(void *msg);
void func_0011E674(void *msg);

int32_t func_00490988(uint32_t *self, uint32_t data, uint32_t heap)
{
    data_00715330 = heap;
    func_0011F054((void *)func_00490A04, (void *)func_00490A00);
    void *m = func_0011EE2C(data);
    self[1] = (uint32_t)(uintptr_t)m;
    int32_t s = func_0011EC80(m);
    if (s >= 0) {
        self[2] = (uint32_t)s;
    } else {
        func_0011E674((void *)(uintptr_t)self[1]);
        self[1] = 0;
        self[2] = 0;
    }
    func_0011F054(0, 0);
    data_00715330 = 0;
    return (s >> 31) + 1;
}
