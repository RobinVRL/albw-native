#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0034B60C(int param_1,int *param_2);

// USA 006883E8 <- EU 006883C0 (Ghidra, non-matching)

undefined4 func_006883E8(int *param_1)

{
  int iVar1;
  
  iVar1 = func_0010CF28(0x2d4,*(int **)(*param_1 + *(int *)(*param_1 + 0x14) * 4),4);
  if (iVar1 != 0) {
    return func_0034B60C(iVar1,param_1);
  }
  return 0;
}

