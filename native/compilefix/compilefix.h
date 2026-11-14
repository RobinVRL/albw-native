/* Helpers for native/compilefix/func_<ADDR>.c: exact C forms of constructs the Ghidra text
 * spells in a way C rejects (see README.md in this folder). Included after ghidra_types.h. */
#ifndef ALBW_COMPILEFIX_H
#define ALBW_COMPILEFIX_H

#include <stdint.h>

/* A float value stored into a variable Ghidra typed as a pointer ("(T *)fexpr"): on the ARM this
 * is a register/slot copy of the 32 bits (vmov rX,sY / vstr / ldr of a float-typed word), never
 * a conversion. CF_FBITS(x) gives those 32 bits as an address word for a float operand and
 * passes any other operand through unchanged, so "(T *)CF_FBITS(x)" is the exact copy. On
 * x86-64 the 32-bit word zero-extends (game memory is below 4 GiB, native/64BIT.md). */
#define CF_FBITS(x) _Generic((x), \
    float: (uintptr_t)albw_bits_u32(_Generic((x), float: (x), default: 0.0f)), \
    default: (x))

/* Ghidra's "X._0_3_ = v": a store of the low 3 bytes of v into bytes 0..2 of X (little endian,
 * byte 3 untouched): strb/strh pairs or a partial-register store in the ARM code. */
static inline void cf_set3(void *p, uint32_t v)
{
    unsigned char *b = (unsigned char *)p;
    b[0] = (unsigned char)v;
    b[1] = (unsigned char)(v >> 8);
    b[2] = (unsigned char)(v >> 16);
}
#define CF_SET3(p, v) cf_set3((void *)(p), (uint32_t)(v))

/* Ghidra's float-classification helpers: NAN(x) = "x is a NaN" (the unordered flag of a vcmp),
 * INFINITY = +inf (0x7F800000) as a float constant. */
/* Ghidra prints a NaN bit pattern stored as a float as "NAN" / "-NAN" (payload lost). In this
 * game they are always the integer constants 0x7FFFFFFF (mvn rX,#0x80000000) and 0xFFFFFFFF
 * (mvn rX,#0): checked in the disassembly of every function that uses them. */
#define CF_NAN_POS albw_bits_f32(0x7FFFFFFFu)
#define CF_NAN_NEG albw_bits_f32(0xFFFFFFFFu)

#ifdef CF_MATHCONST
#undef NAN
#undef INFINITY
#define NAN(x) __builtin_isnan(x)
#define INFINITY __builtin_inff()
#endif

#endif
