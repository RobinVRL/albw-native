#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065C1CC(undefined4 *param_1,undefined1 param_2);
extern int DAT_001c99a8;
extern float DAT_001c99ac;
extern undefined4 *DAT_001c99b0;
extern undefined4 DAT_001c99b4;
extern float DAT_001c99b8;
extern undefined *DAT_001c99bc;
extern int DAT_001c99c0;
extern int DAT_001c99d0;
extern undefined4 *DAT_001c9d5c;
extern float DAT_001c9d7c;
extern undefined4 DAT_001c9d80;
extern float DAT_001c9d84;
extern uint DAT_001c9fd8;
extern char s_cState_Off_001c99c4[];
extern char s_cState_On_001c9d60[];
extern char s_cState_ToOff_001c9d6c[];
extern char s_cState_ToOn_001c99d4[];

// USA 001C9640 <- EU 001C9640 (Ghidra, non-matching)
// GLOBAL DAT_001c99a8 int
// GLOBAL DAT_001c99ac float
// GLOBAL DAT_001c99b0 undefined4 *
// GLOBAL DAT_001c99b4 undefined4
// GLOBAL DAT_001c99b8 float
// GLOBAL DAT_001c99bc undefined *
// GLOBAL DAT_001c99c0 int
// GLOBAL DAT_001c99d0 int
// GLOBAL DAT_001c9d5c undefined4 *
// GLOBAL DAT_001c9d7c float
// GLOBAL DAT_001c9d80 undefined4
// GLOBAL DAT_001c9d84 float
// GLOBAL DAT_001c9fd8 uint
// GLOBAL s_cState_Off_001c99c4 string
// GLOBAL s_cState_On_001c9d60 string
// GLOBAL s_cState_ToOff_001c9d6c string
// GLOBAL s_cState_ToOn_001c99d4 string

/* WARNING: Variable defined which should be unmapped: objStack_e0 */

