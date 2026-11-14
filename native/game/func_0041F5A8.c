/* USA 0041F5A8 / 0041F6F8 (EU 0041F588 / 0041F6D8): nw::font RectDrawer: flush the dirty range
 * of the vertex-shader uniform pool (c0x20.. from this+0x1F8 / c0x40.. from this+0x3F8):
 *   p = 0041F3C0(this, p, pool + k*16, k + base, end - k) with k = u8 +0x32 / +0x34 and end =
 *   u8 +0x31 / +0x33, then both bytes = a2; returns p (the ARM keeps 0041F3C0's r0).
 * Native fix of the matched sources (src/work7/ds5/func_0041F5A8.cpp / func_0041F6F8.cpp):
 * typed void, so the command-list pointer the caller 004010C8 continues with was garbage.
 * Confidence: high. */
#include <stdint.h>

uint32_t *func_0041F3C0(uint8_t *drawer, uint32_t *p, const void *src, uint32_t reg, int32_t count);

uint32_t *func_0041F5A8(uint8_t *self, uint32_t *p, uint8_t a2)
{
    uint8_t k = self[0x32];
    p = func_0041F3C0(self, p, self + k * 16 + 0x1f8, k + 0x20u, (int32_t)self[0x31] - k);
    self[0x31] = a2;
    self[0x32] = a2;
    return p;
}

uint32_t *func_0041F6F8(uint8_t *self, uint32_t *p, uint8_t a2)
{
    uint8_t k = self[0x34];
    p = func_0041F3C0(self, p, self + k * 16 + 0x3f8, k + 0x40u, (int32_t)self[0x33] - k);
    self[0x33] = a2;
    self[0x34] = a2;
    return p;
}
