#include "ghidra_types.h"


// USA 0031E300 <- EU 0031E2DC (Ghidra, non-matching)

void func_0031E300(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x5fc);
  *(undefined4 *)(iVar1 + 0x20) = 0x1e;
  *(undefined4 *)(iVar1 + 0x18) = 0x14;
  *(undefined4 *)(iVar1 + 0x1c) = 0x1e;
  return;
}

