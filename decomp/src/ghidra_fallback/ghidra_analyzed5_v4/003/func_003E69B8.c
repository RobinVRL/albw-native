#include "ghidra_types.h"


// USA 003E69B8 <- EU 003E6998 (Ghidra, non-matching)

void func_003E69B8(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  while (param_2 != param_3) {
    puVar1 = (undefined4 *)*param_2;
    puVar2 = (undefined4 *)param_2[1];
    puVar1[1] = puVar2;
    *puVar2 = puVar1;
    *param_1 = *param_1 + -1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2 = puVar1;
  }
  return;
}

