#include "ghidra_types.h"


// USA 0052A024 <- EU 00529FFC (Ghidra, non-matching)

undefined4 func_0052A024(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((((int)param_2 < 1) || (*(int *)(param_1 + 0x18) == 0)) ||
     (uVar1 = 0, (*(uint *)(param_1 + 0x15c + (param_2 >> 5) * 4) & 1 << (param_2 & 0x1f)) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

