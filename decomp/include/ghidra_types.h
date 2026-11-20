/* Types and intrinsics used by Ghidra pseudocode (src/nonmatching/).
 * Target is 32-bit ARM: long/ulong are 32 bits. Non-matching code only. */
#ifndef GHIDRA_TYPES_H
#define GHIDRA_TYPES_H

#include <stdbool.h>
#include <stdint.h>

typedef uint8_t undefined;
typedef uint8_t undefined1;
typedef uint16_t undefined2;
typedef uint32_t undefined3;
typedef uint32_t undefined4;
typedef uint64_t undefined5;
typedef uint64_t undefined6;
typedef uint64_t undefined7;
typedef uint64_t undefined8;
typedef uint8_t byte;
typedef int8_t sbyte;
typedef uint16_t ushort;
typedef uint16_t word;
typedef uint32_t dword;
typedef uint32_t uint;
typedef uint32_t ulong;
typedef int64_t longlong;
typedef uint64_t ulonglong;
typedef uint64_t qword;
typedef float float4;
typedef double float8;
typedef int code(); /* unprototyped: callable with any args */
typedef uint32_t uint3;
typedef int32_t int3;

/* concatenation / truncation / extension */
#define CONCAT11(a, b) ((uint16_t)(((uint16_t)(uint8_t)(a) << 8) | (uint8_t)(b)))
#define CONCAT12(a, b) ((uint32_t)(((uint32_t)(uint8_t)(a) << 16) | (uint16_t)(b)))
#define CONCAT13(a, b) ((uint32_t)(((uint32_t)(uint8_t)(a) << 24) | ((uint32_t)(b) & 0xFFFFFF)))
#define CONCAT21(a, b) ((uint32_t)(((uint32_t)(uint16_t)(a) << 8) | (uint8_t)(b)))
#define CONCAT22(a, b) ((uint32_t)(((uint32_t)(uint16_t)(a) << 16) | (uint16_t)(b)))
#define CONCAT31(a, b) ((uint32_t)(((uint32_t)(a) << 8) | (uint8_t)(b)))
/* (port) CONCAT44 pieces are 32-bit register words: a float piece (Ghidra's CONCAT44(fVarA, fVarB),
 * a VFP register pair) contributes its bits, never its value converted to an integer */
#ifndef __cplusplus
#define ALBW_PIECE32(x) _Generic((x), float: albw_piece32_f((float)_Generic((x), float: (x), default: 0.0f)), \
    double: albw_piece32_f((float)_Generic((x), double: (x), default: 0.0)), \
    default: (uint32_t)(x))
