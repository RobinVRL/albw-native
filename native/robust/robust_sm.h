/* Shared body of the game's state-machine changeState(sm, newState) template (one copy per
 * owner class in the binary; 303 of the class-B functions are byte-identical instances of it,
 * see PRIORITY.md). Documented and verified in func_0065B158.c. */
#ifndef ALBW_ROBUST_SM_H
#define ALBW_ROBUST_SM_H
#include "robust.h"
#include "sead.h"

extern uint32_t data_006F5988; /* sead::SafeStringBase<char> vtable */
void func_0010BEB4(void *model, sead_SafeString *name);

typedef void (*sm_exit_fn)(char *self, uint32_t newState);
typedef void (*sm_enter_fn)(char *self);
typedef void (*vfn_self)(char *self);

static inline void albw_sm_change_state(char *sm, uint32_t newState) {
    int8_t cur = FLD(sm, 0x04, int8_t);
    if (cur != -1) {
        const albw_pmf *m = FLD(sm, 0x20, albw_pmf * ALBW_GP) + cur;
        if (albw_pmf_valid(m)) {
            char *self = albw_pmf_this(m, FLD(sm, 0x14, char * ALBW_GP));
            ((sm_exit_fn)albw_pmf_fn(m, self))(self, newState);
        }
    }
    uint8_t prev = FLD(sm, 0x04, uint8_t);
    FLD(sm, 0x04, uint8_t) = (uint8_t)newState;
    FLD(sm, 0x00, uint32_t) = 0;
    FLD(sm, 0x05, uint8_t) = prev;
    if (FLD(sm, 0x10, void * ALBW_GP) != 0) {
        int32_t idx = FLD(sm, 0x04, int8_t);
        char *e = FLD(sm, 0x0C, char * ALBW_GP);
        if ((uint32_t)idx < FLD(sm, 0x08, uint32_t))
            e += idx * 0x24;
        ((vfn_self)FLD(FLD(e, 0, char * ALBW_GP), 0x08, void * ALBW_GP))(e);
        sead_SafeString name;
        name.vtbl = ALBW_LAUNDER(&data_006F5988); /* gptr.h: symbol -> 4-byte word */
        name.mStringTop = FLD(e, 0x04, const char * ALBW_GP);
        func_0010BEB4(FLD(sm, 0x10, void * ALBW_GP), &name);
    }
    const albw_pmf *m = FLD(sm, 0x18, albw_pmf * ALBW_GP) + FLD(sm, 0x04, int8_t);
    if (albw_pmf_valid(m)) {
        char *self = albw_pmf_this(m, FLD(sm, 0x14, char * ALBW_GP));
        ((sm_enter_fn)albw_pmf_fn(m, self))(self);
    }
}

#endif
