/* Shared helpers for the hand-rewritten gameplay functions in native/gameplay/ (see AUDIT.md).
 *
 * Rules these files follow:
 *  - exact C equivalents of the ARM code (single precision, same operation order, no FMA
 *    contraction: VFPv2 vmla/vmls/vnmla round the product before the add, exactly like a
 *    separate C multiply and add);
 *  - the game's 32-bit data layouts (fields read at their ROM byte offsets);
 *  - -m32 and -m64 clean: a pointer stored INSIDE game data is a 32-bit field and goes through
 *    gp_ptr()/gp_u32() (never a native pointer type at an offset), see the note at gp_ptr();
 *  - the C signature of a func_<ADDR> definition keeps the return-value CLASS (float vs
 *    integer/void) of the prototype the converted callers use (build_decomp declares every callee
 *    from its Ghidra signature: `extern float f(...)` or `extern int f(...)`). On i386 a float
 *    is returned in x87 st(0): a definition returning float that a caller declared `int` leaves
 *    one value on the x87 stack per call (8 calls fill it, every later float return is NaN);
 *    the reverse pops an empty stack. Where the ARM function really returns a float that Ghidra
 *    lost, the exact native version is a separate `albw_*` function and func_<ADDR> keeps the
 *    callers' class until the signature table is fixed (documented per file).
 */
#ifndef ALBW_GAMEPLAY_H
#define ALBW_GAMEPLAY_H

#include <stdint.h>
#include <string.h>

#ifndef FLD
/* typed lvalue for the field at byte offset `off` of object `p` */
#define FLD(p, off, T) (*(T *)((char *)(p) + (off)))
#endif
#ifndef AT
/* address of the field at byte offset `off` of object `p` */
#define AT(p, off) ((char *)(p) + (off))
#endif

/* ---- game pointers stored in game data (4-byte fields) ----
 * 32-bit build: the value is the address. 64-bit build: the game heaps/data are mapped below
 * 4 GiB (MAP_32BIT arena), so a zero-extended 32-bit value is the address too. If the 64-bit
 * runtime ever moves them, only these two functions change. */
static inline void *gp_ptr(uint32_t v) { return (void *)(uintptr_t)v; }
static inline uint32_t gp_u32(const void *p) { return (uint32_t)(uintptr_t)p; }
/* read a game pointer field */
#define GPTR(p, off, T) ((T *)gp_ptr(FLD(p, off, uint32_t)))

/* ---- float bit patterns (vmov rX, sY / vmov sY, rX; int-typed vldr/vstr) ---- */
static inline uint32_t gp_f2u(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }
static inline int32_t gp_f2i_bits(float f) { int32_t u; memcpy(&u, &f, 4); return u; }
static inline float gp_u2f(uint32_t u) { float f; memcpy(&f, &u, 4); return f; }

/* ---- VFP conversions with the ARM results on every input ----
 * vcvt.s32.f32 / vcvt.u32.f32 (round toward zero, SATURATE, NaN -> 0). A plain C (int)f on
 * x86 (cvttss2si) gives 0x80000000 for NaN and for every out-of-range value. */
static inline int32_t gp_vcvt_s32(float f) {
    if (f != f) return 0;
    if (f >= 2147483648.0f) return 0x7FFFFFFF;
    if (f <= -2147483648.0f) return (int32_t)0x80000000u;
    return (int32_t)f;
}
static inline uint32_t gp_vcvt_u32(float f) {
    if (f != f || f <= 0.0f) return 0;      /* NaN, negatives (and -0) -> 0 */
    if (f >= 4294967296.0f) return 0xFFFFFFFFu;
    return (uint32_t)f;
}

/* ---- VFP compare + ARM condition codes (vcmp/vcmpe; vmrs apsr_nzcv, fpscr) ----
 * Unordered (a NaN operand) sets N=0 Z=0 C=1 V=1, so lt/le/ne/hi/hs/pl/vs are TRUE and
 * gt/ge/eq/lo/ls/mi/vc are FALSE for NaN. Written so the compiler keeps the NaN behaviour. */
#define VCMP_EQ(a, b) ((a) == (b))
#define VCMP_NE(a, b) (!((a) == (b)))
#define VCMP_GT(a, b) ((a) > (b))
#define VCMP_GE(a, b) ((a) >= (b))
#define VCMP_LT(a, b) (!((a) >= (b)))   /* N != V  */
#define VCMP_LE(a, b) (!((a) > (b)))    /* Z || N != V */
#define VCMP_MI(a, b) ((a) < (b))       /* N */
#define VCMP_PL(a, b) (!((a) < (b)))    /* !N */
#define VCMP_HI(a, b) (!((a) <= (b)))   /* C && !Z */
#define VCMP_LS(a, b) ((a) <= (b))      /* !C || Z */
#define VCMP_HS(a, b) (!((a) < (b)))    /* C */
#define VCMP_LO(a, b) ((a) < (b))       /* !C */
#define VCMP_VS(a, b) ((a) != (a) || (b) != (b))

/* ---- the 3DS VFP ran with FPSCR = 0x03000000 (FZ + DN, round to nearest) on every game thread
 * (thread trampoline 0010994C -> 00106314). With the host in IEEE mode a denormal input/result
 * differs; gp_ftz() gives the flushed value where a rewrite has to be exact without relying on
 * MXCSR (see fpmath.patch for the global setting). */
static inline float gp_ftz(float f) {
    uint32_t u = gp_f2u(f);
    return (u & 0x7F800000u) == 0 ? gp_u2f(u & 0x80000000u) : f;
}

#endif
