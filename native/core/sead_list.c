/* Intrusive doubly-linked lists (hand-written from the EU disassembly).
 *
 * Two node layouts are used by the game's libraries:
 *  - sead::ListNode {mPrev @0, mNext @4} and sead::ListImpl {ListNode mStartEnd @0, s32 mCount
 *    @8} (circular through mStartEnd; ListNode::erase_ / insert in the core library at 0010F1xx,
 *    ListImpl members around 0049F5FC);
 *  - nw::ut::LinkList (NintendoWare): Node {next @0, prev @4}, LinkListImpl {s32 size @0,
 *    Node terminator @4} (00111EF0 / 00112364, 003E696C / 003E69B8).
 * All link words are 4-byte game pointers (gp_ptr/gp_u32). Return values are what the ARM code
 * leaves in r0 (Ghidra dropped several of them). */
#include "core.h"

#define W(p, off) FLD(p, off, uint32_t)
#define P(w) ((char *)gp_ptr(w))

/* ------------------------------------------------------------------ sead::ListNode */

/* USA 0010F1F8 sead::ListNode::erase_(): unlink this {prev @0, next @4} from its neighbours,
 * then prev = next = 0.
 *   if (prev) prev->next = next; if (next) next->prev = prev; next = 0; prev = 0;
 * Return class = the ARM's: void (no VFP instruction, r0 is not a result; matched C++ callers
 * via the ListNode*::erase_ aliases and native/sdk/os.c, native/game/func_0049C334.c,
 * native/gameplay/func_004A879C.c call it void).
 * CALLER MISMATCH (link blocker on i386): the round-2 conversion declares it
 * `float f(int *, float)` in 177 caller files (native/core/callers_0010F1F8_float.txt, plus
 * native/compilefix/func_00649E18.c and func_0064B4A0.c); 80 of them assign the result
 * (`in_s0 = func_0010F1F8(p, in_s0)`: Ghidra modelling s0 passing through untouched). Fix in the
 * converter: SIG_OVERRIDES `void func_0010F1F8(int *param_1)` and rewrite `x = func_0010F1F8(p,
 * x);` to `func_0010F1F8(p);` (exact: the ARM leaves s0 unchanged). Until then each float-
 * declared call pops an empty x87 register on i386 (NaN into the assigned variable).
 * Confidence: high. */
void func_0010F1F8(void *node) {
    char *n = node;
    uint32_t prev = W(n, 0);
    if (prev) W(P(prev), 4) = W(n, 4);
    uint32_t next = W(n, 4);
    if (next) W(P(next), 0) = W(n, 0);
    W(n, 4) = 0;
    W(n, 0) = 0;
}

/* same, for native callers in this directory */
void albw_sead_listnode_erase(void *node) { func_0010F1F8(node); }

/* USA 0010F1DC sead::ListNode::insertFront_(ListNode *n): link n in front of this.
 *   old = this->prev; this->prev = n; n->next = this; n->prev = old; if (old) old->next = n;
 * r0 is untouched: returns this (Ghidra: `int *`; callers `int f(int *, int *)`).
 * Confidence: high. */
uint32_t func_0010F1DC(void *self, void *n) {
    char *s = self, *nn = n;
    uint32_t old = W(s, 0);
    W(s, 0) = gp_u32(nn);
    W(nn, 4) = gp_u32(s);
    W(nn, 0) = old;
    if (old) W(P(old), 4) = gp_u32(nn);
    return gp_u32(s);
}

/* ------------------------------------------------------------------ sead::ListImpl */

/* USA 0049F5FC (EU 0049F5D4) sead::ListImpl::clear(): walk from mStartEnd.next until back at
 * the list, zeroing each node's links (in that order: next then prev word... see below), then
 * mStartEnd = {self, self}, mCount = 0.
 *   n = list->next; while (n != list) { cur = n; n = n->next; cur->next = 0; cur->prev = 0; }
 *   list->next = list; list->count = 0; list->prev = list;     (stm {r0, r2} at +4, str r0 at +0)
 * r0 = the list at return (callers `int f(undefined4 *)`, 211 files). Confidence: high. */
uint32_t func_0049F5FC(void *list) {
    char *l = list;
    uint32_t n = W(l, 4);
    while (n != gp_u32(l)) {
        char *cur = P(n);
        n = W(cur, 4);
        W(cur, 4) = 0;
        W(cur, 0) = 0;
    }
    W(l, 4) = gp_u32(l);
    W(l, 8) = 0;
    W(l, 0) = gp_u32(l);
    return gp_u32(l);
}

