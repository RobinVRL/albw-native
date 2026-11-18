#include "ghidra_types.h"


// USA 004331A0 <- EU 00433180 (Ghidra, non-matching)

undefined4 * func_004331A0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0xffff;
  param_1[6] = 0;
  param_1[5] = 0xff;
  return param_1;
}

