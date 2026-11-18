#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003C21F4(int param_1,int *param_2,int param_3);

// USA 00688648 <- EU 00688620 (Ghidra, non-matching)

undefined4 func_00688648(int *param_1)

{
  int iVar1;
  
  iVar1 = func_0010CF28(0x208,*(int **)(*param_1 + *(int *)(*param_1 + 0x14) * 4),4);
  if (iVar1 != 0) {
    return func_003C21F4(iVar1,param_1,(int)"SimpleBlack" /* EU 0068865C */);
  }
  return 0;
}

