#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 0028F218 <- EU 0028F240 (Ghidra, non-matching)

void func_0028F218(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),0x89);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = param_2;
  }
  return;
}

