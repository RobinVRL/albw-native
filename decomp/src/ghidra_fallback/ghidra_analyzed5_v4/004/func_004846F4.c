#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_001B6D40(int param_1);

// USA 004846F4 <- EU 004846CC (Ghidra, non-matching)

void func_004846F4(int param_1)

{
  int iVar1;
  int iVar2;
  
  func_001B6D40(param_1);
  iVar2 = *(int *)(param_1 + 0x54);
  for (iVar1 = *(int *)(param_1 + 0x4c); iVar1 = iVar1 - iVar2,
      iVar1 != (param_1 + 0x48) - *(int *)(param_1 + 0x54); iVar1 = *(int *)(iVar1 + iVar2 + 4)) {
    func_0012C718(iVar1);
  }
  return;
}

