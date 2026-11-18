#include "ghidra_types.h"

extern int func_002C00A8(int param_1);

// USA 004B9704 <- EU 004B96DC (Ghidra, non-matching)

void func_004B9704(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 100);
  for (iVar2 = *(int *)(param_1 + 0x5c) - iVar1; iVar2 != (param_1 + 0x58) - iVar1;
      iVar2 = *(int *)(iVar2 + iVar1 + 4) - iVar1) {
    func_002C00A8(iVar2);
  }
  return;
}

