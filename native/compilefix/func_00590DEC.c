/* compilefix: USA 00590DEC (EU 00590DC4), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'INFINITY'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra NAN(x)/INFINITY -> __builtin_isnan(x) (vcmp unordered) / +inf [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#define CF_MATHCONST
#include "compilefix.h"

extern int func_00100986(undefined4 param_1);
extern int func_00691F88(uint param_1,uint param_2,uint param_3);
extern int DAT_00590e98;
extern float DAT_00590e9c;

// USA 00590DEC <- EU 00590DC4 (Ghidra, non-matching)
// GLOBAL DAT_00590e98 int
// GLOBAL DAT_00590e9c float

/* boot agent: this is the C library's fmodf (armcc: special cases, then the remainder core
 * 00691F88, a soft-float routine with computed jumps into the code segment that cannot run
 * natively). Native meaning: fmodf (IEEE-exact, the same results incl. NaN for x = inf / y = 0;
 * the original also sets errno via 00100986 there, which nothing reads). */
#include <math.h>
float func_00590DEC(undefined4 param_1,undefined4 param_2,undefined4 param_3,float fparam_0,
                   float fparam_1)
{
  (void)param_1; (void)param_2; (void)param_3;
  return fmodf(fparam_0, fparam_1);
}

