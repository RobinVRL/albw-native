/* USA 004045A8 (EU 00404588): nw::lyt::Layout::Build convenience wrapper:
 *   Build(this, lytRes, accessor, a3, a4[stack]) ->
 *     this->vt[0x38](this, lytRes, accessor, &arg, 0)
 *   with arg = { 1.0f, 1.0f, 0.0f, 0.0f, a3, a4, 0 } on the stack (EU 00404590..004045BC; the
 *   two floats are the literal-pool words 0x3F800000 / 0 at EU 004045D8/004045DC).
 * Native fix of the generated Ghidra text, which called the virtual with `this` only (every
 * register and stack argument dropped), so 00404664 read a NULL accessor. Confidence: high. */
#include <stdint.h>

typedef uint32_t (*BuildFn)(void *self, uint32_t res, void *accessor, uint32_t *arg, uint32_t zero);

uint32_t func_004045A8(void **self, uint32_t res, void *accessor, uint32_t a3, uint32_t a4)
{
    union { float f; uint32_t u; } one = { 1.0f };
    uint32_t arg[7] = { one.u, one.u, 0, 0, a3, a4, 0 };
    BuildFn fn = (BuildFn)((void **)*self)[0x38 / sizeof(uint32_t)];
    return fn(self, res, accessor, arg, 0);
}
