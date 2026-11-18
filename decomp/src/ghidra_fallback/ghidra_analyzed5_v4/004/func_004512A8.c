#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_002313DC(int param_1);
extern int func_003B5E14(int param_1,int *param_2,int *param_3,int param_4,undefined1 param_5);
extern int func_003B68CC(undefined4 *param_1);
extern int func_004A5DD8(undefined4 *param_1,int *param_2,int *param_3);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_006895E4(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_004516f8;
extern undefined *DAT_004516fc;
extern undefined4 DAT_00451700;
extern int DAT_00451704;
extern undefined *DAT_00451708;
extern int DAT_00451720;
extern undefined4 DAT_00451770;
extern undefined4 DAT_00451774;
extern int DAT_00451778;
extern uint *DAT_00451b20;
extern undefined4 *DAT_00451b38;
extern int DAT_00451b3c;
extern int DAT_00451b40;
extern int *DAT_00451b54;
extern int *DAT_00451b58;
extern char s_P_KimoPos_d__02d_00451b24[];
extern char s_T_RupeeNum_00_00451b44[];
extern char s_cState_BtnIn_00451760[];
extern char s_cState_DecideAnim_00451738[];
extern char s_cState_DecideWait_0045174c[];
extern char s_cState_SelectChange_00451724[];
extern char s_cState_SelectWait_0045170c[];
extern char s_cf_00451b24[];

// USA 004512A8 <- EU 00451280 (Ghidra, non-matching)
// GLOBAL DAT_004516f8 int
// GLOBAL DAT_004516fc undefined *
// GLOBAL DAT_00451700 undefined4
// GLOBAL DAT_00451704 int
// GLOBAL DAT_00451708 undefined *
// GLOBAL DAT_00451720 int
// GLOBAL DAT_00451770 undefined4
// GLOBAL DAT_00451774 undefined4
// GLOBAL DAT_00451778 int
// GLOBAL DAT_00451b20 uint *
// GLOBAL DAT_00451b38 undefined4 *
// GLOBAL DAT_00451b3c int
// GLOBAL DAT_00451b40 int
// GLOBAL DAT_00451b54 int *
// GLOBAL DAT_00451b58 int *
// GLOBAL s_cf_00451b24 string
// GLOBAL s_T_RupeeNum_00_00451b44 string
// GLOBAL s_cState_BtnIn_00451760 string
// GLOBAL s_cState_DecideAnim_00451738 string
// GLOBAL s_cState_DecideWait_0045174c string
// GLOBAL s_cState_SelectChange_00451724 string
// GLOBAL s_cState_SelectWait_0045170c string

int * func_004512A8(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  uint *puVar19;
  int *piVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(char * *)(albw_frame + 0xc))
  #define local_70 (*(int *)(albw_frame + 0x10))
  #define local_6c ((undefined4 *)(albw_frame + 0x14))
  #define auStack_54 ((undefined4 *)(albw_frame + 0x2c))
  piVar4 = func_004B9A10(param_1,1);
  iVar6 = DAT_004516f8;
  *piVar4 = DAT_004516f8;
  piVar4[0xe] = iVar6 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x1d);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  iVar6 = func_00100118((int)(puVar5 + 9),DAT_004516fc,8,3);
  piVar4 = (int *)(iVar6 + 0x18);
  *piVar4 = 0;
  *(undefined4 *)(iVar6 + 0x1c) = 0;
  *(undefined4 *)(iVar6 + 0x20) = 0;
  func_0010B3EC(piVar4,3,iVar6 + 0x24);
  *(undefined4 *)(iVar6 + 0x30) = 0;
  *(undefined4 *)(iVar6 + 0x34) = 0;
  piVar20 = (int *)(iVar6 + -0x98);
  *(undefined4 *)(iVar6 + 0x38) = 0;
  func_0010B3EC((undefined4 *)(iVar6 + 0x30),5,iVar6 + 0x3c);
  *(undefined4 *)(iVar6 + 0x50) = 0;
  *(undefined4 *)(iVar6 + 0x54) = 0;
  *(undefined4 *)(iVar6 + 0x58) = 0;
  func_0010B3EC((undefined4 *)(iVar6 + 0x50),5,iVar6 + 0x5c);
  *(undefined4 *)(iVar6 + 0x70) = 0;
  *(undefined4 *)(iVar6 + 0x74) = 0;
  *(undefined4 *)(iVar6 + 0x78) = 0;
  func_0010B3EC((undefined4 *)(iVar6 + 0x70),3,iVar6 + 0x7c);
  *(undefined2 *)(iVar6 + 0x88) = 0;
  uVar13 = DAT_00451700;
  *(undefined2 *)(iVar6 + 0x8a) = 0xffff;
  *(undefined4 *)(iVar6 + 0x8c) = uVar13;
  *(undefined4 *)(iVar6 + 0x90) = 0;
  *(undefined2 *)(iVar6 + 0x94) = 0;
  *(undefined2 *)(iVar6 + 0x96) = 0xffff;
  *(undefined4 *)(iVar6 + 0x98) = uVar13;
  *(undefined4 *)(iVar6 + 0x9c) = 0;
  *(undefined4 *)(iVar6 + 0xa0) = 0;
  *(undefined4 *)(iVar6 + 0xa4) = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x78);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = func_0017A520(puVar5,0x400,(int *)0x0,0);
  }
  *(undefined4 **)(iVar6 + 0xa8) = puVar5;
  *(undefined4 *)(iVar6 + 0xac) = 0;
  *(undefined4 *)(iVar6 + 0xb0) = 0;
  *(undefined2 *)(iVar6 + 0xb4) = 0;
  *(undefined2 *)(iVar6 + 0xb6) = 0;
  *(undefined2 *)(iVar6 + 0xb8) = 0;
  *(undefined2 *)(iVar6 + 0xba) = 0;
  *(undefined1 *)(iVar6 + 0xbc) = 0;
  *(undefined1 *)(iVar6 + 0xbd) = 0;
  *(undefined1 *)(iVar6 + 0xbe) = 0;
  *(undefined1 *)(iVar6 + -0x1e) = 5;
  *(int **)(iVar6 + -0x10) = piVar20;
  iVar7 = func_0010BA78(0x50);
  *(int *)(iVar6 + -0xc) = iVar7;
  iVar9 = DAT_00451704;
  *(uint *)(iVar6 + -8) = iVar7 + (uint)*(byte *)(iVar6 + -0x1e) * 8;
  iVar16 = 5;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar21 = *(undefined4 *)(iVar9 + 0x6c);
    iVar16 = iVar16 + -1;
    puVar5[2] = *(undefined4 *)(iVar9 + 0x68);
    puVar5[3] = uVar21;
    uVar21 = *(undefined4 *)(iVar9 + 0x6c);
    puVar5[4] = *(undefined4 *)(iVar9 + 0x68);
    puVar5[5] = uVar21;
    puVar5 = puVar5 + 4;
  } while (iVar16 != 0);
  bVar1 = *(byte *)(iVar6 + -0x1e);
  uVar18 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar18 << 3);
  *(undefined4 **)(iVar6 + -4) = puVar5;
  if (uVar18 != 0) {
    puVar8 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar21 = *(undefined4 *)(iVar9 + 0x1c);
      *puVar5 = *(undefined4 *)(iVar9 + 0x18);
      puVar5[1] = uVar21;
      puVar8 = puVar5;
    }
    for (iVar7 = (int)uVar18 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar21 = *(undefined4 *)(iVar9 + 0x1c);
      puVar8[2] = *(undefined4 *)(iVar9 + 0x18);
      puVar8[3] = uVar21;
      uVar21 = *(undefined4 *)(iVar9 + 0x1c);
      puVar8[4] = *(undefined4 *)(iVar9 + 0x18);
      puVar8[5] = uVar21;
      puVar8 = puVar8 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  puVar2 = DAT_00451708;
  iVar9 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[1] = 5;
    *puVar5 = 0x24;
    iVar9 = func_00100118((int)(puVar5 + 2),puVar2,0x24,5);
  }
  if (iVar9 != 0) {
    *(int *)(iVar6 + -0x18) = iVar9;
    *(undefined4 *)(iVar6 + -0x1c) = 5;
  }
  local_78 = DAT_00451720;
  local_74 = s_cState_SelectWait_0045170c;
  local_70 = DAT_00451720;
  func_0010BEC4(iVar6 + -0x24,0,&local_78);
  iVar9 = DAT_00451704;
  puVar5 = *(undefined4 **)(iVar6 + -0xc);
  uVar21 = *(undefined4 *)(DAT_00451704 + 8);
  uVar17 = *(undefined4 *)(DAT_00451704 + 0x10);
  uVar22 = *(undefined4 *)(DAT_00451704 + 0x14);
  uVar24 = *(undefined4 *)(DAT_00451704 + 0x18);
  uVar23 = *(undefined4 *)(DAT_00451704 + 0x1c);
  puVar5[1] = *(undefined4 *)(DAT_00451704 + 0xc);
  *puVar5 = uVar21;
  puVar5 = *(undefined4 **)(iVar6 + -8);
  *puVar5 = uVar17;
  puVar5[1] = uVar22;
  puVar5 = *(undefined4 **)(iVar6 + -4);
  *puVar5 = uVar24;
  puVar5[1] = uVar23;
  local_78 = local_70;
  local_74 = s_cState_SelectChange_00451724;
  func_0010BEC4(iVar6 + -0x24,1,&local_78);
  iVar7 = *(int *)(iVar6 + -0xc);
  uVar22 = *(undefined4 *)(iVar9 + 0x24);
  uVar21 = *(undefined4 *)(iVar9 + 0x28);
  uVar17 = *(undefined4 *)(iVar9 + 0x2c);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar9 + 0x20);
  *(undefined4 *)(iVar7 + 0xc) = uVar22;
  iVar7 = *(int *)(iVar6 + -8);
  *(undefined4 *)(iVar7 + 8) = uVar21;
  *(undefined4 *)(iVar7 + 0xc) = uVar17;
  iVar7 = *(int *)(iVar6 + -4);
  *(undefined4 *)(iVar7 + 8) = uVar24;
  *(undefined4 *)(iVar7 + 0xc) = uVar23;
  local_78 = local_70;
  local_74 = s_cState_DecideAnim_00451738;
  func_0010BEC4(iVar6 + -0x24,2,&local_78);
  iVar7 = *(int *)(iVar6 + -0xc);
  uVar21 = *(undefined4 *)(iVar9 + 0x34);
  uVar17 = *(undefined4 *)(iVar9 + 0x38);
  uVar22 = *(undefined4 *)(iVar9 + 0x3c);
  *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar9 + 0x30);
  *(undefined4 *)(iVar7 + 0x14) = uVar21;
  iVar7 = *(int *)(iVar6 + -8);
  *(undefined4 *)(iVar7 + 0x10) = uVar17;
  *(undefined4 *)(iVar7 + 0x14) = uVar22;
  iVar7 = *(int *)(iVar6 + -4);
  *(undefined4 *)(iVar7 + 0x10) = uVar24;
  *(undefined4 *)(iVar7 + 0x14) = uVar23;
  local_78 = local_70;
  local_74 = s_cState_DecideWait_0045174c;
  func_0010BEC4(iVar6 + -0x24,3,&local_78);
  iVar7 = *(int *)(iVar6 + -0xc);
  uVar21 = *(undefined4 *)(iVar9 + 0x44);
  uVar22 = *(undefined4 *)(iVar9 + 0x48);
  uVar17 = *(undefined4 *)(iVar9 + 0x4c);
  *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar9 + 0x40);
  *(undefined4 *)(iVar7 + 0x1c) = uVar21;
  iVar7 = *(int *)(iVar6 + -8);
  *(undefined4 *)(iVar7 + 0x18) = uVar22;
  *(undefined4 *)(iVar7 + 0x1c) = uVar17;
  iVar7 = *(int *)(iVar6 + -4);
  *(undefined4 *)(iVar7 + 0x18) = uVar24;
  *(undefined4 *)(iVar7 + 0x1c) = uVar23;
  local_78 = local_70;
  local_74 = s_cState_BtnIn_00451760;
  func_0010BEC4(iVar6 + -0x24,4,&local_78);
  iVar7 = *(int *)(iVar6 + -0xc);
  uVar22 = *(undefined4 *)(iVar9 + 0x58);
  uVar17 = *(undefined4 *)(iVar9 + 0x54);
  uVar21 = *(undefined4 *)(iVar9 + 0x5c);
  *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar9 + 0x50);
  *(undefined4 *)(iVar7 + 0x24) = uVar17;
  iVar9 = *(int *)(iVar6 + -8);
  *(undefined4 *)(iVar9 + 0x20) = uVar22;
  *(undefined4 *)(iVar9 + 0x24) = uVar21;
  uVar21 = DAT_00451774;
  iVar9 = *(int *)(iVar6 + -4);
  *(undefined4 *)(iVar9 + 0x20) = uVar24;
  *(undefined4 *)(iVar9 + 0x24) = uVar23;
  local_6c[0] = DAT_00451770;
  (**(code **)(*piVar20 + 0x38))(piVar20,uVar21,local_6c);
  piVar10 = *(int **)(iVar6 + -0x7c);
  func_0016773C((int)piVar10,4);
  iVar9 = DAT_00451778;
  uVar18 = 0;
  do {
    func_00166C20(piVar10,uVar18,(int *)(iVar9 + uVar18 * 8),0);
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 4);
  *(int **)(iVar6 + -0x70) = piVar10;
  *(undefined2 *)(iVar6 + -0x76) = 0;
  *(undefined2 *)(iVar6 + -0x78) = 0;
  func_002313DC(iVar6 + -0x78);
  *(int **)(iVar6 + -100) = piVar10;
  *(undefined2 *)(iVar6 + -0x6a) = 1;
  *(undefined2 *)(iVar6 + -0x6c) = 0;
  puVar3 = DAT_00451b20;
  *(int **)(iVar6 + 0x9c) = piVar10;
  *(undefined2 *)(iVar6 + 0x96) = 3;
  iVar9 = 0;
  *(undefined2 *)(iVar6 + 0x94) = 0;
  do {
    uVar18 = iVar9 + 1;
    puVar19 = (uint *)(iVar6 + iVar9 * 8);
    if ((0 < (int)uVar18) && (uVar11 = func_0010CEE0(uVar18 * 0xc,(int *)0x0,4), uVar11 != 0)) {
      puVar19[1] = uVar11;
      *puVar19 = uVar18;
    }
    if (0 < (int)uVar18) {
      uVar23 = uVar13;
    }
    uVar11 = 0;
    if (0 < (int)uVar18) {
      do {
        piVar12 = func_006895E4(auStack_54,s_P_KimoPos_d__02d_00451b24,uVar18,uVar11);
        iVar7 = func_005229AC(piVar10,piVar12);
        if (iVar7 == 0) {
          puVar19 = (uint *)(iVar6 + iVar9 * 8);
          if (uVar11 < *puVar19) {
            puVar5 = (undefined4 *)(puVar19[1] + uVar11 * 0xc);
          }
          else {
            puVar5 = (undefined4 *)puVar19[1];
          }
          if (((*puVar3 & 1) == 0) &&
             (iVar7 = func_00100174((int *)DAT_00451b20), puVar8 = DAT_00451b38, iVar7 != 0)) {
            *DAT_00451b38 = uVar23;
            puVar8[1] = uVar23;
            puVar8[2] = uVar23;
          }
          puVar8 = DAT_00451b38;
          *puVar5 = *DAT_00451b38;
          puVar5[1] = puVar8[1];
          puVar5[2] = puVar8[2];
        }
        else {
          puVar19 = (uint *)(iVar6 + iVar9 * 8);
          if (uVar11 < *puVar19) {
            puVar5 = (undefined4 *)(puVar19[1] + uVar11 * 0xc);
          }
          else {
            puVar5 = (undefined4 *)puVar19[1];
          }
          *puVar5 = *(undefined4 *)(iVar7 + 0x1c);
          puVar5[1] = *(undefined4 *)(iVar7 + 0x20);
          puVar5[2] = *(undefined4 *)(iVar7 + 0x24);
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar18);
    }
    iVar16 = DAT_00451b3c;
    iVar7 = DAT_00451704;
    iVar9 = iVar9 + 1;
  } while (iVar9 != 3);
  iVar9 = 0;
  do {
    piVar12 = (int *)(iVar16 + iVar9 * 8);
    uVar13 = func_005229AC(piVar10,piVar12);
    if (*piVar4 < *(int *)(iVar6 + 0x1c)) {
      *(undefined4 *)(*(int *)(iVar6 + 0x20) + *piVar4 * 4) = uVar13;
      *piVar4 = *piVar4 + 1;
    }
    puVar5 = (undefined4 *)func_0010BAB4(0x8c);
    iVar14 = 0;
    if (puVar5 != (undefined4 *)0x0) {
      iVar14 = func_004A5DD8(puVar5,piVar10,piVar12);
    }
    uVar13 = *(undefined4 *)(iVar7 + 0x60);
    uVar21 = *(undefined4 *)(iVar7 + 100);
    *(int **)(iVar14 + 0x54) = piVar20;
    *(undefined4 *)(iVar14 + 0x58) = uVar13;
    *(undefined4 *)(iVar14 + 0x5c) = uVar21;
    piVar12 = (int *)(iVar6 + 0x30);
    *(char *)(*(int *)(iVar14 + 0x14) + 0x14) = (char)iVar9;
    if (*piVar12 < *(int *)(iVar6 + 0x34)) {
      *(int *)(*(int *)(iVar6 + 0x38) + *piVar12 * 4) = iVar14;
      *piVar12 = *piVar12 + 1;
    }
    piVar12 = (int *)(iVar6 + 0x70);
    if (*piVar12 < *(int *)(iVar6 + 0x74)) {
      *(int *)(*(int *)(iVar6 + 0x78) + *piVar12 * 4) = iVar14;
      *piVar12 = *piVar12 + 1;
    }
    iVar14 = DAT_00451b40;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 3);
  iVar9 = 0;
  do {
    puVar5 = (undefined4 *)func_0010BAB4(0x148);
    iVar7 = 0;
    if (puVar5 != (undefined4 *)0x0) {
      iVar7 = func_003B68CC(puVar5);
    }
    func_003B5E14(iVar7,piVar10,(int *)(iVar14 + iVar9 * 8),1,(char)iVar9 + '\x03');
    if (iVar9 == 0) {
      *(uint *)(iVar7 + 0x18) = *(uint *)(iVar7 + 0x18) | 0x40;
      *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x10) = 2;
    }
    piVar4 = (int *)(iVar6 + 0x30);
    if (*piVar4 < *(int *)(iVar6 + 0x34)) {
      *(int *)(*(int *)(iVar6 + 0x38) + *piVar4 * 4) = iVar7;
      *piVar4 = *piVar4 + 1;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 2);
  local_78 = local_70;
  local_74 = s_T_RupeeNum_00_00451b44;
  piVar12 = (int *)func_005229AC(piVar10,&local_78);
  piVar4 = DAT_00451b54;
  if (piVar12 != (int *)0x0) {
    piVar15 = (int *)(**(code **)(*piVar12 + 8))(piVar12);
    do {
      if (piVar15 == piVar4) goto LAB_00451ab8;
      piVar15 = (int *)*piVar15;
    } while (piVar15 != (int *)0x0);
  }
  piVar12 = (int *)0x0;
LAB_00451ab8:
  *(int **)(iVar6 + 0xac) = piVar12;
  piVar10 = (int *)func_005229AC(piVar10,DAT_00451b58);
  piVar4 = DAT_00451b54;
  if (piVar10 != (int *)0x0) {
    piVar12 = (int *)(**(code **)(*piVar10 + 8))(piVar10);
    do {
      if (piVar12 == piVar4) goto LAB_00451b00;
      piVar12 = (int *)*piVar12;
    } while (piVar12 != (int *)0x0);
  }
  piVar10 = (int *)0x0;
LAB_00451b00:
  *(int **)(iVar6 + 0xb0) = piVar10;
  func_004B9958((int)piVar20,2);
  return piVar20;
}