static inline uint32_t albw_piece32_f(float f) { uint32_t u; __builtin_memcpy(&u, &f, 4); return u; }
#define CONCAT44(a, b) ((uint64_t)(((uint64_t)ALBW_PIECE32(a) << 32) | ALBW_PIECE32(b)))
#else
#define CONCAT44(a, b) ((uint64_t)(((uint64_t)(uint32_t)(a) << 32) | (uint32_t)(b)))
#endif
#define CONCAT26(a, b) ((uint64_t)(((uint64_t)(uint16_t)(a) << 48) | ((uint64_t)(b) & 0xFFFFFFFFFFFFull)))
#define CONCAT17(a, b) ((uint64_t)(((uint64_t)(uint8_t)(a) << 56) | ((uint64_t)(b) & 0xFFFFFFFFFFFFFFull)))
/* remaining CONCATxy (x+y <= 8 bytes) */
#define CONCAT14(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 8) - 1)) << 32) | ((uint64_t)(b) & (((uint64_t)1 << 32) - 1))))
#define CONCAT15(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 8) - 1)) << 40) | ((uint64_t)(b) & (((uint64_t)1 << 40) - 1))))
#define CONCAT16(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 8) - 1)) << 48) | ((uint64_t)(b) & (((uint64_t)1 << 48) - 1))))
#define CONCAT23(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 16) - 1)) << 24) | ((uint64_t)(b) & (((uint64_t)1 << 24) - 1))))
#define CONCAT24(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 16) - 1)) << 32) | ((uint64_t)(b) & (((uint64_t)1 << 32) - 1))))
#define CONCAT25(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 16) - 1)) << 40) | ((uint64_t)(b) & (((uint64_t)1 << 40) - 1))))
#define CONCAT32(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 24) - 1)) << 16) | ((uint64_t)(b) & (((uint64_t)1 << 16) - 1))))
#define CONCAT33(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 24) - 1)) << 24) | ((uint64_t)(b) & (((uint64_t)1 << 24) - 1))))
#define CONCAT34(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 24) - 1)) << 32) | ((uint64_t)(b) & (((uint64_t)1 << 32) - 1))))
#define CONCAT35(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 24) - 1)) << 40) | ((uint64_t)(b) & (((uint64_t)1 << 40) - 1))))
#define CONCAT41(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 32) - 1)) << 8) | ((uint64_t)(b) & (((uint64_t)1 << 8) - 1))))
#define CONCAT42(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 32) - 1)) << 16) | ((uint64_t)(b) & (((uint64_t)1 << 16) - 1))))
#define CONCAT43(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 32) - 1)) << 24) | ((uint64_t)(b) & (((uint64_t)1 << 24) - 1))))
#define CONCAT51(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 40) - 1)) << 8) | ((uint64_t)(b) & (((uint64_t)1 << 8) - 1))))
#define CONCAT52(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 40) - 1)) << 16) | ((uint64_t)(b) & (((uint64_t)1 << 16) - 1))))
#define CONCAT53(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 40) - 1)) << 24) | ((uint64_t)(b) & (((uint64_t)1 << 24) - 1))))
#define CONCAT61(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 48) - 1)) << 8) | ((uint64_t)(b) & (((uint64_t)1 << 8) - 1))))
#define CONCAT62(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 48) - 1)) << 16) | ((uint64_t)(b) & (((uint64_t)1 << 16) - 1))))
#define CONCAT71(a, b) ((uint64_t)((((uint64_t)(a) & (((uint64_t)1 << 56) - 1)) << 8) | ((uint64_t)(b) & (((uint64_t)1 << 8) - 1))))
#define SUB41(x, n) ((uint8_t)((uint32_t)(x) >> ((n) * 8)))
#define SUB42(x, n) ((uint16_t)((uint32_t)(x) >> ((n) * 8)))
#define SUB21(x, n) ((uint8_t)((uint16_t)(x) >> ((n) * 8)))
#define SUB81(x, n) ((uint8_t)((uint64_t)(x) >> ((n) * 8)))
#define SUB82(x, n) ((uint16_t)((uint64_t)(x) >> ((n) * 8)))
#define SUB84(x, n) ((uint32_t)((uint64_t)(x) >> ((n) * 8)))
#define ZEXT14(x) ((uint32_t)(uint8_t)(x))
#define ZEXT24(x) ((uint32_t)(uint16_t)(x))
#define ZEXT48(x) ((uint64_t)(uint32_t)(x))
#define ZEXT18(x) ((uint64_t)(uint8_t)(x))
#define ZEXT28(x) ((uint64_t)(uint16_t)(x))
#define SEXT14(x) ((int32_t)(int8_t)(x))
#define SEXT24(x) ((int32_t)(int16_t)(x))
#define SEXT48(x) ((int64_t)(int32_t)(x))
#define SEXT18(x) ((int64_t)(int8_t)(x))
#define SEXT28(x) ((int64_t)(int16_t)(x))

/* flag helpers */
#define CARRY1(a, b) ((uint8_t)((uint8_t)(a) + (uint8_t)(b)) < (uint8_t)(a))
#define CARRY2(a, b) ((uint16_t)((uint16_t)(a) + (uint16_t)(b)) < (uint16_t)(a))
#define CARRY4(a, b) ((uint32_t)((uint32_t)(a) + (uint32_t)(b)) < (uint32_t)(a))
#define SCARRY4(a, b) ({ int32_t _r; __builtin_add_overflow((int32_t)(a), (int32_t)(b), &_r); })
#define SBORROW4(a, b) ({ int32_t _r; __builtin_sub_overflow((int32_t)(a), (int32_t)(b), &_r); })
#define SCARRY1(a, b) ({ int8_t _r; __builtin_add_overflow((int8_t)(a), (int8_t)(b), &_r); })
#define SBORROW1(a, b) ({ int8_t _r; __builtin_sub_overflow((int8_t)(a), (int8_t)(b), &_r); })
#define SCARRY2(a, b) ({ int16_t _r; __builtin_add_overflow((int16_t)(a), (int16_t)(b), &_r); })
#define SBORROW2(a, b) ({ int16_t _r; __builtin_sub_overflow((int16_t)(a), (int16_t)(b), &_r); })
#define NAN(x) ((x) != (x))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SQRT(x) __builtin_sqrt(x)
#define POPCOUNT(x) __builtin_popcount(x)
#define LZCOUNT(x) ((x) ? __builtin_clz(x) : 32)

/* ARM intrinsics Ghidra emits for instructions it cannot express in C.
 * These are stubs for the native port layer to implement. */
