/* USA 00587FCC <- EU 00587FA4 (54 direct callers):
 *     obj->vtbl[2](obj);                                  (virtual at vtable +8)
 *     x = 0057F260(self->[0x24]->[0x140]);
 *     return 0056D3E4(x, obj->[4]);                        (tail call)
 *
 * What was wrong: Ghidra marked 0057F260 as "does not return" (it returns: EU 0057F380 /
 * 0057F388 `pop {r4,r5,r6,pc}`), so the converted function returned 0057F260's value directly
 * and never made the tail call to 0056D3E4 with obj->[4]; callers got the wrong value and the
 * 0056D3E4 side effects were lost.
 * Verified against EU 00587FA4-00587FD8: obj->[4] is loaded (into r4) right after the virtual
 * call and before 0057F260, so it is read before 0057F260 runs; this order is kept.
 * Confidence: high. */
#include "robust.h"

typedef void (*vfn_t)(void *);

void *func_0057F260(void *p);
uint32_t func_0056D3E4(void *a, void *b);

uint32_t func_00587FCC(void *self, void *obj) {
    char *vt = FLD(obj, 0, char *);
    FLD(vt, 8, vfn_t)(obj);
    void *b = FLD(obj, 4, void *);
    void *a = func_0057F260(FLD(FLD(self, 0x24, char *), 0x140, void *));
    return func_0056D3E4(a, b);
}
