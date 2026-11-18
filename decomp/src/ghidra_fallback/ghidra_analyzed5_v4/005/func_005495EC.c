#include "ghidra_types.h"

extern int func_00532984(int param_1,int param_2);

// USA 005495EC <- EU 005495C4 (Ghidra, non-matching)

undefined4 func_005495EC(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_00532984(param_1,param_2);
  if ((iVar1 != 0) ||
     (((*(int *)(param_1 + 0x108) != 0 && (*(int *)(param_1 + 0x108) == *(int *)(param_2 + 0x2cc)))
      || (uVar2 = 0, (*(uint *)(param_2 + 0x2e0) & 4) != 0)))) {
    uVar2 = 1;
  }
  return uVar2;
}

