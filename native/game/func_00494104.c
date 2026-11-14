/* USA 00494104 (EU 004940DC): message-data object init(this, data, heap), the twin of 00490988
 * for another MsgStdBn kind: hooks 0011F054(00494180, 0049417C), heap in 0x00715300,
 * m4 = 0011EDA4(data), m8 = 0011EACC(m4) (< 0: 0011F168(m4), clear), hooks reset.
 * Native fix of the matched source (src/work8/.../00494104): 0011EACC was called without its
 * argument (r0 = m4, EU 00494108). Confidence: high. */
#include <stdint.h>

extern uint32_t data_00715300;
void func_00494180(void);
void func_0049417C(void);
void func_0011F054(void *alloc, void *free_fn);
void *func_0011EDA4(uint32_t data);
int32_t func_0011EACC(void *msg);
void func_0011F168(void *msg);

int32_t func_00494104(uint32_t *self, uint32_t data, uint32_t heap)
{
    data_00715300 = heap;
    func_0011F054((void *)func_00494180, (void *)func_0049417C);
    void *m = func_0011EDA4(data);
    self[1] = (uint32_t)(uintptr_t)m;
    int32_t s = func_0011EACC(m);
    if (s >= 0) {
        self[2] = (uint32_t)s;
    } else {
        func_0011F168((void *)(uintptr_t)self[1]);
        self[1] = 0;
        self[2] = 0;
    }
    func_0011F054(0, 0);
    data_00715300 = 0;
    return (s >> 31) + 1;
}
