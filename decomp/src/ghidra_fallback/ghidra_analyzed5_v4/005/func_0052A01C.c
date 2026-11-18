#include "ghidra_types.h"


// USA 0052A01C <- EU 00529FF4 (Ghidra, non-matching)

undefined4 func_0052A01C(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((((int)param_2 < 1) || (*(int *)(*(int *)(param_1 + 0x40) + 0x18) == 0)) ||
     (uVar1 = 0,
     (*(uint *)(*(int *)(param_1 + 0x40) + 0x15c + (param_2 >> 5) * 4) & 1 << (param_2 & 0x1f)) != 0
     )) {
    uVar1 = 1;
  }
  return uVar1;
}

