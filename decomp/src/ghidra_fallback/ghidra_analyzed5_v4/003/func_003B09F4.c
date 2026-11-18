#include "ghidra_types.h"

extern int func_002C40E4(int *param_1,int param_2);

// USA 003B09F4 <- EU 003B09D0 (Ghidra, non-matching)

undefined4 func_003B09F4(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xd4))(param_1);
  *(int **)(iVar1 + 0x10) = param_1 + 1;
  return func_002C40E4(param_1,param_1[0x12]);
}

