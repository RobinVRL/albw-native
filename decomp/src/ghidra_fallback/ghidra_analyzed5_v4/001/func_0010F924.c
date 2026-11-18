#include "ghidra_types.h"


// USA 0010F924 <- EU 0010F924 (Ghidra, non-matching)

undefined4 * func_0010F924(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}

