#include "ghidra_types.h"


// USA 0010D3B0 <- EU 0010D3B0 (Ghidra, non-matching)

undefined4 * func_0010D3B0(undefined4 *param_1)

{
  param_1[1] = param_1 + 1;
  *param_1 = 0;
  param_1[2] = param_1 + 1;
  param_1[3] = 1;
  return param_1;
}

