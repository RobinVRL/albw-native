#include "ghidra_types.h"


// USA 0053ED30 <- EU 0053ED08 (Ghidra, non-matching)

int func_0053ED30(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x600);
  return *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x24) + 0x14) + *(int *)(iVar1 + 0x90) * 0x30;
}

