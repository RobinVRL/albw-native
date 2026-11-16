/* USA 0048F288 <- EU 0048F260: FadeTimer::calc() (recursive over child timers)   (1 caller file)
 *   if (self[0x10]) { if (--self[0x10] == 0) { self[4] = self[8] (word copy); self[0xC] = 0.0f; }
 *                     else self[4] -= self[0xC];
 *                     if (self[0x14]) self[0x14]->vt[0](self[0x14], self[4] (s0)); }
 *   for each child of the OffsetList at +0x20 (count +0x28, next +0x24, offset +0x2C read
 *       once, end re-read): 0048F288(child)
 * Ghidra vs ARM: the listener virtual is called with NO arguments (this and the s0 value
 * dropped). Fixed. Return (float class of the converted prototype; s0 unused): 0.
 * Verified EU 0048F260-0048F300. Confidence: high (flow), low (names). */
#include "hot.h"

typedef void (*vset_t)(void *self, float v);

float func_0048F288(uint32_t self_w, float unused)
{
    char *self = P(self_w);
    uint32_t c = W(self, 0x10);
    if (c != 0) {
        c--;
        W(self, 0x10) = c;
        if (c == 0) {
            W(self, 4) = W(self, 8);
            F(self, 0xC) = 0.0f;
        } else {
            F(self, 4) = F(self, 4) - F(self, 0xC);
        }
        uint32_t l = W(self, 0x14);
        if (l != 0)
            GFN(vset_t, W(P(W(P(l), 0)), 0))(P(l), F(self, 4));
    }
    if (W(self, 0x28) == 0)
        return 0.0f;
    uint32_t off = W(self, 0x2C);
    uint32_t n = W(self, 0x24);
    for (;;) {
        uint32_t ch = n - off;
        if (ch == self_w + 0x20 - W(self, 0x2C))
            break;
        func_0048F288(ch, 0.0f);
        n = W(P(ch + off), 4);
    }
    return 0.0f;
}
