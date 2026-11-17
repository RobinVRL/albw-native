/* Fall-through thunks (BOOT_LOG 123, tools/fallthrough_scan.py).
 *
 * armcc ends these functions with `mov r0, r0` and no return: execution FALLS THROUGH into the function
 * that follows in memory (a tail call without a branch). Ghidra then decompiled the following function's
 * whole body into each of them, so these entry points ran an unfixed duplicate of a function that has a
 * native fix (state changes, player actions, ModelInst::setDrawState, ...). Each is rewritten here from
 * its EU machine code as what it is: a few register moves, then a call of the next function's native
 * definition with the same arguments (r0..r3 and s0 pass through unless the thunk sets them).
 *
 * (The player-action thunks 0028FBF0 .. 002923B0, 0049D4A0 and 0021AEFC already had native versions.)
 *
 * Longer fall-through functions (their own work, then the fall-through) get individual rewrites:
 * native/compilefix/func_00168E00.c. The rest are listed in BOOT_LOG 123 / MISSING.md. */
#include <stdint.h>
#include <string.h>

#define GA(a) ((uintptr_t)(uint32_t)(a))
static inline uint32_t R32(uint32_t a) { uint32_t v; memcpy(&v, (const void *)GA(a), 4); return v; }

/* the native definitions they fall into (native/framework, hot) */
int func_002D55D0(uint32_t self_w, uint32_t next);
int func_004CF478(uint32_t self_w, int32_t state);
int func_004FC07C(uint32_t self_w, uint32_t id, int32_t frames, uint32_t force);
void func_001B6C04(uint32_t p);
int func_002313DC(uint32_t ctl_w);

/* EU 002D55A0: ldr r0, [r0, #0x48]; mov r1, #0x8D -> StateBase::changeState(0x8D) on the state machine */
int func_002D55C4(uint32_t self) { return func_002D55D0(R32(self + 0x48), 0x8D); }
/* EU 004CF440: mov r2, #0; ldr r0, [r0, #0x410]; mov r1, r2 -> ModelInst::setDrawState(0) */
int func_004CF468(uint32_t self) { return func_004CF478(R32(self + 0x410), 0); }
/* EU 004FC044: mov r3, #0; mvn r2, #0; mov r1, r3 -> EnemyBase::changeAnim(0, -1, false) */
int func_004FC06C(uint32_t self) { return func_004FC07C(self, 0, -1, 0); }
/* EU 002313C4: push {r4, lr}; mov r4, r0; bl 001B6C04; add r0, r4, #56; pop -> AnimSlotCtl::stopAtStart(this + 0x38) */
void func_002313C4(int self) {
    func_001B6C04((uint32_t)self);
    func_002313DC((uint32_t)self + 0x38);
}

/* --- longer ones: their own work, then the fall-through */
static inline void W32(uint32_t a, uint32_t v) { memcpy((void *)GA(a), &v, 4); }
static inline void W16(uint32_t a, uint16_t v) { memcpy((void *)GA(a), &v, 2); }
void func_0010C0C0(void *cs);
void func_0010C160(void *cs);
uint32_t func_00165E28(void *self, uint16_t h);
float func_002317C0(uint32_t ctl_w, float rate);
void func_00231448(uint32_t view);
int func_001DFE4C(uint32_t obj);
uint32_t func_0049F5FC(void *list);

/* EU 00165E20: mov r1, #0 -> 00165E28(this, 0) */
uint32_t func_00165E20(int self) { return func_00165E28((void *)GA(self), 0); }

/* EU 0010C0F8: unlink `node` from the list at this (+8 head) under the CriticalSection at this+0xC, then FALL
 * INTO CriticalSection::Leave (0010C160). The Ghidra copy carried the SDK's leave with the TLS-pointer owner
 * encoding, which os.c replaced by native thread ids (native/sdk/os.md): the inlined leave never matched. */
uint32_t func_0010C0F8(int self_i, int *node_p) {
    uint32_t self = (uint32_t)self_i, node = (uint32_t)(uintptr_t)node_p, cs = self + 0xC;
    func_0010C0C0((void *)GA(cs));
    if (R32(node) == node) {
        W32(self + 8, 0);
    } else {
        if (R32(self + 8) == node) W32(self + 8, R32(node + 4));
        uint32_t n0 = R32(node), n1 = R32(node + 4);
        W32(n1, n0);
        W32(n0 + 4, n1);
    }
    W32(node + 4, 0);
    W32(node, 0);
    W32(node + 8, 0);
    W32(node + 12, 0);
    func_0010C160((void *)GA(cs));
    return cs;
}

/* EU 00231774: clear flag bit 2 of +0x9D, 00231448(this + 0x74), set the slot range (+0x7C = +0x1C,
 * +0x76 = 2 * (u8)+0x9C - 1, +0x74 = 0), then FALL INTO 002317C0(this + 0x74, rate = +0x98) */
float func_00231774(int self_i) {
    uint32_t self = (uint32_t)self_i;
    *(uint8_t *)GA(self + 0x9D) &= (uint8_t)~4;
    func_00231448(self + 0x74);
    uint8_t n = *(uint8_t *)GA(self + 0x9C);
    W32(self + 0x7C, R32(self + 0x1C));
    W16(self + 0x76, (uint16_t)(-1 + 2 * n));
    W16(self + 0x74, 0);
    float rate;
    memcpy(&rate, (const void *)GA(self + 0x98), 4);
    return func_002317C0(self + 0x74, rate);
}

/* EU 0049F580: for each node of the intrusive list (+4 first link, +0xC link offset; only if +8 count != 0):
 * 001DFE4C(node); then FALL INTO 0049F5FC(this) (sead list clear, native/core/sead_list.c) */
uint32_t func_0049F5A8(uint32_t *self_p) {
    uint32_t self = (uint32_t)(uintptr_t)self_p;
    if (R32(self + 8)) {
        uint32_t off = R32(self + 0xC), end = self - off, n = R32(self + 4) - off;
        while (n != end) {
            func_001DFE4C(n);
            n = R32(n + off + 4) - off;
        }
    }
    return func_0049F5FC((void *)GA(self));
}