uint32_t count_leading_zeroes(uint32_t x);
void software_interrupt(uint32_t svc);
void DataMemoryBarrier(uint32_t opt);
void DataSynchronizationBarrier(uint32_t opt);
void InstructionSynchronizationBarrier(uint32_t opt);
bool hasExclusiveAccess(void *p);
void ExclusiveAccess(void *p);
void ClearExclusiveLocal(void);
bool isCurrentModePrivileged(void);
uint32_t coprocessor_movefromRt(uint32_t cp, uint32_t op1, uint32_t op2, uint32_t crn, uint32_t crm);
void coprocessor_moveto(uint32_t cp, uint32_t op1, uint32_t op2, uint32_t rt, uint32_t crn, uint32_t crm);
void halt_baddata(void);
void halt_unimplemented(void);
uint32_t SignedSaturate(int32_t x, uint32_t bits);
uint32_t UnsignedSaturate(int32_t x, uint32_t bits);
bool SignedDoesSaturate(int32_t x, uint32_t bits);
bool UnsignedDoesSaturate(int32_t x, uint32_t bits);
float VectorAbs(float x, uint32_t a, uint32_t b);

/* VFP conversions as Ghidra's full analysis prints them (rmode = FPSCR rounding mode).
 * armcc's float->int conversions round toward zero and saturate, like vcvt. */
static inline float VectorUnsignedToFloat(uint32_t x, uint32_t rmode) { (void)rmode; return (float)x; }
static inline float VectorSignedToFloat(uint32_t x, uint32_t rmode) { (void)rmode; return (float)(int32_t)x; }
static inline uint32_t VectorFloatToUnsigned(float x, uint32_t rmode) {
    (void)rmode;
    return x != x || x <= 0.0f ? 0u : x >= 4294967295.0f ? 0xFFFFFFFFu : (uint32_t)x;
}
static inline uint32_t VectorFloatToSigned(float x, uint32_t rmode) {
    (void)rmode;
    return x != x ? 0u : x >= 2147483647.0f ? 0x7FFFFFFFu : x <= -2147483648.0f ? 0x80000000u : (uint32_t)(int32_t)x;
}
/* Ghidra labels the ARM exception vector addresses 0x00-0x1C; when the code uses a small
 * constant (a clamp to 4, a size of 8, ...) as a pointer it prints &<vector label>.
 * These are just those numbers. */
#define UndefinedInstruction (*(undefined *)(uintptr_t)0x04)
#define SupervisorCall       (*(undefined *)(uintptr_t)0x08)
#define PrefetchAbort        (*(undefined *)(uintptr_t)0x0C)
#define DataAbort            (*(undefined *)(uintptr_t)0x10)
#define NotUsed              (*(undefined *)(uintptr_t)0x14)
#define IRQ                  (*(undefined *)(uintptr_t)0x18)
#define FIQ                  (*(undefined *)(uintptr_t)0x1C)

/* CP15 operations as Ghidra's full analysis names them: the TLS pointer read (mrc p15 c13 c0 3)
 * is the native thread-local SDK block; cache/barrier writes are memory fences. */
uintptr_t albw_tls(void);
#define coproc_movefrom_User_R_Thread_and_Process_ID() (albw_tls())
#define coproc_moveto_Data_Synchronization(x) __atomic_thread_fence(__ATOMIC_SEQ_CST)
#define coproc_moveto_Data_Memory_Barrier(x) __atomic_thread_fence(__ATOMIC_SEQ_CST)

static inline void HintPreloadData(const void *p) { (void)p; }

/* Bit reinterpretation between float and integer (exact copies, no value conversion).
 * Ghidra prints a same-size int<->float reinterpretation (vldr/vstr of an int-typed field,
 * vmov rX,sY / vmov sY,rX, a soft-float helper's r0) as a C cast, which natively would convert
 * the value. The dump marks those casts (tools/ghidra/albw_fcast.py in the port) and
 * import_ghidra.py with ALBW_CONVERT_V2=1 turns them into these. */
static inline float albw_bits_f32(uint32_t u) { float f; __builtin_memcpy(&f, &u, 4); return f; }
static inline uint32_t albw_bits_u32(float f) { uint32_t u; __builtin_memcpy(&u, &f, 4); return u; }
static inline double albw_bits_f64(uint64_t u) { double d; __builtin_memcpy(&d, &u, 8); return d; }
static inline uint64_t albw_bits_u64(double d) { uint64_t u; __builtin_memcpy(&u, &d, 8); return u; }
#ifndef __cplusplus
/* The converter's forms: the operand's *native* C type decides, so an operand that is already
 * the target kind passes through unchanged and nothing is ever value-converted. Integer/pointer
 * operands contribute their low 32 (64) bits (Ghidra's SUBPIECE of a 64-bit value). */
#define ALBW_AS_F32(x) _Generic((x), float: (x), \
    default: albw_bits_f32((uint32_t)(uintptr_t)(x)))
