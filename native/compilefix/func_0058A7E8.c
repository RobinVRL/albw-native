/* USA 0058A7E8 (EU 0058A7C0): enemy vt+0x58 (base): Vec3 (this, id, HitRecord *rec) =
 * rec->+0x0C (vldmia r2+12, {s0, s1, s2}; BOOT_LOG 160l). Ghidra returned `this`. The vector is
 * published in albw_s012 (native/runtime/vec3ret.c); the return value is its x. */
#include <stdint.h>

extern float albw_s012[3];

uint32_t func_0058A7E8(void *self, uint32_t id, char *rec)   /* bits of x: an int return, no x87 value for its int-typed callers */
{
    (void)self; (void)id;
    const float *v = (const float *)(rec + 0xC);
    albw_s012[0] = v[0];
    albw_s012[1] = v[1];
    albw_s012[2] = v[2];
    return *(const uint32_t *)(rec + 0xC);
}
