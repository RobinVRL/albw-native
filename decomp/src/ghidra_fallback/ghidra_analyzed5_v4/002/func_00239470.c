#include "ghidra_types.h"

extern undefined4 *DAT_002395b4;
extern undefined4 DAT_002395b8;
extern undefined4 DAT_002395bc;
extern undefined4 DAT_002395c0;
extern undefined4 *DAT_002395c4;
extern undefined4 DAT_002395c8;

// USA 00239470 <- EU 00239470 (Ghidra, non-matching)
// GLOBAL DAT_002395b4 undefined4 *
// GLOBAL DAT_002395b8 undefined4
// GLOBAL DAT_002395bc undefined4
// GLOBAL DAT_002395c0 undefined4
// GLOBAL DAT_002395c4 undefined4 *
// GLOBAL DAT_002395c8 undefined4

undefined4 func_00239470(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = DAT_002395b4;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar4 = DAT_002395c0;
  uVar3 = DAT_002395bc;
  uVar2 = DAT_002395b8;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  *(undefined4 *)(param_1 + 0x10) = *puVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  *(undefined4 *)(param_1 + 0x1c) = *puVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  *(undefined4 *)(param_1 + 0x28) = *puVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  *(undefined4 *)(param_1 + 0x34) = *puVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 3;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined2 *)(param_1 + 0x98) = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  puVar1 = DAT_002395c4;
  uVar2 = DAT_002395c4[1];
  uVar3 = *DAT_002395c4;
  *(undefined1 **)(param_1 + 0xb0) = param_1;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  uVar2 = DAT_002395c8;
  *(undefined4 *)(param_1 + 0xac) = DAT_002395c8;
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined1 **)(param_1 + 0xc0) = param_1;
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  *(undefined4 *)(param_1 + 200) = uVar4;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  return (undefined4)param_1;
}

