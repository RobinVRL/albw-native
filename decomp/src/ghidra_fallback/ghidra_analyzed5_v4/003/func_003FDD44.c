#include "ghidra_types.h"


// USA 003FDD44 <- EU 003FDD24 (Ghidra, non-matching)

undefined4 * func_003FDD44(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}

