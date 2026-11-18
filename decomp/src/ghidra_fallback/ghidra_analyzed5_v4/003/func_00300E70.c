#include "ghidra_types.h"


// USA 00300E70 <- EU 00300E4C (Ghidra, function missing from the decomp table)

void func_00300E70(undefined2 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)*param_2;
  if (puVar1 < (undefined2 *)param_2[1]) {
    *param_2 = puVar1 + 1;
    *puVar1 = param_1;
  }
  return;
}

