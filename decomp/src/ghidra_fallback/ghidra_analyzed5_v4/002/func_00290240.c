#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 00290240 <- EU 00290268 (Ghidra, non-matching)

bool func_00290240(int param_1,undefined1 param_2,undefined1 param_3,float fparam_0)

{
  int iVar1;
  
  iVar1 = func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),0x97);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0xc) = param_2;
    *(undefined1 *)(iVar1 + 0xd) = param_3;
    *(float *)(iVar1 + 0x10) = fparam_0;
  }
  return iVar1 != 0;
}

