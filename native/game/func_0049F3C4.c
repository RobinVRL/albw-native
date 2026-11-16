/* USA 0049F3C4 (EU 0049F39C): render-target clear forwarder: tail-calls the graphics manager
 * (*data_00715148)->vt[0x14](mgr, flags, colour*, stencil, depth) with r1-r3 and s0 untouched
 * (EU: ldr r0, =data_00715148; ldr r0, [r0]; ldr r12, [r0]; ldr r12, [r12, #0x14]; bx r12).
 * The target is Obj::f(u32 flags, void *colour, u8 stencil, f32 depth) (003CB588), which stores
 * the depth clear value and issues the GX memory fill (003CB5F0).
 * What was wrong: the matched C++ `f_0049F3C4(void*, u32, u32, u32)` forwarded three arguments;
 * the float in s0 had no x86 counterpart, so Obj::f read a stray stack word as the depth and the
 * depth buffer was cleared to 0 instead of 1.0 (far): with depth test LESS every draw of a scene
 * without a depth-ALWAYS sky failed - the whole opening dream drew black (BOOT_LOG 109 [3d]).
 * Both callers (00496358 and 004963A8, one shared tail at EU 00496380) load s0 = 1.0f
 * (literal 0x3F800000 at EU 004963BC) before the jump, so the native passes 1.0f.
 * Confidence: high (instruction-level, both call sites checked). */
#include <stdint.h>

extern uint32_t data_00715148;   /* -> graphics manager object */
static inline void *gp_ptr(uint32_t a) { return (void *)(uintptr_t)a; }

typedef void (*ClearFn)(void *self, uint32_t flags, void *colour, uint32_t stencil, float depth);

void func_0049F3C4(void *unused, uint32_t flags, uint32_t colour, uint32_t stencil) {
    (void)unused;
    void *mgr = gp_ptr(data_00715148);
    uint32_t vt = *(uint32_t *)mgr;
    ClearFn fn = (ClearFn)gp_ptr(*(uint32_t *)gp_ptr(vt + 0x14));
    fn(mgr, flags, gp_ptr(colour), stencil & 0xFF, 1.0f);
}
