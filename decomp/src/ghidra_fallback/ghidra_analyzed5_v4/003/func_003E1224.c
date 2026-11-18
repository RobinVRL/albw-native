#include "ghidra_types.h"


// USA 003E1224 <- EU 003E1204 (Ghidra, non-matching)

void func_003E1224(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  iVar1 = *(int *)(param_1 + 0x68);
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(iVar1 + 0x20) = param_2;
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 2;
  return;
}

