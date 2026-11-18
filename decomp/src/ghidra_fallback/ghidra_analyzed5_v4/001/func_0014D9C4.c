#include "ghidra_types.h"

extern undefined4 DAT_0014d9d4;

// USA 0014D9C4 <- EU 0014D9C4 (Ghidra, non-matching)
// GLOBAL DAT_0014d9d4 undefined4

undefined4 * func_0014D9C4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0014d9d4;
  *param_1 = DAT_0014d9d4;
  param_1[1] = uVar1;
  return param_1;
}

