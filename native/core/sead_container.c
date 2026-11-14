/* sead containers: ListImpl sort / ListNode insertBack, PtrArrayImpl buffer management
 * (hand-written from the EU disassembly). Layouts:
 *   sead::ListNode     {u32 mPrev @0, u32 mNext @4}
 *   sead::ListImpl     {ListNode mStartEnd @0, s32 mCount @8}  (+ OffsetList: s32 mOffset @0xC)
 *   sead::PtrArrayImpl {s32 mPtrNum @0, s32 mPtrNumMax @4, u32 mPtrs @8}
 * Link/buffer words are 4-byte game pointers (gp_ptr/gp_u32). */
#include "core.h"

#define W(p, off) FLD(p, off, uint32_t)
#define P(w) ((char *)gp_ptr(w))

/* native/sdk/memory.c: operator new[](u32 size, Heap *heap, s32 align) */
void *func_0010CEE0(uint32_t size, void *heap, int32_t alignment);

/* USA 0049F6DC (EU 0049F6B4) sead::ListNode::insertBack_(ListNode *n): link n after this.
 *   old = this->next; this->next = n; n->prev = this; n->next = old; if (old) old->prev = n;
 * r0 untouched: returns this (Ghidra `void *`). Callers `int f(int, int *)`: this as a 32-bit
 * integer. Confidence: high. */
uint32_t func_0049F6DC(uint32_t self, void *n) {
    char *s = P(self), *nn = n;
    uint32_t old = W(s, 4);
    W(s, 4) = gp_u32(nn);
    W(nn, 0) = self;
    W(nn, 4) = old;
    if (old) W(P(old), 0) = gp_u32(nn);
    return self;
}

typedef int32_t (*core_cmp_fn)(void *a, void *b);

/* USA 0049F434 (EU 0049F40C) sead::ListImpl::sort(s32 offset, CompareCallback cmp): stable
 * insertion sort of the node list; objects are node - offset.
 *   if (mCount <= 1) return;                          (signed)
 *   for (n = front->next; n != &mStartEnd; n = saved_next) {
 *       saved_next = n->next; p = n->prev;
 *       if (cmp(p - off, n - off) <= 0) continue;
 *       do p = p->prev; while (p != &mStartEnd && cmp(p - off, n - off) > 0);
 *       n->erase_(); p->insertBack_(n);
 *   }
 * The compare callback is a game function word (r2) called with two object addresses; its
 * result is tested as a signed int. Callers `int f(int *, int, undefined *)`. Confidence: high. */
void func_0049F434(void *list, int32_t offset, void *cmp_fn) {
    char *l = list;
    core_cmp_fn cmp = (core_cmp_fn)cmp_fn;
    if ((int32_t)W(l, 8) <= 1) return;
    uint32_t self = gp_u32(l), off = (uint32_t)offset;
    uint32_t n = W(P(W(l, 4)), 4);
    while (n != self) {
        char *nn = P(n);
        uint32_t p = W(nn, 0), saved_next = W(nn, 4);
        uint32_t nobj = n - off;
        if (cmp(P(p - off), P(nobj)) > 0) {
            p = W(P(p), 0);
            while (p != self && cmp(P(p - off), P(nobj)) > 0) p = W(P(p), 0);
            /* inlined erase_ */
            uint32_t prev = W(nn, 0);
            if (prev) W(P(prev), 4) = W(nn, 4);
            uint32_t next = W(nn, 4);
            if (next) W(P(next), 0) = W(nn, 0);
            W(nn, 4) = 0;
            W(nn, 0) = 0;
            /* inlined insertBack_ on p */
            char *pp = P(p);
            uint32_t old = W(pp, 4);
            W(pp, 4) = n;
            W(nn, 4) = old;
            W(nn, 0) = p;
            if (old) W(P(old), 0) = n;
        }
        n = saved_next;
    }
}

/* USA 0010B3EC sead::PtrArrayImpl::setBuffer(s32 max, void *buf): only if max > 0 (signed) and
 * buf != 0: mPtrNum = 0, mPtrNumMax = max, mPtrs = buf. Callers `int f(undefined4 *, int, int)`:
 * the buffer arrives as a 32-bit integer (kept as the word it is). Matched source exists (same
 * behaviour; this one is 64-bit clean). Confidence: high. */
uint32_t func_0010B3EC(void *arr, int32_t max, uint32_t buf) {
    if (max <= 0 || buf == 0) return gp_u32(arr);
    W(arr, 0) = 0;
    W(arr, 4) = (uint32_t)max;
    W(arr, 8) = buf;
    return gp_u32(arr) + 4;              /* r0 after `str r3, [r0], #4` */
}

/* USA 0010B380 sead::PtrArrayImpl::allocBuffer(s32 max, Heap *heap, s32 align): max <= 0 ->
 * nothing; p = operator new[](max * 4, heap, align) (0010CEE0); if (p) { mPtrs = p; mPtrNum = 0;
 * mPtrNumMax = max; }. Callers `int f(undefined4 *, int, int *, undefined4)`. Matched source
 * exists (same behaviour). Confidence: high. */
uint32_t func_0010B380(void *arr, int32_t max, void *heap, int32_t align) {
    if (max <= 0) return gp_u32(arr);    /* bxle lr: r0 = this */
    void *p = func_0010CEE0((uint32_t)max << 2, heap, align);
    if (!p) return 0;
    W(arr, 8) = gp_u32(p);
    W(arr, 0) = 0;
    W(arr, 4) = (uint32_t)max;
    return gp_u32(p);                    /* r0 = the buffer (one caller tail-returns it) */
}

/* USA 0010B3C0 sead::PtrArrayImpl::checkInsert(s32 idx, s32 num) -> bool (r0 0/1):
 *   idx >= 0 && mPtrNumMax >= mPtrNum + num && mPtrNum >= idx        (all signed)
 * (`cmp r1, #0; blt` / `cmp max, num + n; cmpge count, idx; movge r0, #1`). Callers
 * `int f(int *, int, int)`. Confidence: high. */
uint32_t func_0010B3C0(void *arr, int32_t idx, int32_t num) {
    if (idx < 0) return 0;
    int32_t cnt = FLD(arr, 0, int32_t), max = FLD(arr, 4, int32_t);
    int32_t need = (int32_t)((uint32_t)num + (uint32_t)cnt);   /* `add r2, r2, r3` wraps */
    return (max >= need && cnt >= idx) ? 1u : 0u;
}
