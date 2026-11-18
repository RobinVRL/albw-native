#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014CEE4(int param_1,int *param_2);

// USA 0068821C <- EU 006881F4 (Ghidra, non-matching)

undefined4 func_0068821C(int *param_1)

{
  int iVar1;
  
  iVar1 = func_0010CF28(0x228,*(int **)(*param_1 + *(int *)(*param_1 + 0x14) * 4),4);
  if (iVar1 != 0) {
    return func_0014CEE4(iVar1,param_1);
  }
  return 0;
}

