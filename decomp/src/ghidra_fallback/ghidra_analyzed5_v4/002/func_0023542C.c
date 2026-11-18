#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern undefined4 DAT_00235660;
extern int DAT_00235664;
extern undefined4 DAT_00235668;
extern undefined4 DAT_0023566c;
extern undefined *DAT_00235670;

// USA 0023542C <- EU 0023542C (Ghidra, non-matching)
// GLOBAL DAT_00235660 undefined4
// GLOBAL DAT_00235664 int
// GLOBAL DAT_00235668 undefined4
// GLOBAL DAT_0023566c undefined4
// GLOBAL DAT_00235670 undefined *

void func_0023542C(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar3 = param_2;
  if (param_2 < *(uint *)(param_1 + 0x604)) {
    uVar3 = *(uint *)(param_1 + 0x60c);
  }
  if (param_2 < *(uint *)(param_1 + 0x604)) {
    uVar4 = *(undefined4 *)(uVar3 + param_2 * 4);
  }
  else {
    uVar4 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar1 = iVar1 + param_2 * 0x104;
  }
  *(undefined4 *)(iVar1 + 8) = uVar4;
  iVar1 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar1 = iVar1 + param_2 * 0x104;
  }
  func_004CEA18(*(int *)(iVar1 + 8),0,0);
  iVar1 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar1 = iVar1 + param_2 * 0x104;
  }
  func_004CEA18(*(int *)(iVar1 + 8),1,1);
  puVar2 = (undefined4 *)func_0010BAB4(0x58);
  iVar1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    func_00110490(puVar2,0x58);
    puVar2 = func_0010CE7C(puVar2);
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = puVar2;
    puVar2[7] = 0;
    uVar4 = DAT_00235660;
    puVar2[8] = 0;
    *(undefined1 *)(puVar2 + 0xe) = 0;
    *puVar2 = uVar4;
    uVar4 = *(undefined4 *)(DAT_00235664 + 0x20);
    uVar7 = *(undefined4 *)(DAT_00235664 + 0x24);
    puVar5 = puVar2 + 9;
    if (puVar5 != (undefined4 *)0x0) {
      puVar2[10] = puVar2;
      puVar2[0xb] = uVar4;
      puVar2[0xc] = uVar7;
      *puVar5 = DAT_00235668;
    }
    puVar2[8] = puVar5;
    *puVar2 = DAT_0023566c;
    iVar1 = func_00100118((int)puVar2 + 0x39,DAT_00235670,5,6);
    iVar1 = iVar1 + -0x39;
  }
  iVar6 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar6 = iVar6 + param_2 * 0x104;
  }
  *(int *)(iVar6 + 0x10) = iVar1;
  iVar1 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar1 = iVar1 + param_2 * 0x104;
  }
  iVar6 = *(int *)(iVar1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar1 = iVar1 + param_2 * 0x104;
  }
  puVar2 = (undefined4 *)func_00584CA8(*(int *)(iVar1 + 8),0,0);
  *(undefined1 *)(iVar6 + 0x3d) = 1;
  *(undefined4 *)(iVar6 + 0x39) = *puVar2;
  iVar1 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar1 = iVar1 + param_2 * 0x104;
  }
  iVar6 = *(int *)(iVar1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar1 = iVar1 + param_2 * 0x104;
  }
  puVar2 = (undefined4 *)func_00584CA8(*(int *)(iVar1 + 8),0,1);
  *(undefined1 *)(iVar6 + 0x42) = 1;
  *(undefined4 *)(iVar6 + 0x3e) = *puVar2;
  iVar1 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar1 = iVar1 + param_2 * 0x104;
  }
  iVar6 = *(int *)(iVar1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar1 = iVar1 + param_2 * 0x104;
  }
  puVar2 = (undefined4 *)func_00584CA8(*(int *)(iVar1 + 8),0,2);
  *(undefined1 *)(iVar6 + 0x47) = 1;
  *(undefined4 *)(iVar6 + 0x43) = *puVar2;
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar1 = *(int *)(param_1 + 0x634) + param_2 * 0x104;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x634);
  }
  iVar6 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar6 = iVar6 + param_2 * 0x104;
  }
  puVar2 = (undefined4 *)func_00584CA8(*(int *)(iVar6 + 8),0,0);
  *(undefined4 *)(iVar1 + 0xf8) = *puVar2;
  iVar1 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar1 = iVar1 + param_2 * 0x104;
  }
  iVar6 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar6 = iVar6 + param_2 * 0x104;
  }
  puVar2 = (undefined4 *)func_00584CA8(*(int *)(iVar6 + 8),0,1);
  *(undefined4 *)(iVar1 + 0xfc) = *puVar2;
  return;
}

