#include "ghidra_types.h"

extern undefined4 DAT_003714b8;

// USA 003714B4 <- EU 00371490 (Ghidra, non-matching)
// GLOBAL DAT_003714b8 undefined4

undefined4 * func_003714B4(undefined4 *param_1)

{
  *param_1 = DAT_003714b8;
  param_1[2] = param_1 + 1;
  param_1[3] = 0;
  param_1[1] = param_1 + 1;
  *(undefined1 *)(param_1 + 4) = 1;
  return param_1;
}

