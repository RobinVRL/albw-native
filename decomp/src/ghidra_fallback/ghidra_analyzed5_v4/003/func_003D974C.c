#include "ghidra_types.h"


// USA 003D974C <- EU 003D972C (Ghidra, non-matching)

undefined4 * func_003D974C(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = param_1 + 1;
  param_1[3] = 0;
  param_1[2] = param_1 + 1;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}

