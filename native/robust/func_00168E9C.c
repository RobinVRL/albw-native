/* USA 00168E9C <- EU 00168E9C: animation-blend update of a model's animation-slot set
 * (called by 269 actor update functions as func_00168E9C(slots, model, force)).
 *
 * self (slots):  +0x00 int   "blend disabled"  (0: blending runs)
 *                +0x0C/+0x14 count / buffer of the current slots (40-byte elements)
 *                +0x18/+0x20 count / buffer of the previous slots (40-byte elements)
 *                +0x88 float blend remaining, +0x8C float blend step
 *                +0x90/+0x94 count / buffer of the bind entries (20-byte elements)
 * slot (40 B):   +4 holder (holder->[0] = anim object), +8 float frame, +0xC float prev frame,
 *                +0x20 float weight, +0x24 s8 bind index, +0x26 s8 changed flag
 * anim object:   +5 u8 kind (0 skeletal, 1, 2), +0xC -> -> +6 u16 sub-kind
 * model (ctx):   +0x20, +0x24, +0x28 (embedded), +0x34 (embedded: +0 float buffer, +4 count)
 *
 *  if !disabled && remaining > 0: remaining -= step; if (bits)remaining <= (bits)0.01: remaining = 0
 *  if remaining > 0 && !disabled:  (cross-fade)
 *      for previous slots of kind 0: weight*remaining -> 0069077C (sub-kind != 9) / 006905DC (== 9)
 *      for current slots of kind 0:  weight*(1-remaining) -> same pair of calls
 *      00678674(&model->34, model->24); zero model->34's float buffer (count model->38)
 *  else: for each current slot with changed||force: apply by kind (006905DC / 0051E940+00567588 /
 *        00567F30), then slot->changed = (frame != prevFrame).
 *
 * What was wrong in the Ghidra version: (1) the float fields +0x88/+0x8C were read through the
 * int array with C value casts ((float)param_1[0x22], param_1[0x22] = (int)f), which converts
 * instead of reinterpreting, so the blend timer was garbage; (2) the sub-kind-9 call passed
 * &stack0xffffffc0 (an address outside any modelled local) as the frame pair; (3) in_r12 /
 * extraout_r1 were Ghidra artifacts of the conditional `addhi ip` sequences and of r1 left over by
 * the calls. The function returns nothing; callers that read r1 after it (extraout_r1, e.g.
 * 005148C8 passing it to 00169A80) only fill an argument 00169A80 never reads (benign).
 *
 * Verified against EU 00168E9C-001692F4 instruction by instruction: index tests are unsigned
 * (`cmp count, idx; ...hi`), loop bounds signed (`bgt`); 0.01 test is a signed integer compare of
 * the float bits (vmov r0, s0; cmp r0, r2; vstrle); NaN-safe compares follow vcmpe/ble (only
 * ordered `> 0` continues); changed = vcmp ne (true for NaN). Pair buffers: [sp+8..] for
 * 0069077C, [sp+0..] for 006905DC in the cross-fade loops, [sp+8..] for the apply path.
 * The final zeroing loop is `do { buf[i++] = 0; } while (i <= count - 1)` (unsigned), kept as is.
 * Confidence: high for control flow and offsets; medium for field names. Callees 006905DC,
 * 0069077C and 00567588 are themselves Ghidra functions with class-A defects (unmodelled s-regs). */
#include "robust.h"

void func_0069077C(void *anim, void *ctx24, void *ctx34, void *entry, float *pair, float weight);
void func_006905DC(void *anim, void *ctx24, void *entry, void *pair);
int func_00678674(void *ctx34, void *ctx24);
void func_0051E940(void *holder, void *model);
void func_00567588(void *anim, void *ctx20, void *entry, void *p4, void *p5, float frame);
void func_00567F30(void *anim, void *ctx28, void *entry, float frame);

#define SLOT(base, cnt, i) ((cnt) > (uint32_t)(i) ? (base) + (uint32_t)(i) * 40 : (base))
#define BIND(self, idx) \
    ((uint32_t)FLD(self, 0x90, int32_t) > (uint32_t)(int32_t)(idx) \
         ? FLD(self, 0x94, char *) + (int32_t)(idx) * 20 : FLD(self, 0x94, char *))

