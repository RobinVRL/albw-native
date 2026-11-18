/* USA 0010C7F8 (EU 0010C7F8): Interp::setTarget(this, int frames, float value) (BOOT_LOG 160i).
 *   value == current (+4): frames (+0x10) = 0.
 *   frames != 0: target (+8) = value, +0x10 = frames, step (+0xC) = (current - value) / frames.
 *   frames == 0: current = target = value, step = 0, then the listener (+0x14)->vt[0](listener)
 *   with the value still in s0 (tail jump EU 10C85C).
 * The Ghidra text called the listener without the value: listeners that use it (sound handle
 * volume 00320EBC -> 00407F88) read a stale stack word - a return address, volume 3e-34: sword,
 * bush and throw sounds silent. Natively the value is the listener's second argument
 * (native/robust/func_0068BB24.c). Confidence: high (instruction-level). */
#include <stdint.h>

typedef void (*listener_fn)(void *listener, float v);

uint32_t func_0010C7F8(char *self, uint32_t frames, float value)
{
    float cur = *(float *)(self + 4);
    if (cur == value) {
        *(uint32_t *)(self + 0x10) = 0;
        return 0;
    }
    *(float *)(self + 8) = value;
    *(uint32_t *)(self + 0x10) = frames;
    if (frames) {
        *(float *)(self + 0xC) = (cur - value) / (float)frames;
        return 0;
    }
    *(float *)(self + 4) = value;
    *(float *)(self + 0xC) = 0.0f;
    char *l = (char *)(uintptr_t)*(uint32_t *)(self + 0x14);
    if (l) {
        listener_fn f = (listener_fn)(uintptr_t)*(uint32_t *)(uintptr_t)*(uint32_t *)l;
        f(l, value);
    }
    return 0;
}
