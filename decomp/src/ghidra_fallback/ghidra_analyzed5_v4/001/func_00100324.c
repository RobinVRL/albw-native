#include "ghidra_types.h"


// USA 00100324 <- EU 00100324 (Ghidra, function missing from the decomp table)

void func_00100324(undefined1 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = param_1;
  *param_2 = puVar1 + 1;
  return;
}

