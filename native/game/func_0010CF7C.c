/* USA 0010CF7C (EU 0010CF7C): StateMgr::changeState(s8 newState) (same code as the family of
 * 303 byte-identical copies, e.g. 006563C8; the shared matched source is not used for twins).
 *
 * Layout (32-bit, as on the 3DS): +0 frame counter, +4 s8 state, +5 s8 previous state,
 * +8 u32 number of named states, +0xC array of 0x24-byte state-name objects, +0x10 model/anim
 * object (or 0), +0x14 owner, +0x18 enter table, +0x20 exit table. The tables hold ARM C++
 * pointers-to-member-function {ptr, adj}: this = owner + (adj >> 1); if adj bit 0 is set the
 * function is virtual and ptr is an offset into this's vtable. A null PMF is ptr == 0 with
 * adj bit 0 clear.
 * Rewritten from the EU disassembly: Ghidra lost the `this` argument of both PMF calls (and
 * the exit call's new-state argument, still in r1), so the calls jumped through garbage.
 * Confidence: high. */
#include <stdint.h>

extern uint32_t data_006F5988[];      /* sead::SafeString vtable */
void func_0010BEB4(void *anim, void *name);

typedef struct { uint32_t ptr, adj; } Pmf;

static void *pmf_resolve(uint32_t owner, const Pmf *p, uint32_t *self)
{
    if (p->ptr == 0 && !((p->adj & 1) && p->adj != 0))
        return 0;
    *self = owner + ((int32_t)p->adj >> 1);
    uint32_t fn = p->ptr;
    if (p->adj & 1)
        fn = *(uint32_t *)(uintptr_t)(*(uint32_t *)(uintptr_t)*self + fn);
    return (void *)(uintptr_t)fn;
}

void func_0010CF7C(uint8_t *mgr, int32_t new_state)
{
    uint32_t owner = *(uint32_t *)(mgr + 0x14);
    int8_t s = (int8_t)mgr[4];
    if (s != -1) {
        uint32_t self;
        void *fn = pmf_resolve(owner, (const Pmf *)(uintptr_t)*(uint32_t *)(mgr + 0x20) + s, &self);
        if (fn)
            ((void (*)(uint32_t, int32_t))fn)(self, new_state);       /* exit(newState) */
    }
    uint8_t prev = mgr[4];
    mgr[4] = (uint8_t)new_state;
    *(uint32_t *)mgr = 0;
    mgr[5] = prev;

    uint32_t anim = *(uint32_t *)(mgr + 0x10);
    if (anim) {
        int32_t idx = (int8_t)mgr[4];
        uint32_t names = *(uint32_t *)(mgr + 0xC);
        uint32_t entry = (*(uint32_t *)(mgr + 8) > (uint32_t)idx) ? names + (uint32_t)idx * 0x24 : names;
        uint32_t *e = (uint32_t *)(uintptr_t)entry;
        ((void (*)(uint32_t *))(uintptr_t)(*(uint32_t *)(uintptr_t)(e[0] + 8)))(e);
        uint32_t tmp[2] = { (uint32_t)(uintptr_t)data_006F5988, e[1] };
        func_0010BEB4((void *)(uintptr_t)anim, tmp);
    }

    int8_t ns = (int8_t)mgr[4];
    uint32_t self;
    owner = *(uint32_t *)(mgr + 0x14);
    void *fn = pmf_resolve(owner, (const Pmf *)(uintptr_t)*(uint32_t *)(mgr + 0x18) + ns, &self);
    if (fn)
        ((void (*)(uint32_t))fn)(self);                                /* enter() */
}
