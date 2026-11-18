#include "ghidra_types.h"

extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern undefined4 *DAT_004d5f9c;
extern undefined4 DAT_004d5fa0;
extern undefined4 DAT_004d5fa4;
extern undefined4 DAT_004d5fa8;

// USA 004D5F10 <- EU 004D5EE8 (Ghidra, non-matching)
// GLOBAL DAT_004d5f9c undefined4 *
// GLOBAL DAT_004d5fa0 undefined4
// GLOBAL DAT_004d5fa4 undefined4
// GLOBAL DAT_004d5fa8 undefined4

undefined4 func_004D5F10(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar2 = func_004EE484((undefined4 *)(param_1 + 0x18));
  puVar3 = func_004EDC9C((undefined4 *)(iVar2 + 100));
  puVar1 = DAT_004d5f9c;
  puVar3[0x12] = 0;
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  puVar3[0x15] = puVar3 + -0x1f;
  puVar3[0x16] = uVar4;
  puVar3[0x17] = uVar5;
  uVar4 = DAT_004d5fa0;
  puVar3[0x14] = DAT_004d5fa0;
  uVar5 = puVar1[3];
  uVar6 = puVar1[2];
  puVar3[0x19] = puVar3 + -0x1f;
  puVar3[0x1a] = uVar6;
  puVar3[0x18] = uVar4;
  puVar3[0x1d] = 0;
  puVar3[0x1b] = uVar5;
  uVar4 = DAT_004d5fa8;
  uVar5 = puVar1[9];
  puVar3[0x1e] = puVar1[8];
  puVar3[0x1f] = uVar5;
  puVar3[0x1c] = DAT_004d5fa4;
  puVar3[0x20] = 0;
  puVar3[0x21] = uVar4;
  puVar3[0x22] = 0;
  puVar3[0x23] = 0;
  *(undefined1 *)(puVar3 + 0x24) = 0;
  *(undefined1 *)((int)puVar3 + 0x91) = 0;
  *(undefined1 *)((int)puVar3 + 0x92) = 0;
  *(undefined1 *)((int)puVar3 + 0x93) = 0;
  *(undefined1 *)(puVar3 + 0x25) = 0;
  *(undefined1 *)((int)puVar3 + 0x95) = 0;
  *(undefined1 *)((int)puVar3 + 0x96) = 0;
  *(undefined2 *)(puVar3 + 0x26) = 0;
  return (undefined4)param_1;
}

