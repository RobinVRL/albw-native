/* USA 00404500 (EU 004044E0): nw::lyt::Layout::GetLayoutResource(name):
 *   snprintf(buf, 0x48, "%s.bflyt", name); return accessor(this+0x24)->GetResource('blyt', buf, NULL)
 * Native fix of the matched source (src/work7/ds5/func_00404500.cpp), which was typed void and
 * dropped the resource the ARM returns in r0 (EU 0040451C blx, then pop): the parts-layout
 * builder 0050389C built from garbage. Confidence: high. */
#include <stdint.h>

extern int func_003E6AA8(char *buf, uint32_t size, int32_t max_len, const char *fmt, ...);
extern const char ro_006A8844[];   /* "%s.bflyt" */

typedef uint32_t (*GetResFn)(void *acc, uint32_t type, const char *name, uint32_t *size);

uint32_t func_00404500(void *self, const char *name)
{
    char buf[0x48];
    func_003E6AA8(buf, 0x48, 0x47, ro_006A8844, name);
    void *acc = (void *)(uintptr_t)*(uint32_t *)((char *)self + 0x24);
    void **vt = *(void ***)acc;
    return ((GetResFn)vt[3])(acc, 0x626c7974, buf, 0);
}
