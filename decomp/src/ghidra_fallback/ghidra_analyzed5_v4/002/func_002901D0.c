#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 002901D0 <- EU 002901F8 (Ghidra, non-matching)

undefined4 func_002901D0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(short *)(*(int *)(param_1 + 0x14) + 0x42) == 0x23) &&
     (iVar1 = func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),0x26), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

