#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 0028F7B0 <- EU 0028F7D8 (Ghidra, non-matching)

int func_0028F7B0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = func_002D55D0(*(int *)(param_1 + 0x48),param_2);
  return iVar1;
}

