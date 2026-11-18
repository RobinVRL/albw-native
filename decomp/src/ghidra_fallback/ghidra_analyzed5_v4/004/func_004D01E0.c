#include "ghidra_types.h"


// USA 004D01E0 <- EU 004D01B8 (Ghidra, non-matching)

void func_004D01E0(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(**(int **)(param_1 + 0x20) + param_3 * 0x154);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xfbff;
  }
  else {
    uVar1 = uVar1 | 0x400;
  }
  *(ushort *)(**(int **)(param_1 + 0x20) + param_3 * 0x154) = uVar1;
  return;
}

