#include "ghidra_types.h"


// USA 0040C83C <- EU 0040C81C (Ghidra, non-matching)

bool func_0040C83C(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 != 0) {
    *(int *)(iVar1 + 0x1c) = param_2;
    *(undefined4 *)(iVar1 + 0x20) = param_3;
  }
  return param_2 != 0;
}

