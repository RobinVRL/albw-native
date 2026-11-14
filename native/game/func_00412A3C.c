/* USA 00412A3C (EU 00412A1C): sound driver command buffer: allocate `words` words from the
 * ring buffer of the command manager `mgr` (nw::snd DriverCommandManager-like):
 *   ring: base +0x17C, end +0x180, write +0x184, read +0x188, full flag +0x18C,
 *   reply queue +0xB4 (messages = command lists, +8 tag, last node +0xC = its end position),
 *   last finished tag +0x178.
 *   1. try the ring (00412D94); 2. drain finished replies without blocking (0067629C) and
 *   retry; 3. flush (00412C8C(mgr, 1) -> tag) and block on replies (00676530) until that tag
 *   came back, then allocate inline (sets the full flag when write catches up with read).
 * Returns the command memory. Rewritten from the EU disassembly: Ghidra typed it void (the
 * result in r0 was lost, callers wrote through garbage). Confidence: high. */
#include <stdint.h>

#define U32(o) (*(uint32_t *)(m + (o)))

uint32_t func_00412D94(uint8_t *mgr, uint32_t words);
int32_t func_0067629C(void *queue, uint32_t *out_msg);
uint32_t func_00676530(void *queue);
uint32_t func_00412C8C(uint8_t *mgr, int32_t flush);

static void reply_done(uint8_t *m, uint32_t msg)
{
    U32(0x178) = *(uint32_t *)(uintptr_t)(msg + 8);
    if (!msg)
        return;
    uint32_t p = msg;
    while (*(uint32_t *)(uintptr_t)p)
        p = *(uint32_t *)(uintptr_t)p;
    uint32_t end = *(uint32_t *)(uintptr_t)(p + 0xC);
    U32(0x188) = end;
    m[0x18C] = 0;
    if (U32(0x184) == end) {
        U32(0x188) = 0;
        U32(0x184) = 0;
    }
}

void *func_00412A3C(uint8_t *m, uint32_t words)
{
    uint32_t r = func_00412D94(m, words);
    if (r)
        return (void *)(uintptr_t)r;
    uint32_t msg;
    while (func_0067629C(m + 0xB4, &msg)) {
        U32(0x178) = *(uint32_t *)(uintptr_t)(msg + 8);
        if (msg)
            reply_done(m, msg);
    }
    r = func_00412D94(m, words);
    if (r)
        return (void *)(uintptr_t)r;
    for (;;) {
        uint32_t tag = func_00412C8C(m, 1);
        uint32_t got;
        do {
            got = func_00676530(m + 0xB4);
            reply_done(m, got);
        } while (*(uint32_t *)(uintptr_t)(got + 8) != tag);
        if (m[0x100 + 0x8C])
            continue;
        uint32_t w = U32(0x184), rd = U32(0x188), at = 0;
        if (rd > w) {
            if (w + words <= rd) {
                U32(0x184) = w + words;
                at = U32(0x17C) + w * 4;
            }
        } else if (U32(0x180) >= w + words) {
            U32(0x184) = w + words;
            at = U32(0x17C) + w * 4;
        } else if (rd >= words) {
            U32(0x184) = words;
            at = U32(0x17C);
        }
        if (at) {
            if (U32(0x184) == U32(0x188))
                m[0x18C] = 1;
            return (void *)(uintptr_t)at;
        }
    }
}
