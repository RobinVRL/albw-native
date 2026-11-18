#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003AA5D0(int param_1,int *param_2);

// USA 006884C8 <- EU 006884A0 (Ghidra, non-matching)

undefined4 func_006884C8(int *param_1)

{
  int iVar1;
  
  iVar1 = func_0010CF28(800,*(int **)(*param_1 + *(int *)(*param_1 + 0x14) * 4),4);
  if (iVar1 != 0) {
    return func_003AA5D0(iVar1,param_1);
  }
  return 0;
}

