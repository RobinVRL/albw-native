#include "ghidra_types.h"

extern int func_003EF02C(int param_1);

// USA 003EE6E4 <- EU 003EE6C4 (Ghidra, non-matching)

void func_003EE6E4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  func_003EF02C(param_1);
  iVar1 = *(int *)(param_1 + 0x144);
  uVar2 = *(undefined4 *)(iVar1 + 0x70);
  uVar3 = *(undefined4 *)(iVar1 + 0x80);
  uVar4 = *(undefined4 *)(iVar1 + 0x30);
  uVar5 = *(undefined4 *)(iVar1 + 0x40);
  uVar6 = *(undefined4 *)(iVar1 + 0x50);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(iVar1 + 0x60);
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  *(undefined4 *)(param_1 + 300) = uVar3;
  *(undefined4 *)(param_1 + 0xdc) = uVar4;
  *(undefined4 *)(param_1 + 0xec) = uVar5;
  *(undefined4 *)(param_1 + 0xfc) = uVar6;
  return;
}

