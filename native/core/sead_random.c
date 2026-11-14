/* sead::Random (xorshift128, state {x, y, z, w} as four u32) seeding and the global-random
 * helpers, hand-written from the EU disassembly. Random::getU32 itself (00111A64) stays the
 * matched source: it is exact and has no pointer member (also used by the 64-bit build).
 *
 * Seeding (sead::Random::init(u32 seed)): Mersenne-Twister style
 *   x = (seed ^ seed >> 30) * 0x6C078965 + 1, y = (x ^ x >> 30) * 0x6C078965 + 2,
 *   z = (y ^ y >> 30) * 0x6C078965 + 3, w = (z ^ z >> 30) * 0x6C078965 + 4 (mod 2^32). */
#include "core_str.h"

extern uint32_t data_007124F0[];             /* game singleton; its Random is at +0x660 */
uint32_t func_00111A64(void *random);        /* Random::getU32 (matched) */
void *func_0010DA24(void *tick);             /* nn::os::Tick ctor (native/sdk/os.c) */

static uint32_t mt_step(uint32_t v, uint32_t k) { return (v ^ (v >> 30)) * 0x6C078965u + k; }

/* USA 0049BB30 (EU 0049BB08) sead::Random::init(u32 seed). r0 is written back by
 * `str r3, [r0, #8]!`, so the function returns this + 8 (Ghidra: void). Callers
 * `int f(uint *, uint)` (4). Confidence: high. */
uint32_t func_0049BB30(void *self, uint32_t seed) {
    uint32_t x = mt_step(seed, 1), y = mt_step(x, 2), z = mt_step(y, 3), w = mt_step(z, 4);
    FLD(self, 0, uint32_t) = x;
    FLD(self, 4, uint32_t) = y;
    FLD(self, 8, uint32_t) = z;
    FLD(self, 12, uint32_t) = w;
    return gp_u32((char *)self + 8);
}

/* USA 0010FD28 sead::Random::init(): seed = low word of nn::os::Tick::GetSystemCurrent()
 * (0010DA24 on a stack Tick), then as 0049BB30; returns w (the last value computed, r0).
 * The Ghidra second parameter is not an input. Callers `int f(uint *, undefined4)` (8).
 * Matched (src/work7/ds1/func_0010FD28.cpp). Confidence: high. */
uint32_t func_0010FD28(void *self, uint32_t unused_r1) {
    (void)unused_r1;
    uint32_t tick[2];
    func_0010DA24(tick);
    uint32_t x = mt_step(tick[0], 1), y = mt_step(x, 2), z = mt_step(y, 3), w = mt_step(z, 4);
    FLD(self, 0, uint32_t) = x;
    FLD(self, 4, uint32_t) = y;
    FLD(self, 8, uint32_t) = z;
    FLD(self, 12, uint32_t) = w;
    return w;
}

/* USA 0058A7D4 (EU 0058A7AC) Random *getRandom(): *data_007124F0 + 0x660 (r0 = the
 * argument is ignored). Callers `int f(void)` (185). Matched (callers pass an actor in r0;
 * the converted callers pass nothing: harmless). Confidence: high. */
uint32_t func_0058A7D4(void) {
    return data_007124F0[0] + 0x660;
}

/* USA 0058A474 (EU 0058A44C) bool chancePercent(?, u32 pct): r = getU32(global random);
 * return (u32)(((u64)r * 100) >> 32) < pct (unsigned). r0 is not read. Ghidra typed the
 * result undefined8 (callers `int f(undefined4, uint)`, 22). Matched. Confidence: high. */
uint32_t func_0058A474(uint32_t unused_r0, uint32_t pct) {
    (void)unused_r0;
    uint32_t r = func_00111A64(gp_ptr(data_007124F0[0] + 0x660));
    uint32_t hi = (uint32_t)(((uint64_t)r * 100u) >> 32);
    return hi < pct;
}
