#include "ghidra_types.h"

extern undefined4 DAT_001684ac;
extern undefined4 DAT_001684b0;
extern undefined4 DAT_001684b4;

// USA 00168434 <- EU 00168434 (Ghidra, non-matching)
// GLOBAL DAT_001684ac undefined4
// GLOBAL DAT_001684b0 undefined4
// GLOBAL DAT_001684b4 undefined4

undefined4 * func_00168434(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = param_1 + 5;
  param_1[7] = 0;
  param_1[5] = param_1 + 5;
  param_1[8] = 0xffffffff;
  param_1[10] = param_1 + 0xc;
  param_1[0xb] = 0x40;
  *(undefined1 *)(param_1[10] + 0x3f) = 0;
  *(undefined1 *)param_1[10] = 0;
  param_1[9] = DAT_001684b4;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[8] = 0;
  return param_1;
}

