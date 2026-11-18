#include "ghidra_types.h"


// USA 0025A64C <- EU 0025A674 (Ghidra, non-matching)

void func_0025A64C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  return;
}

