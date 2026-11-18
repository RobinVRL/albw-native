#include "ghidra_types.h"

extern int DAT_005a7da4;
extern undefined4 *DAT_005a7da8;
extern undefined1 *DAT_005a7dac;
extern undefined4 DAT_005a7db0;
extern undefined4 DAT_005a7db4;
extern undefined4 DAT_005a7db8;
extern undefined4 DAT_005a7dbc;
extern undefined4 DAT_005a7dc0;
extern undefined4 DAT_005a7dc4;
extern undefined4 DAT_005a7dc8;
extern undefined4 DAT_005a7dcc;
extern undefined4 DAT_005a7dd0;
extern undefined4 DAT_005a7dd4;
extern undefined4 DAT_005a7dd8;
extern undefined4 DAT_005a7ddc;
extern undefined4 DAT_005a7de0;
extern undefined4 DAT_005a7de4;
extern undefined4 DAT_005a7de8;

// USA 005A7CEC <- EU 005A7CC4 (Ghidra, non-matching)
// GLOBAL DAT_005a7da4 int
// GLOBAL DAT_005a7da8 undefined4 *
// GLOBAL DAT_005a7dac undefined1 *
// GLOBAL DAT_005a7db0 undefined4
// GLOBAL DAT_005a7db4 undefined4
// GLOBAL DAT_005a7db8 undefined4
// GLOBAL DAT_005a7dbc undefined4
// GLOBAL DAT_005a7dc0 undefined4
// GLOBAL DAT_005a7dc4 undefined4
// GLOBAL DAT_005a7dc8 undefined4
// GLOBAL DAT_005a7dcc undefined4
// GLOBAL DAT_005a7dd0 undefined4
// GLOBAL DAT_005a7dd4 undefined4
// GLOBAL DAT_005a7dd8 undefined4
// GLOBAL DAT_005a7ddc undefined4
// GLOBAL DAT_005a7de0 undefined4
// GLOBAL DAT_005a7de4 undefined4
// GLOBAL DAT_005a7de8 undefined4

void func_005A7CEC(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = DAT_005a7db4;
  iVar1 = DAT_005a7da4;
  *(undefined4 *)(DAT_005a7da4 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005a7da8;
  *DAT_005a7da8 = 0;
  puVar2[1] = 0;
  uVar4 = DAT_005a7db0;
  puVar3 = DAT_005a7dac;
  *DAT_005a7dac = 2;
  *(undefined4 *)(puVar3 + 4) = uVar4;
  puVar3[8] = 2;
  *(undefined4 *)(puVar3 + 0xc) = uVar5;
  uVar4 = DAT_005a7db8;
  puVar3[0x10] = 2;
  uVar5 = DAT_005a7de8;
  *(undefined4 *)(puVar3 + 0x14) = uVar4;
  uVar4 = DAT_005a7dbc;
  puVar3[0x18] = 2;
  *(undefined4 *)(puVar3 + 0x1c) = uVar4;
  uVar4 = DAT_005a7dc0;
  puVar3[0x20] = 2;
  *(undefined4 *)(puVar3 + 0x24) = uVar4;
  uVar4 = DAT_005a7dc4;
  puVar3[0x28] = 2;
  *(undefined4 *)(puVar3 + 0x2c) = uVar4;
  uVar4 = DAT_005a7dc8;
  puVar3[0x30] = 2;
  *(undefined4 *)(puVar3 + 0x34) = uVar4;
  uVar4 = DAT_005a7dcc;
  puVar3[0x38] = 2;
  *(undefined4 *)(puVar3 + 0x3c) = uVar4;
  uVar4 = DAT_005a7dd0;
  puVar3[0x40] = 2;
  *(undefined4 *)(puVar3 + 0x44) = uVar4;
  uVar4 = DAT_005a7dd4;
  puVar3[0x48] = 2;
  *(undefined4 *)(puVar3 + 0x4c) = uVar4;
  uVar4 = DAT_005a7dd8;
  puVar3[0x50] = 2;
  *(undefined4 *)(puVar3 + 0x54) = uVar4;
  uVar4 = DAT_005a7ddc;
  puVar3[0x58] = 2;
  *(undefined4 *)(puVar3 + 0x5c) = uVar4;
  uVar4 = DAT_005a7de0;
  puVar3[0x60] = 2;
  *(undefined4 *)(puVar3 + 100) = uVar4;
  uVar4 = DAT_005a7de4;
  puVar3[0x68] = 2;
  *(undefined4 *)(puVar3 + 0x6c) = uVar4;
  puVar3[0x70] = 2;
  *(undefined4 *)(puVar3 + 0x74) = uVar5;
  return;
}

