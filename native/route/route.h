/* Helpers shared by the route fixes in native/route/ (see ROUTE.md).
 *
 * Game objects keep their 32-bit layout: fields are typed accesses at their byte offsets from a
 * char * base; pointer fields are 4-byte game words (gptr.h: ALBW_GP / GPTR_TO / GFN), so the
 * same source is correct for -m32 and for the x86-64 low-4GB build. */
#ifndef ALBW_ROUTE_H
#define ALBW_ROUTE_H

#include <stdint.h>
#include <string.h>
#include "gptr.h"

/* typed lvalue for the field at byte offset `off` of object `p` */
#define RF(p, off, T) (*(T *)((char *)(p) + (off)))
/* a 4-byte pointer field of game memory, read as a host pointer */
#define RP(p, off) GPTR_TO(char, RF(p, off, uint32_t))
/* address of the field at byte offset `off` */
#define RAT(p, off) ((char *)(p) + (off))
/* store a host pointer into a 4-byte game pointer field */
#define RSETP(p, off, v) (RF(p, off, uint32_t) = GPTR_OF(v))

/* virtual function slot `off` (byte offset) of the object `obj` (vtable pointer at +0) */
#define RVFN(FnT, obj, off) GFN(FnT, RF(RP(obj, 0), off, uint32_t))

/* ARM C++ pointer-to-member-function as stored in game data: {ptr, adj};
 * this = base + (adj >> 1); adj bit 0 set = virtual, ptr is a vtable byte offset. */
typedef struct { uint32_t ptr; int32_t adj; } route_pmf;

/* The armcc call sequence of a PMF entry `m` on object `base` WITHOUT a null check (the
 * inlined StateMgr::exec does none): returns the function and sets *self to the adjusted this. */
static inline void *route_pmf_resolve(const route_pmf *m, char *base, char **self)
{
    char *t = base + (m->adj >> 1);
    uint32_t fn = m->ptr;
    if (m->adj & 1)
        fn = RF(RP(t, 0) + m->ptr, 0, uint32_t);
    *self = t;
    return GPTR_TO(void, fn);
}

/* sead-style StateMgr embedded in a task/actor (same layout as native/game/func_0010CF7C.c):
 * +0 u32 frame counter, +4 s8 state, +5 s8 previous, +0x10 animation object (or 0),
 * +0x14 owner, +0x18 enter table, +0x1C exec table, +0x20 exit table (route_pmf arrays). */
void func_00352210(void *anim, int a, float frame); /* anim: set frame (s0) */

/* the inlined StateMgr::exec found in the task calc functions:
 *   exec[state](owner adjusted); ++counter; if (anim) 00352210(anim, 1, (float)(u32)counter) */
static inline void route_statemgr_exec(char *sm)
{
    int8_t s = RF(sm, 4, int8_t);
    const route_pmf *tbl = GPTR_TO(const route_pmf, RF(sm, 0x1C, uint32_t));
    char *self;
    void *fn = route_pmf_resolve(&tbl[s], RP(sm, 0x14), &self);
    ((void (*)(char *))fn)(self);
    uint32_t n = RF(sm, 0, uint32_t) + 1;
    RF(sm, 0, uint32_t) = n;
    char *anim = RP(sm, 0x10);
    if (anim)
        func_00352210(anim, 1, (float)n); /* vcvt.f32.u32 */
}

/* sead::SafeString temporary {vtable 006F5988, const char *} as built on the ARM stack */
extern uint32_t data_006F5988[];
typedef struct { uint32_t vt; uint32_t str; } route_safestr;
static inline route_safestr route_safestr_make(const char *s)
{
    route_safestr r = { GPTR_OF(data_006F5988), GPTR_OF(s) };
    return r;
}

/* ARM vcvt.s32.f32 (round toward zero, saturating, NaN -> 0); x86 cvttss2si gives 0x80000000 */
static inline int32_t route_vcvt_s32(float f)
{
    if (f != f)
        return 0;
    if (f >= 2147483648.0f)
        return INT32_MAX;
    if (f <= -2147483648.0f)
        return INT32_MIN;
    return (int32_t)f;
}

/* ARM vcvt.u32.f32 (round toward zero, saturating to [0, UINT32_MAX], NaN -> 0) */
static inline uint32_t route_vcvt_u32(float f)
{
    if (!(f > 0.0f))
        return 0;
    if (f >= 4294967296.0f)
        return UINT32_MAX;
    return (uint32_t)f;
}

#endif
