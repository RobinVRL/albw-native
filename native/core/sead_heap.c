/* sead::Heap / HeapMgr tree walks and the disposer list (hand-written from the EU disassembly).
 * native/sdk/memory.c replaces operator new/delete and the OS memory layer and leaves the sead
 * heap internals decompiled; these are the heap-tree helpers it calls (findContainHeap) and the
 * disposer-list operations every IDisposer destructor reaches. Nothing here is defined in
 * memory.c. Layout (32-bit game words):
 *   Heap +0x00 vtbl (slot 0x40: bool isInclude(const void *))
 *        +0x24 mParent
 *        +0x28 mChildren  OffsetList {prev @0x28, next @0x2C, count @0x30, offset @0x34}
 *        +0x40 mDisposerList OffsetList {prev @0x40, next @0x44, count @0x48, offset @0x4C}
 *        +0x54 mCS (CriticalSection; lock 0010C0B8 / unlock 0010EEE0)
 *        +0x70 mFlag (bit 0 = thread safe, bit 1 = disposing)
 *   IDisposer +0 vtbl (slot 0 = destructor), +4 mDisposerHeap
 *   HeapMgr statics: sRootHeaps PtrArray @data_0079E048 {num, max, ptrs},
 *                    sIndependentHeaps @data_0079E080, sHeapTreeLockCS @data_0079E064. */
#include "core.h"

#define W(p, off) FLD(p, off, uint32_t)
#define P(w) ((char *)gp_ptr(w))

void func_0010C0B8(void *cs);            /* CriticalSection::lock (native/sdk/os.c) */
int func_0010EEE0(void *cs);             /* CriticalSection::unlock */
void *func_0010E294(const void *tls);    /* nn::os::ThreadLocalStorage::GetValue (memory.c proto) */
extern uint32_t data_00715430;           /* sead::ThreadMgr::sInstance */
extern uint8_t data_0079E048[];          /* HeapMgr::sRootHeaps */
extern uint8_t data_0079E064[];          /* HeapMgr::sHeapTreeLockCS */
extern uint8_t data_0079E080[];          /* HeapMgr::sIndependentHeaps */

void albw_sead_listnode_erase(void *node);   /* sead_list.c (0010F1F8 body) */

typedef uint32_t (*heap_isinclude_fn)(void *self, const void *p);
typedef void (*disposer_dtor_fn)(void *self);

static uint32_t heap_is_include(char *heap, const void *p) {
    return GFN(heap_isinclude_fn, W(P(W(heap, 0)), 0x40))(heap, p);
}

/* lock the heap's CS when it is thread safe; returns the CS to unlock (or 0) */
static char *heap_lock(char *heap) {
    if (!(W(heap, 0x70) & 1)) return 0;
    func_0010C0B8(heap + 0x54);
    return heap + 0x54;
}

/* USA 0010EF18 sead::Heap::findContainHeap_(const void *ptr) -> Heap*:
 *   if (!isInclude(ptr)) return 0;
 *   lock; for (child in mChildren) if (child->isInclude(ptr)) { r = child->findContainHeap_(ptr);
 *   unlock; return r; }  unlock; return this;
 * The child walk reads the list offset once for `next` (r7) and again for the end test each
 * iteration (as the ARM does). One caller (0010E2A4); recursive. Confidence: high. */
void *func_0010EF18(void *self, uint32_t ptr_word) {
    char *h = self;
    const void *ptr = gp_ptr(ptr_word);
    if (!heap_is_include(h, ptr)) return 0;
    char *cs = heap_lock(h);
    uint32_t off = W(h, 0x34);
    uint32_t cur = W(h, 0x2C) - off;
    while (cur != gp_u32(h) + 0x28 - W(h, 0x34)) {
        if (heap_is_include(P(cur), ptr)) {
            void *r = func_0010EF18(P(cur), ptr_word);
            if (cs) func_0010EEE0(cs);
            return r;
        }
        cur = W(P(cur + off), 4) - off;
    }
    if (cs) func_0010EEE0(cs);
    return h;
}

static void *find_in_array(uint8_t *arr, uint32_t ptr) {
    uint32_t n = W(arr, 0);
    uint32_t it = W(arr, 8), end = it + (n << 2);
    for (; it != end; it += 4) {
        void *r = func_0010EF18(P(W(P(it), 0)), ptr);
        if (r) return r;
    }
    return 0;
}

