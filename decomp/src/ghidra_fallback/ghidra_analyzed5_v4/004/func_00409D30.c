#include "ghidra_types.h"

extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);

// USA 00409D30 <- EU 00409D10 (Ghidra, non-matching)

uint func_00409D30(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x1c);
  if (param_3 <= uVar1) {
    uVar1 = param_3;
  }
  func_001163A0(param_2,(uint *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c)),uVar1);
  return uVar1;
}

