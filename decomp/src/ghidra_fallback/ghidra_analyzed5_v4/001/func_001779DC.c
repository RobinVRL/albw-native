#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_004356B4(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00659024(undefined4 *param_1,undefined1 param_2);
extern int DAT_00177d40;
extern int DAT_00177d44;
extern float DAT_00177d48;
extern undefined4 *DAT_00177d4c;
extern undefined4 DAT_00177d50;
extern int *DAT_00177d54;
extern float DAT_00177d58;
extern float DAT_00177d5c;
extern int DAT_00177d60;
extern undefined4 DAT_00177d64;
extern undefined4 DAT_00177d74;
extern undefined *DAT_00178118;
extern int DAT_0017811c;
extern float DAT_001784b0;
extern undefined4 DAT_001784b4;
extern float DAT_001784b8;
extern float DAT_00178784;
extern uint DAT_00178788;
extern char s_AirCurrent1_0017810c[];
extern char s_AirCurrentL_00177d78[];
extern char s_AirCurrent_00177d68[];
extern char s_cState_Off_00178120[];
extern char s_cState_On_00178138[];
extern char s_cState_ToOff_001784a0[];
extern char s_cState_ToOn_0017812c[];

// USA 001779DC <- EU 001779DC (Ghidra, non-matching)
// GLOBAL DAT_00177d40 int
// GLOBAL DAT_00177d44 int
// GLOBAL DAT_00177d48 float
// GLOBAL DAT_00177d4c undefined4 *
// GLOBAL DAT_00177d50 undefined4
// GLOBAL DAT_00177d54 int *
// GLOBAL DAT_00177d58 float
// GLOBAL DAT_00177d5c float
// GLOBAL DAT_00177d60 int
// GLOBAL DAT_00177d64 undefined4
// GLOBAL DAT_00177d74 undefined4
// GLOBAL DAT_00178118 undefined *
// GLOBAL DAT_0017811c int
// GLOBAL DAT_001784b0 float
// GLOBAL DAT_001784b4 undefined4
// GLOBAL DAT_001784b8 float
// GLOBAL DAT_00178784 float
// GLOBAL DAT_00178788 uint
// GLOBAL s_AirCurrent1_0017810c string
// GLOBAL s_AirCurrentL_00177d78 string
// GLOBAL s_AirCurrent_00177d68 string
// GLOBAL s_cState_Off_00178120 string
// GLOBAL s_cState_On_00178138 string
// GLOBAL s_cState_ToOff_001784a0 string
// GLOBAL s_cState_ToOn_0017812c string

/* WARNING: Variable defined which should be unmapped: objStack_e0 */
/* WARNING: Variable defined which should be unmapped: objStack_dc */