int func_001C9640(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  uint *puVar16;
  float *pfVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fparam_0;
  float fVar24;
  float fVar25;
  float fVar26;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define objStack_e0 ((uint *)(albw_frame + 0x0))
  #define local_d0 (*(float *)(albw_frame + 0x10))
  #define uStack_cc (*(uint *)(albw_frame + 0x14))
  #define iStack_c8 (*(int *)(albw_frame + 0x18))
  #define local_c4 (*(undefined4 * *)(albw_frame + 0x1c))
  #define local_c0 (*(float *)(albw_frame + 0x20))
  #define local_bc (*(float *)(albw_frame + 0x24))
  #define uStack_b8 (*(uint *)(albw_frame + 0x28))
  #define iStack_b4 (*(int *)(albw_frame + 0x2c))
  #define local_b0 (*(int *)(albw_frame + 0x30))
  #define local_ac (*(uint * *)(albw_frame + 0x34))
  #define local_94 (*(float *)(albw_frame + 0x4c))
  #define uStack_90 (*(uint *)(albw_frame + 0x50))
  #define iStack_8c (*(int *)(albw_frame + 0x54))
  #define local_88 ((uint *)(albw_frame + 0x58))
  #define local_80 (*(float *)(albw_frame + 0x60))
  #define local_7c (*(float *)(albw_frame + 0x64))
  #define local_78 (*(float *)(albw_frame + 0x68))
  #define local_70 (*(float *)(albw_frame + 0x70))
  #define local_6c (*(undefined4 *)(albw_frame + 0x74))
  #define local_68 (*(undefined4 *)(albw_frame + 0x78))
  piVar5 = func_00150E40(param_1,param_2);
  iVar7 = DAT_001c99a8;
  *piVar5 = DAT_001c99a8;
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
  iVar7 = func_004EE484(puVar6 + 0xd);
  iVar15 = iVar7 + -0x440;
  *(undefined4 *)(iVar7 + 100) = 0;
  fVar25 = DAT_001c99ac;
  *(undefined4 *)(iVar7 + 0x68) = 0;
  *(float *)(iVar7 + 0x6c) = fVar25;
  puVar6 = DAT_001c99b0;
  *(bool *)(iVar7 + 0x70) = *(short *)((int)param_2 + 0x2a) != 0;
  uVar13 = puVar6[1];
  *(undefined4 *)(iVar7 + 0xb4) = *puVar6;
  *(undefined4 *)(iVar7 + 0xb8) = uVar13;
  fVar20 = DAT_001c99b8;
  uVar13 = DAT_001c99b4;
  *(undefined4 *)(iVar7 + 0xac) = DAT_001c99b4;
  *(int *)(iVar7 + 0xb0) = iVar15;
  uVar14 = puVar6[2];
  *(undefined4 *)(iVar7 + 200) = puVar6[3];
  *(undefined4 *)(iVar7 + 0xc4) = uVar14;
  *(undefined4 *)(iVar7 + 0xbc) = uVar13;
  *(int *)(iVar7 + 0xc0) = iVar15;
  local_c4 = (undefined4 *)(iVar7 + -0x34);
  fVar20 = ALBW_AS_F32(param_2[6]) * fVar20;
  *(float *)(iVar7 + 0x78) = fVar20;
  if ((int)ALBW_AS_U32(fVar20) < 0x3f800001) {
    fVar20 = fVar25;
  }
  *(float *)(iVar7 + 0x78) = fVar20;
  *(uint *)(iVar7 + -0x160) = *(uint *)(iVar7 + -0x160) | 2;
  *(undefined1 *)(iVar7 + -0x2e) = 4;
  *(int *)(iVar7 + -0x20) = iVar15;
  iVar8 = func_0010BA78(0x40);
  *(int *)(iVar7 + -0x1c) = iVar8;
  *(uint *)(iVar7 + -0x18) = iVar8 + (uint)*(byte *)(iVar7 + -0x2e) * 8;
  iVar12 = 4;
  puVar9 = (undefined4 *)(iVar8 + -8);
  do {
    uVar13 = puVar6[0x17];
    iVar12 = iVar12 + -1;
    puVar9[2] = puVar6[0x16];
    puVar9[3] = uVar13;
    uVar13 = puVar6[0x17];
    puVar9[4] = puVar6[0x16];
    puVar9[5] = uVar13;
    puVar9 = puVar9 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)(iVar7 + -0x2e);
  uVar18 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar18 << 3);
  *(undefined4 **)(iVar7 + -0x14) = puVar9;
  if (uVar18 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar6[9];
      *puVar9 = puVar6[8];
      puVar9[1] = uVar13;
      puVar10 = puVar9;
    }
    for (iVar8 = (int)uVar18 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar13 = puVar6[9];
      puVar10[2] = puVar6[8];
      puVar10[3] = uVar13;
      uVar13 = puVar6[9];
      puVar10[4] = puVar6[8];
      puVar10[5] = uVar13;
      puVar10 = puVar10 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar8 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 4;
    iVar8 = func_00100118((int)(puVar6 + 2),DAT_001c99bc,0x24,4);
  }
  if (iVar8 != 0) {
    *(undefined4 *)(iVar7 + -0x2c) = 4;
    *(int *)(iVar7 + -0x28) = iVar8;
  }
  iVar12 = DAT_001c99d0;
  iVar8 = DAT_001c99c0;
  *(undefined4 **)(iVar7 + -0xec) = local_c4;
  *(undefined2 *)(iVar8 + iVar15) = 4;
  local_ac = (uint *)s_cState_Off_001c99c4;
  local_b0 = iVar12;
  iVar8 = *(int *)(iVar7 + -0x28);
  objStack_e0[3] = *(uint *)(iVar8 + 4);
  (**(code **)(iVar12 + 8))(&local_b0);
  uVar18 = objStack_e0[3];
  uVar19 = 0;
  do {
    if (*(char *)((int)local_ac + uVar19) == '\0') {
      if ((int)uVar19 < 0x40001) goto LAB_001c98d8;
      break;
    }
    uVar19 = uVar19 + 1;
  } while ((int)uVar19 < 0x40001);
  uVar19 = 0;