/* double: an ARM single-precision result that C computed in double (SQRT is __builtin_sqrt,
 * float math with a double constant): round to float and take its bits, as vmov rX, sY does.
 * Without this case `ALBW_AS_U32(SQRT(d)) > 0x40E00000` compared the VALUE (9.0 -> 9) with
 * float bits, so every distance test of that form failed (Yuga never left the wall). */
#define ALBW_AS_U32(x) _Generic((x), \
    float: albw_bits_u32(_Generic((x), float: (x), default: 0.0f)), \
    double: albw_bits_u32((float)_Generic((x), double: (x), default: 0.0)), \
    default: (uint32_t)(uintptr_t)(x))
#define ALBW_AS_F64(x) _Generic((x), double: (x), \
    default: albw_bits_f64((uint64_t)(x)))
#define ALBW_AS_U64(x) _Generic((x), \
    double: albw_bits_u64(_Generic((x), double: (x), default: 0.0)), \
    default: (uint64_t)(x))
#endif

#if !defined(__cplusplus) && defined(ALBW_V4)
/* Round 3 (ALBW_CONVERT_V4=1 builds pass -DALBW_V4; off otherwise).
 * compilefix classes (native/compilefix/README.md in the port), for the converter output: */
/* (T *)<float expr>: a register/slot copy of the 32 bits, never a conversion */
#define ALBW_PTR_BITS(x) _Generic((x), \
    float: (uintptr_t)albw_bits_u32(_Generic((x), float: (x), default: 0.0f)), \
    double: (uintptr_t)albw_bits_u32((float)_Generic((x), double: (x), default: 0.0)), \
    default: (x))
/* X._0_3_ = v: the 3 low bytes (strh + strb) */
static inline void albw_set3(void *p, uint32_t v)
{ unsigned char *b = (unsigned char *)p; b[0] = (unsigned char)v; b[1] = (unsigned char)(v >> 8); b[2] = (unsigned char)(v >> 16); }
#define SUB43(x, n) ((uint32_t)(x) >> ((n) * 8) & 0xFFFFFFu)
/* NAN(x) (above) = unordered compare; INFINITY = +inf; the NaN constants Ghidra prints as NAN / -NAN are
 * the words 0x7FFFFFFF / 0xFFFFFFFF in this game (mvn rX,#0x80000000 / mvn rX,#0) */
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#define ALBW_NAN_POS albw_bits_f32(0x7FFFFFFFu)
#define ALBW_NAN_NEG albw_bits_f32(0xFFFFFFFFu)
#endif


/* (port) bit-exact pieces for float / double arguments (see CONCAT44 above; BOOT_LOG 126) */
#ifndef __cplusplus
static inline uint64_t albw_piece64_d(double d) { uint64_t u; __builtin_memcpy(&u, &d, 8); return u; }
#define ALBW_PIECE64(x) _Generic((x), double: albw_piece64_d((double)_Generic((x), double: (x), default: 0.0)), \
    float: (uint64_t)albw_piece32_f((float)_Generic((x), float: (x), default: 0.0f)), default: (uint64_t)(x))
#undef SUB41
#undef SUB42
#undef SUB43
#undef SUB81
#undef SUB82
#undef SUB84
#undef ZEXT48
#undef SEXT48
#undef CONCAT31
#undef CONCAT22
#undef CONCAT13
#define SUB41(x, n) ((uint8_t)(ALBW_PIECE32(x) >> ((n) * 8)))
#define SUB42(x, n) ((uint16_t)(ALBW_PIECE32(x) >> ((n) * 8)))
#define SUB43(x, n) (ALBW_PIECE32(x) >> ((n) * 8) & 0xFFFFFFu)
#define SUB81(x, n) ((uint8_t)(ALBW_PIECE64(x) >> ((n) * 8)))
#define SUB82(x, n) ((uint16_t)(ALBW_PIECE64(x) >> ((n) * 8)))
#define SUB84(x, n) ((uint32_t)(ALBW_PIECE64(x) >> ((n) * 8)))
#define ZEXT48(x) ((uint64_t)ALBW_PIECE32(x))
#define SEXT48(x) ((int64_t)(int32_t)ALBW_PIECE32(x))
#define CONCAT31(a, b) ((uint32_t)((ALBW_PIECE32(a) << 8) | (uint8_t)ALBW_PIECE32(b)))
#define CONCAT22(a, b) ((uint32_t)(((uint32_t)(uint16_t)ALBW_PIECE32(a) << 16) | (uint16_t)ALBW_PIECE32(b)))
#define CONCAT13(a, b) ((uint32_t)(((uint32_t)(uint8_t)ALBW_PIECE32(a) << 24) | (ALBW_PIECE32(b) & 0xFFFFFF)))
#endif
#endif
