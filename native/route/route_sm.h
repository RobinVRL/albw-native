/* StateMgr::changeState variant "T6" (native/robust/tools/b_templates.json): 7 byte-identical
 * copies (0066BE5C 0066BF2C 0066C0CC 0066D544 0066E7A0 0066BFFC 0066E58C) that call the
 * out-of-line state setter 003931EC between the exit and enter handlers.
 * Layout as in native/game/func_0010CF7C.c: +4 s8 state, +0x14 owner, +0x18 enter table,
 * +0x20 exit table (route_pmf). The armcc null test of a PMF: ptr != 0 || (adj odd && adj != 0).
 * Verified on EU 0066BE34..0066BF00 (all 7 normalise to the same instruction sequence):
 *   exit:  r0 = adjusted owner, r1 = newState (still in r5) -> blx
 *   003931EC(sm, (s8)newState)            (sxtb r1, r5)
 *   enter: r0 = adjusted owner, tail `bx r1` (r1 = the handler address, no further argument). */
#ifndef ALBW_ROUTE_SM_H
#define ALBW_ROUTE_SM_H
#include "route.h"

void func_003931EC(void *sm, uint32_t state);

static inline int route_pmf_nonnull(const route_pmf *m)
{
    return m->ptr != 0 || ((m->adj & 1) != 0 && m->adj != 0);
}

static inline void route_sm_change_state_t6(char *sm, uint32_t newState)
{
    int8_t cur = RF(sm, 4, int8_t);
    if (cur != -1) {
        const route_pmf *m = GPTR_TO(const route_pmf, RF(sm, 0x20, uint32_t)) + cur;
        if (route_pmf_nonnull(m)) {
            char *self;
            void *fn = route_pmf_resolve(m, RP(sm, 0x14), &self);
            ((void (*)(char *, uint32_t))fn)(self, newState);
        }
    }
    func_003931EC(sm, (uint32_t)(int32_t)(int8_t)newState);
    const route_pmf *m = GPTR_TO(const route_pmf, RF(sm, 0x18, uint32_t)) + RF(sm, 4, int8_t);
    if (route_pmf_nonnull(m)) {
        char *self;
        void *fn = route_pmf_resolve(m, RP(sm, 0x14), &self);
        ((void (*)(char *))fn)(self);
    }
}
#endif
