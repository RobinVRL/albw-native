#include "ghidra_types.h"


// USA 001DB854 <- EU 001DB854 (Ghidra, non-matching)

void func_001DB854(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  *(undefined4 *)(param_1 + 0x368) = *param_2;
  *(undefined4 *)(param_1 + 0x36c) = uVar4;
  *(undefined4 *)(param_1 + 0x370) = uVar5;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  *(undefined4 *)(param_1 + 0x3d0) = *param_2;
  *(undefined4 *)(param_1 + 0x3d4) = uVar4;
  *(undefined4 *)(param_1 + 0x3d8) = uVar5;
  *(undefined4 *)(param_1 + 0x3d0) = uVar1;
  *(undefined4 *)(param_1 + 0x3d4) = uVar2;
  *(undefined4 *)(param_1 + 0x3d8) = uVar3;
  return;
}

