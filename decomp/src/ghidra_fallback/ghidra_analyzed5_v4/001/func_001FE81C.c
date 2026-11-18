#include "ghidra_types.h"


// USA 001FE81C <- EU 001FE81C (Ghidra, non-matching)

undefined1 * func_001FE81C(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  return param_1;
}

