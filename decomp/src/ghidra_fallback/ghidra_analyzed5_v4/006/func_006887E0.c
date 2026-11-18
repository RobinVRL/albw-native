#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004A08BC(int param_1,int *param_2);

// USA 006887E0 <- EU 006887B8 (Ghidra, non-matching)

undefined4 func_006887E0(int *param_1)

{
  int iVar1;
  
  iVar1 = func_0010CF28(0xc4,*(int **)(*param_1 + *(int *)(*param_1 + 0x14) * 4),4);
  if (iVar1 != 0) {
    return func_004A08BC(iVar1,param_1);
  }
  return 0;
}

