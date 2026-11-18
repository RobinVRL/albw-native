#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern undefined *DAT_0016e58c;
extern undefined4 DAT_0016e590;
extern undefined4 *DAT_0016e594;
extern undefined4 DAT_0016e598;
extern undefined4 DAT_0016e59c;

// USA 0016E460 <- EU 0016E460 (Ghidra, non-matching)
// GLOBAL DAT_0016e58c undefined *
// GLOBAL DAT_0016e590 undefined4
// GLOBAL DAT_0016e594 undefined4 *
// GLOBAL DAT_0016e598 undefined4
// GLOBAL DAT_0016e59c undefined4

int func_0016E460(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar3 = func_00100118(param_1 + 0xc,DAT_0016e58c,0xc,2);
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  *(undefined4 *)(iVar3 + 0x34) = 0;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  func_00110490((undefined4 *)(iVar3 + 0x40),0x60);
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(undefined4 *)(iVar3 + 0x44) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined4 *)(iVar3 + 0x50) = 0;
  *(undefined4 *)(iVar3 + 0x54) = 0;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  *(undefined4 *)(iVar3 + 0x60) = 0;
  *(undefined4 *)(iVar3 + 100) = 0;
  *(undefined4 *)(iVar3 + 0x68) = 0;
  *(undefined4 *)(iVar3 + 0x6c) = 0;
  *(undefined4 *)(iVar3 + 0x70) = 0;
  *(undefined4 *)(iVar3 + 0x74) = 0;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  *(undefined4 *)(iVar3 + 0x7c) = 0;
  *(undefined4 *)(iVar3 + 0x80) = 0;
  *(undefined4 *)(iVar3 + 0x84) = 0;
  *(undefined4 *)(iVar3 + 0x88) = 0;
  *(undefined4 *)(iVar3 + 0x8c) = 0;
  *(undefined4 *)(iVar3 + 0x90) = 0;
  *(undefined4 *)(iVar3 + 0x94) = 0;
  *(undefined4 *)(iVar3 + 0x98) = 0;
  *(undefined4 *)(iVar3 + 0x9c) = 0;
  *(undefined4 *)(iVar3 + 0xa0) = 0;
  *(undefined4 *)(iVar3 + 0xa4) = 0;
  *(undefined4 *)(iVar3 + 0xa8) = 0;
  *(undefined4 *)(iVar3 + 0xac) = 0;
  *(undefined4 *)(iVar3 + 0xb0) = 0;
  puVar2 = DAT_0016e594;
  *(undefined4 *)(iVar3 + 0xb4) = 0;
  *(int *)(iVar3 + 0xbc) = iVar3 + 0xb8;
  *(undefined4 *)(iVar3 + 0xc0) = 0;
  *(int *)(iVar3 + 0xb8) = iVar3 + 0xb8;
  uVar1 = DAT_0016e590;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  *(undefined4 *)(iVar3 + 0xc4) = *puVar2;
  *(undefined4 *)(iVar3 + 200) = uVar4;
  *(undefined4 *)(iVar3 + 0xcc) = uVar5;
  *(undefined4 *)(iVar3 + 0xd0) = uVar1;
  uVar1 = DAT_0016e598;
  *(undefined4 *)(iVar3 + 0xd4) = DAT_0016e598;
  *(undefined4 *)(iVar3 + 0xd8) = uVar1;
  *(undefined4 *)(iVar3 + 0xdc) = uVar1;
  uVar1 = DAT_0016e59c;
  *(undefined4 *)(iVar3 + 0xe0) = DAT_0016e59c;
  *(undefined4 *)(iVar3 + 0xe4) = uVar1;
  *(undefined4 *)(iVar3 + 0xe8) = uVar1;
  *(undefined4 *)(iVar3 + 0xec) = 0;
  *(undefined4 *)(iVar3 + 0xf0) = 0;
  return iVar3 + -0xc;
}

