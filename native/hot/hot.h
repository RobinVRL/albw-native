/* Shared helpers for native/hot/ (hand-written exact C of the most-called game functions that
 * were still Ghidra-decompiled C; see README.md).
 *
 * Same rules as native/gameplay (gameplay.h, whose helpers are reused here):
 *  - exact C of the ARM code (EU disassembly is the ground truth): single precision, same
 *    operation order, VFP NaN branch semantics via VCMP_*, saturating vcvt via gp_vcvt_*;
 *  - game memory is read at its ROM byte offsets; a pointer stored IN game memory is a 32-bit
 *    word (gptr_t / W() + P()), never a native pointer at an offset (-m64 clean);
 *  - func_<ADDR> prototypes = the prototypes the round-2 converted callers declare
 *    (build/decomp/ghidra_fallback/ghidra_analyzed4), checked with tools/sigcheck_hot.py;
 *    integer-class parameters the callers pass as `int` are taken as uint32_t (on x86-64 a
 *    pointer parameter would read the undefined upper half of the register).
 */
#ifndef ALBW_HOT_H
#define ALBW_HOT_H

#include <stdint.h>
#include <string.h>
#include "../include/gptr.h"
#include "../gameplay/gameplay.h"

/* 32-bit word at byte offset `off` of game object `p` (lvalue) */
#define W(p, off) FLD(p, off, uint32_t)
/* game address word -> native char pointer */
#define P(w) ((char *)gp_ptr((uint32_t)(w)))
/* float at byte offset (lvalue) */
#define F(p, off) FLD(p, off, float)

/* Address of a game data symbol (gamedata.s / native data; data addresses are the same in the
 * EU and USA builds). Declared per file as `extern char data_XXXXXXXX[];`. */
#define DATA_W(sym) gp_u32(sym)

#endif
