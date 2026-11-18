#include "ghidra_types.h"


// USA 00676BDC <- EU 00676BB4 (Ghidra, non-matching)

undefined4 * func_00676BDC(undefined4 *param_1)

{
  param_1[1] = param_1 + 1;
  *param_1 = 0;
  param_1[2] = param_1 + 1;
  return param_1;
}

