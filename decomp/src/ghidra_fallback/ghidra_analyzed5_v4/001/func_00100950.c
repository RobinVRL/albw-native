#include "ghidra_types.h"


// USA 00100950 <- EU 00100950 (Ghidra, function missing from the decomp table)

int func_00100950(int param_1,undefined *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = param_4 * param_3 + param_1;
    do {
      iVar1 = iVar1 - param_3;
      (*(code *)param_2)(iVar1);
    } while (param_1 != iVar1);
  }
  return param_1 + -8;
}

