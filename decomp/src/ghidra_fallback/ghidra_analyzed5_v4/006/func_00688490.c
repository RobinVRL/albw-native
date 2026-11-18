#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003A0528(int param_1,int *param_2);

// USA 00688490 <- EU 00688468 (Ghidra, non-matching)

undefined4 func_00688490(int *param_1)

{
  int iVar1;
  
  iVar1 = func_0010CF28(0x2d8,*(int **)(*param_1 + *(int *)(*param_1 + 0x14) * 4),4);
  if (iVar1 != 0) {
    return func_003A0528(iVar1,param_1);
  }
  return 0;
}

