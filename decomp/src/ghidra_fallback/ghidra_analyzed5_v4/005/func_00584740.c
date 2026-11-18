#include "ghidra_types.h"


// USA 00584740 <- EU 00584718 (Ghidra, non-matching)

void func_00584740(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(short *)(param_2 + 2) = (short)*(undefined4 *)(param_1 + 0x578);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x574);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x598);
  uVar1 = *(undefined4 *)(param_1 + 0x570);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x56c);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  uVar2 = *(undefined4 *)(param_1 + 0x58c);
  uVar3 = *(undefined4 *)(param_1 + 0x590);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x594);
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  *(undefined4 *)(param_2 + 0x1c) = uVar3;
  return;
}

