#include "ghidra_types.h"

extern int func_004A3700(int param_1);

// USA 00363850 <- EU 0036382C (Ghidra, non-matching)

undefined4 func_00363850(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x38))) {
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xffffffbb | 8;
    return func_004A3700(iVar1);
  }
  return 0;
}

