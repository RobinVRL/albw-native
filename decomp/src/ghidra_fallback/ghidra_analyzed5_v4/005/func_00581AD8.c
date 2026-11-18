#include "ghidra_types.h"


// USA 00581AD8 <- EU 00581AB0 (Ghidra, non-matching)

bool func_00581AD8(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x76a0);
  if (*(uint *)(param_1 + 0x5b50) < *(uint *)(param_1 + 0x769c)) {
    iVar1 = iVar1 + *(uint *)(param_1 + 0x5b50) * 0x38;
  }
  return (*(uint *)(iVar1 + (param_2 >> 5) * 4) & 1 << (param_2 & 0x1f)) != 0;
}

