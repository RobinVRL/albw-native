#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern undefined4 uRam0021f310;
extern undefined4 uRam0021f314;

// USA 0021F260 <- EU 0021F260 (Ghidra, non-matching)
// GLOBAL UNK_0021f310 undefined4
// GLOBAL UNK_0021f314 undefined4

void func_0021F260(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  func_004FABDC(param_1,0x1b,0,0);
  *(undefined4 *)(param_1 + 0xa0c) = 1;
  uVar1 = uRam0021f310;
  uVar2 = *(uint *)(param_1 + 0xa00);
  iVar3 = *(int *)(uVar2 + 0x28);
  if (iVar3 != 0) {
    uVar2 = *(uint *)(uVar2 + 0x20);
  }
  if (iVar3 != 0 && 1 < uVar2) {
    iVar3 = *(int *)(iVar3 + 4);
  }
  else {
    iVar3 = 0;
  }
  uVar4 = *(undefined4 *)(iVar3 + 0x18);
  uVar5 = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(iVar3 + 0x20);
  *(undefined4 *)(param_1 + 0x3d0) = uVar4;
  *(undefined4 *)(param_1 + 0x3d4) = uVar5;
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xa58);
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  uVar1 = uRam0021f314;
  uVar2 = *(uint *)(param_1 + 0xa00);
  iVar3 = *(int *)(uVar2 + 0x28);
  if (iVar3 != 0) {
    uVar2 = *(uint *)(uVar2 + 0x20);
  }
  if (iVar3 != 0 && 4 < uVar2) {
    iVar3 = *(int *)(iVar3 + 0x10);
  }
  else {
    iVar3 = 0;
  }
  uVar4 = *(undefined4 *)(iVar3 + 0x18);
  uVar5 = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(param_1 + 0xa64) = *(undefined4 *)(iVar3 + 0x20);
  *(undefined4 *)(param_1 + 0xa5c) = uVar4;
  *(undefined4 *)(param_1 + 0xa60) = uVar5;
  *(undefined4 *)(param_1 + 0xa60) = uVar1;
  return;
}

