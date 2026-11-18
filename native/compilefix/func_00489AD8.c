/* USA 00489AD8 (EU 00489AB0): Interp::update(this) (BOOT_LOG 160i): one frame of the fade, then
 * the listener (+0x14)->vt[0](listener) with the current value in s0 (EU 489AFC vldr s0, [r0, #4]).
 * The matched source passed the value as the 4th word behind two ARM-register placeholders;
 * natively the listener takes it as its second argument (native/robust/func_0068BB24.c,
 * native/hot/func_0048F288.c). Confidence: high (instruction-level). */
#include <stdint.h>

typedef void (*listener_fn)(void *listener, float v);

void func_00489AD8(char *self)
{
    uint32_t n = *(uint32_t *)(self + 0x10);
    if (!n)
        return;
    *(uint32_t *)(self + 0x10) = --n;
    if (n) {
        *(float *)(self + 4) -= *(float *)(self + 0xC);
    } else {
        *(uint32_t *)(self + 4) = *(uint32_t *)(self + 8);
        *(float *)(self + 0xC) = 0.0f;
    }
    char *l = (char *)(uintptr_t)*(uint32_t *)(self + 0x14);
    if (!l)
        return;
    listener_fn f = (listener_fn)(uintptr_t)*(uint32_t *)(uintptr_t)*(uint32_t *)l;
    f(l, *(float *)(self + 4));
}
