#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 00292010 <- EU 00292038 (Ghidra, non-matching)

undefined4 func_00292010(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),0x8f);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10) = *param_2;
    *(undefined4 *)(iVar1 + 0x14) = param_2[1];
    *(undefined4 *)(iVar1 + 0x18) = param_2[2];
    *(undefined4 *)(iVar1 + 0x1c) = param_3;
  }
  return 1;
}

