#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001E31E8(int param_1,int *param_2);

// USA 00688254 <- EU 0068822C (Ghidra, non-matching)

undefined4 func_00688254(int *param_1)

{
  int iVar1;
  
  iVar1 = func_0010CF28(0xbc,*(int **)(*param_1 + *(int *)(*param_1 + 0x14) * 4),4);
  if (iVar1 != 0) {
    return func_001E31E8(iVar1,param_1);
  }
  return 0;
}