int func_001779DC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  float *pfVar14;
  int *piVar15;
  undefined4 uVar16;
  ushort *puVar17;
  int iVar18;
  char **ppcVar19;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar20;
  char **ppcVar21;
  char **ppcVar22;
  int iVar23;
  undefined1 uVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint unaff_r9;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fparam_0;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  char *pcVar36;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define objStack_e0 ((uint *)(albw_frame + 0x0))
  #define objStack_dc ((uint *)(albw_frame + 0x4))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_cc (*(float *)(albw_frame + 0x14))
  #define local_c8 (*(undefined4 * *)(albw_frame + 0x18))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_c0 (*(int *)(albw_frame + 0x20))
  #define local_bc (*(char * *)(albw_frame + 0x24))
  #define uStack_b8 (*(uint *)(albw_frame + 0x28))
  #define ppcStack_b4 (*(char ** *)(albw_frame + 0x2c))
  #define pcStack_a4 (*(char * *)(albw_frame + 0x3c))
  #define uStack_a0 (*(uint *)(albw_frame + 0x40))
  #define ppcStack_9c (*(char ** *)(albw_frame + 0x44))
  #define local_90 (*(float *)(albw_frame + 0x50))
  #define local_8c (*(float *)(albw_frame + 0x54))
  #define local_88 (*(float *)(albw_frame + 0x58))
  #define local_84 (*(undefined1 *)(albw_frame + 0x5c))
  #define local_78 (*(uint *)(albw_frame + 0x68))
  #define local_74 (*(uint * *)(albw_frame + 0x6c))
  #define local_68 (*(int * *)(albw_frame + 0x78))
  #define local_64 (*(uint *)(albw_frame + 0x7c))
  #define local_60 (*(float *)(albw_frame + 0x80))
  #define local_5c (*(undefined4 *)(albw_frame + 0x84))
  #define local_58 (*(uint *)(albw_frame + 0x88))
  #define local_54 (*(char * *)(albw_frame + 0x8c))
  #define local_50 (*(uint *)(albw_frame + 0x90))
  #define local_4c (*(char ** *)(albw_frame + 0x94))
  piVar5 = func_00150E40(param_1,param_2);
  iVar7 = DAT_00177d40;
  *piVar5 = DAT_00177d40;
  piVar5[200] = iVar7 + 0x54;
  puVar6 = func_0010A794(piVar5 + 0x103);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  iVar7 = func_0054D964((int)(puVar6 + -0x103),0);
  puVar6[0xc] = iVar7;
  iVar8 = func_004EE484(puVar6 + 0xd);
  iVar23 = iVar8 + -0x440;
  *(undefined4 *)(iVar8 + 100) = 0;
  iVar7 = DAT_00177d44;
  *(undefined4 *)(iVar8 + 0x68) = 0;
  *(int *)(iVar8 + 0x6c) = iVar7;
  puVar6 = DAT_00177d4c;
  fVar35 = DAT_00177d48;
  *(bool *)(iVar8 + 0x71) = *(short *)((int)param_2 + 0x2a) != 0;
  *(float *)(iVar8 + 0x74) = fVar35;
  *(undefined1 *)(iVar8 + 0x88) = 0;
  uVar20 = puVar6[1];
  *(undefined4 *)(iVar8 + 0xb8) = *puVar6;
  *(undefined4 *)(iVar8 + 0xbc) = uVar20;
  uVar20 = DAT_00177d50;
  *(undefined4 *)(iVar8 + 0xb0) = DAT_00177d50;
  *(int *)(iVar8 + 0xb4) = iVar23;
  uVar16 = puVar6[3];
  *(undefined4 *)(iVar8 + 200) = puVar6[2];
  *(undefined4 *)(iVar8 + 0xcc) = uVar16;
  *(undefined4 *)(iVar8 + 0xc0) = uVar20;
  *(int *)(iVar8 + 0xc4) = iVar23;
  iVar9 = func_00588BE4(iVar23);
  if (iVar9 == *DAT_00177d54) {
    *(undefined1 *)(iVar8 + 0x70) = 0;
    *(float *)(iVar8 + 0x78) = ALBW_AS_F32(param_2[5]) * DAT_00177d58;
    objStack_e0[0] = 1;
    objStack_dc[0] = 0;
    objStack_dc[1] = 0;
    uVar20 = func_0014E428(iVar23,1,0,0,1,0,0);
    *(undefined4 *)(iVar8 + -0x10) = uVar20;
  }
  else {
    *(undefined1 *)(iVar8 + 0x70) = 1;
    *(float *)(iVar8 + 0x78) = ALBW_AS_F32(param_2[5]) * DAT_00177d5c;
    *(undefined4 *)(iVar8 + -0x10) = 0;
  }
  pfVar10 = (float *)(iVar8 + 0x8c);
  func_00491624(pfVar10,param_2[7],param_2[8],param_2[9]);
  iVar9 = *(int *)(iVar8 + 0x78);
  if (iVar9 < 0x3f800001) {
    iVar9 = iVar7;
  }
  local_68 = (int *)(iVar8 + -0x10);
  *(int *)(iVar8 + 0x78) = iVar9;
  iVar9 = *(int *)(iVar8 + -0x10);
  if (iVar9 != 0) {
    *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar9 + 0x80),*(uint *)(iVar8 + -0x58),(float *)(iVar8 + -0x70));
  }
  iVar9 = DAT_00177d60;
  uVar26 = DAT_00177d60 + 8;
  if (*(char *)(iVar8 + 0x70) == '\0') {
    puVar11 = (undefined4 *)func_0010BAB4(0xa8);
    puVar12 = (undefined4 *)0x0;
    if (puVar11 != (undefined4 *)0x0) {
      puVar12 = func_0016A2FC(puVar11,1,DAT_00177d64,1);
    }
    *(undefined4 **)(iVar8 + -0xc) = puVar12;
    piVar5 = (int *)(iVar8 + -0xc);
    local_54 = s_AirCurrent_00177d68;
    local_58 = uVar26;
    func_00169608(*(uint **)(iVar8 + -0xc),0,(int *)&local_58,
                  *(int *)(*(int *)(iVar8 + -0x170) + 0x1c8));
    func_0016A02C(*piVar5,-1,(int *)0xffffffff,0);
    uVar33 = CONCAT44(DAT_00177d74,iVar7);
    objStack_dc[1] = 3;
    objStack_dc[2] = (uint)&local_d0;
    local_bc = (char *)(unaff_r9 | 0xff);
    local_88 = 1.4013e-44;
    local_84 = 0;
    local_d0 = 0;
    objStack_dc[0] = 1;
    local_c4 = DAT_00177d74;
    local_cc = fVar35;
    local_c8 = (undefined4 *)iVar7;
    local_c0 = iVar7;
    func_0016898C(*(int *)(iVar8 + -0xc),objStack_dc);
    *(float *)(*(int *)(*piVar5 + 0x14) + 0x10) = fVar35;
    fVar29 = fVar35;
    puVar11 = (undefined4 *)func_0010BAB4(0xa8);
    puVar12 = (undefined4 *)0x0;
    if (puVar11 != (undefined4 *)0x0) {
      puVar12 = func_0016A2FC(puVar11,1,DAT_00177d64,1);
    }
    *(undefined4 **)(iVar8 + -8) = puVar12;
    iVar7 = *(int *)(*(int *)(iVar8 + -0x170) + 0x1c8);
    local_50 = uVar26;
    if (*(char *)(iVar8 + 0x70) == '\0') {
      local_4c = (char **)s_AirCurrent1_0017810c;
      func_00169608(*(uint **)(iVar8 + -8),0,(int *)&local_50,iVar7);
    }
    else {
      local_4c = (char **)s_AirCurrentL_00177d78;
      func_00169608(*(uint **)(iVar8 + -8),0,(int *)&local_50,iVar7);
    }
    func_0016A02C(*(int *)(iVar8 + -8),-1,(int *)0xffffffff,0);
    local_c8 = (undefined4 *)uVar33;
    objStack_dc[2] = (uint)&local_d0;
    objStack_dc[1] = 3;
    local_88 = 1.4013e-44;
    local_84 = 0;
    local_d0 = 0;
    objStack_dc[0] = 1;
    local_c4 = (undefined4)((ulonglong)uVar33 >> 0x20);
    local_bc = (char *)((uint)piVar5 | 0xff);
    local_cc = fVar29;
    local_c0 = (int)local_c8;
    func_0016898C(*(int *)(iVar8 + -8),objStack_dc);
    iVar7 = (int)uVar33;
  }
  if (*(int *)(iVar8 + -0x10) != 0) {
    for (iVar13 = 0; piVar5 = *(int **)(*(int *)(iVar8 + -0x10) + 0x20), iVar13 < piVar5[1];
        iVar13 = iVar13 + 1) {
      puVar17 = (ushort *)(*piVar5 + iVar13 * 0x154);
      if (puVar17 != (ushort *)0x0) {
        *puVar17 = *puVar17 | 0x400;
      }
    }
  }
  local_c8 = (undefined4 *)(iVar8 + -0x34);
  *(uint *)(iVar8 + -0x160) = *(uint *)(iVar8 + -0x160) | 2;
  *(undefined1 *)(iVar8 + -0x2e) = 4;
  *(int *)(iVar8 + -0x20) = iVar23;
  iVar13 = func_0010BA78(0x40);
  *(int *)(iVar8 + -0x1c) = iVar13;
  *(uint *)(iVar8 + -0x18) = iVar13 + (uint)*(byte *)(iVar8 + -0x2e) * 8;
  iVar18 = 4;
  puVar12 = (undefined4 *)(iVar13 + -8);
  do {
    uVar20 = puVar6[0x17];
    iVar18 = iVar18 + -1;
    puVar12[2] = puVar6[0x16];
    puVar12[3] = uVar20;
    uVar20 = puVar6[0x17];
    puVar12[4] = puVar6[0x16];
    puVar12[5] = uVar20;
    puVar12 = puVar12 + 4;
  } while (iVar18 != 0);
  bVar1 = *(byte *)(iVar8 + -0x2e);
  uVar27 = (uint)bVar1;
  puVar12 = (undefined4 *)func_0010BA78(uVar27 << 3);
  *(undefined4 **)(iVar8 + -0x14) = puVar12;
  if (uVar27 != 0) {
    puVar11 = puVar12 + -2;
    if ((bVar1 & 1) != 0) {
      uVar20 = puVar6[9];
      *puVar12 = puVar6[8];
      puVar12[1] = uVar20;
      puVar11 = puVar12;
    }
    for (iVar13 = (int)uVar27 >> 1; iVar13 != 0; iVar13 = iVar13 + -1) {
      uVar20 = puVar6[9];
      puVar11[2] = puVar6[8];
      puVar11[3] = uVar20;
      uVar20 = puVar6[9];
      puVar11[4] = puVar6[8];
      puVar11[5] = uVar20;
      puVar11 = puVar11 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar13 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 4;
    iVar13 = func_00100118((int)(puVar6 + 2),DAT_00178118,0x24,4);
  }
  if (iVar13 != 0) {
    *(undefined4 *)(iVar8 + -0x2c) = 4;
    *(int *)(iVar8 + -0x28) = iVar13;
  }
  iVar13 = DAT_0017811c;
  *(undefined4 **)(iVar8 + -0xec) = local_c8;
  *(undefined2 *)(iVar13 + iVar23) = 4;
  local_74 = (uint *)s_cState_Off_00178120;
  iVar13 = *(int *)(iVar8 + -0x28);
  objStack_dc[2] = *(uint *)(iVar13 + 4);
  local_78 = uVar26;
  (**(code **)(iVar9 + 0x10))(&local_78);
  uVar27 = objStack_dc[2];
  uVar28 = 0;
  do {
    if (*(char *)((int)local_74 + uVar28) == '\0') {
      if ((int)uVar28 < 0x40001) goto LAB_00177f74;
      break;
    }
    uVar28 = uVar28 + 1;
  } while ((int)uVar28 < 0x40001);
  uVar28 = 0;
LAB_00177f74:
  iVar13 = *(int *)(iVar13 + 8);
  if (iVar13 <= (int)uVar28) {
    uVar28 = iVar13 - 1;
  }
  (**(code **)(local_78 + 8))(&local_78);
  func_0010E3C4((uint *)uVar27,local_74,uVar28);
  *(undefined1 *)(objStack_dc[2] + uVar28) = 0;
  puVar6 = *(undefined4 **)(iVar8 + -0x1c);
  uVar20 = DAT_00177d4c[9];
  uVar16 = DAT_00177d4c[5];
  uVar30 = DAT_00177d4c[6];
  uVar31 = DAT_00177d4c[7];
  uVar32 = DAT_00177d4c[8];
  *puVar6 = DAT_00177d4c[4];
  puVar6[1] = uVar16;
  puVar6 = *(undefined4 **)(iVar8 + -0x18);
  *puVar6 = uVar30;
  puVar6[1] = uVar31;
  puVar6 = *(undefined4 **)(iVar8 + -0x14);
  *puVar6 = uVar32;
  puVar6[1] = uVar20;
  local_74 = (uint *)s_cState_ToOn_0017812c;
  if (*(uint *)(iVar8 + -0x2c) < 2) {
    iVar13 = *(int *)(iVar8 + -0x28);
  }
  else {
    iVar13 = *(int *)(iVar8 + -0x28) + 0x24;
  }
  puVar25 = *(uint **)(iVar13 + 4);
  local_78 = uVar26;
  (**(code **)(iVar9 + 0x10))(&local_78);
  uVar27 = 0;
  do {
    if (*(char *)((int)local_74 + uVar27) == '\0') {
      if ((int)uVar27 < 0x40001) goto LAB_00178040;
      break;
    }
    uVar27 = uVar27 + 1;
  } while ((int)uVar27 < 0x40001);
  uVar27 = 0;
LAB_00178040:
  if (*(int *)(iVar13 + 8) <= (int)uVar27) {
    uVar27 = *(int *)(iVar13 + 8) - 1;
  }
  (**(code **)(local_78 + 8))(&local_78);
  func_0010E3C4(puVar25,local_74,uVar27);
  *(undefined1 *)((int)puVar25 + uVar27) = 0;
  iVar13 = *(int *)(iVar8 + -0x1c);
  uVar16 = DAT_00177d4c[0xd];
  uVar30 = DAT_00177d4c[0xb];
  uVar31 = DAT_00177d4c[8];
  uVar32 = DAT_00177d4c[0xc];
  uVar20 = DAT_00177d4c[9];
  *(undefined4 *)(iVar13 + 8) = DAT_00177d4c[10];
  *(undefined4 *)(iVar13 + 0xc) = uVar30;
  iVar13 = *(int *)(iVar8 + -0x18);
  *(undefined4 *)(iVar13 + 8) = uVar32;
  *(undefined4 *)(iVar13 + 0xc) = uVar16;
  iVar13 = *(int *)(iVar8 + -0x14);
  *(undefined4 *)(iVar13 + 8) = uVar31;
  *(undefined4 *)(iVar13 + 0xc) = uVar20;
  local_74 = (uint *)s_cState_On_00178138;
  if (*(uint *)(iVar8 + -0x2c) < 3) {
    iVar13 = *(int *)(iVar8 + -0x28);
  }
  else {
    iVar13 = *(int *)(iVar8 + -0x28) + 0x48;
  }
  puVar25 = *(uint **)(iVar13 + 4);
  local_78 = uVar26;
  (**(code **)(iVar9 + 0x10))(&local_78);
  uVar27 = 0;
  do {
    if (*(char *)((int)local_74 + uVar27) == '\0') {
      if ((int)uVar27 < 0x40001) goto LAB_00178150;
      break;
    }
    uVar27 = uVar27 + 1;
  } while ((int)uVar27 < 0x40001);
  uVar27 = 0;
LAB_00178150:
  if (*(int *)(iVar13 + 8) <= (int)uVar27) {
    uVar27 = *(int *)(iVar13 + 8) - 1;
  }
  (**(code **)(local_78 + 8))(&local_78);
  func_0010E3C4(puVar25,local_74,uVar27);
  *(undefined1 *)((int)puVar25 + uVar27) = 0;
  puVar6 = DAT_00177d4c;
  iVar13 = *(int *)(iVar8 + -0x1c);
  uVar16 = DAT_00177d4c[0xf];
  uVar20 = DAT_00177d4c[0x10];
  uVar31 = DAT_00177d4c[8];
  uVar32 = DAT_00177d4c[0x11];
  uVar30 = DAT_00177d4c[9];
  *(undefined4 *)(iVar13 + 0x10) = DAT_00177d4c[0xe];
  *(undefined4 *)(iVar13 + 0x14) = uVar16;
  iVar13 = *(int *)(iVar8 + -0x18);
  *(undefined4 *)(iVar13 + 0x10) = uVar20;
  *(undefined4 *)(iVar13 + 0x14) = uVar32;
  iVar13 = *(int *)(iVar8 + -0x14);
  *(undefined4 *)(iVar13 + 0x10) = uVar31;
  *(undefined4 *)(iVar13 + 0x14) = uVar30;
  local_74 = (uint *)s_cState_ToOff_001784a0;
  if (*(uint *)(iVar8 + -0x2c) < 4) {
    iVar13 = *(int *)(iVar8 + -0x28);
  }
  else {
    iVar13 = *(int *)(iVar8 + -0x28) + 0x6c;
  }
  puVar25 = *(uint **)(iVar13 + 4);
  local_78 = uVar26;
  (**(code **)(iVar9 + 0x10))(&local_78);
  uVar26 = 0;
  do {
    if (*(char *)((int)local_74 + uVar26) == '\0') {
      if ((int)uVar26 < 0x40001) goto LAB_00178228;
      break;
    }
    uVar26 = uVar26 + 1;
  } while ((int)uVar26 < 0x40001);
  uVar26 = 0;
LAB_00178228:
  if (*(int *)(iVar13 + 8) <= (int)uVar26) {
    uVar26 = *(int *)(iVar13 + 8) - 1;
  }
  (**(code **)(local_78 + 8))(&local_78);
  func_0010E3C4(puVar25,local_74,uVar26);
  *(undefined1 *)((int)puVar25 + uVar26) = 0;
  iVar9 = *(int *)(iVar8 + -0x1c);
  uVar20 = puVar6[0x14];
  uVar16 = puVar6[8];
  uVar30 = puVar6[0x13];
  uVar31 = puVar6[0x15];
  uVar32 = puVar6[9];
  *(undefined4 *)(iVar9 + 0x18) = puVar6[0x12];
  *(undefined4 *)(iVar9 + 0x1c) = uVar30;
  iVar9 = *(int *)(iVar8 + -0x18);
  *(undefined4 *)(iVar9 + 0x18) = uVar20;
  *(undefined4 *)(iVar9 + 0x1c) = uVar31;
  iVar9 = *(int *)(iVar8 + -0x14);
  *(undefined4 *)(iVar9 + 0x18) = uVar16;
  *(undefined4 *)(iVar9 + 0x1c) = uVar32;
  if (((*(short *)(iVar8 + -0x40a) == 0) ||
      ((*(char *)(iVar8 + 0x71) == '\0' && (bVar4 = func_00588BF0(iVar23,0), bVar4)))) ||
     ((*(char *)(iVar8 + 0x71) == '\x01' && (bVar4 = func_00588BF0(iVar23,0), !bVar4)))) {
    *(int *)(iVar8 + 0x74) = iVar7;
    func_00659024(local_c8,2);
  }
  else {
    *(float *)(iVar8 + 0x74) = fVar35;
    func_00659024(local_c8,0);
  }
  if (*(int *)(iVar8 + -0xc) != 0) {
    iVar7 = *(int *)(*(int *)(iVar8 + -0xc) + 0x14);
    fVar29 = *(float *)(iVar7 + 0x14) * *(float *)(iVar8 + 0x78) * DAT_001784b0;
    if (*(float *)(iVar7 + 8) != fVar29) {
      *(float *)(iVar7 + 8) = fVar29;
      *(undefined1 *)(iVar7 + 0x26) = 1;
    }
  }
  uVar20 = DAT_001784b4;
  pfVar14 = (float *)(iVar8 + 0x7c);
  *pfVar14 = fVar35;
  *(undefined4 *)(iVar8 + 0x80) = uVar20;
  *(float *)(iVar8 + 0x84) = fVar35;
  func_00115CE4(pfVar14,pfVar10,pfVar14);
  fparam_0 = *(float *)(iVar8 + 0x78);
  piVar5 = *(int **)(iVar8 + -4);
  local_8c = fparam_0 * DAT_001784b8;
  iVar7 = piVar5[0x18];
  fVar34 = ALBW_AS_F32(piVar5[0x16]);
  local_90 = fVar35;
  local_88 = fVar35;
  func_00115CE4(&local_90,pfVar10,&local_90);
  func_00115C54((float *)&local_bc,(float *)(iVar8 + -0x70),&local_90);
  fVar29 = DAT_001784b8;
  ppcVar22 = &local_bc;
  objStack_e0[0] = (uint)local_bc;
  objStack_dc[0] = uStack_b8;
  objStack_dc[1] = (uint)ppcStack_b4;
  ppcVar21 = ppcStack_b4;
  switch((short)piVar5[0x15]) {
  case 1:
    piVar15 = piVar5 + 1;
    piVar5[1] = (int)local_bc;
    piVar5[2] = uStack_b8;
    ppcVar19 = ppcStack_b4;
    goto LAB_00178448;
  case 5:
    ppcVar21 = *(char ***)(iVar8 + 0x9c);
    ppcVar22 = *(char ***)(iVar8 + 0x90);
    ppcVar19 = *(char ***)(iVar8 + 0xa8);
    piVar5[0x17] = (int)ppcVar21;
    piVar15 = piVar5 + 0x16;
    piVar5[0x16] = (int)ppcVar22;
LAB_00178448:
    piVar15[2] = (int)ppcVar19;
    break;
  case 6:
    piVar5[1] = (int)local_bc;
    piVar5[2] = uStack_b8;
    piVar5[3] = (int)ppcStack_b4;
    piVar5[0x16] = (int)ALBW_AS_U32((fVar34 * fVar29));
    break;
  case 7:
    piVar5[1] = (int)local_bc;
    piVar5[2] = uStack_b8;
    piVar5[3] = (int)ppcStack_b4;
    piVar5[0x16] = (int)ALBW_AS_U32(fVar34);
    piVar5[0x17] = (int)ALBW_AS_U32(fparam_0);
    piVar5[0x18] = iVar7;
    break;
  case 8:
    piVar5[1] = (int)local_bc;
    piVar5[2] = uStack_b8;
    piVar5[3] = (int)ppcStack_b4;
    func_001151CC(piVar5 + 0x19,pfVar10);
    piVar5[0x16] = (int)ALBW_AS_U32(fVar34);
    piVar5[0x17] = (int)ALBW_AS_U32(fparam_0);
    piVar5[0x18] = iVar7;
    break;
  case 9:
    local_60 = *(float *)(iVar8 + 0x90);
    local_5c = *(undefined4 *)(iVar8 + 0x9c);
    local_58 = *(uint *)(iVar8 + 0xa8);
    func_00115D70((float *)&local_54,&local_60,fparam_0);
    local_bc = local_54;
    uStack_b8 = local_50;
    ppcStack_b4 = local_4c;
    func_00115C54((float *)&local_54,(float *)objStack_e0,(float *)&local_bc);
    pcVar36 = local_54;
    uVar26 = local_50;
    ppcVar19 = local_4c;
    func_00115D70((float *)&local_54,&local_60,fparam_0);
    ppcVar21 = &pcStack_a4;
    pcStack_a4 = local_54;
    uStack_a0 = local_50;
    ppcStack_9c = local_4c;
    ppcVar22 = local_4c;
    func_00115C70((float *)&local_54,(float *)objStack_e0,(float *)ppcVar21);
    piVar5[0x16] = (int)pcVar36;
    piVar5[0x17] = uVar26;
    piVar5[0x18] = (int)ppcVar19;
    piVar5[0x19] = (int)local_54;
    piVar5[0x1a] = local_50;
    piVar5[0x1b] = (int)local_4c;
    piVar5[0x1c] = (int)ALBW_AS_U32((fVar34 * DAT_001784b8));
  }
  func_004356B4(piVar5);
  piVar5 = local_68;
  iVar7 = *(int *)(iVar8 + -0x10);
  cVar2 = '\0';
  if (iVar7 != 0) {
    cVar2 = *(char *)(iVar7 + 0x30);
  }
  uVar20 = extraout_r1;
  if (iVar7 != 0 && cVar2 != '\0') {
    iVar7 = *(int *)(iVar8 + -0x10);
    uVar20 = *(undefined4 *)(iVar8 + -0x428);
    ppcVar22 = *(char ***)(iVar8 + -0x424);
    *(undefined4 *)(iVar7 + 0x74) = *(undefined4 *)(iVar8 + -0x42c);
    *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar7 + 0x78) = uVar20;
    *(char ***)(iVar7 + 0x7c) = ppcVar22;
    func_001151F8(&local_d0,pfVar10,(undefined4 *)(iVar8 + -0x70));
    iVar7 = *piVar5;
    ppcVar21 = (char **)(*(uint *)(iVar7 + 0x164) | 0x40000000);
    *(char ***)(iVar7 + 0x164) = ppcVar21;
    func_001151EC((undefined4 *)(iVar7 + 0x80),&local_d0);
    func_004CEAF0(*piVar5);
    uVar20 = extraout_r1_00;
  }
  piVar5 = local_68;
  if (*(int *)(iVar8 + -0x10) != 0) {
    if (*(int **)(iVar8 + -0xc) != (int *)0x0) {
      func_00169A80(*(int **)(iVar8 + -0xc),uVar20,ppcVar21,(int *)ppcVar22);
      ppcVar21 = (char **)0x0;
      func_00168E9C(*(int **)(iVar8 + -0xc),*(int *)(iVar8 + -0x10),(int *)0x0);
      uVar20 = extraout_r1_01;
    }
    if (*(int **)(iVar8 + -8) != (int *)0x0) {
      func_00169A80(*(int **)(iVar8 + -8),uVar20,ppcVar21,(int *)ppcVar22);
      func_00168E9C(*(int **)(iVar8 + -8),*(int *)(iVar8 + -0x10),(int *)0x0);
    }
    func_004CEAF0(*(int *)(iVar8 + -0x10));
    iVar7 = *(int *)(iVar8 + -0x10);
    if (iVar7 != 0) {
      fVar29 = *(float *)(iVar8 + 0x74);
      if (fVar29 <= fVar35) {
        func_004CF478(iVar7,0);
      }
      else {
        if ((int)ALBW_AS_U32(fVar29) < 0x3f800000) {
          uVar20 = VectorFloatToUnsigned(fVar29 * DAT_00178784,3);
          uVar24 = (undefined1)uVar20;
        }
        else {
          uVar24 = 0xff;
        }
        func_004CF478(iVar7,1);
        for (iVar7 = 0; iVar7 < *(int *)(*(int *)(*(int *)(iVar8 + -0x10) + 0x20) + 4);
            iVar7 = iVar7 + 1) {
          puVar6 = (undefined4 *)func_00584CA8(*(int *)(iVar8 + -0x10),iVar7,1);
          local_d0 = CONCAT13(uVar24,(int3)*puVar6);
          func_004CF5DC(*piVar5,iVar7,1,&local_d0);
        }
      }
    }
  }
  local_64 = *(uint *)(iVar8 + -0x174);
  objStack_dc[0] = iVar8 + 0xb0;
  objStack_e0[0] = (uint)*(short *)(iVar8 + -0x3ec);
  objStack_dc[1] = DAT_00178788;
  uVar26 = objStack_dc[1];
  (*(undefined2 *)((char *)&objStack_dc[1] + 0)) = (undefined2)DAT_00178788;
  uVar3 = (undefined2)objStack_dc[1];
  objStack_dc[1] = uVar26;
  iVar7 = func_0014EB8C(iVar8,*(undefined4 *)(iVar8 + -4),*(undefined2 **)(iVar8 + -0xa0),&local_64,
                        *(short *)(iVar8 + -0x3ec),objStack_dc[0],uVar3);
  if (iVar7 != 0) {
    *(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)(iVar8 + 0x7c);
    *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar8 + 0x80);
    *(undefined4 *)(iVar8 + 0x2c) = *(undefined4 *)(iVar8 + 0x84);
  }
  return iVar23;
}

