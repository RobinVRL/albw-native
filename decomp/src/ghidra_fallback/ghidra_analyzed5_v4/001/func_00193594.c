#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_00192A48(int param_1,undefined4 param_2,uint param_3);
extern int func_00192B8C(int param_1);
extern int func_004ECF6C(int param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_00193824;
extern int *DAT_00193828;
extern int DAT_0019382c;
extern int DAT_00193830;
extern uint *DAT_00193834;
extern undefined4 *DAT_00193838;
extern undefined4 DAT_0019383c;
extern undefined DAT_00193840;
extern undefined4 DAT_00193850;

// USA 00193594 <- EU 00193594 (Ghidra, non-matching)
// GLOBAL DAT_00193824 int
// GLOBAL DAT_00193828 int *
// GLOBAL DAT_0019382c int
// GLOBAL DAT_00193830 int
// GLOBAL DAT_00193834 uint *
// GLOBAL DAT_00193838 undefined4 *
// GLOBAL DAT_0019383c undefined4
// GLOBAL DAT_00193840 undefined
// GLOBAL DAT_00193850 undefined4

int * func_00193594(undefined4 *param_1,uint *param_2)

{
  short sVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  piVar4 = func_00150E40(param_1,param_2);
  iVar6 = DAT_00193824;
  piVar4[200] = DAT_00193824 + 0x54;
  *piVar4 = iVar6;
  piVar2 = DAT_00193828;
  piVar4[0x103] = 0;
  *(undefined1 *)(piVar4 + 0x104) = 0;
  piVar4[0x105] = 0;
  piVar4[0x107] = 0;
  iVar6 = piVar2[9];
  piVar4[0x108] = piVar2[8];
  piVar4[0x109] = iVar6;
  iVar6 = DAT_0019382c;
  piVar4[0x106] = DAT_0019382c;
  piVar4[0x10a] = 0;
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  piVar4[0x10b] = param_2[1];
  piVar4[0x10c] = uVar7;
  piVar4[0x10d] = uVar8;
  piVar4[0x10e] = param_2[2];
  piVar4[0x10f] = 0;
  piVar4[0x110] = 0;
  *(undefined1 *)(piVar4 + 0x111) = 0;
  *(undefined1 *)((int)piVar4 + 0x445) = 0;
  *(undefined1 *)((int)piVar4 + 0x447) = 0;
  iVar9 = piVar2[1];
  piVar4[0x118] = *piVar2;
  piVar4[0x119] = iVar9;
  piVar4[0x116] = DAT_00193830;
  piVar4[0x117] = (int)piVar4;
  iVar9 = piVar2[2];
  iVar10 = piVar2[3];
  piVar4[0x11a] = iVar6;
  piVar4[0x11b] = (int)piVar4;
  piVar4[0x11c] = iVar9;
  piVar4[0x11d] = iVar10;
  iVar9 = piVar2[4];
  iVar10 = piVar2[5];
  piVar4[0x11e] = iVar6;
  piVar4[0x11f] = (int)piVar4;
  piVar4[0x120] = iVar9;
  piVar4[0x121] = iVar10;
  bVar3 = func_00588BF0((int)piVar4,1);
  if (bVar3) {
    *(undefined1 *)((int)piVar4 + 0x2d7) = 1;
    return piVar4;
  }
  puVar5 = (undefined4 *)func_0054D964((int)piVar4,0);
  if (((*DAT_00193834 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00193834), iVar6 != 0)) {
    *DAT_00193838 = DAT_0019383c;
  }
  if ((puVar5 == (undefined4 *)0x0) ||
     (iVar6 = (**(code **)*puVar5)(puVar5,DAT_00193838), iVar6 == 0)) {
    puVar5 = (undefined4 *)0x0;
  }
  piVar4[0x105] = (int)puVar5;
  *(undefined2 *)(puVar5 + 10) = 7;
  iVar6 = func_0054D89C((int)piVar4,0);
  piVar4[0x10a] = iVar6;
  puVar5 = (undefined4 *)func_0010BAB4(0x108);
  if (puVar5 == (undefined4 *)0x0) {
    piVar4[0x10f] = 0;
  }
  else {
    local_34 = &DAT_00193840;
    local_38 = DAT_00193850;
    iVar6 = func_001663BC(puVar5,&local_38,piVar4[0xb3],0,1);
    piVar4[0x10f] = iVar6;
  }
  uVar7 = 0;
  iVar6 = func_0014E428((int)piVar4,0,0,0,1,0,0);
  piVar4[0x103] = iVar6;
  func_00192B8C((int)piVar4);
  iVar6 = piVar2[6];
  iVar9 = piVar2[7];
  piVar4[0x107] = (int)piVar4;
  piVar4[0x108] = iVar6;
  piVar4[0x109] = iVar9;
  sVar1 = (short)param_2[10];
  if (sVar1 == 1) {
    bVar3 = func_00588BF0((int)piVar4,0);
    if (!bVar3) goto LAB_0019380c;
  }
  else {
    if (sVar1 == 2) {
LAB_0019380c:
      func_00192A48((int)piVar4,1,uVar7);
      goto LAB_001937b4;
    }
    if (sVar1 != 3) {
      func_00192A48((int)piVar4,0,uVar7);
      goto LAB_001937b4;
    }
  }
  func_00192A48((int)piVar4,0,uVar7);
  piVar4[0xf5] = piVar4[0x10e];
  func_00192B8C((int)piVar4);
LAB_001937b4:
  func_004ECF6C((int)piVar4);
  *(undefined1 *)((int)piVar4 + 0x446) = 1;
  return piVar4;
}

