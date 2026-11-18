#include "ghidra_types.h"

extern int func_004EE484(undefined4 *param_1);
extern undefined4 *DAT_00235ec4;
extern undefined4 DAT_00235ec8;
extern undefined4 DAT_00235ecc;
extern undefined4 DAT_00235ed0;

// USA 00235DC8 <- EU 00235DC8 (Ghidra, non-matching)
// GLOBAL DAT_00235ec4 undefined4 *
// GLOBAL DAT_00235ec8 undefined4
// GLOBAL DAT_00235ecc undefined4
// GLOBAL DAT_00235ed0 undefined4

undefined4 func_00235DC8(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar3 = func_004EE484((undefined4 *)(param_1 + 0x20));
  puVar1 = DAT_00235ec4;
  iVar4 = iVar3 + -0x20;
  *(undefined4 *)(iVar3 + 100) = 0;
  *(undefined4 *)(iVar3 + 0x68) = 0;
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  *(int *)(iVar3 + 0x70) = iVar4;
  uVar2 = DAT_00235ec8;
  *(undefined4 *)(iVar3 + 0x74) = uVar5;
  *(undefined4 *)(iVar3 + 0x78) = uVar6;
  *(undefined4 *)(iVar3 + 0x6c) = uVar2;
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(int *)(iVar3 + 0x80) = iVar4;
  *(undefined4 *)(iVar3 + 0x84) = uVar5;
  *(undefined4 *)(iVar3 + 0x88) = uVar6;
  *(undefined4 *)(iVar3 + 0x7c) = uVar2;
  uVar5 = puVar1[4];
  uVar6 = puVar1[5];
  *(int *)(iVar3 + 0x90) = iVar4;
  *(undefined4 *)(iVar3 + 0x94) = uVar5;
  *(undefined4 *)(iVar3 + 0x98) = uVar6;
  *(undefined4 *)(iVar3 + 0x8c) = uVar2;
  uVar5 = puVar1[6];
  uVar6 = puVar1[7];
  *(int *)(iVar3 + 0xa0) = iVar4;
  uVar2 = DAT_00235ecc;
  *(undefined4 *)(iVar3 + 0xa4) = uVar5;
  *(undefined4 *)(iVar3 + 0xa8) = uVar6;
  *(undefined4 *)(iVar3 + 0x9c) = uVar2;
  *(undefined2 *)(iVar3 + 0xac) = 0;
  *(undefined1 *)(iVar3 + 0xae) = 0;
  *(undefined4 *)(iVar3 + 0xb0) = 0;
  *(undefined4 *)(iVar3 + 0xb4) = 0;
  *(undefined4 *)(iVar3 + 0xb8) = 0;
  *(undefined4 *)(iVar3 + 0xbc) = 0;
  *(undefined4 *)(iVar3 + 0xc0) = 0;
  *(undefined4 *)(iVar3 + 0xc4) = 0;
  *(undefined2 *)(iVar3 + 200) = 0;
  *(undefined1 *)(iVar3 + 0xca) = 0;
  uVar2 = DAT_00235ed0;
  *(undefined4 *)(iVar3 + 0xcc) = 0;
  *(undefined4 *)(iVar3 + 0xd0) = 0;
  *(undefined4 *)(iVar3 + 0xd4) = uVar2;
  *(undefined4 *)(iVar3 + 0xd8) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0xdc) = 0xffffffff;
  *(undefined1 *)(iVar3 + 0xe0) = 0;
  *(undefined1 *)(iVar3 + 0xe1) = 0;
  *(undefined1 *)(iVar3 + 0xe2) = 0;
  *(undefined1 *)(iVar3 + 0xe3) = 0;
  return (undefined4)param_1;
}

