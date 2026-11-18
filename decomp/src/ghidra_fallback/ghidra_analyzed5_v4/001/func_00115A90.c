#include "ghidra_types.h"


// USA 00115A90 <- EU 00115A90 (Ghidra, non-matching)

undefined4 func_00115A90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  return (undefined4)param_1;
}

