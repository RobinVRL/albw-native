#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0029DC7C(int param_1,int *param_2);

// USA 00688378 <- EU 00688350 (Ghidra, non-matching)

undefined4 func_00688378(int *param_1)

{
  int iVar1;
  
  iVar1 = func_0010CF28(0xe0,*(int **)(*param_1 + *(int *)(*param_1 + 0x14) * 4),4);
  if (iVar1 != 0) {
    return func_0029DC7C(iVar1,param_1);
  }
  return 0;
}

