#include "ghidra_types.h"

extern int func_002C40E4(int *param_1,int param_2);

// USA 003BD12C <- EU 003BD108 (Ghidra, non-matching)

void func_003B09F8(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xd4))(param_1);
  *(int **)(iVar1 + 0x10) = param_1 + 1;
  func_002C40E4(param_1,param_1[0x12]);
  return;
}

