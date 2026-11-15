/* USA 00518CCC: task constructor: base task ctor 0048D088(self, arg, ro_006A4C28 name), vtable
 * 006EF524, 002DF3E4(data_00712588); returns the task. Native fix of the matched source
 * (src/work7/ds6/func_00518CCC.cpp), which stores the vtable as the integer 0x6EF524 (right on
 * the ARM, a raw address natively: createTaskSync called through it). Confidence: high. */
#include <stdint.h>

extern void *func_0048D088(void *self, uint32_t arg, const char *name);
extern void func_002DF3E4(void *p);
extern void *data_00712588;
extern const char ro_006A4C28[];
extern uint32_t data_006EF524[];

void *func_00518CCC(void *self, uint32_t a)
{
    char *p = (char *)func_0048D088(self, a, ro_006A4C28);
    *(void **)p = (void *)data_006EF524;
    func_002DF3E4(data_00712588);
    return p;
}
