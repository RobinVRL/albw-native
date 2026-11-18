#include "ghidra_types.h"


// USA 0068C570 <- EU 0068C548 (Ghidra, non-matching)

undefined4 * func_0068C570(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 9;
  param_1[2] = 0;
  if (param_1 + 3 != (undefined4 *)0x0) {
    param_1[2] = param_1 + 3;
  }
  return param_1;
}

