#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0016A878(int param_1);
extern int func_001B8C78(undefined4 *param_1);
extern int func_002701E0(int *param_1);
extern int func_0027139C(int param_1);
extern undefined *DAT_00273aac;
extern int DAT_00273ab0;
extern undefined4 DAT_00273ab4;
extern undefined4 DAT_00273ab8;
extern undefined4 DAT_00273abc;
extern undefined4 DAT_00273ac0;
extern undefined4 DAT_00273ac4;
extern undefined4 DAT_00273ac8;

// USA 002738F4 <- EU 0027391C (Ghidra, non-matching)
// GLOBAL DAT_00273aac undefined *
// GLOBAL DAT_00273ab0 int
// GLOBAL DAT_00273ab4 undefined4
// GLOBAL DAT_00273ab8 undefined4
// GLOBAL DAT_00273abc undefined4
// GLOBAL DAT_00273ac0 undefined4
// GLOBAL DAT_00273ac4 undefined4
// GLOBAL DAT_00273ac8 undefined4

uint * func_002738F4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 10;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1 + 0x28 != 0) {
    *(int *)(param_1 + 0x24) = param_1 + 0x28;
  }
  iVar2 = func_00100118(param_1 + 0x28,DAT_00273aac,0x620,10);
  *(undefined4 *)(iVar2 + 0x3d4c) = 0;
  *(undefined4 *)(iVar2 + 0x3d50) = 10;
  *(undefined4 *)(iVar2 + 0x3d54) = 0;
  if (iVar2 + 0x3d58 != 0) {
    *(int *)(iVar2 + 0x3d54) = iVar2 + 0x3d58;
  }
  iVar2 = func_00100118(iVar2 + 0x3d58,DAT_00273aac,0x620,10);
  puVar3 = func_0016A878(iVar2 + 0x3d40);
  iVar2 = DAT_00273ab0;
  puVar6 = puVar3 + -0x1eb0;
  puVar3[0x7a] = 0;
  *(undefined4 *)(iVar2 + (int)puVar6) = 0xffffffff;
  *(undefined4 *)(iVar2 + 8 + (int)puVar6) = 1;
  puVar3[0x7e] = 0;
  puVar3[0x7f] = 10;
  puVar3[0x80] = 0;
  uVar1 = DAT_00273ab4;
  if (puVar3 + 0x81 != (uint *)0x0) {
    puVar3[0x80] = (uint)(puVar3 + 0x81);
  }
  puVar3[0x86] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(uVar1);
  if (puVar4 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = func_001B8C78(puVar4);
  }
  puVar3[-0x1eac] = uVar5;
  puVar4 = (undefined4 *)func_0010BAB4(uVar1);
  uVar5 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    uVar5 = func_001B8C78(puVar4);
  }
  puVar3[-0x1eab] = uVar5;
  puVar4 = (undefined4 *)func_0010BAB4(DAT_00273ab8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)func_001B8C78(puVar4);
    *puVar4 = DAT_00273abc;
    puVar4[0x163] = puVar4 + 0x165;
    puVar4[0x164] = 0x40;
    *(undefined1 *)(puVar4[0x163] + 0x3f) = 0;
    *(undefined1 *)puVar4[0x163] = 0;
    puVar4[0x162] = DAT_00273ac8;
  }
  puVar3[-0x1eaa] = (uint)puVar4;
  puVar3[-0xf56] = 0;
  puVar3[-0xf55] = 0;
  puVar3[-0xf54] = 0;
  func_002701E0((int *)0x0);
  func_0027139C((int)puVar6);
  return puVar6;
}

