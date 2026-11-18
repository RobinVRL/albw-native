#include "ghidra_types.h"

extern int func_00122DC0(int param_1);
extern int func_0014AC28(int param_1,int param_2);
extern int func_001B966C(int param_1);
extern int func_0026110C(int param_1);
extern int func_002738C0(int param_1,int *param_2);
extern int func_003F7D70(int param_1);
extern int func_004AD918(int param_1);
extern int func_004C5AF0(int param_1);
extern int func_004C77C8(int param_1);
extern int func_004C90CC(int param_1);
extern int func_004CD4D4(int param_1);
extern int func_004EC784(int param_1,uint param_2,int param_3);
extern int func_0051C900(int param_1);
extern int *DAT_004efdf4;
extern int *DAT_004efdf8;
extern int *DAT_004efdfc;
extern int *DAT_004efe00;
extern int *DAT_004efe04;
extern int *DAT_004efe08;
extern int *DAT_004efe0c;
extern int *DAT_004efe10;
extern int *DAT_004efe14;
extern int *DAT_004efe18;
extern int *DAT_004efe1c;
extern int *DAT_004efe20;
extern int *DAT_004efe24;
extern int *DAT_004efe28;

// USA 004EFCE8 <- EU 004EFCC0 (Ghidra, non-matching)
// GLOBAL DAT_004efdf4 int *
// GLOBAL DAT_004efdf8 int *
// GLOBAL DAT_004efdfc int *
// GLOBAL DAT_004efe00 int *
// GLOBAL DAT_004efe04 int *
// GLOBAL DAT_004efe08 int *
// GLOBAL DAT_004efe0c int *
// GLOBAL DAT_004efe10 int *
// GLOBAL DAT_004efe14 int *
// GLOBAL DAT_004efe18 int *
// GLOBAL DAT_004efe1c int *
// GLOBAL DAT_004efe20 int *
// GLOBAL DAT_004efe24 int *
// GLOBAL DAT_004efe28 int *

void func_004EFCE8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint extraout_r1;
  int iVar4;
  undefined4 *puVar5;
  
  piVar1 = DAT_004efdf4;
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined1 *)(param_1 + 0x66) = 0;
  func_001B966C(*piVar1);
  func_004C90CC(*DAT_004efdf8);
  func_002738C0(*DAT_004efdfc,(int *)0x0);
  iVar3 = 0;
  iVar2 = *DAT_004efe00;
  iVar4 = *(int *)(iVar2 + 0x10);
  if (0 < iVar4) {
    do {
      puVar5 = *(undefined4 **)(*(int *)(iVar2 + 0x18) + iVar3 * 4);
      iVar3 = iVar3 + 1;
      *puVar5 = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined4 **)(iVar2 + 0x1c) = puVar5;
      iVar4 = *(int *)(iVar2 + 0x10);
    } while (iVar3 < iVar4);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x524) = 0;
  func_004C5AF0(*DAT_004efe04);
  func_004AD918(*DAT_004efe08);
  if (*DAT_004efe0c != 0) {
    func_004C77C8(*DAT_004efe0c);
  }
  func_004CD4D4(*DAT_004efe10);
  func_004EC784(*DAT_004efe14,extraout_r1,iVar4);
  func_0051C900(*DAT_004efe18);
  if (*DAT_004efe1c != 0) {
    func_00122DC0(*DAT_004efe1c);
  }
  func_0026110C(1);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0xff;
  func_003F7D70(*DAT_004efe20);
  *(undefined1 *)(*DAT_004efe24 + 0x211) = 0;
  func_0014AC28(*DAT_004efe28,0);
  *(undefined1 *)(*piVar1 + 0x151) = 0;
  return;
}

