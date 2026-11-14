/* Shared helpers for the hand-written core library layer in native/core/ (README.md there).
 *
 * Every file here defines strong func_<USA> symbols that override the weak Ghidra/matched ones.
 * Rules (same as native/gameplay, whose gameplay.h is reused for FLD/gp_ptr/gp_u32/VCMP/vcvt):
 *  - exact behaviour of the ARM code (EU eu_code.bin), edge cases included;
 *  - the game's 32-bit layouts: pointers stored in game memory are 4-byte words (gp_ptr/gp_u32);
 *  - the return CLASS of each func_ (float vs integer/void) is the one the round-2 converted
 *    callers declare (i386 x87 hazard, native/gameplay/AUDIT.md);
 *  - a parameter that converted callers declare as a 32-bit integer but that holds an address
 *    is taken as uint32_t and converted with gp_ptr() (x86-64: the upper half of the register is
 *    not defined by such callers).
 * Functions that return a register PAIR on ARM (r0:r1, e.g. __aeabi_uidivmod {quotient,
 * remainder}) return uint64_t (low word = r0): on i386 that is edx:eax, on x86-64 rax, so a
 * caller that declares `int` still reads r0 correctly and a fixed `undefined8` declaration reads
 * both halves. */
#ifndef ALBW_CORE_H
#define ALBW_CORE_H

#include <stdint.h>
#include <string.h>
#include "gptr.h"
#include "gameplay.h"

/* ARM register-specified shifts: only the bottom byte of the amount counts; LSL/LSR by >= 32
 * give 0, ASR by >= 32 gives the sign fill */
static inline uint32_t core_lsl(uint32_t x, uint32_t n) { n &= 0xFF; return n >= 32 ? 0 : x << n; }
static inline uint32_t core_lsr(uint32_t x, uint32_t n) { n &= 0xFF; return n >= 32 ? 0 : x >> n; }
static inline uint32_t core_asr(uint32_t x, uint32_t n) {
    n &= 0xFF;
    if (n >= 32) return (int32_t)x < 0 ? 0xFFFFFFFFu : 0;
    return (uint32_t)((int32_t)x >> n);   /* arithmetic on every compiler used here */
}

static inline uint64_t core_pair(uint32_t r0, uint32_t r1) { return (uint64_t)r0 | (uint64_t)r1 << 32; }

/* ---- exact native versions with the real ARM results (for native callers) ---- */
/* __aeabi_uldivmod / __aeabi_ldivmod: quotient AND remainder (r2:r3) */
uint64_t albw_uldivmod(uint64_t n, uint64_t d, uint64_t *rem);
int64_t albw_ldivmod(int64_t n, int64_t d, int64_t *rem);
/* __aeabi_f2lz with the float as a value */
int64_t albw_f2lz(float f);

#endif
