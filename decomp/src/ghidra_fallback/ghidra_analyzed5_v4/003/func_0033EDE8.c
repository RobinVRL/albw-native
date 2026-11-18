#include "ghidra_types.h"

extern undefined4 DAT_0033ee34;
extern undefined4 DAT_0033ee38;

// USA 0033EDE8 <- EU 0033EDC4 (Ghidra, non-matching)
// GLOBAL DAT_0033ee34 undefined4
// GLOBAL DAT_0033ee38 undefined4

void func_0033EDE8(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x414);
  uVar1 = *(undefined1 *)(iVar4 + 0x20);
  uVar2 = *(undefined2 *)(iVar4 + 0x32);
  *(undefined1 *)(iVar4 + 0x20) = 0;
  *(undefined1 *)(iVar4 + 0x21) = 0x1f;
  *(undefined1 *)(iVar4 + 0x22) = 0xff;
  uVar3 = DAT_0033ee34;
  *(undefined1 *)(iVar4 + 0x23) = 0;
  *(undefined4 *)(iVar4 + 0x24) = uVar3;
  *(undefined4 *)(iVar4 + 0x28) = uVar3;
  *(undefined4 *)(iVar4 + 0x2c) = uVar3;
  uVar3 = DAT_0033ee38;
  *(undefined2 *)(iVar4 + 0x30) = 0;
  *(undefined2 *)(iVar4 + 0x32) = 0xffff;
  *(undefined4 *)(iVar4 + 0x34) = uVar3;
  *(undefined1 *)(*(int *)(param_1 + 0x414) + 0x20) = uVar1;
  *(undefined2 *)(*(int *)(param_1 + 0x414) + 0x32) = uVar2;
  return;
}

