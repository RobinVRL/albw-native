#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_0012E60C(int param_1,int param_2);
extern int func_0014D6CC(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0016656C(int param_1,int param_2);
extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0043DAF0(int param_1);
extern int func_0043E0AC(int param_1);
extern int func_004B083C(void);
extern int func_00503970(int param_1,uint param_2);
extern int func_0051B2D8(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int *DAT_0051cbbc;
extern int *DAT_0051cbc0;
extern int *DAT_0051cbc4;
extern int *DAT_0051cbc8;
extern int *DAT_0051cbcc;
extern int DAT_0051cbd0;
extern int *DAT_0051cbd4;

// USA 0051C900 <- EU 0051C8D8 (Ghidra, non-matching)
// GLOBAL DAT_0051cbbc int *
// GLOBAL DAT_0051cbc0 int *
// GLOBAL DAT_0051cbc4 int *
// GLOBAL DAT_0051cbc8 int *
// GLOBAL DAT_0051cbcc int *
// GLOBAL DAT_0051cbd0 int
// GLOBAL DAT_0051cbd4 int *

void func_0051C900(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_r1;
  uint uVar4;
  undefined4 extraout_r1_00;
  uint extraout_r1_01;
  undefined4 extraout_r1_02;
  uint extraout_r1_03;
  undefined4 extraout_r1_04;
  uint extraout_r1_05;
  uint extraout_r1_06;
  undefined4 extraout_r1_07;
  uint extraout_r1_08;
  int extraout_r1_09;
  int extraout_r1_10;
  int extraout_r1_11;
  int extraout_r1_12;
  int extraout_r1_13;
  int extraout_r1_14;
  int extraout_r1_15;
  int extraout_r1_16;
  int extraout_r1_17;
  int extraout_r1_18;
  undefined4 in_r2;
  int in_r3;
  int *piVar5;
  ushort *puVar6;
  int iVar7;
  bool bVar8;
  
  if (*(char *)(*DAT_0051cbbc + 0x25) == '\0') {
    func_0012E60C(*DAT_0051cbc0,1);
    piVar2 = DAT_0051cbc4;
    if (*(int *)(param_1 + 0x108) != 0) {
      func_00503970(*DAT_0051cbc4,0xd);
    }
    piVar5 = *(int **)(param_1 + 0x20);
    if (piVar5 != (int *)0x0) {
      func_0012C790((int)piVar5);
      func_001B6B38(piVar5,extraout_r1,in_r2,in_r3);
    }
    puVar6 = (ushort *)(param_1 + 0x33e);
    *(undefined1 *)(param_1 + 0x134) = 0xff;
    *puVar6 = *puVar6 & 0xfce4;
    iVar3 = *(int *)(param_1 + 0xf0);
    uVar4 = (uint)*(byte *)(iVar3 + 0xd);
    bVar8 = uVar4 == 0;
    if (bVar8) {
      uVar4 = (uint)*(byte *)(iVar3 + 0xe);
    }
    if (!bVar8 || uVar4 != 0) {
      func_0012C790(iVar3);
      func_001B6B38(*(int **)(param_1 + 0xf0),extraout_r1_00,in_r2,in_r3);
      uVar4 = extraout_r1_01;
    }
    if (*(char *)(*DAT_0051cbc8 + 0x18) != '\a' && *(char *)(*DAT_0051cbc8 + 0x18) != '%') {
      iVar7 = *DAT_0051cbcc;
      iVar3 = *(int *)(iVar7 + 0xf4);
      cVar1 = *(char *)(iVar3 + 0xd);
      bVar8 = cVar1 == '\0';
      if (bVar8) {
        cVar1 = *(char *)(iVar3 + 0xe);
      }
      uVar4 = 1;
      if (!bVar8 || cVar1 != '\0') {
        func_0012C790(iVar3);
        func_001B6B38(*(int **)(iVar7 + 0xf4),extraout_r1_02,in_r2,in_r3);
        uVar4 = extraout_r1_03;
      }
      if (*(short *)(param_1 + 0x58) == 2) {
        func_0012C790(*(int *)(param_1 + 0x54));
        func_001B6B38(*(int **)(param_1 + 0x54),extraout_r1_04,in_r2,in_r3);
        iVar3 = *(int *)(param_1 + 0x80);
        uVar4 = extraout_r1_05;
        if (((iVar3 != 0) && (uVar4 = (uint)*(byte *)(iVar3 + 0xd), uVar4 == 3)) &&
           (uVar4 = (uint)*(byte *)(iVar3 + 0xe), uVar4 == 3)) {
          func_0043DAF0(iVar3);
          uVar4 = extraout_r1_06;
        }
        iVar3 = *(int *)(param_1 + 0x70);
        if (iVar3 != 0) {
          uVar4 = (uint)*(byte *)(iVar3 + 0xd);
          bVar8 = uVar4 == 0;
          if (bVar8) {
            uVar4 = (uint)*(byte *)(iVar3 + 0xe);
          }
          if (!bVar8 || uVar4 != 0) {
            func_0012C790(iVar3);
            func_001B6B38(*(int **)(param_1 + 0x70),extraout_r1_07,in_r2,in_r3);
            uVar4 = extraout_r1_08;
          }
        }
      }
    }
    func_0051B2D8(param_1,uVar4,in_r2,in_r3);
    iVar3 = extraout_r1_09;
    if ((*(int *)(param_1 + 0x8c) != 0) &&
       (iVar7 = func_004B083C(), iVar3 = extraout_r1_10, iVar7 == 0)) {
      func_00503970(*piVar2,4);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      iVar3 = extraout_r1_11;
    }
    if (*(int **)(param_1 + 0x108) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x108) + 0x44))(*(int **)(param_1 + 0x108));
      iVar3 = extraout_r1_12;
    }
    if (*(int *)(param_1 + 0x124) != 0) {
      func_00503970(*piVar2,0xc);
      (**(code **)(**(int **)(param_1 + 0x124) + 0x44))(*(int **)(param_1 + 0x124));
      iVar3 = extraout_r1_13;
    }
    iVar7 = *(int *)(param_1 + 0x114);
    bVar8 = iVar7 == 0;
    if (bVar8) {
      iVar7 = *(int *)(param_1 + 0x118);
    }
    if (!bVar8 || iVar7 != 0) {
      func_00503970(*piVar2,0xf);
      iVar3 = extraout_r1_14;
    }
    if (*(int **)(param_1 + 0x120) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x120) + 0x44))(*(int **)(param_1 + 0x120));
      iVar3 = extraout_r1_15;
    }
    if (*(int *)(param_1 + 0x128) != 0) {
      func_00503970(*piVar2,6);
      iVar3 = extraout_r1_16;
    }
    iVar7 = *(int *)(param_1 + 0x80);
    if (iVar7 != 0) {
      uVar4 = *(uint *)(iVar7 + 0x18);
      *(uint *)(iVar7 + 0x18) = uVar4 | 1;
      *(uint *)(*(int *)(param_1 + 0x80) + 0x18) = uVar4 | 3;
      func_0043E0AC(*(int *)(param_1 + 0x80));
      iVar3 = extraout_r1_17;
    }
    if ((*(ushort *)(DAT_0051cbd0 + param_1) & 0x40) != 0) {
      iVar3 = *(int *)(param_1 + 0x80);
      if (((iVar3 != 0) && (*(char *)(iVar3 + 0xd) == '\x03')) && (*(char *)(iVar3 + 0xe) == '\x03')
         ) {
        func_0016656C(*DAT_0051cbd4,iVar3);
        iVar3 = extraout_r1_18;
      }
      *puVar6 = *puVar6 & 0xffbf;
    }
    func_0014D6CC(*(int *)(param_1 + 300),iVar3,in_r2,in_r3);
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  return;
}

