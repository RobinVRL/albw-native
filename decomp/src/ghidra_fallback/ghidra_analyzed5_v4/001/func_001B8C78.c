#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0016A878(int param_1);
extern undefined4 DAT_001b8da8;
extern undefined4 DAT_001b8dac;
extern undefined4 DAT_001b8db0;
extern undefined4 DAT_001b8db4;
extern undefined *DAT_001b8db8;
extern undefined4 *DAT_001b8dbc;
extern undefined4 *DAT_001b8dc0;

// USA 001B8C78 <- EU 001B8C78 (Ghidra, non-matching)
// GLOBAL DAT_001b8da8 undefined4
// GLOBAL DAT_001b8dac undefined4
// GLOBAL DAT_001b8db0 undefined4
// GLOBAL DAT_001b8db4 undefined4
// GLOBAL DAT_001b8db8 undefined *
// GLOBAL DAT_001b8dbc undefined4 *
// GLOBAL DAT_001b8dc0 undefined4 *

uint * func_001B8C78(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  
  uVar1 = DAT_001b8db4;
  *param_1 = DAT_001b8da8;
  param_1[2] = param_1 + 4;
  param_1[3] = 0x40;
  *(undefined1 *)((int)param_1 + 0x4f) = 0;
  *(undefined1 *)param_1[2] = 0;
  puVar2 = DAT_001b8db8;
  param_1[1] = uVar1;
  iVar5 = func_00100118((int)(param_1 + 0x14),puVar2,0x4c,3);
  iVar5 = func_00100118(iVar5 + 0xe4,DAT_001b8db8,0x4c,3);
  iVar5 = func_00100118(iVar5 + 0xe4,DAT_001b8db8,0x4c,2);
  *(undefined4 *)(iVar5 + 0xa0) = 0x40;
  *(int *)(iVar5 + 0x9c) = iVar5 + 0xa4;
  puVar4 = DAT_001b8dc0;
  *(undefined1 *)(iVar5 + 0xe3) = 0;
  **(undefined1 **)(iVar5 + 0x9c) = 0;
  *(undefined4 *)(iVar5 + 0x98) = uVar1;
  *(undefined4 *)(iVar5 + 0xec) = 0x40;
  *(int *)(iVar5 + 0xe8) = iVar5 + 0xf0;
  *(undefined1 *)(iVar5 + 0x12f) = 0;
  puVar3 = DAT_001b8dbc;
  **(undefined1 **)(iVar5 + 0xe8) = 0;
  *(undefined4 *)(iVar5 + 0xe4) = uVar1;
  *(undefined4 *)(iVar5 + 0x130) = *puVar3;
  *(undefined4 *)(iVar5 + 0x134) = *puVar3;
  *(undefined4 *)(iVar5 + 0x138) = *puVar3;
  *(undefined4 *)(iVar5 + 0x13c) = *puVar4;
  *(undefined4 *)(iVar5 + 0x140) = *puVar3;
  *(undefined4 *)(iVar5 + 0x144) = *puVar3;
  *(undefined4 *)(iVar5 + 0x148) = *puVar3;
  *(undefined4 *)(iVar5 + 0x14c) = *puVar4;
  puVar6 = func_0016A878(iVar5 + 0x168);
  *(undefined1 *)((int)puVar6 + 0x1fa) = 0;
  *(undefined1 *)((int)puVar6 + 0x1fb) = 0;
  *(undefined1 *)((int)puVar6 + 0x1fe) = 1;
  return puVar6 + -0xe0;
}

