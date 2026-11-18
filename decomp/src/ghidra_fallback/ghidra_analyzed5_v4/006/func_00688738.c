#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00429DF4(int param_1,int *param_2);

// USA 00688738 <- EU 00688710 (Ghidra, non-matching)

undefined4 func_00688738(int *param_1)

{
  int iVar1;
  
  iVar1 = func_0010CF28(0x1f0,*(int **)(*param_1 + *(int *)(*param_1 + 0x14) * 4),4);
  if (iVar1 != 0) {
    return func_00429DF4(iVar1,param_1);
  }
  return 0;
}

