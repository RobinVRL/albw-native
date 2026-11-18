#include "ghidra_types.h"


// USA 00300054 <- EU 00300030 (Ghidra, function missing from the decomp table)

void func_00300054(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[6];
  if ((*param_1 & 1) == 0) {
    return;
  }
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (*(code *)param_1[1])(0x20,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  return;
}