/* cross-fade one slot (loops at 00168FD0 and 001690E8) */
static void fade_slot(char *self, char *model, char *slot, float weight) {
    char *anim = *FLD(slot, 4, char **);
    char *entry = BIND(self, FLD(slot, 0x24, int8_t));
    if (FLD(anim, 5, uint8_t) != 0)
        return;
    uint32_t pair[2];
    pair[0] = FLD(slot, 8, uint32_t);
    pair[1] = FLD(entry, 8, uint32_t);
    if (FLD(*FLD(anim, 0xC, char **), 6, uint16_t) != 9)
        func_0069077C(anim, FLD(model, 0x24, void *), AT(model, 0x34), entry, (float *)pair, weight);
    else
        func_006905DC(anim, FLD(model, 0x24, void *), entry, pair);
}

void func_00168E9C(char *self, char *model, int force) {
    int disabled = FLD(self, 0, int32_t);
    if (disabled == 0) {
        float rem = FLD(self, 0x88, float);
        if (rem > 0.0f) {
            float v = rem - FLD(self, 0x8C, float);
            int32_t bits;
            FLD(self, 0x88, float) = v;
            memcpy(&bits, &v, 4);
            if (bits <= 0x3C23D70A)  /* signed compare with the bits of 0.01f */
                FLD(self, 0x88, float) = 0.0f;
        }
    }
    if (FLD(self, 0x88, float) > 0.0f && disabled == 0) {
        /* previous slots fade out */
        for (int32_t j = 0; FLD(self, 0x18, int32_t) > j; j++) {
            char *slot = SLOT(FLD(self, 0x20, char *), (uint32_t)FLD(self, 0x18, int32_t), j);
            fade_slot(self, model, slot, FLD(slot, 0x20, float) * FLD(self, 0x88, float));
        }
        /* current slots fade in */
        float in = 1.0f - FLD(self, 0x88, float);
        for (int32_t k = 0; FLD(self, 0x0C, int32_t) > k; k++) {
            char *slot = SLOT(FLD(self, 0x14, char *), (uint32_t)FLD(self, 0x0C, int32_t), k);
            fade_slot(self, model, slot, FLD(slot, 0x20, float) * in);
        }
        func_00678674(AT(model, 0x34), FLD(model, 0x24, void *));
        uint32_t last = FLD(model, 0x38, uint32_t) - 1, i = 0;
        do {
            FLD(model, 0x34, float *)[i] = 0.0f;
            i++;
        } while (i <= last);
        return;
    }
    for (int32_t i = 0; FLD(self, 0x0C, int32_t) > i; i++) {
        char *slot = SLOT(FLD(self, 0x14, char *), (uint32_t)FLD(self, 0x0C, int32_t), i);
        uint8_t changed = FLD(slot, 0xC, float) != FLD(slot, 8, float);
        if (FLD(slot, 0x26, uint8_t) == 0)
            FLD(slot, 0x26, uint8_t) = changed;
        if ((FLD(slot, 0x26, int8_t) | force) == 0)
            continue;
        int8_t idx = FLD(slot, 0x24, int8_t);
        char *holder = FLD(slot, 4, char *);
        char *entry = BIND(self, idx);
        char *anim = *(char **)holder;
        switch (FLD(anim, 5, uint8_t)) {
        case 0: {
            uint32_t pair[2];
            pair[0] = FLD(slot, 8, uint32_t);
            pair[1] = FLD(entry, 8, uint32_t);
            func_006905DC(anim, FLD(model, 0x24, void *), entry, pair);
            break;
        }
        case 1:
            if (FLD(BIND(self, idx), 0x11, uint8_t) != 0) {
                func_0051E940(holder, model);
                FLD(BIND(self, FLD(slot, 0x24, int8_t)), 0x11, uint8_t) = 0;
            }
            func_00567588(anim, FLD(model, 0x20, void *), entry, AT(FLD(slot, 4, char *), 0x10),
                          AT(entry, 8), FLD(slot, 8, float));
            break;
        case 2:
            func_00567F30(anim, AT(model, 0x28), entry, FLD(slot, 8, float));
            break;
        default:
            break;
        }
        FLD(slot, 0x26, uint8_t) = changed;
    }
}
