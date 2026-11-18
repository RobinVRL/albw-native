#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014CFF0(int param_1,int param_2);
extern int func_0014D0F4(undefined4 *param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_001673D0(int *param_1,int *param_2,int param_3,undefined4 param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168434(undefined4 *param_1);
extern int func_004684B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4);
extern int func_00469C44(undefined4 *param_1,int *param_2,int *param_3);
extern int func_004764BC(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4,int param_5);
extern int func_00482A80(undefined4 *param_1);
extern int func_00484238(undefined4 *param_1,int *param_2,int *param_3);
extern int func_004A06A0(undefined4 *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0066DCB0(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0046914c;
extern float DAT_00469150;
extern undefined *DAT_00469154;
extern int *DAT_00469158;
extern undefined DAT_0046915c;
extern uint DAT_00469164;
extern undefined DAT_00469168;
extern int DAT_004691a0;
extern int DAT_00469610;
extern undefined *DAT_00469614;
extern int *DAT_0046964c;
extern int *DAT_00469650;
extern int *DAT_00469654;
extern int *DAT_00469658;
extern int *DAT_0046965c;
extern char s_L_DownButton_00_0046917c[];
extern char s_L_FloorButton_00_0046918c[];
extern char s_L_FloorButton_01_004691a4[];
extern char s_L_FloorButton_02_004691b8[];
extern char s_L_FloorButton_03_004691cc[];
extern char s_L_UpButton_00_0046916c[];
extern char s_N_SlideAreaCenter_00_00469660[];
extern char s_P_SampleMap_00_00469600[];
extern char s_cState_FloorDown_00469638[];
extern char s_cState_FloorUp_00469628[];
extern char s_cState_Standby_00469618[];

// USA 00468DB8 <- EU 00468D90 (Ghidra, non-matching)
// GLOBAL DAT_0046914c undefined4
// GLOBAL DAT_00469150 float
// GLOBAL DAT_00469154 undefined *
// GLOBAL DAT_00469158 int *
// GLOBAL DAT_0046915c undefined
// GLOBAL DAT_00469164 uint
// GLOBAL DAT_00469168 undefined
// GLOBAL DAT_004691a0 int
// GLOBAL DAT_00469610 int
// GLOBAL DAT_00469614 undefined *
// GLOBAL DAT_0046964c int *
// GLOBAL DAT_00469650 int *
// GLOBAL DAT_00469654 int *
// GLOBAL DAT_00469658 int *
// GLOBAL DAT_0046965c int *
// GLOBAL s_L_DownButton_00_0046917c string
// GLOBAL s_L_FloorButton_00_0046918c string
// GLOBAL s_L_FloorButton_01_004691a4 string
// GLOBAL s_L_FloorButton_02_004691b8 string
// GLOBAL s_L_FloorButton_03_004691cc string
// GLOBAL s_L_UpButton_00_0046916c string
// GLOBAL s_N_SlideAreaCenter_00_00469660 string
// GLOBAL s_P_SampleMap_00_00469600 string
// GLOBAL s_cState_FloorDown_00469638 string
// GLOBAL s_cState_FloorUp_00469628 string
// GLOBAL s_cState_Standby_00469618 string

/* WARNING: Variable defined which should be unmapped: objStack_30 */

int func_00468DB8(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 extraout_r1;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fparam_0;
  float in_s1;
  float in_s2;
  float in_s3;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_30 ((uint *)(albw_frame + 0x0))
  #define local_28 (*(uint *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  puVar3 = func_0014D0F4(param_1);
  *puVar3 = DAT_0046914c;
  fparam_0 = DAT_00469150;
  *(undefined2 *)(puVar3 + 0x32) = 0;
  *(undefined2 *)((int)puVar3 + 0xca) = 0xffff;
  puVar3[0x33] = ALBW_AS_U32(fparam_0);
  puVar3[0x34] = 0;
  *(undefined2 *)(puVar3 + 0x35) = 0;
  *(undefined2 *)((int)puVar3 + 0xd6) = 0xffff;
  puVar3[0x36] = ALBW_AS_U32(fparam_0);
  puVar3[0x37] = 0;
  puVar3 = func_0010A794(puVar3 + 0x38);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  *(undefined1 *)(puVar3 + 0x11) = 3;
  *(undefined1 *)((int)puVar3 + 0x45) = 1;
  *(undefined1 *)((int)puVar3 + 0x46) = 3;
  *(undefined1 *)((int)puVar3 + 0x47) = 1;
  *(undefined1 *)((int)puVar3 + 0x49) = 2;
  *(undefined1 *)((int)puVar3 + 0x4a) = 4;
  *(undefined1 *)((int)puVar3 + 0x4b) = 0;
  *(undefined1 *)(puVar3 + 0x13) = 0;
  iVar4 = func_004A06A0(puVar3 + 0x14,fparam_0,in_s1,in_s2,in_s3);
  *(undefined4 *)(iVar4 + 0x18) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = 0;
  *(undefined4 *)(iVar4 + 0x20) = 0;
  func_0010B3EC((undefined4 *)(iVar4 + 0x18),0x21,iVar4 + 0x24);
  *(undefined4 *)(iVar4 + 0xa8) = 0;
  *(undefined4 *)(iVar4 + 0xac) = 0;
  *(undefined4 *)(iVar4 + 0xb0) = 0;
  *(undefined4 *)(iVar4 + 0xd4) = 0;
  *(undefined4 *)(iVar4 + 0xd8) = 0;
  *(undefined4 *)(iVar4 + 0xdc) = 0;
  *(undefined4 *)(iVar4 + 0xe0) = 0;
  *(undefined4 *)(iVar4 + 0xe4) = 0;
  puVar2 = DAT_00469154;
  uVar13 = 2;
  *(undefined4 *)(iVar4 + 0xe8) = 0;
  iVar4 = func_00100118(iVar4 + 0xec,puVar2,0x110,2);
  *(undefined4 *)(iVar4 + 0x220) = 1;
  *(undefined4 *)(iVar4 + 0x224) = 0;
  iVar15 = iVar4 + -0x21c;
  *(undefined4 *)(iVar4 + 0x228) = 0;
  *(undefined4 *)(iVar4 + 0x22c) = 0;
  *(undefined1 *)(iVar4 + 0x230) = 0;
  *(undefined1 *)(iVar4 + -0x20d) = 0x83;
  puVar3 = (undefined4 *)func_0010BAB4(0x74);
  piVar5 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar5 = func_00168434(puVar3);
  }
  piVar12 = DAT_00469158;
  *(int **)(iVar4 + -0x200) = piVar5;
  func_001673D0(piVar5,piVar12,0,uVar13);
  piVar5 = *(int **)(iVar4 + -0x200);
  func_0016773C((int)piVar5,2);
  uVar17 = DAT_00469164;
  local_24 = &DAT_0046915c;
  local_28 = DAT_00469164;
  func_00166C20(piVar5,0,(int *)&local_28,0);
  local_24 = &DAT_00469168;
  local_28 = uVar17;
  func_00166C20(piVar5,1,(int *)&local_28,0);
  *(int **)(iVar4 + -0x14c) = piVar5;
  *(undefined2 *)(iVar4 + -0x152) = 0;
  *(undefined2 *)(iVar4 + -0x154) = 0;
  *(int **)(iVar4 + -0x140) = piVar5;
  *(undefined2 *)(iVar4 + -0x146) = 1;
  *(undefined2 *)(iVar4 + -0x148) = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x98);
  puVar3 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_24 = s_L_UpButton_00_0046916c;
    local_28 = uVar17;
    puVar3 = func_00484238(puVar6,piVar5,(int *)&local_28);
  }
  *(undefined4 **)(iVar4 + -0x100) = puVar3;
  puVar6 = (undefined4 *)func_0010BAB4(0x98);
  puVar3 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_24 = s_L_DownButton_00_0046917c;
    local_28 = uVar17;
    puVar3 = func_00484238(puVar6,piVar5,(int *)&local_28);
  }
  *(undefined4 **)(iVar4 + -0xfc) = puVar3;
  local_24 = s_L_UpButton_00_0046916c;
  local_28 = uVar17;
  uVar13 = func_005229AC(*(int **)(iVar4 + -0x200),(int *)&local_28);
  *(undefined4 *)(iVar4 + -0x14) = uVar13;
  local_24 = s_L_DownButton_00_0046917c;
  local_28 = uVar17;
  uVar13 = func_005229AC(*(int **)(iVar4 + -0x200),(int *)&local_28);
  *(undefined4 *)(iVar4 + -0x10) = uVar13;
  puVar6 = (undefined4 *)func_0010BAB4(0xb8);
  puVar3 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_24 = s_L_FloorButton_00_0046918c;
    local_28 = uVar17;
    objStack_30[0] = 0;
    puVar3 = func_004764BC(puVar6,piVar5,(int *)&local_28,*(char *)(DAT_004691a0 + iVar15) + 3,0);
  }
  *(undefined4 **)(iVar4 + -0x108) = puVar3;
  puVar6 = (undefined4 *)func_0010BAB4(0xb8);
  puVar3 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_24 = s_L_FloorButton_01_004691a4;
    local_28 = uVar17;
    objStack_30[0] = 0;
    puVar3 = func_004764BC(puVar6,piVar5,(int *)&local_28,*(char *)(DAT_004691a0 + iVar15) + 2,0);
  }
  *(undefined4 **)(iVar4 + -0x10c) = puVar3;
  puVar6 = (undefined4 *)func_0010BAB4(0xb8);
  puVar3 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_24 = s_L_FloorButton_02_004691b8;
    local_28 = uVar17;
    objStack_30[0] = 0;
    puVar3 = func_004764BC(puVar6,piVar5,(int *)&local_28,*(char *)(DAT_004691a0 + iVar15) + 1,0);
  }
  *(undefined4 **)(iVar4 + -0x110) = puVar3;
  puVar3 = (undefined4 *)func_0010BAB4(0xb8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    local_24 = s_L_FloorButton_03_004691cc;
    local_28 = uVar17;
    objStack_30[0] = 1;
    puVar3 = func_004764BC(puVar3,piVar5,(int *)&local_28,(int)*(char *)(DAT_004691a0 + iVar15),1);
  }
  *(undefined4 **)(iVar4 + -0x114) = puVar3;
  local_24 = s_L_FloorButton_03_004691cc;
  local_28 = uVar17;
  uVar13 = func_005229AC(*(int **)(iVar4 + -0x200),(int *)&local_28);
  *(undefined4 *)(iVar4 + -0x28) = uVar13;
  local_24 = s_L_FloorButton_02_004691b8;
  local_28 = uVar17;
  uVar13 = func_005229AC(*(int **)(iVar4 + -0x200),(int *)&local_28);
  *(undefined4 *)(iVar4 + -0x24) = uVar13;
  local_24 = s_L_FloorButton_01_004691a4;
  local_28 = uVar17;
  uVar13 = func_005229AC(*(int **)(iVar4 + -0x200),(int *)&local_28);
  *(undefined4 *)(iVar4 + -0x20) = uVar13;
  local_24 = s_L_FloorButton_00_0046918c;
  local_28 = uVar17;
  uVar13 = func_005229AC(*(int **)(iVar4 + -0x200),(int *)&local_28);
  *(undefined4 *)(iVar4 + -0x1c) = uVar13;
  uVar7 = 0;
  do {
    piVar12 = (int *)(iVar4 + -0x114);
    if (uVar7 < 4) {
      piVar12 = piVar12 + uVar7;
    }
    puVar3 = (undefined4 *)(iVar4 + -0x38);
    if (uVar7 < 4) {
      puVar3 = puVar3 + uVar7;
    }
    uVar7 = uVar7 + 1;
    *puVar3 = *(undefined4 *)(*piVar12 + 0xa8);
  } while ((int)uVar7 < 4);
  puVar3 = (undefined4 *)func_0010BAB4(0x38);
  piVar12 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar12 = func_00482A80(puVar3);
  }
  iVar16 = 0;
  *(int **)(iVar4 + -0x104) = piVar12;
  do {
    puVar3 = (undefined4 *)func_0010BAB4(0xb4);
    piVar12 = (int *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      objStack_30[1] = (uint)s_P_SampleMap_00_00469600;
      objStack_30[0] = uVar17;
      piVar12 = func_00469C44(puVar3,piVar5,(int *)objStack_30);
    }
    if (*(int *)(iVar4 + -0xd4) < *(int *)(iVar4 + -0xd0)) {
      *(int **)(*(int *)(iVar4 + -0xcc) + *(int *)(iVar4 + -0xd4) * 4) = piVar12;
      *(int *)(iVar4 + -0xd4) = *(int *)(iVar4 + -0xd4) + 1;
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 < 0x21);
  func_0010B380((undefined4 *)(iVar4 + -0x44),0x40,(int *)0x0,4);
  *(int *)(iVar4 + -0x128) = iVar15;
  *(undefined1 *)(iVar4 + -0x136) = 3;
  iVar8 = func_0010BA78(0x30);
  iVar16 = DAT_00469610;
  *(int *)(iVar4 + -0x124) = iVar8;
  *(uint *)(iVar4 + -0x120) = iVar8 + (uint)*(byte *)(iVar4 + -0x136) * 8;
  iVar10 = 3;
  puVar3 = (undefined4 *)(iVar8 + -8);
  do {
    uVar13 = *(undefined4 *)(iVar16 + 0x9c);
    iVar10 = iVar10 + -1;
    puVar3[2] = *(undefined4 *)(iVar16 + 0x98);
    puVar3[3] = uVar13;
    uVar13 = *(undefined4 *)(iVar16 + 0x9c);
    puVar3[4] = *(undefined4 *)(iVar16 + 0x98);
    puVar3[5] = uVar13;
    puVar3 = puVar3 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)(iVar4 + -0x136);
  uVar7 = (uint)bVar1;
  puVar3 = (undefined4 *)func_0010BA78(uVar7 << 3);
  *(undefined4 **)(iVar4 + -0x11c) = puVar3;
  if (uVar7 != 0) {
    puVar6 = puVar3 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = *(undefined4 *)(iVar16 + 0xa4);
      *puVar3 = *(undefined4 *)(iVar16 + 0xa0);
      puVar3[1] = uVar13;
      puVar6 = puVar3;
    }
    for (iVar8 = (int)uVar7 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar13 = *(undefined4 *)(iVar16 + 0xa4);
      puVar6[2] = *(undefined4 *)(iVar16 + 0xa0);
      puVar6[3] = uVar13;
      uVar13 = *(undefined4 *)(iVar16 + 0xa4);
      puVar6[4] = *(undefined4 *)(iVar16 + 0xa0);
      puVar6[5] = uVar13;
      puVar6 = puVar6 + 4;
    }
  }
  puVar3 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar8 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x24;
    puVar3[1] = 3;
    iVar8 = func_00100118((int)(puVar3 + 2),DAT_00469614,0x24,3);
  }
  if (iVar8 != 0) {
    *(undefined4 *)(iVar4 + -0x134) = 3;
    *(int *)(iVar4 + -0x130) = iVar8;
  }
  local_24 = s_cState_Standby_00469618;
  local_28 = uVar17;
  func_0010BEC4(iVar4 + -0x13c,0,(int *)&local_28);
  puVar3 = *(undefined4 **)(iVar4 + -0x124);
  uVar18 = *(undefined4 *)(iVar16 + 0x50);
  uVar19 = *(undefined4 *)(iVar16 + 0x48);
  uVar11 = *(undefined4 *)(iVar16 + 0x54);
  uVar14 = *(undefined4 *)(iVar16 + 0x58);
  uVar13 = *(undefined4 *)(iVar16 + 0x5c);
  puVar3[1] = *(undefined4 *)(iVar16 + 0x4c);
  *puVar3 = uVar19;
  puVar3 = *(undefined4 **)(iVar4 + -0x120);
  puVar3[1] = uVar11;
  *puVar3 = uVar18;
  puVar3 = *(undefined4 **)(iVar4 + -0x11c);
  puVar3[1] = uVar13;
  *puVar3 = uVar14;
  local_24 = s_cState_FloorUp_00469628;
  local_28 = uVar17;
  func_0010BEC4(iVar4 + -0x13c,1,(int *)&local_28);
  iVar8 = *(int *)(iVar4 + -0x124);
  uVar13 = *(undefined4 *)(iVar16 + 100);
  uVar11 = *(undefined4 *)(iVar16 + 0x68);
  uVar19 = *(undefined4 *)(iVar16 + 0x6c);
  uVar14 = *(undefined4 *)(iVar16 + 0x74);
  uVar18 = *(undefined4 *)(iVar16 + 0x70);
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar16 + 0x60);
  *(undefined4 *)(iVar8 + 0xc) = uVar13;
  iVar8 = *(int *)(iVar4 + -0x120);
  *(undefined4 *)(iVar8 + 8) = uVar11;
  *(undefined4 *)(iVar8 + 0xc) = uVar19;
  iVar8 = *(int *)(iVar4 + -0x11c);
  *(undefined4 *)(iVar8 + 8) = uVar18;
  *(undefined4 *)(iVar8 + 0xc) = uVar14;
  local_24 = s_cState_FloorDown_00469638;
  local_28 = uVar17;
  func_0010BEC4(iVar4 + -0x13c,2,(int *)&local_28);
  uVar11 = *(undefined4 *)(iVar16 + 0x8c);
  iVar8 = *(int *)(iVar4 + -0x124);
  uVar14 = *(undefined4 *)(iVar16 + 0x7c);
  uVar18 = *(undefined4 *)(iVar16 + 0x80);
  uVar13 = *(undefined4 *)(iVar16 + 0x84);
  uVar19 = *(undefined4 *)(iVar16 + 0x88);
  *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar16 + 0x78);
  *(undefined4 *)(iVar8 + 0x14) = uVar14;
  iVar16 = *(int *)(iVar4 + -0x120);
  puVar3 = (undefined4 *)(iVar16 + 0x10);
  *puVar3 = uVar18;
  *(undefined4 *)(iVar16 + 0x14) = uVar13;
  iVar16 = *(int *)(iVar4 + -0x11c);
  *(undefined4 *)(iVar16 + 0x10) = uVar19;
  *(undefined4 *)(iVar16 + 0x14) = uVar11;
  func_0066DCB0((undefined4 *)(iVar4 + -0x13c),0);
  piVar12 = (int *)func_005229AC(*(int **)(iVar4 + -0x200),DAT_0046964c);
  piVar5 = DAT_00469650;
  uVar13 = extraout_r1;
  if (piVar12 != (int *)0x0) {
    uVar20 = (**(code **)(*piVar12 + 8))(piVar12);
    uVar13 = (undefined4)((ulonglong)uVar20 >> 0x20);
    piVar9 = (int *)uVar20;
    do {
      if (piVar9 == piVar5) goto LAB_00469518;
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)0x0);
  }
  piVar12 = (int *)0x0;