/* USA 0010E2A4 sead::HeapMgr::findContainHeap(const void *ptr) -> Heap* (this unused: r0 is
 * overwritten with the tree-lock CS):
 *   lock sHeapTreeLockCS;
 *   if (ThreadMgr::sInstance && (t = current thread (TLS +0x24)) && (h = t->mCurrentHeap @+0x68)
 *       && (r = h->findContainHeap_(ptr))) { unlock; return r; }
 *   for (h in sRootHeaps) if ((r = h->findContainHeap_(ptr))) { unlock; return r; }
 *   for (h in sIndependentHeaps) if ((r = ...)) { unlock; return r; }
 *   unlock; return 0;
 * Callers `int f(undefined4, undefined4)` (11 files; memory.c passes pointers): both taken as
 * 32-bit words. Confidence: high. */
uint32_t func_0010E2A4(uint32_t heap_mgr, uint32_t ptr) {
    (void)heap_mgr;
    void *r = 0;
    func_0010C0B8(data_0079E064);
    if (data_00715430) {
        char *t = func_0010E294(P(data_00715430 + 0x24));
        if (t && W(t, 0x68)) r = func_0010EF18(P(W(t, 0x68)), ptr);
    }
    if (!r) r = find_in_array(data_0079E048, ptr);
    if (!r) r = find_in_array(data_0079E080, ptr);
    func_0010EEE0(data_0079E064);
    return gp_u32(r);
}

/* USA 0049AFE4 (EU 0049AFBC) sead::Heap::removeDisposer_(IDisposer *d): lock (if thread
 * safe); erase_ the node at d + mDisposerList.offset (0010F1F8); --count; unlock.
 * Callers `int f(int, int)` (18 files). Confidence: high. */
void func_0049AFE4(uint32_t heap, uint32_t disposer) {
    char *h = P(heap);
    char *cs = heap_lock(h);
    albw_sead_listnode_erase(P(W(h, 0x4C) + disposer));
    W(h, 0x48) = W(h, 0x48) - 1;
    if (cs) func_0010EEE0(cs);
}

/* USA 0049B044 (EU 0049B01C) sead::Heap::dispose_(const void *begin, const void *end): with
 * mFlag bit 1 set, destroy every disposer whose mDisposerHeap (+4) is set and that lies in
 * [begin, end) (unsigned; no range when begin|end == 0) through its virtual slot 0 (the
 * destructor unlinks it), restarting from the list head after each call; then clear bit 1.
 * Callers `int f(int, undefined4 *, undefined4 *)` (4 files). Confidence: high. */
void func_0049B044(uint32_t heap, uint32_t begin, uint32_t end) {
    char *h = P(heap);
    uint32_t any = begin | end;
    W(h, 0x70) |= 2;
    uint32_t off = W(h, 0x4C);
    uint32_t cur = W(h, 0x44) - off;
    for (;;) {
        uint32_t off2 = W(h, 0x4C);
        if (cur == heap + 0x40 - off2) break;
        char *d = P(cur);
        if (W(d, 4) != 0 && (!any || (begin <= cur && cur < end))) {
            GFN(disposer_dtor_fn, W(P(W(d, 0)), 0))(d);
            off = W(h, 0x4C);
            cur = W(h, 0x44) - off;
            continue;
        }
        cur = W(P(cur + off), 4) - off;
    }
    W(h, 0x70) &= ~2u;
}

/* USA 0049B0E4 (EU 0049B0BC) sead::Heap::destruct_(): lock self (if thread safe); dispose_(0,0);
 * if (mParent) { lock parent (if thread safe); erase_ this from the parent's mChildren
 * (node = this + parent's list offset @0x34); --parent count @0x30; unlock parent } unlock self.
 * Callers `int f(int)` (3 files). Confidence: high. */
void func_0049B0E4(uint32_t heap) {
    char *h = P(heap);
    char *cs = heap_lock(h);
    func_0049B044(heap, 0, 0);
    uint32_t parent = W(h, 0x24);
    if (parent) {
        char *pp = P(parent);
        char *pcs = heap_lock(pp);
        albw_sead_listnode_erase(P(W(pp, 0x34) + heap));
        W(pp, 0x30) = W(pp, 0x30) - 1;
        if (pcs) func_0010EEE0(pcs);
    }
    if (cs) func_0010EEE0(cs);
}
