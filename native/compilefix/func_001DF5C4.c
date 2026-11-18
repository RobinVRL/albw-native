/* USA 001DF5C4 / 001DF744 / 001DF80C / 001DF984 / 001E0634 (sound object fades) and 0040E1BC
 * (nw::snd parameter fade), written from the EU ARM (same addresses except 0040E1BC = EU 0040E19C).
 * ARM arguments: r0 = this, r1 = frames, s0 = value. They replace matched sources declared
 * (float value, int frames): on ARM that order is free (s0 / r1); on i386 both go on the stack in
 * declaration order and the converted callers pass (this, frames, value) - value and frame count
 * were swapped (BOOT_LOG 159c, CLASS float / int parameter order, found with the kokko velocity
 * 0014FAFC). Confidence: high (instruction-level). */
#include <stdint.h>

int func_0057D86C(uint32_t handle);                        /* sound handle live */
uint32_t func_0010C7F8(uint32_t obj, int32_t frames, float value);
uint32_t func_0048BD2C(uint32_t *handle, int32_t frames, float value);
float func_00111EA8(const void *fade);                     /* current value of a fade */

#define F(p, o) (*(float *)((char *)(p) + (o)))
#define W(p, o) (*(uint32_t *)((char *)(p) + (o)))

/* store the value; when the sound is live, pass it to sub-object k of the list at +0x84 */
static uint32_t fade_k(char *self, int32_t frames, float value, uint32_t field, uint32_t k)
{
    F(self, field) = value;
    if (!func_0057D86C(W(self, 0x24)))
        return 0;
    if (frames < 0) frames = 0;
    uint32_t obj = W(self, 0x7C) > k ? W((uintptr_t)W(self, 0x84), k * 4) : 0;
    return func_0010C7F8(obj, frames, value);
}
uint32_t func_001DF5C4(char *self, int32_t frames, float value) { return fade_k(self, frames, value, 0x124, 2); }
uint32_t func_001DF744(char *self, int32_t frames, float value) { return fade_k(self, frames, value, 0x130, 4); }
uint32_t func_001DF80C(char *self, int32_t frames, float value) { return fade_k(self, frames, value, 0x12C, 3); }
uint32_t func_001DF984(char *self, int32_t frames, float value) { return fade_k(self, frames, value, 0x120, 1); }

/* volume: +0x100 base (+0x108: base set, +0x110: relative), +0x104 effective; EU 1E0634 */
uint32_t func_001E0634(char *self, int32_t frames, float value)
{
    if (*(uint8_t *)(self + 0x108) == 0 && F(self, 0x100) < value)
        return 0;
    float eff;
    if (*(uint8_t *)(self + 0x110) == 0) {
        F(self, 0x100) = value;
        eff = value;
    } else {
        eff = F(self, 0x100) * value;
    }
    F(self, 0x104) = eff;
    if (!func_0057D86C(W(self, 0x24)))
        return 0;
    if (frames < 0) frames = 0;
    return func_0048BD2C((uint32_t *)(uintptr_t)W(self, 0x24), frames, F(self, 0x104));   /* the handle stored at +0x24 (EU 1E0694 `ldr r0, [r4, #0x24]`) */
}

/* nw::snd fade at +0xB4 {start, end, frames, current}: start = current value, end = max(v, 0) */
uint32_t func_0040E1BC(char *self, int32_t frames, float value)
{
    if (value < 0.0f) value = 0.0f;
    char *f = self + 0xB4;
    float cur = func_00111EA8(f);
    F(f, 0) = cur;
    F(f, 4) = value;
    W(f, 8) = (uint32_t)frames;
    W(f, 0xC) = 0;
    return 0;
}
