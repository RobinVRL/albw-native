#include "ghidra_types.h"

extern int func_003EF02C(int param_1);

// USA 003EE790 <- EU 003EE770 (Ghidra, non-matching)

void func_003EE790(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  func_003EF02C(param_1);
  fVar6 = *(float *)(*(int *)(param_1 + 0x138) + 0x300);
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) * fVar6;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * fVar6;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * fVar6;
  iVar1 = *(int *)(param_1 + 0x144);
  uVar2 = *(undefined4 *)(iVar1 + 0x70);
  uVar3 = *(undefined4 *)(iVar1 + 0x80);
  uVar4 = *(undefined4 *)(iVar1 + 0x30);
  uVar5 = *(undefined4 *)(iVar1 + 0x40);
  uVar7 = *(undefined4 *)(iVar1 + 0x50);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(iVar1 + 0x60);
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  *(undefined4 *)(param_1 + 300) = uVar3;
  *(undefined4 *)(param_1 + 0xdc) = uVar4;
  *(undefined4 *)(param_1 + 0xec) = uVar5;
  *(undefined4 *)(param_1 + 0xfc) = uVar7;
  return;
}

