#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 0028FBC8 <- EU 0028FBF0 (Ghidra, non-matching)

void func_0028FBC8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),0x8c);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = param_2;
  }
  return;
}

