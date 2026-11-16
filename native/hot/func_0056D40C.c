/* USA 0056D40C <- EU 0056D3E4: BitTable::get(u32 *out, u32 idx) -> bool   (41 caller files)
 * self: +0 presence mask, +4.. values packed in bit order (value of bit k at self[4 * rank]).
 *   n = 0; hit = 0;
 *   if (idx != -1) { for (k = 0; k <= idx; k++)        (idx + 1 iterations, counted down)
 *       if (mask & (1 << k)) { n++; if (k == idx) hit = 1; }   (ARM `lsl` by register: k
 *       only its low byte counts, and >= 32 gives 0) ; if (!hit) return 0; }
 *   if (!n) return 0; *out = self[4 * n]; return 1
 * (idx == -1: n stays 0 -> 0.)
 * Ghidra vs ARM: `1 << (k & 0xff)` is undefined in C for k >= 32 (x86 masks the count to 5
 * bits, so bits repeat every 32 and count again); ARM gives 0 for 32..255 and wraps at 256.
 * Fixed. Verified EU 0056D3E4-0056D45C. Confidence: high (flow), low (name). */
#include "hot.h"

static inline uint32_t arm_lsl(uint32_t v, uint32_t s)
{
    s &= 0xFF;
    return s < 32 ? v << s : 0;
}

int func_0056D40C(uint32_t self_w, uint32_t out_w, uint32_t idx)
{
    char *self = P(self_w);
    uint32_t n = 0;
    if (idx != 0xFFFFFFFFu) {
        uint32_t mask = W(self, 0);
        int hit = 0;
        uint32_t cnt = idx + 1;
        uint32_t k = 0;
        do {
            if (mask & arm_lsl(1, k)) {
                n++;
                if (k == idx)
                    hit = 1;
            }
            k++;
        } while (--cnt != 0);
        if (!hit)
            return 0;
    }
    if (n == 0)
        return 0;
    W(P(out_w), 0) = W(self, 4 * n);
    return 1;
}
