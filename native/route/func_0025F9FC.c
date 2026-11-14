/* USA 0025F9FC (EU 0025FA24): title-screen object reset / "go to state 2" (called by
 * TaskFileSelect::calc 0029B698 with (obj = *(task+0xEC), 1) when Start/A is pressed on the
 * title): optionally resets the object's animation frame (+0x7C, *(+0x74)->+0x14 frame/rate,
 * effect 004A1B00), then the inlined StateMgr::changeState(sm = obj+0x48, 2) unless already 2.
 * Route: title screen -> file select transition.
 * Bug: class-B single (b_templates single_0025F9FC): the enter handler tail call was emitted as
 * `(*UNRECOVERED_JUMPTABLE)()` without `this`.
 * Verified instruction by instruction against EU 0025FA24..0025FBC0: vcmp `beq` (NaN -> store),
 * 0.0f stores, exit PMF (r0 = adjusted owner, r1 = 2) with the armcc null test
 * (ptr != 0 || (adj odd && adj != 0)), state/prev/counter update, anim name entry 2
 * (`cmp count, #2; ldrhi`), enter PMF tail call.  Confidence: high. */
#include "route.h"

extern uint32_t data_006F5988[];
void func_004A1B00(int obj);
void func_0010BEB4(void *anim, void *name);

static int pmf_nonnull(const route_pmf *m)
{
    return m->ptr != 0 || ((m->adj & 1) != 0 && m->adj != 0);
}

void func_0025F9FC(char *self, int reset)
{
    if (reset != 0) {
        RF(self, 0x7C, float) = 0.0f;
        char *f = RP(RP(self, 0x74), 0x14);
        float want = RF(f, 0x14, float);
        if (!(RF(f, 8, float) == want)) {
            RF(f, 8, float) = want;
            RF(f, 0x26, uint8_t) = 1;
        }
        RF(RP(RP(self, 0x74), 0x14), 0x10, float) = 0.0f;
        if (RF(self, 0x24, uint32_t) != 0)
            func_004A1B00((int)RF(self, 0x24, uint32_t));
    }
    char *sm = RAT(self, 0x48);
    int8_t cur = RF(sm, 4, int8_t);
    if (cur == 2)
        return;
    if (cur != -1) {
        const route_pmf *m = GPTR_TO(const route_pmf, RF(sm, 0x20, uint32_t)) + cur;
        if (pmf_nonnull(m)) {
            char *t;
            void *fn = route_pmf_resolve(m, RP(sm, 0x14), &t);
            ((void (*)(char *, uint32_t))fn)(t, 2);
        }
    }
    uint8_t prev = RF(sm, 4, uint8_t);
    RF(sm, 4, uint8_t) = 2;
    RF(sm, 0, uint32_t) = 0;
    RF(sm, 5, uint8_t) = prev;
    if (RF(sm, 0x10, uint32_t) != 0) {
        char *e = RF(sm, 8, uint32_t) > 2 ? RP(sm, 0xC) + 0x48 : RP(sm, 0xC);
        RVFN(void (*)(char *), e, 8)(e);
        route_safestr name = { GPTR_OF(data_006F5988), RF(e, 4, uint32_t) };
        func_0010BEB4(RP(sm, 0x10), &name);
    }
    const route_pmf *m = GPTR_TO(const route_pmf, RF(sm, 0x18, uint32_t)) + RF(sm, 4, int8_t);
    if (pmf_nonnull(m)) {
        char *t;
        void *fn = route_pmf_resolve(m, RP(sm, 0x14), &t);
        ((void (*)(char *))fn)(t);
    }
}
