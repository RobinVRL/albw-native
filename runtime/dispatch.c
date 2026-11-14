/* Indirect calls: guest code address -> recompiled host function. */
#include <stdlib.h>
#include "runtime.h"

extern const DispatchEntry g_dispatch[];
extern const unsigned g_dispatch_count;

GuestFn lookup_fn(uint32_t addr) {
    unsigned lo = 0, hi = g_dispatch_count;
    while (lo < hi) {
        unsigned mid = (lo + hi) / 2;
        if (g_dispatch[mid].addr < addr) lo = mid + 1;
        else hi = mid;
    }
    return lo < g_dispatch_count && g_dispatch[lo].addr == addr ? g_dispatch[lo].fn : NULL;
}

static void dump(CPU *c) {
    for (int i = 0; i < 16; i += 4)
        LOG("  r%-2d %08x  r%-2d %08x  r%-2d %08x  r%-2d %08x", i, c->r[i], i + 1, c->r[i + 1],
            i + 2, c->r[i + 2], i + 3, c->r[i + 3]);
}

void dispatch(CPU *c, uint32_t addr) {
    GuestFn f = lookup_fn(addr & ~1u);  /* bit 0 = Thumb; Thumb functions are keyed by their even address */
    if (!f) {
        LOG("FATAL: indirect call to %08x: no recompiled function there (thread %d, lr %08x)",
            addr, c->thread_id, c->r[14]);
        dump(c);
        abort();
    }
    f(c);
}

void unimpl(CPU *c, uint32_t addr, uint32_t word) {
    LOG("FATAL: unimplemented instruction %08x at %08x (thread %d)", word, addr, c->thread_id);
    dump(c);
    abort();
}

void thumb_call(CPU *c, uint32_t addr) { dispatch(c, addr | 1); }
