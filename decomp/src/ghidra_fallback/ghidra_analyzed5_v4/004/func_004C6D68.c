#include "ghidra_types.h"

extern int func_00527E00(int param_1,int param_2);

// USA 004C6D68 <- EU 004C6D40 (Ghidra, non-matching)

void func_004C6D68(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_00527E00(param_1,param_2);
  *(int *)(param_1 + 0x51c) = iVar1;
  return;
}

