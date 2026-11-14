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

float func_00590DEC(undefined4 param_1,undefined4 param_2,undefined4 param_3,float fparam_0,
                   float fparam_1)

{
  float fVar1;
  
  if (((-1 < DAT_00590e98 - (int)ALBW_AS_U32(ABS(fparam_0))) && (-1 < DAT_00590e98 - (int)ALBW_AS_U32(ABS(fparam_1)))) &&
     ((ABS(fparam_0) == INFINITY || (ABS(fparam_1) == 0.0)))) {
    fVar1 = DAT_00590e9c;
    func_00100986(1);
    return fVar1 / fVar1;
  }
  fVar1 = ALBW_AS_F32(func_00691F88((uint)ALBW_AS_U32(fparam_0),(uint)ALBW_AS_U32(fparam_1),param_3));
  if ((~((uint)ALBW_AS_U32(fVar1) >> 0x17) & 0xff) == 0) {
    return fVar1;
  }
  if (((uint)ALBW_AS_U32(fparam_0) & 0x80000000) != ((uint)ALBW_AS_U32(fVar1) & 0x80000000)) {
    return fVar1 - ALBW_AS_F32(((uint)ALBW_AS_U32(fVar1) & 0x80000000 | (uint)ALBW_AS_U32(ABS(fparam_1))));
  }
  return fVar1;
}

