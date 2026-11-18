#include "ghidra_types.h"

extern int func_001164F4(undefined4 *param_1,uint param_2);

// USA 003E6A5C <- EU 003E6A3C (Ghidra, non-matching)

void func_003E6A5C(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[1];
  uVar2 = iVar1 + (param_2 - 1U) & ~(param_2 - 1U);
  func_001164F4((undefined4 *)(*param_1 + iVar1),uVar2 - iVar1);
  param_1[1] = uVar2;
  return;
}

