#include "ghidra_types.h"


// USA 003FB500 <- EU 003FB4E0 (Ghidra, non-matching)

uint * func_003FB500(uint *param_1,int *param_2,uint param_3,int param_4,...)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*param_2 + param_4) - 1U & ~(param_4 - 1U);
    *param_2 = uVar1 + param_3;
  }
  *param_1 = uVar1;
  param_1[1] = param_3;
  return param_1;
}

