#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_002313DC(int param_1);
extern int func_00392480(int param_1,int *param_2,int *param_3,int param_4,undefined4 param_5);
extern int func_00392940(undefined4 *param_1);
extern int func_003FDF90(int param_1,int param_2);
extern int func_004B948C(int param_1,int param_2);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00484a90;
extern undefined4 DAT_00484a94;
extern undefined *DAT_00484a98;
extern undefined4 *DAT_00484a9c;
extern undefined *DAT_00484aa0;
extern int DAT_00484ab8;
extern undefined4 DAT_00484f08;
extern int DAT_00484f0c;
extern int DAT_00484f10;
extern int *DAT_00484f14;
extern int *DAT_00484f18;
extern char s_P_JiisanIcon_00_00484f1c[];
extern char s_P_SLinkIcon_00_00484f2c[];
extern char s_cState_CountWait_00484aa4[];
extern char s_cState_Count_00484abc[];
extern char s_cState_Finish_00484ef8[];

// USA 004847A0 <- EU 00484778 (Ghidra, non-matching)
// GLOBAL DAT_00484a90 int
// GLOBAL DAT_00484a94 undefined4
// GLOBAL DAT_00484a98 undefined *
// GLOBAL DAT_00484a9c undefined4 *
// GLOBAL DAT_00484aa0 undefined *
// GLOBAL DAT_00484ab8 int
// GLOBAL DAT_00484f08 undefined4
// GLOBAL DAT_00484f0c int
// GLOBAL DAT_00484f10 int
// GLOBAL DAT_00484f14 int *
// GLOBAL DAT_00484f18 int *
// GLOBAL s_P_JiisanIcon_00_00484f1c string
// GLOBAL s_P_SLinkIcon_00_00484f2c string
// GLOBAL s_cState_CountWait_00484aa4 string
// GLOBAL s_cState_Count_00484abc string
// GLOBAL s_cState_Finish_00484ef8 string

