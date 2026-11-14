/* Helpers shared by the hand-rewritten functions in native/robust/ (see PRIORITY.md).
 *
 * The game's data keeps its 32-bit layout (structures at their original offsets), so a field
 * is read as a typed access at its byte offset from a char* base. Pointer fields are read and
 * written with pointer types (FLD(p, off, Foo *)): on the 32-bit build this is the game's layout
 * exactly; for the 64-bit build those structures get native layouts, and these accesses are the
 * places that will need a struct instead (they are greppable as FLD(..., *) ). In the x86-64
 * low-4GB build they are written FLD(p, off, T * ALBW_GP): a 4-byte game word (gptr.h). */
#ifndef ALBW_ROBUST_H
#define ALBW_ROBUST_H

#include <stdint.h>
#include <string.h>
#include "gptr.h" /* ALBW_GP: 4-byte game pointer words on x86-64, empty on 32-bit */

/* typed lvalue for the field at byte offset `off` of object `p` */
#define FLD(p, off, T) (*(T *)((char *)(p) + (off)))
/* address of the field at byte offset `off` of object `p` */
#define AT(p, off) ((char *)(p) + (off))

/* ARM C++ ABI pointer-to-member-function, as stored in the game's data:
 *   ptr: function address (non-virtual) or vtable byte offset (virtual)
 *   adj: (this adjustment << 1) | is_virtual */
typedef struct albw_pmf {
    void *ALBW_GP ptr;
    int32_t adj;
} albw_pmf;

/* is the PMF non-null (ARM ABI test: ptr != 0 || (adj & 1)) */
static inline int albw_pmf_valid(const albw_pmf *m) {
    return m->ptr != 0 || (m->adj & 1) != 0;
}

/* the adjusted `this` for calling the PMF on object `obj` */
static inline char *albw_pmf_this(const albw_pmf *m, void *obj) {
    return (char *)obj + (m->adj >> 1);
}

/* the function the PMF designates on the adjusted object `self` */
static inline void *albw_pmf_fn(const albw_pmf *m, const char *self) {
    if (m->adj & 1) {  /* virtual: ptr is a byte offset into the vtable */
        const char *vt = *(char *const ALBW_GP *)self;
        return *(void *const ALBW_GP *)(vt + (intptr_t)m->ptr);
    }
    return m->ptr;
}

#endif
