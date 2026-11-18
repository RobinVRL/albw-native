#include "ghidra_types.h"


// USA 00273AA4 <- EU 00273ACC (Ghidra, non-matching)

undefined4 * func_00273AA4(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}

