#include "ghidra_types.h"


// USA 003D88B0 <- EU 003D8890 (Ghidra, non-matching)

undefined4 * func_003D88B0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = param_1 + 1;
  param_1[3] = 0;
  param_1[2] = param_1 + 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}

