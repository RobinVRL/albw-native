#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0028AAA8(int param_1,undefined4 param_2,uint param_3);
extern undefined4 uRam0028a89c;
extern undefined4 uRam0028a8a0;
extern undefined4 uRam0028a8a4;
extern undefined4 DAT_0028a898;

// USA 0028A7F0 <- EU 0028A818 (Ghidra, non-matching)
// GLOBAL DAT_0028a898 undefined4
// GLOBAL UNK_0028a89c undefined4
// GLOBAL UNK_0028a8a0 undefined4
// GLOBAL UNK_0028a8a4 undefined4

void func_0028A7F0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_r1;
  uint in_r2;
  undefined4 uVar3;
  
  uVar3 = DAT_0028a898;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0028a898;
  *(undefined4 *)(param_1 + 0x3e0) = uVar3;
  *(undefined4 *)(param_1 + 0x3e4) = uVar3;
  func_00151148(*(int *)(param_1 + 0x57c),1);
  bVar1 = func_0028AAA8(param_1,extraout_r1,in_r2);
  uVar3 = uRam0028a89c;
  if (!bVar1) {
    uVar3 = uRam0028a8a0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x478) + 0x134) = uVar3;
  uVar3 = uRam0028a8a4;
  *(undefined4 *)(param_1 + 0x5b0) = uRam0028a8a4;
  *(undefined4 *)(param_1 + 0x5ac) = uVar3;
  *(undefined4 *)(param_1 + 0x5a8) = uVar3;
  iVar2 = *(int *)(param_1 + 0x478);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_1 + 0x5a8);
  *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(param_1 + 0x5ac);
  *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(param_1 + 0x5b0);
  return;
}