LAB_00469518:
  *(int **)(iVar4 + -0x118) = piVar12;
  func_004684B0(iVar15,uVar13,(uint)puVar3,uVar14);
  piVar12 = (int *)func_005229AC(*(int **)(iVar4 + -0x200),DAT_00469654);
  piVar5 = DAT_00469658;
  if (piVar12 != (int *)0x0) {
    piVar9 = (int *)(**(code **)(*piVar12 + 8))(piVar12);
    do {
      if (piVar9 == piVar5) goto LAB_00469564;
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)0x0);
  }
  piVar12 = (int *)0x0;
LAB_00469564:
  *(int **)(iVar4 + -8) = piVar12;
  piVar12 = (int *)func_005229AC(*(int **)(iVar4 + -0x200),DAT_0046965c);
  piVar5 = DAT_00469658;
  if (piVar12 != (int *)0x0) {
    piVar9 = (int *)(**(code **)(*piVar12 + 8))(piVar12);
    do {
      if (piVar9 == piVar5) goto LAB_004695a8;
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)0x0);
  }
  piVar12 = (int *)0x0;
LAB_004695a8:
  *(int **)(iVar4 + -4) = piVar12;
  local_24 = s_N_SlideAreaCenter_00_00469660;
  local_28 = uVar17;
  uVar13 = func_005229AC(*(int **)(iVar4 + -0x200),(int *)&local_28);
  *(undefined4 *)(iVar4 + -0x18) = uVar13;
  func_0014CFF0(iVar15,*(int *)(iVar4 + -0x100));
  func_0014CFF0(iVar15,*(int *)(iVar4 + -0xfc));
  func_0014CFF0(iVar15,*(int *)(iVar4 + -0x104));
  uVar17 = 0;
  do {
    piVar5 = (int *)(iVar4 + -0x114);
    if (uVar17 < 4) {
      piVar5 = piVar5 + uVar17;
    }
    if (*piVar5 != 0) {
      piVar5 = (int *)(iVar4 + -0x114);
      if (uVar17 < 4) {
        piVar5 = piVar5 + uVar17;
      }
      func_0014CFF0(iVar15,*piVar5);
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 4);
  return iVar15;
}