/* the inlined ListNode::erase_ + --mCount of popFront/popBack */
static uint32_t listimpl_pop(char *l, uint32_t node) {
    char *n = P(node);
    uint32_t prev = W(n, 0);
    if (prev) W(P(prev), 4) = W(n, 4);
    uint32_t next = W(n, 4);
    if (next) W(P(next), 0) = W(n, 0);
    W(n, 4) = 0;
    W(n, 0) = 0;
    W(l, 8) = W(l, 8) - 1;
    return node;
}

/* USA 0049F688 (EU 0049F660) sead::ListImpl::popFront(): mCount <= 0 (signed) -> 0; else
 * unlink mStartEnd.next, --mCount, return it. Callers declare `int f(int)`: the list arrives
 * as a 32-bit integer (gp_ptr). Confidence: high. */
uint32_t func_0049F688(uint32_t list) {
    char *l = P(list);
    if ((int32_t)W(l, 8) <= 0) return 0;
    return listimpl_pop(l, W(l, 4));
}

/* USA 0049F634 (EU 0049F60C) sead::ListImpl::popBack(): as popFront with mStartEnd.prev.
 * Callers `int f(undefined4 *)`. Confidence: high. */
uint32_t func_0049F634(void *list) {
    char *l = list;
    if ((int32_t)W(l, 8) <= 0) return 0;
    return listimpl_pop(l, W(l, 0));
}

/* ------------------------------------------------------------------ nw::ut::LinkList */

/* USA 00112364 LinkListImpl::Insert(Iterator it, Node *p) -> Iterator(p): link p before it.
 *   prev = it->prev; p->next = it; p->prev = prev; it->prev = p; prev->next = p; ++size;
 * Returns p (r0). Callers `int f(int *list, int it, int *p)`: the iterator node arrives as a
 * 32-bit integer. Confidence: high. */
uint32_t func_00112364(void *list, uint32_t it, void *p) {
    char *pos = P(it), *pp = p;
    uint32_t prev = W(pos, 4);
    W(pp, 0) = it;
    W(pp, 4) = prev;
    W(pos, 4) = gp_u32(pp);
    W(P(prev), 0) = gp_u32(pp);
    FLD(list, 0, int32_t) += 1;
    return gp_u32(pp);
}

/* USA 00111EF0 LinkListImpl::Erase(Node *p) -> Iterator(next): unlink p, --size, p->next =
 * p->prev = 0, return p's old next (r0 from `ldm r1, {r0, r3}`; Ghidra: void).
 * Callers `int f(int *, int *)`. Confidence: high. */
uint32_t func_00111EF0(void *list, void *p) {
    char *n = p;
    uint32_t next = W(n, 0), prev = W(n, 4);
    W(P(next), 4) = prev;
    W(P(prev), 0) = next;
    FLD(list, 0, int32_t) -= 1;
    W(n, 0) = 0;
    W(n, 4) = 0;
    return next;
}

/* USA 00111EE4 thunk: Erase(obj + 0x1DC, item + 4) (`add r0, #0x1dc; add r1, #4`, falls into
 * 00111EF0). Callers `int f(int, int)`: both as 32-bit integers. Confidence: high. */
uint32_t func_00111EE4(uint32_t obj, uint32_t item) {
    return func_00111EF0(P(obj + 0x1DC), P(item + 4));
}

/* USA 003E696C (EU 003E694C) LinkListImpl::Erase(Iterator it) as Erase(it, it->next) inlined:
 * end = it->next; while (it != end) { next = it->next; prev = it->prev; next->prev = prev;
 * prev->next = next; --size; it->next = it->prev = 0; it = next; }  -> erases `it` (none when
 * it->next == it). Returns end (r0). Callers `int f(int *, undefined4 *)`. Confidence: high. */
uint32_t func_003E696C(void *list, void *it) {
    uint32_t end = W(it, 0);
    uint32_t cur = gp_u32(it);
    while (cur != end) {
        char *c = P(cur);
        uint32_t next = W(c, 0), prev = W(c, 4);
        W(P(next), 4) = prev;
        W(P(prev), 0) = next;
        FLD(list, 0, int32_t) -= 1;
        W(c, 0) = 0;
        W(c, 4) = 0;
        cur = next;
    }
    return end;
}

/* USA 003E69B8 (EU 003E6998) LinkListImpl::Erase(Iterator first, Iterator last): erase every
 * node from first up to (not including) last, returns last (r0). Same unlink as above.
 * Callers `int f(int *, undefined4 *, undefined4 *)`. Confidence: high. */
uint32_t func_003E69B8(void *list, void *first, void *last) {
    uint32_t cur = gp_u32(first), end = gp_u32(last);
    while (cur != end) {
        char *c = P(cur);
        uint32_t next = W(c, 0), prev = W(c, 4);
        W(P(next), 4) = prev;
        W(P(prev), 0) = next;
        FLD(list, 0, int32_t) -= 1;
        W(c, 0) = 0;
        W(c, 4) = 0;
        cur = next;
    }
    return end;
}
