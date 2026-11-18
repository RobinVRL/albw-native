#include "ghidra_types.h"


// USA 003D26EC <- EU 003D26C8 (Ghidra, non-matching)

undefined4 * func_003D26EC(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}

