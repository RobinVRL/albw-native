#include "ghidra_types.h"


// USA 003F41E0 <- EU 003F41C0 (Ghidra, non-matching)

undefined4 * func_003F41E0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}

