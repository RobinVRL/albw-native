#include "ghidra_types.h"


// USA 00410768 <- EU 00410748 (Ghidra, non-matching)

undefined4 * func_00410768(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}

