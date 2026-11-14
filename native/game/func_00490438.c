/* USA 00490438 (EU 00490410): forwarding file device: doClose_(this, handle) ->
 * tryClose(this->m50 (wrapped device), handle) (tail call 0048A08C, r1 unchanged).
 * Native fix of the matched source (src/work5/templater/gen, f_490438): written with one
 * argument, the handle (r1) was lost. Confidence: high. */
#include <stdint.h>

int32_t func_0048A08C(void *device, void *handle);

int32_t func_00490438(uint8_t *self, void *handle)
{
    return func_0048A08C((void *)(uintptr_t)*(uint32_t *)(self + 0x50), handle);
}
