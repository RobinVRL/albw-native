#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00489680(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4);
extern int func_004A06A0(undefined4 *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_00689A64(int param_1,int *param_2,int param_3);
extern int DAT_004534d0;
extern float DAT_004534d4;
extern undefined DAT_004534d8;
extern int DAT_004534dc;
extern undefined4 DAT_004534e0;
extern undefined4 DAT_004534e4;
extern undefined4 DAT_004534e8;
extern undefined1 *DAT_004534ec;
extern undefined4 DAT_004534f0;
extern undefined DAT_004534f4;
extern int DAT_004534f8;
extern undefined DAT_004534fc;
extern int *DAT_00453540;
extern int DAT_0045357c;
extern undefined *DAT_00453830;
extern char s_Decide_00453524[];
extern char s_L_ArrowL_00_00453564[];
extern char s_L_ArrowR_00_00453570[];
extern char s_N_Area_00_00453558[];
extern char s_ScrollL_00453508[];
extern char s_ScrollR_00453500[];
extern char s_T_WarpPointNameL_00_0045352c[];
extern char s_T_WarpPointNameR_00_00453544[];
extern char s_TouchIn_0045351c[];
extern char s_TouchOut_00453510[];
extern char s_cState_Decide_00453888[];
extern char s_cState_ScrollLeft_00453854[];
extern char s_cState_ScrollRight_00453840[];
extern char s_cState_TouchIn_00453878[];
extern char s_cState_TouchOut_00453868[];
extern char s_cState_Wait_00453834[];

// USA 004530E4 <- EU 004530BC (Ghidra, non-matching)
// GLOBAL DAT_004534d0 int
// GLOBAL DAT_004534d4 float
// GLOBAL DAT_004534d8 undefined
// GLOBAL DAT_004534dc int
// GLOBAL DAT_004534e0 undefined4
// GLOBAL DAT_004534e4 undefined4
// GLOBAL DAT_004534e8 undefined4
// GLOBAL DAT_004534ec undefined1 *
// GLOBAL DAT_004534f0 undefined4
// GLOBAL DAT_004534f4 undefined
// GLOBAL DAT_004534f8 int
// GLOBAL DAT_004534fc undefined
// GLOBAL DAT_00453540 int *
// GLOBAL DAT_0045357c int
// GLOBAL DAT_00453830 undefined *
// GLOBAL s_Decide_00453524 string
// GLOBAL s_L_ArrowL_00_00453564 string
// GLOBAL s_L_ArrowR_00_00453570 string
// GLOBAL s_N_Area_00_00453558 string
// GLOBAL s_ScrollL_00453508 string
// GLOBAL s_ScrollR_00453500 string
// GLOBAL s_T_WarpPointNameL_00_0045352c string
// GLOBAL s_T_WarpPointNameR_00_00453544 string
// GLOBAL s_TouchIn_0045351c string
// GLOBAL s_TouchOut_00453510 string
// GLOBAL s_cState_Decide_00453888 string
// GLOBAL s_cState_ScrollLeft_00453854 string
// GLOBAL s_cState_ScrollRight_00453840 string
// GLOBAL s_cState_TouchIn_00453878 string
// GLOBAL s_cState_TouchOut_00453868 string
// GLOBAL s_cState_Wait_00453834 string

int func_004530E4(undefined4 *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  float fparam_0;
  float in_s1;
  float in_s2;
  float in_s3;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(undefined * *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c (*(undefined * *)(albw_frame + 0x24))
  #define local_38 (*(int *)(albw_frame + 0x28))
  #define local_34 (*(undefined * *)(albw_frame + 0x2c))
  piVar3 = func_004B9A10(param_1,0);
  iVar19 = DAT_004534d0;
  *piVar3 = DAT_004534d0;
  piVar3[0xe] = iVar19 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x1d);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined2 *)(puVar4 + 9) = 0;
  fparam_0 = DAT_004534d4;
  *(undefined2 *)((int)puVar4 + 0x26) = 0xffff;
  puVar4[10] = ALBW_AS_U32(fparam_0);
  puVar4[0xb] = 0;
  *(undefined2 *)(puVar4 + 0xc) = 0;
  iVar19 = DAT_004534dc;
  *(undefined2 *)((int)puVar4 + 0x32) = 0xffff;
  puVar4[0xd] = ALBW_AS_U32(fparam_0);
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar15 = puVar4 + 0x11;
  local_44 = &DAT_004534d8;
  local_48 = iVar19;
  puVar4[0x13] = 0x40;
  uVar8 = DAT_004534e4;
  puVar4[0x12] = puVar4 + 0x14;
  *(undefined2 *)((int)puVar4 + 0xce) = 0;
  *puVar15 = uVar8;
  func_00689A64((int)puVar15,&local_48,-1);
  uVar13 = DAT_004534e8;
  puVar11 = puVar4 + 0x34;
  *puVar15 = DAT_004534e8;
  local_3c = &DAT_004534d8;
  local_40 = iVar19;
  puVar4[0x35] = puVar4 + 0x37;
  puVar4[0x36] = 0x40;
  *(undefined2 *)(puVar4[0x35] + 0x7e) = 0;
  *puVar11 = uVar8;
  func_00689A64((int)puVar11,&local_40,-1);
  *puVar11 = uVar13;
  puVar4[0x57] = 0;
  puVar11 = puVar4 + 0x58;
  local_34 = &DAT_004534d8;
  local_38 = iVar19;
  puVar4[0x5a] = 0x40;
  puVar4[0x59] = puVar4 + 0x5b;
  *(undefined2 *)((int)puVar4 + 0x1ea) = 0;
  *puVar11 = uVar8;
  func_00689A64((int)puVar11,&local_38,-1);
  puVar4[0x7b] = 0;
  *puVar11 = uVar13;
  puVar4[0x7c] = 0;
  iVar5 = func_004A06A0(puVar4 + 0x7d,fparam_0,in_s1,in_s2,in_s3);
  puVar2 = DAT_004534ec;
  *(undefined1 *)(iVar5 + 0x18) = 0;
  iVar14 = iVar5 + -0x268;
  *puVar2 = 1;
  (**(code **)(*(int *)(iVar5 + -0x268) + 0x38))(iVar14,DAT_004534f0,0);
  piVar16 = *(int **)(iVar5 + -0x24c);
  func_0016773C((int)piVar16,7);
  iVar19 = DAT_004534f8;
  local_54 = &DAT_004534f4;
  local_58 = DAT_004534f8;
  func_00166C20(piVar16,0,&local_58,0);
  local_54 = &DAT_004534fc;
  local_58 = iVar19;
  func_00166C20(piVar16,1,&local_58,0);
  local_54 = s_ScrollR_00453500;
  local_58 = iVar19;
  func_00166C20(piVar16,2,&local_58,0);
  local_54 = s_ScrollL_00453508;
  local_58 = iVar19;
  func_00166C20(piVar16,3,&local_58,0);
  local_54 = s_TouchOut_00453510;
  local_58 = iVar19;
  func_00166C20(piVar16,4,&local_58,0);
  local_54 = s_TouchIn_0045351c;
  local_58 = iVar19;
  func_00166C20(piVar16,5,&local_58,0);
  local_54 = s_Decide_00453524;
  local_58 = iVar19;
  func_00166C20(piVar16,6,&local_58,0);
  *(int **)(iVar5 + -0x240) = piVar16;
  *(undefined2 *)(iVar5 + -0x246) = 1;
  *(undefined2 *)(iVar5 + -0x248) = 0;
  *(int **)(iVar5 + -0x234) = piVar16;
  *(undefined2 *)(iVar5 + -0x23a) = 0;
  *(undefined2 *)(iVar5 + -0x23c) = 0;
  *(int **)(iVar5 + -0x1bc) = piVar16;
  *(undefined2 *)(iVar5 + -0x1c2) = 6;
  *(undefined2 *)(iVar5 + -0x1c4) = 0;
  local_54 = s_T_WarpPointNameL_00_0045352c;
  local_58 = iVar19;
  piVar6 = (int *)func_005229AC(piVar16,&local_58);
  piVar3 = DAT_00453540;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar3) goto LAB_004533a4;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_004533a4:
  *(int **)(iVar5 + -0x1b8) = piVar6;
  local_54 = s_T_WarpPointNameR_00_00453544;
  local_58 = iVar19;
  piVar6 = (int *)func_005229AC(piVar16,&local_58);
  piVar3 = DAT_00453540;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar3) goto LAB_004533f4;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_004533f4:
  *(int **)(iVar5 + -0x1b4) = piVar6;
  local_54 = s_N_Area_00_00453558;
  local_58 = iVar19;
  uVar8 = func_005229AC(piVar16,&local_58);
  *(undefined4 *)(iVar5 + -0x98) = uVar8;
  puVar4 = (undefined4 *)func_0010BAB4(0x6c);
  iVar9 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    local_54 = s_L_ArrowL_00_00453564;
    local_58 = iVar19;
    iVar9 = func_00489680(puVar4,piVar16,&local_58,0x660000);
  }
  *(int *)(iVar5 + -8) = iVar9;
  puVar4 = (undefined4 *)func_0010BAB4(0x6c);
  iVar9 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    local_54 = s_L_ArrowR_00_00453570;
    local_58 = iVar19;
    iVar9 = func_00489680(puVar4,piVar16,&local_58,0x990000);
  }
  *(int *)(iVar5 + -4) = iVar9;
  *(int *)(iVar5 + -0x1e0) = iVar14;
  *(undefined1 *)(iVar5 + -0x1ee) = 6;
  iVar10 = func_0010BA78(0x60);
  iVar9 = DAT_0045357c;
  *(int *)(iVar5 + -0x1dc) = iVar10;
  *(uint *)(iVar5 + -0x1d8) = iVar10 + (uint)*(byte *)(iVar5 + -0x1ee) * 8;
  iVar12 = 6;
  puVar4 = (undefined4 *)(iVar10 + -8);
  do {
    uVar8 = *(undefined4 *)(iVar9 + 0xbc);
    iVar12 = iVar12 + -1;
    puVar4[2] = *(undefined4 *)(iVar9 + 0xb8);
    puVar4[3] = uVar8;
    uVar8 = *(undefined4 *)(iVar9 + 0xbc);
    puVar4[4] = *(undefined4 *)(iVar9 + 0xb8);
    puVar4[5] = uVar8;
    puVar4 = puVar4 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)(iVar5 + -0x1ee);
  uVar17 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar17 << 3);
  *(undefined4 **)(iVar5 + -0x1d4) = puVar4;
  if (uVar17 != 0) {
    puVar11 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar8 = *(undefined4 *)(iVar9 + 0x5c);
      *puVar4 = *(undefined4 *)(iVar9 + 0x58);
      puVar4[1] = uVar8;
      puVar11 = puVar4;
    }
    for (iVar10 = (int)uVar17 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar8 = *(undefined4 *)(iVar9 + 0x5c);
      puVar11[2] = *(undefined4 *)(iVar9 + 0x58);
      puVar11[3] = uVar8;
      uVar8 = *(undefined4 *)(iVar9 + 0x5c);
      puVar11[4] = *(undefined4 *)(iVar9 + 0x58);
      puVar11[5] = uVar8;
      puVar11 = puVar11 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar10 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 6;
    iVar10 = func_00100118((int)(puVar4 + 2),DAT_00453830,0x24,6);
  }
  if (iVar10 != 0) {
    *(int *)(iVar5 + -0x1e8) = iVar10;
    *(undefined4 *)(iVar5 + -0x1ec) = 6;
  }
  local_54 = s_cState_Wait_00453834;
  local_58 = iVar19;
  func_0010BEC4(iVar5 + -500,0,&local_58);
  puVar4 = *(undefined4 **)(iVar5 + -0x1dc);
  uVar8 = *(undefined4 *)(iVar9 + 0x4c);
  uVar13 = *(undefined4 *)(iVar9 + 0x50);
  uVar18 = *(undefined4 *)(iVar9 + 0x54);
  uVar20 = *(undefined8 *)(iVar9 + 0x58);
  *puVar4 = *(undefined4 *)(iVar9 + 0x48);
  puVar4[1] = uVar8;
  puVar4 = *(undefined4 **)(iVar5 + -0x1d8);
  *puVar4 = uVar13;
  puVar4[1] = uVar18;
  puVar4 = *(undefined4 **)(iVar5 + -0x1d4);
  *puVar4 = (int)uVar20;
  puVar4[1] = (int)((ulonglong)uVar20 >> 0x20);
  local_54 = s_cState_ScrollRight_00453840;
  local_58 = iVar19;
  func_0010BEC4(iVar5 + -500,1,&local_58);
  iVar10 = *(int *)(iVar5 + -0x1dc);
  uVar18 = *(undefined4 *)(iVar9 + 100);
  uVar8 = *(undefined4 *)(iVar9 + 0x68);
  uVar13 = *(undefined4 *)(iVar9 + 0x6c);
  *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar9 + 0x60);
  *(undefined4 *)(iVar10 + 0xc) = uVar18;
  iVar10 = *(int *)(iVar5 + -0x1d8);
  *(undefined4 *)(iVar10 + 8) = uVar8;
  *(undefined4 *)(iVar10 + 0xc) = uVar13;
  iVar10 = *(int *)(iVar5 + -0x1d4);
  *(int *)(iVar10 + 8) = (int)uVar20;
  *(int *)(iVar10 + 0xc) = (int)((ulonglong)uVar20 >> 0x20);
  local_54 = s_cState_ScrollLeft_00453854;
  local_58 = iVar19;
  func_0010BEC4(iVar5 + -500,2,&local_58);
  iVar10 = *(int *)(iVar5 + -0x1dc);
  uVar8 = *(undefined4 *)(iVar9 + 0x78);
  uVar18 = *(undefined4 *)(iVar9 + 0x7c);
  uVar13 = *(undefined4 *)(iVar9 + 0x74);
  *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar9 + 0x70);
  *(undefined4 *)(iVar10 + 0x14) = uVar13;
  iVar10 = *(int *)(iVar5 + -0x1d8);
  *(undefined4 *)(iVar10 + 0x10) = uVar8;
  *(undefined4 *)(iVar10 + 0x14) = uVar18;
  iVar10 = *(int *)(iVar5 + -0x1d4);
  *(int *)(iVar10 + 0x10) = (int)uVar20;
  *(int *)(iVar10 + 0x14) = (int)((ulonglong)uVar20 >> 0x20);
  local_54 = s_cState_TouchOut_00453868;
  local_58 = iVar19;
  func_0010BEC4(iVar5 + -500,3,&local_58);
  iVar10 = *(int *)(iVar5 + -0x1dc);
  uVar8 = *(undefined4 *)(iVar9 + 0x84);
  uVar13 = *(undefined4 *)(iVar9 + 0x88);
  uVar18 = *(undefined4 *)(iVar9 + 0x8c);
  *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar9 + 0x80);
  *(undefined4 *)(iVar10 + 0x1c) = uVar8;
  iVar10 = *(int *)(iVar5 + -0x1d8);
  *(undefined4 *)(iVar10 + 0x18) = uVar13;
  *(undefined4 *)(iVar10 + 0x1c) = uVar18;
  iVar10 = *(int *)(iVar5 + -0x1d4);
  *(int *)(iVar10 + 0x18) = (int)uVar20;
  *(int *)(iVar10 + 0x1c) = (int)((ulonglong)uVar20 >> 0x20);
  local_54 = s_cState_TouchIn_00453878;
  local_58 = iVar19;
  func_0010BEC4(iVar5 + -500,4,&local_58);
  iVar10 = *(int *)(iVar5 + -0x1dc);
  uVar18 = *(undefined4 *)(iVar9 + 0x94);
  uVar8 = *(undefined4 *)(iVar9 + 0x98);
  uVar13 = *(undefined4 *)(iVar9 + 0x9c);
  *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar9 + 0x90);
  *(undefined4 *)(iVar10 + 0x24) = uVar18;
  iVar10 = *(int *)(iVar5 + -0x1d8);
  *(undefined4 *)(iVar10 + 0x20) = uVar8;
  *(undefined4 *)(iVar10 + 0x24) = uVar13;
  iVar10 = *(int *)(iVar5 + -0x1d4);
  *(int *)(iVar10 + 0x20) = (int)uVar20;
  *(int *)(iVar10 + 0x24) = (int)((ulonglong)uVar20 >> 0x20);
  local_54 = s_cState_Decide_00453888;
  local_58 = iVar19;
  func_0010BEC4(iVar5 + -500,5,&local_58);
  iVar19 = *(int *)(iVar5 + -0x1dc);
  uVar18 = *(undefined4 *)(iVar9 + 0xa4);
  uVar8 = *(undefined4 *)(iVar9 + 0xa8);
  uVar13 = *(undefined4 *)(iVar9 + 0xac);
  *(undefined4 *)(iVar19 + 0x28) = *(undefined4 *)(iVar9 + 0xa0);
  *(undefined4 *)(iVar19 + 0x2c) = uVar18;
  iVar19 = *(int *)(iVar5 + -0x1d8);
  *(undefined4 *)(iVar19 + 0x28) = uVar8;
  *(undefined4 *)(iVar19 + 0x2c) = uVar13;
  iVar19 = *(int *)(iVar5 + -0x1d4);
  *(int *)(iVar19 + 0x28) = (int)uVar20;
  *(int *)(iVar19 + 0x2c) = (int)((ulonglong)uVar20 >> 0x20);
  *(undefined1 *)(iVar5 + -0x259) = 0x50;
  *puVar2 = 0;
  return iVar14;
}

