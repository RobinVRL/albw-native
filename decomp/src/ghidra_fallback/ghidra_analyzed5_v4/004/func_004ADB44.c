#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_001B9688(void);
extern int func_004AB7F0(int param_1);
extern int func_004ACE20(int param_1);
extern undefined4 DAT_004add5c;
extern undefined *DAT_004add60;
extern int DAT_004add64;
extern undefined4 DAT_004add68;
extern int DAT_004add6c;
extern undefined4 DAT_004add70;
extern int DAT_004add74;
extern undefined *DAT_004add78;
extern uint DAT_004add7c;

// USA 004ADB44 <- EU 004ADB1C (Ghidra, non-matching)
// GLOBAL DAT_004add5c undefined4
// GLOBAL DAT_004add60 undefined *
// GLOBAL DAT_004add64 int
// GLOBAL DAT_004add68 undefined4
// GLOBAL DAT_004add6c int
// GLOBAL DAT_004add70 undefined4
// GLOBAL DAT_004add74 int
// GLOBAL DAT_004add78 undefined *
// GLOBAL DAT_004add7c uint

int func_004ADB44(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = DAT_004add5c;
  *(undefined4 *)(param_1 + 0x10) = DAT_004add5c;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0xffff;
  *(undefined2 *)(param_1 + 0x30) = 0xffff;
  *(undefined2 *)(param_1 + 0x32) = 0xffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar4 = func_00100118(param_1 + 0x44,DAT_004add60,0x16c,0x40);
  uVar2 = DAT_004add70;
  iVar6 = DAT_004add6c;
  *(undefined4 *)(DAT_004add64 + iVar4 + -0x44) = 0;
  uVar1 = DAT_004add68;
  *(undefined4 *)(iVar4 + 0x5b10) = 0;
  *(undefined4 *)(iVar4 + 0x5b14) = uVar2;
  *(undefined4 *)(iVar6 + iVar4 + -0x44) = uVar1;
  *(undefined4 *)(iVar4 + 0x5b20) = uVar1;
  *(undefined4 *)(iVar4 + 0x5b1c) = uVar2;
  *(undefined4 *)(iVar4 + 0x5b24) = uVar2;
  *(undefined4 *)(iVar4 + 0x5b28) = uVar1;
  *(undefined4 *)(iVar4 + 0x5b2c) = 0;
  *(undefined4 *)(iVar4 + 0x5b30) = 0;
  *(undefined4 *)(iVar4 + 0x5b34) = 0;
  *(undefined4 *)(iVar4 + 0x5b38) = 0;
  iVar6 = iVar4 + 0x5b40;
  *(undefined4 *)(iVar4 + 0x5b3c) = 0;
  if (iVar6 != 0) {
    *(int *)(iVar4 + 0x5b30) = iVar6;
    iVar5 = 0;
    iVar7 = 0x3f;
    *(undefined4 *)(iVar4 + 0x5b3c) = 0x40;
    do {
      iVar7 = iVar7 + -1;
      *(int *)(iVar6 + iVar5 * 4) = iVar6 + (iVar5 + 0x1b) * 4;
      iVar5 = iVar5 + 0x1b;
    } while (iVar7 != 0);
    *(undefined4 *)(iVar4 + 0x75d4) = 0;
    *(int *)(iVar4 + 0x5b34) = iVar6;
  }
  *(int *)(iVar4 + 0x7640) = 0;
  *(undefined4 *)(iVar4 + 0x7644) = 0;
  *(undefined4 *)(iVar4 + 0x7648) = 0;
  *(undefined4 *)(iVar4 + 0x764c) = 0;
  if (iVar4 + 0x7650 != 0) {
    *(int *)(iVar4 + 0x7640) = iVar4 + 0x7650;
    *(undefined4 *)(iVar4 + 0x7644) = 2;
  }
  *(undefined4 *)(iVar4 + 0x7658) = 0;
  *(undefined4 *)(iVar4 + 0x765c) = 0;
  *(undefined4 *)(iVar4 + 0x7660) = 0;
  *(undefined4 *)(iVar4 + 0x7664) = 0;
  *(undefined4 *)(iVar4 + 0x7668) = 0;
  *(undefined4 *)(iVar4 + 0x766c) = 0;
  *(undefined4 *)(iVar4 + 0x7670) = 0;
  iVar7 = iVar4 + -0x44;
  func_0010B3EC((undefined4 *)(iVar4 + 0x7668),0x10,iVar4 + 0x7674);
  *(undefined4 *)(iVar4 + 0x76b4) = 0;
  *(undefined4 *)(iVar4 + 0x76b8) = 0;
  *(undefined4 *)(iVar4 + 0x76bc) = 0;
  iVar6 = DAT_004add74;
  iVar5 = DAT_004add74 + 4;
  *(undefined4 *)(DAT_004add74 + iVar7) = 0;
  *(undefined4 *)(iVar5 + iVar7) = 0;
  *(undefined4 *)(iVar6 + 0x14 + iVar7) = 0;
  *(undefined4 *)(iVar4 + 0x76d8) = 0;
  *(undefined4 *)(iVar4 + 0x76dc) = 0xffffffff;
  *(undefined1 *)(iVar6 + 0x20 + iVar7) = 0xff;
  *(undefined4 *)(iVar6 + 0x24 + iVar7) = 0;
  *(undefined4 *)(iVar6 + 0x28 + iVar7) = 0;
  *(undefined4 *)(iVar4 + 0x76ec) = 0;
  *(undefined4 *)(iVar4 + 0x76f0) = 0x20;
  *(undefined4 *)(iVar4 + 0x76f4) = 0;
  if (iVar4 + 0x76f8 != 0) {
    *(int *)(iVar4 + 0x76f4) = iVar4 + 0x76f8;
  }
  iVar6 = func_00100118(iVar4 + 0x76f8,DAT_004add78,0x1c,0x20);
  uVar3 = DAT_004add7c;
  iVar5 = iVar6 + -0x773c;
  iVar4 = DAT_004add7c + 1;
  *(undefined1 *)(iVar6 + 0x380) = 1;
  *(undefined1 *)(uVar3 + iVar5) = 0;
  *(undefined1 *)(iVar4 + iVar5) = 0;
  *(undefined1 *)((uVar3 | (int)uVar3 >> 10) + iVar5) = 0;
  func_001B9688();
  func_004AB7F0(iVar5);
  func_004ACE20(iVar5);
  return iVar5;
}

