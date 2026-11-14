/* USA 003FC354 (EU 003FC334): nw::h3d material: write the texture-sampler command block into
 * the material's command list. cmd = {u32 *words, u32 count} (r1), state (r2); r3/s0/s1 are
 * not used; s2/s3 (stack +8/+0xC) = {buffer base, base the list was built for}: when both are
 * set the list lives at s2 + (words - s3) (relocated copy) and only the commands are written;
 * else the words are written in place and cmd->count is updated.
 *   end = 00563710(state, p, 1)  (writer)
 *   pad with zero words so (end - p + 8) is a multiple of 16
 *   r = 003CC030(end, 1)         (terminator / jump)
 * Rewritten from the EU disassembly: Ghidra read s2/s3 as in_stack_ values, which clang
 * compiled to nothing (the function body was empty and fell into the next one).
 * Confidence: high. */
#include <stdint.h>

uint32_t *func_00563710(void *state, uint32_t *p, uint32_t flag);
uint32_t *func_003CC030(uint32_t *end, uint32_t flag);

static uint32_t *pad16(uint32_t *start, uint32_t *end)
{
    uint32_t bytes = ((uint32_t)((uint8_t *)end - (uint8_t *)start) & ~3u) + 8;
    if (bytes & 0xF) {
        int32_t n = 4 - (int32_t)((bytes << 28) >> 30);
        for (int32_t i = 0; i < n; i++)
            *end++ = 0;
    }
    return end;
}

uint32_t func_003FC354(void *a0, uint32_t *cmd, void *state, uint32_t a3, uint32_t s0,
                       uint32_t s1, uint32_t base, uint32_t built_for)
{
    uint32_t *words = (uint32_t *)(uintptr_t)cmd[0];
    if (base && built_for) {
        uint32_t *p = (uint32_t *)(uintptr_t)(base + ((uint32_t)(uintptr_t)words - built_for));
        uint32_t *end = pad16(p, func_00563710(state, p, 1));
        return (uint32_t)(uintptr_t)func_003CC030(end, 1);
    }
    uint32_t *end = pad16(words, func_00563710(state, words, 1));
    uint32_t *r = func_003CC030(end, 1);
    uint32_t n = (uint32_t)(((uint8_t *)r - (uint8_t *)words) >> 2);
    cmd[1] = n;
    cmd[0] = (uint32_t)(uintptr_t)words;
    return n;
}
