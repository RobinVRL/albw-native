#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_0026E134(undefined4 *param_1);
extern int func_003E22D4(undefined4 *param_1);
extern int func_003E2E74(int param_1);
extern int func_00403FCC(undefined4 *param_1);
extern int func_00405F20(undefined4 *param_1);
extern undefined4 DAT_0012f010;
extern undefined4 DAT_0012f014;
extern undefined *DAT_0012f018;
extern int DAT_0012f01c;
extern undefined *DAT_0012f020;
extern undefined *DAT_0012f024;
extern undefined *DAT_0012f028;
extern undefined *DAT_0012f02c;

// USA 0012EEE8 <- EU 0012EEE8 (Ghidra, non-matching)
// GLOBAL DAT_0012f010 undefined4
// GLOBAL DAT_0012f014 undefined4
// GLOBAL DAT_0012f018 undefined *
// GLOBAL DAT_0012f01c int
// GLOBAL DAT_0012f020 undefined *
// GLOBAL DAT_0012f024 undefined *
// GLOBAL DAT_0012f028 undefined *
// GLOBAL DAT_0012f02c undefined *

int func_0012EEE8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  puVar2 = func_0010DA7C(param_1,0,3);
  *puVar2 = DAT_0012f010;
  puVar2 = (undefined4 *)func_00403FCC(puVar2 + 8);
  uVar1 = DAT_0012f014;
  *puVar2 = DAT_0012f014;
  puVar2 = func_00405F20(puVar2 + 0x1a5);
  puVar2 = (undefined4 *)func_00403FCC(puVar2 + 0x32);
  *puVar2 = uVar1;
  puVar2[0x1a5] = 0;
  puVar2[0x1a6] = 0;
  puVar2[0x1a7] = 0;
  func_0010B3EC(puVar2 + 0x1a5,0x40,(int)(puVar2 + 0x1a8));
  iVar3 = func_00100118((int)(puVar2 + 0x1e8),DAT_0012f018,0x28c,2);
  puVar2 = (undefined4 *)func_0010BAB4(0x90);
  piVar4 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar4 = func_0026E134(puVar2);
  }
  iVar5 = DAT_0012f01c + 4;
  *(int **)(DAT_0012f01c + iVar3 + -0xf1c) = piVar4;
  *(undefined1 *)(iVar5 + iVar3 + -0xf1c) = 0;
  iVar3 = func_00100118(iVar3 + 0x520,DAT_0012f020,0x30,2);
  iVar3 = func_00100118(iVar3 + 0x60,DAT_0012f024,0x40,2);
  iVar3 = func_003E2E74(iVar3 + 0xc0);
  iVar3 = func_00100118(iVar3 + 0x140,DAT_0012f028,0x80,3);
  iVar3 = func_00100118(iVar3 + 400,DAT_0012f02c,8,3);
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  func_003E22D4((undefined4 *)(iVar3 + -0x2d0));
  return iVar3 + -0x182c;
}

