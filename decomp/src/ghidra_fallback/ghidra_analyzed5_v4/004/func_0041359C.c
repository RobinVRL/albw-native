#include "ghidra_types.h"


// USA 0041359C <- EU 0041357C (Ghidra, non-matching)

undefined4 * func_0041359C(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}

