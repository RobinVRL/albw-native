#include "ghidra_types.h"

extern undefined4 DAT_0040e83c;

// USA 0040E82C <- EU 0040E80C (Ghidra, non-matching)
// GLOBAL DAT_0040e83c undefined4

undefined4 * func_0040E82C(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0040e83c;
  param_1[1] = 0;
  *param_1 = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}

