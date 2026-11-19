/* ARM-ABI pointer-to-member calls for matched C++ sources (tools/pmf_call_fix.py rewrites every
 * `(obj->*pmf)(args)` into ALBW_PMF_CALL(obj, pmf, args)).
 * The game's state tables hold ARM PMFs {ptr, adj}: virtual when (adj & 1), ptr = vtable byte
 * offset, this += adj >> 1. The x86 Itanium ABI expects {ptr, adj} with virtual when (ptr & 1),
 * vtable offset = ptr - 1, this += adj. A virtual ARM entry {0x10, 1} was read as the address
 * 0x10 (state machine 00231E58: crash at a warp hole). Both layouts are accepted: x86 member
 * function addresses are even (the Itanium ABI relies on that), so (ptr & 1) without (adj & 1)
 * can only be an x86 virtual entry. */
#ifndef ALBW_PMF_HPP
#define ALBW_PMF_HPP
#include <string.h>
#include <stdint.h>

template <class P> struct albw_pmf_traits;
template <class C, class R, class... A> struct albw_pmf_traits<R (C::*)(A...)> { typedef R ret; };
template <class C, class R, class... A> struct albw_pmf_traits<R (C::*)(A...) const> { typedef R ret; };

template <class O, class P, class... A>
inline typename albw_pmf_traits<P>::ret albw_pmf_call(O *obj, P pm, A... args) {
    typedef typename albw_pmf_traits<P>::ret R;
    struct { uintptr_t ptr; intptr_t adj; } m;
    memcpy(&m, &pm, sizeof m);
    char *self;
    void *fn;
    if (m.adj & 1) {                         /* ARM virtual */
        self = (char *)obj + (m.adj >> 1);
        fn = *(void **)(*(char **)self + m.ptr);
    } else if (m.ptr & 1) {                  /* x86 Itanium virtual */
        self = (char *)obj + m.adj;
        fn = *(void **)(*(char **)self + (m.ptr - 1));
    } else {                                 /* non-virtual (ARM: adj = 2 * this offset) */
        self = (char *)obj + (m.adj >> 1);
        fn = (void *)m.ptr;
    }
    if (!fn) return R();
    return ((R (*)(void *, A...))fn)(self, args...);
}
#define ALBW_PMF_CALL(obj, pm, ...) albw_pmf_call((obj), (pm), ##__VA_ARGS__)
#endif
