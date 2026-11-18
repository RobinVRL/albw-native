#include "ghidra_types.h"


// USA 00465FE0 <- EU 00465FB8 (Ghidra, non-matching)

undefined4 * func_00465FE0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x40;
  param_1[3] = 0;
  if (param_1 + 4 != (undefined4 *)0x0) {
    param_1[3] = param_1 + 4;
  }
  return param_1;
}

