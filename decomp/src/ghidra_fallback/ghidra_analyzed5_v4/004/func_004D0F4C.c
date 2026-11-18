#include "ghidra_types.h"

extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAB0(int param_1,undefined4 *param_2);
extern undefined4 DAT_004d1034;
extern undefined4 DAT_004d1038;

// USA 004D0F4C <- EU 004D0F24 (Ghidra, non-matching)
// GLOBAL DAT_004d1034 undefined4
// GLOBAL DAT_004d1038 undefined4

undefined4 func_004D0F4C(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x10);
  uVar1 = DAT_004d1034;
  *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x484);
  uVar2 = DAT_004d1038;
  iVar3 = *(int *)(param_1 + 0x478);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar3 + 0x80) = uVar1;
  *(undefined4 *)(iVar3 + 0x84) = uVar2;
  *(undefined4 *)(iVar3 + 0x88) = uVar2;
  *(undefined4 *)(iVar3 + 0x90) = uVar2;
  *(undefined4 *)(iVar3 + 0x94) = uVar1;
  *(undefined4 *)(iVar3 + 0x98) = uVar2;
  *(undefined4 *)(iVar3 + 0xa0) = uVar2;
  *(undefined4 *)(iVar3 + 0xa4) = uVar2;
  *(undefined4 *)(iVar3 + 0xa8) = uVar1;
  *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
  func_004CEAF0(*(int *)(param_1 + 0x478));
  *(bool *)(*(int *)(param_1 + 0x47c) + 0x44) = *(char *)(param_1 + 0x4a0) != '\x02';
  func_004EDAB0(*(int *)(param_1 + 0x47c),(undefined4 *)(param_1 + 0x3d0));
  iVar3 = *(int *)(*(int *)(param_1 + 0x47c) + 0x10);
  if (*(byte *)(param_1 + 0x4a0) < 2) {
    *(undefined2 *)(iVar3 + 100) = 0xbf;
  }
  else {
    *(undefined2 *)(iVar3 + 100) = 0xa4;
  }
  return func_004ED9C8(*(int *)(param_1 + 0x47c));
}

