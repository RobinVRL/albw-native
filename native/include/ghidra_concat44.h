/* Bit-exact CONCAT44 for Ghidra text compiled in the native tree (native/game, native/compilefix).
 * The shared ghidra_types.h of the decomp repo defines CONCAT44 with `(uint32_t)(a)`, which for a
 * float piece (Ghidra's CONCAT44(fVarA, fVarB): a VFP register pair) converts the VALUE (and is
 * undefined for negatives / NaN: UBSan in 0016DAD0, robustness pass). On the ARM the pieces are
 * register words: a float contributes its bits. Integer pieces are unchanged. Include after
 * ghidra_types.h (build/decomp/shared/include/ghidra_types.h has the same definition). */
#pragma once
#include <stdint.h>
#ifndef __cplusplus
#ifndef ALBW_PIECE32
#define ALBW_PIECE32(x) _Generic((x), float: albw_piece32_f((float)_Generic((x), float: (x), default: 0.0f)), \
    double: albw_piece32_f((float)_Generic((x), double: (x), default: 0.0)), \
    default: (uint32_t)(x))
static inline uint32_t albw_piece32_f(float f) { uint32_t u; __builtin_memcpy(&u, &f, 4); return u; }
#endif
#undef CONCAT44
#define CONCAT44(a, b) ((uint64_t)(((uint64_t)ALBW_PIECE32(a) << 32) | ALBW_PIECE32(b)))
#endif
