#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0029D43C(int param_1,int *param_2);

// USA 00688340 <- EU 00688318 (Ghidra, non-matching)

undefined4 func_00688340(int *param_1)

{
  int iVar1;
  
  iVar1 = func_0010CF28(0x158,*(int **)(*param_1 + *(int *)(*param_1 + 0x14) * 4),4);
  if (iVar1 != 0) {
    return func_0029D43C(iVar1,param_1);
  }
  return 0;
}