LAB_001c98d8:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar19) {
    uVar19 = iVar8 - 1;
  }
  (**(code **)(local_b0 + 8))(&local_b0);
  func_0010E3C4((uint *)uVar18,local_ac,uVar19);
  *(undefined1 *)(objStack_e0[3] + uVar19) = 0;
  puVar6 = *(undefined4 **)(iVar7 + -0x1c);
  uVar13 = DAT_001c99b0[7];
  uVar14 = DAT_001c99b0[6];
  uVar22 = DAT_001c99b0[8];
  uVar21 = DAT_001c99b0[5];
  uVar23 = DAT_001c99b0[9];
  *puVar6 = DAT_001c99b0[4];
  puVar6[1] = uVar21;
  puVar6 = *(undefined4 **)(iVar7 + -0x18);
  *puVar6 = uVar14;
  puVar6[1] = uVar13;
  puVar6 = *(undefined4 **)(iVar7 + -0x14);
  *puVar6 = uVar22;
  puVar6[1] = uVar23;
  local_ac = (uint *)s_cState_ToOn_001c99d4;
  local_b0 = iVar12;
  if (*(uint *)(iVar7 + -0x2c) < 2) {
    iVar8 = *(int *)(iVar7 + -0x28);
  }
  else {
    iVar8 = *(int *)(iVar7 + -0x28) + 0x24;
  }
  puVar16 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar12 + 8))(&local_b0);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_ac + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_001c99ec;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_001c99ec:
  if (*(int *)(iVar8 + 8) <= (int)uVar18) {
    uVar18 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_b0 + 8))(&local_b0);
  func_0010E3C4(puVar16,local_ac,uVar18);
  *(undefined1 *)((int)puVar16 + uVar18) = 0;
  iVar8 = *(int *)(iVar7 + -0x1c);
  uVar13 = *DAT_001c9d5c;
  uVar14 = DAT_001c9d5c[1];
  uVar21 = DAT_001c9d5c[3];
  uVar22 = DAT_001c9d5c[4];
  uVar23 = DAT_001c9d5c[5];
  *(undefined4 *)(iVar8 + 8) = DAT_001c9d5c[2];
  *(undefined4 *)(iVar8 + 0xc) = uVar21;
  iVar8 = *(int *)(iVar7 + -0x18);
  *(undefined4 *)(iVar8 + 8) = uVar22;
  *(undefined4 *)(iVar8 + 0xc) = uVar23;
  iVar8 = *(int *)(iVar7 + -0x14);
  *(undefined4 *)(iVar8 + 8) = uVar13;
  *(undefined4 *)(iVar8 + 0xc) = uVar14;
  local_ac = (uint *)s_cState_On_001c9d60;
  local_b0 = iVar12;
  if (*(uint *)(iVar7 + -0x2c) < 3) {
    iVar8 = *(int *)(iVar7 + -0x28);
  }
  else {
    iVar8 = *(int *)(iVar7 + -0x28) + 0x48;
  }
  puVar16 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar12 + 8))(&local_b0);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_ac + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_001c9ab0;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_001c9ab0:
  if (*(int *)(iVar8 + 8) <= (int)uVar18) {
    uVar18 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_b0 + 8))(&local_b0);
  func_0010E3C4(puVar16,local_ac,uVar18);
  *(undefined1 *)((int)puVar16 + uVar18) = 0;
  puVar6 = DAT_001c99b0;
  iVar8 = *(int *)(iVar7 + -0x1c);
  uVar13 = DAT_001c99b0[0x10];
  uVar14 = DAT_001c99b0[8];
  uVar21 = DAT_001c99b0[0xf];
  uVar23 = DAT_001c99b0[0x11];
  uVar22 = DAT_001c99b0[9];
  *(undefined4 *)(iVar8 + 0x10) = DAT_001c99b0[0xe];
  *(undefined4 *)(iVar8 + 0x14) = uVar21;
  iVar8 = *(int *)(iVar7 + -0x18);
  *(undefined4 *)(iVar8 + 0x10) = uVar13;
  *(undefined4 *)(iVar8 + 0x14) = uVar23;
  iVar8 = *(int *)(iVar7 + -0x14);
  *(undefined4 *)(iVar8 + 0x10) = uVar14;
  *(undefined4 *)(iVar8 + 0x14) = uVar22;
  local_ac = (uint *)s_cState_ToOff_001c9d6c;
  local_b0 = iVar12;
  uVar18 = *(uint *)(iVar7 + -0x2c);
  if (uVar18 < 4) {
    iVar8 = *(int *)(iVar7 + -0x28);
    uVar19 = uVar18;
  }
  else {
    iVar8 = iVar12;
    uVar19 = *(uint *)(iVar7 + -0x28);
  }
  if (3 < uVar18) {
    iVar8 = uVar19 + 0x6c;
  }
  puVar16 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar12 + 8))(&local_b0);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_ac + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_001c9b8c;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_001c9b8c:
  if (*(int *)(iVar8 + 8) <= (int)uVar18) {
    uVar18 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_b0 + 8))(&local_b0);
  func_0010E3C4(puVar16,local_ac,uVar18);
  *(undefined1 *)((int)puVar16 + uVar18) = 0;
  iVar8 = *(int *)(iVar7 + -0x1c);
  uVar13 = puVar6[9];
  uVar21 = puVar6[0x14];
  uVar14 = puVar6[8];
  uVar22 = puVar6[0x13];
  uVar23 = puVar6[0x15];
  *(undefined4 *)(iVar8 + 0x18) = puVar6[0x12];
  *(undefined4 *)(iVar8 + 0x1c) = uVar22;
  iVar8 = *(int *)(iVar7 + -0x18);
  *(undefined4 *)(iVar8 + 0x18) = uVar21;
  *(undefined4 *)(iVar8 + 0x1c) = uVar23;
  iVar8 = *(int *)(iVar7 + -0x14);
  *(undefined4 *)(iVar8 + 0x18) = uVar14;
  *(undefined4 *)(iVar8 + 0x1c) = uVar13;
  if (((*(short *)(iVar7 + -0x40a) == 0) ||
      ((*(char *)(iVar7 + 0x70) == '\0' && (bVar4 = func_00588BF0(iVar15,0), bVar4)))) ||
     ((*(char *)(iVar7 + 0x70) == '\x01' && (bVar4 = func_00588BF0(iVar15,0), !bVar4)))) {
    func_0065C1CC(local_c4,2);
  }
  else {
    func_0065C1CC(local_c4,0);
  }
  if (*(int *)(iVar7 + -8) != 0) {
    iVar8 = *(int *)(*(int *)(iVar7 + -8) + 0x14);
    if (*(float *)(iVar8 + 8) != *(float *)(iVar8 + 0x14)) {
      *(float *)(iVar8 + 8) = *(float *)(iVar8 + 0x14);
      *(undefined1 *)(iVar8 + 0x26) = 1;
    }
  }
  pfVar17 = (float *)(iVar7 + 0x88);
  func_00491624(pfVar17,param_2[7],param_2[8],param_2[9]);
  uVar13 = DAT_001c9d80;
  fVar20 = DAT_001c9d7c;
  pfVar11 = (float *)(iVar7 + 0x7c);
  *pfVar11 = DAT_001c9d7c;
  *(float *)(iVar7 + 0x80) = fVar20;
  *(undefined4 *)(iVar7 + 0x84) = uVar13;
  func_00115CE4(pfVar11,pfVar17,pfVar11);
  fVar26 = *(float *)(iVar7 + 0x78);
  piVar5 = *(int **)(iVar7 + -4);
  local_78 = fVar26 * DAT_001c9d84;
  fVar24 = ALBW_AS_F32(piVar5[0x16]);
  fparam_0 = ALBW_AS_F32(piVar5[0x17]);
  local_80 = fVar20;
  local_7c = fVar20;
  func_00115CE4(&local_80,pfVar17,&local_80);
  func_00115C54(&local_c0,(float *)(iVar7 + -0x70),&local_80);
  fVar20 = DAT_001c9d84;
  objStack_e0[0] = (uint)ALBW_AS_U32(local_c0);
  objStack_e0[1] = (uint)ALBW_AS_U32(local_bc);
  objStack_e0[2] = uStack_b8;
  switch((short)piVar5[0x15]) {
  case 1:
    piVar5[1] = (int)ALBW_AS_U32(local_c0);
    piVar5[2] = (int)ALBW_AS_U32(local_bc);
    piVar5[3] = uStack_b8;
    break;
  case 5:
    iVar8 = *(int *)(iVar7 + 0x98);
    iVar12 = *(int *)(iVar7 + 0xa4);
    piVar5[0x16] = *(int *)(iVar7 + 0x8c);
    piVar5[0x17] = iVar8;
    piVar5[0x18] = iVar12;
    break;
  case 6:
    piVar5[1] = (int)ALBW_AS_U32(local_c0);
    piVar5[2] = (int)ALBW_AS_U32(local_bc);
    piVar5[3] = uStack_b8;
    piVar5[0x16] = (int)ALBW_AS_U32((fVar24 * fVar20));
    break;
  case 7:
    piVar5[1] = (int)ALBW_AS_U32(local_c0);
    piVar5[2] = (int)ALBW_AS_U32(local_bc);
    piVar5[3] = uStack_b8;
    piVar5[0x16] = (int)ALBW_AS_U32(fVar24);
    piVar5[0x17] = (int)ALBW_AS_U32(fparam_0);
    piVar5[0x18] = (int)ALBW_AS_U32(fVar26);
    break;
  case 8:
    piVar5[1] = (int)ALBW_AS_U32(local_c0);
    piVar5[2] = (int)ALBW_AS_U32(local_bc);
    piVar5[3] = uStack_b8;
    func_001151CC(piVar5 + 0x19,pfVar17);
    piVar5[0x16] = (int)ALBW_AS_U32(fVar24);
    piVar5[0x17] = (int)ALBW_AS_U32(fparam_0);
    piVar5[0x18] = (int)ALBW_AS_U32(fVar26);
    break;
  case 9:
    local_70 = *(float *)(iVar7 + 0x8c);
    local_6c = *(undefined4 *)(iVar7 + 0x98);
    local_68 = *(undefined4 *)(iVar7 + 0xa4);
    func_00115D70(&local_94,&local_70,fparam_0);
    local_d0 = local_94;
    uStack_cc = uStack_90;
    iStack_c8 = iStack_8c;
    func_00115C54(&local_94,(float *)objStack_e0,&local_d0);
    fVar20 = local_94;
    uVar18 = uStack_90;
    iVar8 = iStack_8c;
    func_00115D70(&local_94,&local_70,fparam_0);
    local_bc = local_94;
    uStack_b8 = uStack_90;
    iStack_b4 = iStack_8c;
    func_00115C70(&local_94,(float *)objStack_e0,&local_bc);
    piVar5[0x16] = (int)ALBW_AS_U32(fVar20);
    piVar5[0x17] = uVar18;
    piVar5[0x18] = iVar8;
    piVar5[0x19] = (int)ALBW_AS_U32(local_94);
    piVar5[0x1a] = uStack_90;
    piVar5[0x1b] = iStack_8c;
    piVar5[0x1c] = (int)ALBW_AS_U32((fVar24 * DAT_001c9d84));
  }
  func_004356B4(piVar5);
  iVar8 = *(int *)(iVar7 + -0x10);
  cVar2 = '\0';
  if (iVar8 != 0) {
    cVar2 = *(char *)(iVar8 + 0x30);
  }
  if (iVar8 != 0 && cVar2 != '\0') {
    iVar8 = *(int *)(iVar7 + -0x10);
    uVar13 = *(undefined4 *)(iVar7 + -0x424);
    *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
    *(float *)(iVar8 + 0x74) = fVar25;
    *(float *)(iVar8 + 0x78) = fVar25;
    *(undefined4 *)(iVar8 + 0x7c) = uVar13;
    func_001151F8(&local_70,(undefined4 *)(iVar7 + 0x88),(undefined4 *)(iVar7 + -0x70));
    iVar8 = *(int *)(iVar7 + -0x10);
    *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
    func_001151EC((undefined4 *)(iVar8 + 0x80),&local_70);
    func_004CEAF0(*(int *)(iVar7 + -0x10));
  }
  local_88[0] = *(uint *)(iVar7 + -0x174);
  objStack_e0[0] = (uint)*(short *)(iVar7 + -0x3ec);
  objStack_e0[1] = iVar7 + 0xac;
  objStack_e0[2] = DAT_001c9fd8;
  uVar18 = objStack_e0[2];
  (*(undefined2 *)((char *)&objStack_e0[2] + 0)) = (undefined2)DAT_001c9fd8;
  uVar3 = (undefined2)objStack_e0[2];
  objStack_e0[2] = uVar18;
  iVar8 = func_0014EB8C(iVar7,*(undefined4 *)(iVar7 + -4),*(undefined2 **)(iVar7 + -0xa0),local_88,
                        *(short *)(iVar7 + -0x3ec),objStack_e0[1],uVar3);
  if (iVar8 != 0) {
    *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(iVar7 + 0x7c);
    *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(iVar7 + 0x80);
    *(undefined4 *)(iVar7 + 0x2c) = *(undefined4 *)(iVar7 + 0x84);
  }
  return iVar15;
}

