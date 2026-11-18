#include "ghidra_types.h"


// USA 00676BAC <- EU 00676B84 (Ghidra, non-matching)

undefined4 * func_00676BAC(undefined4 *param_1)

{
  param_1[1] = param_1 + 1;
  *param_1 = 0;
  param_1[2] = param_1 + 1;
  return param_1;
}

