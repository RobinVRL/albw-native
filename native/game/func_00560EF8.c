/* USA 00560EF8 (EU 00560ED0): find a named entry in a resource dictionary:
 * (Obj *self, u32 out[2], const char *name) -> bool. t = 00560FDC(self, &tmp, name);
 * kind 0xC0/0xC1 -> out = {self->m0, self->m0 + tmp.w0}; kind 0xFF -> {self->m0, 0};
 * not found / other -> {0, 0}; returns out[0] != 0.
 * Native fix of the matched source (src/work8/perm_server/00560EF8_match.cpp): written with
 * two parameters; the name (r2) passes through to 00560FDC on ARM. Confidence: high. */
#include <stdint.h>

typedef struct { uint32_t w0; uint8_t kind; uint8_t pad[3]; uint32_t w8; } Tmp;
uint32_t func_00560FDC(uint32_t *self, Tmp *t, const char *name);

uint32_t func_00560EF8(uint32_t *self, uint32_t *out, const char *name)
{
    Tmp t;
    uint32_t lo = 0, hi = 0;
    if (func_00560FDC(self, &t, name)) {
        if (t.kind == 0xC0 || t.kind == 0xC1) {
            lo = self[0];
            hi = t.w0 + self[0];
        } else if (t.kind == 0xFF) {
            lo = self[0];
            hi = 0;
        }
    }
    out[0] = lo;
    out[1] = hi;
    return lo != 0;
}