int * func_004847A0(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  uint *puVar20;
  int *piVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(int *)(albw_frame + 0x0))
  #define local_7c (*(int *)(albw_frame + 0x4))
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define auStack_74 ((undefined1 *)(albw_frame + 0xc))
  #define local_6c (*(int *)(albw_frame + 0x14))
  #define local_68 (*(int *)(albw_frame + 0x18))
  #define local_64 (*(int * *)(albw_frame + 0x1c))
  #define auStack_60 ((undefined1 *)(albw_frame + 0x20))
  #define local_58 (*(int *)(albw_frame + 0x28))
  #define local_54 (*(uint * *)(albw_frame + 0x2c))
  #define local_50 (*(int * *)(albw_frame + 0x30))
  #define local_4c (*(int *)(albw_frame + 0x34))
  #define local_38 (*(int * *)(albw_frame + 0x48))
  piVar4 = func_004B9A10(param_1,0);
  iVar8 = DAT_00484a90;
  *piVar4 = DAT_00484a90;
  piVar4[0xe] = iVar8 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x1d);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined2 *)(puVar5 + 9) = 0;
  uVar16 = DAT_00484a94;
  *(undefined2 *)((int)puVar5 + 0x26) = 0xffff;
  puVar5[10] = uVar16;
  puVar5[0xb] = 0;
  *(undefined2 *)(puVar5 + 0xc) = 0;
  *(undefined2 *)((int)puVar5 + 0x32) = 0xffff;
  puVar5[0xd] = uVar16;
  puVar5[0xe] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x78);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0017A520(puVar6,0x400,(int *)0x0,0);
  }
  puVar5[0xf] = puVar7;
  iVar8 = func_00100118((int)(puVar5 + 0x10),DAT_00484a98,0xc,4);
  piVar4 = (int *)(iVar8 + -0xb4);
  puVar5 = (undefined4 *)func_0010BAB4(0x44);
  puVar7 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar7 = func_00392940(puVar5);
  }
  *(undefined4 **)(iVar8 + 0x30) = puVar7;
  puVar5 = (undefined4 *)func_0010BAB4(0x44);
  puVar7 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar7 = func_00392940(puVar5);
  }
  *(undefined4 **)(iVar8 + 0x34) = puVar7;
  *(undefined4 *)(iVar8 + 0x38) = 0;
  *(undefined4 *)(iVar8 + 0x3c) = 0;
  *(int **)(iVar8 + -0x2c) = piVar4;
  *(undefined1 *)(iVar8 + -0x3a) = 3;
  iVar9 = func_0010BA78(0x30);
  puVar7 = DAT_00484a9c;
  *(int *)(iVar8 + -0x28) = iVar9;
  *(uint *)(iVar8 + -0x24) = iVar9 + (uint)*(byte *)(iVar8 + -0x3a) * 8;
  iVar14 = 3;
  puVar5 = (undefined4 *)(iVar9 + -8);
  do {
    uVar16 = puVar7[1];
    puVar5[2] = *puVar7;
    puVar5[3] = uVar16;
    uVar16 = puVar7[1];
    iVar14 = iVar14 + -1;
    puVar5[4] = *puVar7;
    puVar5[5] = uVar16;
    puVar5 = puVar5 + 4;
  } while (iVar14 != 0);
  bVar1 = *(byte *)(iVar8 + -0x3a);
  uVar17 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar17 << 3);
  *(undefined4 **)(iVar8 + -0x20) = puVar5;
  if (uVar17 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = puVar7[5];
      *puVar5 = puVar7[4];
      puVar5[1] = uVar16;
      puVar6 = puVar5;
    }
    for (iVar9 = (int)uVar17 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar16 = puVar7[5];
      puVar6[2] = puVar7[4];
      puVar6[3] = uVar16;
      uVar16 = puVar7[5];
      puVar6[4] = puVar7[4];
      puVar6[5] = uVar16;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  puVar3 = DAT_00484aa0;
  iVar9 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[1] = 3;
    *puVar5 = 0x24;
    iVar9 = func_00100118((int)(puVar5 + 2),puVar3,0x24,3);
  }
  if (iVar9 != 0) {
    *(int *)(iVar8 + -0x34) = iVar9;
    *(undefined4 *)(iVar8 + -0x38) = 3;
  }
  local_54 = (uint *)s_cState_CountWait_00484aa4;
  local_4c = DAT_00484ab8;
  local_58 = DAT_00484ab8;
  iVar9 = *(int *)(iVar8 + -0x34);
  puVar20 = *(uint **)(iVar9 + 4);
  (**(code **)(DAT_00484ab8 + 8))(&local_58);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_54 + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_004849c4;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_004849c4:
  if (*(int *)(iVar9 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar20,local_54,uVar17);
  *(undefined1 *)((int)puVar20 + uVar17) = 0;
  puVar5 = *(undefined4 **)(iVar8 + -0x28);
  uVar16 = puVar7[4];
  uVar15 = puVar7[3];
  uVar22 = puVar7[2];
  uVar23 = puVar7[1];
  uVar24 = puVar7[5];
  *puVar5 = *puVar7;
  puVar5[1] = uVar23;
  puVar5 = *(undefined4 **)(iVar8 + -0x24);
  *puVar5 = uVar22;
  puVar5[1] = uVar15;
  puVar5 = *(undefined4 **)(iVar8 + -0x20);
  *puVar5 = uVar16;
  puVar5[1] = uVar24;
  local_58 = local_4c;
  local_54 = (uint *)s_cState_Count_00484abc;
  uVar17 = *(uint *)(iVar8 + -0x38);
  if (uVar17 < 2) {
    iVar9 = *(int *)(iVar8 + -0x34);
    uVar2 = uVar17;
  }
  else {
    uVar2 = *(uint *)(iVar8 + -0x34);
  }
  if (1 < uVar17) {
    iVar9 = uVar2 + 0x24;
  }
  puVar20 = *(uint **)(iVar9 + 4);
  (**(code **)(local_4c + 8))(&local_58);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_54 + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_00484ad8;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_00484ad8:
  if (*(int *)(iVar9 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar20,local_54,uVar17);
  *(undefined1 *)((int)puVar20 + uVar17) = 0;
  iVar14 = *(int *)(iVar8 + -0x28);
  uVar16 = puVar7[5];
  uVar15 = puVar7[6];
  uVar22 = puVar7[4];
  uVar24 = puVar7[1];
  uVar23 = puVar7[7];
  *(undefined4 *)(iVar14 + 8) = *puVar7;
  *(undefined4 *)(iVar14 + 0xc) = uVar24;
  iVar14 = *(int *)(iVar8 + -0x24);
  *(undefined4 *)(iVar14 + 8) = uVar15;
  *(undefined4 *)(iVar14 + 0xc) = uVar23;
  iVar14 = *(int *)(iVar8 + -0x20);
  *(undefined4 *)(iVar14 + 8) = uVar22;
  *(undefined4 *)(iVar14 + 0xc) = uVar16;
  local_58 = local_4c;
  local_54 = (uint *)s_cState_Finish_00484ef8;
  uVar17 = *(uint *)(iVar8 + -0x38);
  if (uVar17 < 3) {
    iVar9 = *(int *)(iVar8 + -0x34);
    uVar2 = uVar17;
  }
  else {
    uVar2 = *(uint *)(iVar8 + -0x34);
  }
  if (2 < uVar17) {
    iVar9 = uVar2 + 0x48;
  }
  puVar20 = *(uint **)(iVar9 + 4);
  (**(code **)(local_4c + 8))(&local_58);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_54 + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_00484bb0;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_00484bb0:
  if (*(int *)(iVar9 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar20,local_54,uVar17);
  *(undefined1 *)((int)puVar20 + uVar17) = 0;
  iVar9 = *(int *)(iVar8 + -0x28);
  uVar15 = puVar7[5];
  uVar24 = puVar7[8];
  uVar23 = puVar7[4];
  uVar16 = puVar7[1];
  uVar22 = puVar7[9];
  *(undefined4 *)(iVar9 + 0x10) = *puVar7;
  *(undefined4 *)(iVar9 + 0x14) = uVar16;
  uVar16 = DAT_00484f08;
  iVar9 = *(int *)(iVar8 + -0x24);
  *(undefined4 *)(iVar9 + 0x10) = uVar24;
  *(undefined4 *)(iVar9 + 0x14) = uVar22;
  iVar9 = *(int *)(iVar8 + -0x20);
  *(undefined4 *)(iVar9 + 0x10) = uVar23;
  *(undefined4 *)(iVar9 + 0x14) = uVar15;
  (**(code **)(*piVar4 + 0x38))(piVar4,uVar16,0);
  piVar19 = *(int **)(iVar8 + -0x98);
  func_0016773C((int)piVar19,0xb);
  iVar9 = DAT_00484f0c;
  uVar17 = 0;
  iVar14 = DAT_00484f0c + -0x38;
  do {
    piVar18 = (int *)(iVar9 + uVar17 * 8);
    iVar10 = 0;
    if (*(char *)piVar18[1] != '\0') {
      iVar10 = *piVar19;
      (**(code **)(*piVar18 + 8))(piVar18);
      iVar10 = func_003FDF90(*(int *)(iVar10 + 0x14),piVar18[1]);
    }
    func_00166C20(piVar19,uVar17,(int *)(iVar14 + uVar17 * 8),iVar10);
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 7);
  *(int **)(iVar8 + -0x8c) = piVar19;
  *(undefined2 *)(iVar8 + -0x92) = 4;
  *(undefined2 *)(iVar8 + -0x94) = 0;
  func_002313DC(iVar8 + -0x94);
  *(int **)(iVar8 + -0x80) = piVar19;
  *(undefined2 *)(iVar8 + -0x86) = 5;
  *(undefined2 *)(iVar8 + -0x88) = 0;
  iVar9 = DAT_00484f10;
  *(int **)(iVar8 + -8) = piVar19;
  *(undefined2 *)(iVar8 + -0xe) = 6;
  iVar14 = 0;
  *(undefined2 *)(iVar8 + -0x10) = 0;
  do {
    func_00166C20(piVar19,iVar14 + 7,(int *)(iVar9 + iVar14 * 8),0);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 4);
  iVar9 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = (int *)0x0;
  func_0010B3EC(&local_6c,2,(int)auStack_60);
  if (local_6c < local_68) {
    local_64[local_6c] = *(int *)(iVar8 + 0x30);
    local_6c = local_6c + 1;
  }
  if (local_6c < local_68) {
    local_64[local_6c] = *(int *)(iVar8 + 0x34);
    local_6c = local_6c + 1;
  }
  local_38 = local_64 + local_6c;
  piVar18 = local_64;
  piVar21 = DAT_00484f14;
  if (local_64 != local_38) {
    do {
      local_80 = 0;
      local_7c = 0;
      local_78 = 0;
      func_0010B3EC(&local_80,2,(int)auStack_74);
      iVar14 = 0;
      if (0 < local_7c) {
        do {
          if (local_80 < local_7c) {
            *(int *)(local_78 + local_80 * 4) = iVar8 + iVar9 * 0xc;
            local_80 = local_80 + 1;
          }
          iVar14 = iVar14 + 1;
          puVar11 = (undefined2 *)(iVar8 + iVar9 * 0xc);
          *(int **)(puVar11 + 4) = piVar19;
          puVar11[1] = (short)iVar9;
          iVar9 = iVar9 + 1;
          *puVar11 = 0;
        } while (iVar14 < local_7c);
      }
      piVar12 = (int *)func_005229AC(piVar19,piVar21);
      local_50 = DAT_00484f18;
      if (piVar12 != (int *)0x0) {
        piVar13 = (int *)(**(code **)(*piVar12 + 8))(piVar12);
        do {
          if (piVar13 == local_50) goto LAB_00484e74;
          piVar13 = (int *)*piVar13;
        } while (piVar13 != (int *)0x0);
      }
      piVar12 = (int *)0x0;
LAB_00484e74:
      func_00392480(*piVar18,piVar19,&local_80,(int)piVar12,*(undefined4 *)(iVar8 + -4));
      func_004B948C((int)piVar4,*piVar18);
      piVar18 = piVar18 + 1;
      piVar21 = piVar21 + 2;
    } while (piVar18 != local_38);
  }
  local_58 = local_4c;
  local_54 = (uint *)s_P_JiisanIcon_00_00484f1c;
  uVar16 = func_005229AC(piVar19,&local_58);
  *(undefined4 *)(iVar8 + 0x38) = uVar16;
  local_58 = local_4c;
  local_54 = (uint *)s_P_SLinkIcon_00_00484f2c;
  uVar16 = func_005229AC(piVar19,&local_58);
  *(undefined4 *)(iVar8 + 0x3c) = uVar16;
  func_004B9958((int)piVar4,2);
  return piVar4;
}

