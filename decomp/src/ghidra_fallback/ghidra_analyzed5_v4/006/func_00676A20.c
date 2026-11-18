#include "ghidra_types.h"


// USA 00676A20 <- EU 006769F8 (Ghidra, non-matching)

undefined4 * func_00676A20(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = param_1 + 2;
  param_1[4] = 0;
  param_1[3] = param_1 + 2;
  return param_1;
}

