#include "ghidra_types.h"


// USA 00676B94 <- EU 00676B6C (Ghidra, non-matching)

undefined4 * func_00676B94(undefined4 *param_1)

{
  param_1[1] = param_1 + 1;
  *param_1 = 0;
  param_1[2] = param_1 + 1;
  return param_1;
}

