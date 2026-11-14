/* sead::TreeMapImpl (left-leaning red-black tree keyed by SafeString) insert and the
 * SafeString::compare it uses (hand-written from the EU disassembly). Node layout (game words):
 *   +0x00 vtbl (slot +8: called on a node replaced by an equal key)
 *   +0x04 left, +0x08 right, +0x0C u8 color (1 = red), +0x10 key (SafeString {vtbl, mStringTop})
 */
#include "core_str.h"

#define W(p, off) FLD(p, off, uint32_t)
#define P(w) ((char *)gp_ptr(w))
#define COLOR(n) FLD(n, 0xC, uint8_t)

/* USA 0069190C (EU 006918E4) sead::SafeStringBase<char>::compare(const SafeString &o, s32 n):
 * assureTermination on this (twice: the ARM calls it once for the inlined cstr() of each
 * access) and on o; same string pointer -> 0; n clamped to 0x40000 (signed), n <= 0 -> 0;
 * then per char with SIGNED chars (ldrsb): both NUL -> 0; this NUL -> -1; o NUL -> 1;
 * a < b -> -1; a > b -> 1; after n chars -> 0. Callers `int f(int *, int *, int)` (1 file).
 * Confidence: high. */
int32_t func_0069190C(void *self, void *other, int32_t n) {
    ss_assure(self);
    ss_assure(self);
    uint32_t a = SS_W(self, 4);
    ss_assure(other);
    uint32_t b = SS_W(other, 4);
    if (a == b) return 0;
    if (n > 0x40000) n = 0x40000;
    else if (n <= 0) return 0;
    for (int32_t i = 0; i < n; i++) {
        int8_t ca = (int8_t)P(SS_W(self, 4))[i];    /* r3 reloaded each iteration */
        if (ca == 0 && (uint8_t)P(b)[i] == 0) return 0;
        if (ca == 0) return -1;
        int8_t cb = (int8_t)P(b)[i];
        if (cb == 0) return 1;
        if (ca < cb) return -1;
        if (ca > cb) return 1;
    }
    return 0;
}

typedef void (*node_vfn)(void *self);

static int is_red(uint32_t n) { return n && COLOR(P(n)) == 1; }

/* USA 00687F18 (EU 00687EF0) sead::TreeMapImpl::insert(Node *node, Node *n) -> new subtree root:
 *   if (!node) { n->color = red; n->left = n->right = 0; return n; }
 *   c = n->key.compare(node->key, 0x40000);
 *   c < 0: node->left = insert(node->left, n); c > 0: node->right = insert(node->right, n);
 *   c == 0 and node != n: n takes node's right, left, color; node->vtbl[+8](node); node = n;
 *   if (red(right) && !red(left))      rotateLeft  (x = right; node->right = x->left;
 *                                       x->left = node; x->color = node->color; node->color = red)
 *   if (red(left) && red(left->left))  rotateRight (mirror)
 *   if (red(left) && red(right))       flip: node, left, right colors (c == 0 ? 1 : 0)
 * "red" is color == 1 exactly. this (r0) is only passed down. Callers `int f(undefined4, int *,
 * int *)` (6 files). Confidence: high. */
uint32_t func_00687F18(uint32_t self, void *node_p, void *n_p) {
    char *n = n_p;
    uint32_t node = gp_u32(node_p);
    if (!node) {
        COLOR(n) = 1;
        W(n, 4) = 0;
        W(n, 8) = 0;
        return gp_u32(n);
    }
    char *nd = P(node);
    int32_t c = func_0069190C(n + 0x10, nd + 0x10, 0x40000);
    if (c < 0) {
        W(nd, 4) = func_00687F18(self, P(W(nd, 4)), n);
    } else if (c > 0) {
        W(nd, 8) = func_00687F18(self, P(W(nd, 8)), n);
    } else {
        if (nd != n) {
            W(n, 8) = W(nd, 8);
            W(n, 4) = W(nd, 4);
            COLOR(n) = COLOR(nd);
            GFN(node_vfn, W(P(W(nd, 0)), 8))(nd);
        }
        nd = n;
    }
    if (is_red(W(nd, 8)) && !is_red(W(nd, 4))) {
        char *x = P(W(nd, 8));
        W(nd, 8) = W(x, 4);
        W(x, 4) = gp_u32(nd);
        COLOR(x) = COLOR(nd);
        COLOR(nd) = 1;
        nd = x;
    }
    if (is_red(W(nd, 4)) && is_red(W(P(W(nd, 4)), 4))) {
        char *x = P(W(nd, 4));
        W(nd, 4) = W(x, 8);
        W(x, 8) = gp_u32(nd);
        COLOR(x) = COLOR(nd);
        COLOR(nd) = 1;
        nd = x;
    }
    if (is_red(W(nd, 4)) && is_red(W(nd, 8))) {
        COLOR(nd) = COLOR(nd) == 0;
        COLOR(P(W(nd, 4))) = COLOR(P(W(nd, 4))) == 0;
        COLOR(P(W(nd, 8))) = COLOR(P(W(nd, 8))) == 0;
    }
    return gp_u32(nd);
}
