#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0024FC98(int param_1,int param_2,int *param_3,ushort param_4);
extern int func_002500F4(int param_1);
extern int func_004356B4(int *param_1);
extern int func_004A9510(int param_1,int param_2,uint param_3);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00520814(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00584C14(int param_1,int *param_2);
extern int func_0065FBB4(undefined4 *param_1,undefined1 param_2);
extern int DAT_00251234;
extern int *DAT_00251238;
extern int DAT_0025123c;
extern float DAT_00251240;
extern undefined4 DAT_00251244;
extern undefined DAT_00251248;
extern int DAT_00251268;
extern int DAT_0025126c;
extern int DAT_00251270;
extern undefined4 DAT_00251274;
extern undefined *DAT_00251280;
extern int DAT_0025163c;
extern int *DAT_00251680;
extern int *DAT_00251684;
extern uint *DAT_002518a8;
extern undefined4 *DAT_002518ac;
extern undefined4 DAT_002518b0;
extern float DAT_002518b4;
extern undefined4 DAT_002518b8;
extern float DAT_002518bc;
extern float DAT_002518c0;
extern char s_7SandPillar_0025124b[];
extern char s_Break_00251278[];
extern char s_SandPillarHalf_00251258[];
extern char s_cState_DestroyWait_0025165c[];
extern char s_cState_Destroy_00251670[];
extern char s_cState_Exist_0025164c[];
extern char s_cState_Wait_00251640[];
extern undefined4 _DAT_00251248;

// USA 00250DD4 <- EU 00250DFC (Ghidra, non-matching)
// GLOBAL DAT_00251234 int
// GLOBAL DAT_00251238 int *
// GLOBAL DAT_0025123c int
// GLOBAL DAT_00251240 float
// GLOBAL DAT_00251244 undefined4
// GLOBAL DAT_00251248 undefined
// GLOBAL DAT_00251268 int
// GLOBAL DAT_0025126c int
// GLOBAL DAT_00251270 int
// GLOBAL DAT_00251274 undefined4
// GLOBAL DAT_00251280 undefined *
// GLOBAL DAT_0025163c int
// GLOBAL DAT_00251680 int *
// GLOBAL DAT_00251684 int *
// GLOBAL DAT_002518a8 uint *
// GLOBAL DAT_002518ac undefined4 *
// GLOBAL DAT_002518b0 undefined4
// GLOBAL DAT_002518b4 float
// GLOBAL DAT_002518b8 undefined4
// GLOBAL DAT_002518bc float
// GLOBAL DAT_002518c0 float
// GLOBAL s_7SandPillar_0025124b string
// GLOBAL s_Break_00251278 string
// GLOBAL s_SandPillarHalf_00251258 string
// GLOBAL s_cState_DestroyWait_0025165c string
// GLOBAL s_cState_Destroy_00251670 string
// GLOBAL s_cState_Exist_0025164c string
// GLOBAL s_cState_Wait_00251640 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * func_00250DD4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint *puVar17;
  int *piVar18;
  int iVar19;
  char *pcVar20;
  int iVar21;
  float fVar22;
  int iVar23;
  float fVar24;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(uint * *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define fStack_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_34 ((uint *)(albw_frame + 0x2c))
  piVar3 = func_00150E40(param_1,param_2);
  piVar18 = DAT_00251238;
  iVar13 = DAT_00251234;
  piVar3[200] = DAT_00251234 + 0x58;
  *piVar3 = iVar13;
  iVar13 = *piVar18;
  iVar15 = piVar18[1];
  piVar3[0x104] = (int)piVar3;
  piVar3[0x105] = iVar13;
  piVar3[0x106] = iVar15;
  piVar3[0x103] = DAT_0025123c;
  puVar4 = func_0010A794(piVar3 + 0x107);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  fVar24 = DAT_00251240;
  puVar4[0xc] = ALBW_AS_U32(DAT_00251240);
  puVar4[0xd] = ALBW_AS_U32(fVar24);
  puVar4[0xe] = ALBW_AS_U32(fVar24);
  puVar4[0xf] = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_004EDC9C(puVar5);
  }
  puVar4[0x10] = puVar6;
  iVar13 = func_0054D964((int)(puVar4 + -0x107),0);
  puVar4[0x11] = iVar13;
  iVar13 = func_0054D964((int)(puVar4 + -0x107),0);
  uVar16 = _DAT_00251248;
  puVar4[0x12] = iVar13;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  uVar7 = DAT_00251244;
  puVar4[0x15] = 0;
  puVar4[0x17] = uVar7;
  puVar4[0x18] = uVar16;
  puVar4[0x16] = 0;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1b] = 0;
  *(undefined1 *)(puVar4 + 0x1c) = 1;
  *(undefined1 *)((int)puVar4 + 0x72) = 1;
  *(undefined1 *)((int)puVar4 + 0x73) = 0;
  *(undefined1 *)(puVar4 + 0x1d) = 0;
  *(undefined1 *)((int)puVar4 + 0x75) = 0;
  *(undefined1 *)((int)puVar4 + 0x76) = 0;
  *(undefined1 *)((int)puVar4 + 0x77) = 0;
  puVar4[0x1f] = ALBW_AS_U32(fVar24);
  *(undefined1 *)(puVar4 + 0x20) = 0;
  *(undefined1 *)((int)puVar4 + 0x81) = 0;
  *(undefined1 *)((int)puVar4 + 0x82) = 0;
  puVar4[0x21] = 0;
  puVar4[0x22] = 0;
  puVar6 = puVar4 + -0x107;
  *(bool *)(puVar4 + 0x1e) = ALBW_AS_F32(param_2[0x11]) != fVar24;
  puVar4[0x15] = param_2[0x13];
  puVar4[9] = param_2[4];
  puVar4[10] = param_2[5];
  fVar22 = ALBW_AS_F32(param_2[6]);
  puVar4[0xb] = ALBW_AS_U32(fVar22);
  if (ALBW_AS_F32(puVar4[9]) == fVar22) {
    iVar13 = 0;
    pcVar20 = s_7SandPillar_0025124b + 1;
  }
  else {
    iVar13 = 1;
    pcVar20 = s_SandPillarHalf_00251258;
    if (ALBW_AS_F32(puVar4[9]) < fVar22) {
      puVar4[-0xd] = 0x40000000;
    }
  }
  uVar7 = func_0014E428((int)puVar6,1,iVar13,0,1,0,0);
  puVar4[0x19] = uVar7;
  iVar15 = DAT_0025126c;
  piVar18 = puVar4 + 0x19;
  local_44 = *(undefined4 *)(DAT_00251268 + iVar13 * 4);
  local_48 = DAT_0025126c;
  uVar8 = func_00584C14(puVar4[0x19],&local_48);
  func_004CEA18(*piVar18,1,uVar8);
  local_44 = *(undefined4 *)(DAT_00251270 + iVar13 * 4);
  local_48 = iVar15;
  uVar8 = func_00584C14(*piVar18,&local_48);
  func_004CEA18(*piVar18,1,uVar8);
  puVar9 = (undefined4 *)func_0010BAB4(0xa8);
  puVar5 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar5 = func_0016A2FC(puVar9,1,DAT_00251274,1);
  }
  puVar4[0x1a] = puVar5;
  local_60 = iVar15;
  local_5c = (uint *)pcVar20;
  func_00169688((uint *)puVar4[0x1a],0,&local_60,*(int *)(puVar4[-0x53] + 0x1c8 + iVar13 * 4));
  func_0016A02C(puVar4[0x1a],-1,(int *)0xffffffff,0);
  puVar9 = (undefined4 *)func_0010BAB4(0xa8);
  puVar5 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar5 = func_0016A2FC(puVar9,2,DAT_00251274,1);
  }
  puVar4[0x1b] = puVar5;
  local_60 = iVar15;
  local_5c = (uint *)pcVar20;
  func_00169608((uint *)puVar4[0x1b],0,&local_60,*(int *)(puVar4[-0x53] + 0x1c8 + iVar13 * 4));
  local_5c = (uint *)s_Break_00251278;
  local_60 = iVar15;
  func_00169608((uint *)puVar4[0x1b],1,&local_60,*(int *)(puVar4[-0x53] + 0x1c8 + iVar13 * 4));
  func_0016A02C(puVar4[0x1b],-1,(int *)0xffffffff,0);
  *(undefined1 *)((int)puVar4 + 6) = 4;
  puVar4[5] = puVar6;
  local_40 = puVar4;
  iVar13 = func_0010BA78(0x40);
  puVar4[6] = iVar13;
  piVar18 = DAT_00251238;
  puVar4[7] = iVar13 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 4;
  piVar3 = (int *)(iVar13 + -8);
  do {
    iVar13 = piVar18[0x15];
    iVar10 = iVar10 + -1;
    piVar3[2] = piVar18[0x14];
    piVar3[3] = iVar13;
    iVar13 = piVar18[0x15];
    piVar3[4] = piVar18[0x14];
    piVar3[5] = iVar13;
    piVar3 = piVar3 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar8 = (uint)bVar1;
  piVar3 = (int *)func_0010BA78(uVar8 << 3);
  puVar4[8] = piVar3;
  if (uVar8 != 0) {
    piVar11 = piVar3 + -2;
    if ((bVar1 & 1) != 0) {
      iVar13 = piVar18[7];
      *piVar3 = piVar18[6];
      piVar3[1] = iVar13;
      piVar11 = piVar3;
    }
    for (iVar13 = (int)uVar8 >> 1; iVar13 != 0; iVar13 = iVar13 + -1) {
      iVar10 = piVar18[7];
      piVar11[2] = piVar18[6];
      piVar11[3] = iVar10;
      iVar10 = piVar18[7];
      piVar11[4] = piVar18[6];
      piVar11[5] = iVar10;
      piVar11 = piVar11 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar13 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 4;
    iVar13 = func_00100118((int)(puVar5 + 2),DAT_00251280,0x24,4);
  }
  if (iVar13 != 0) {
    puVar4[2] = 4;
    puVar4[3] = iVar13;
  }
  iVar13 = DAT_0025163c;
  puVar4[-0x32] = local_40;
  *(undefined2 *)(iVar13 + (int)puVar6) = 4;
  local_5c = (uint *)s_cState_Wait_00251640;
  local_60 = iVar15;
  iVar13 = puVar4[3];
  puVar17 = *(uint **)(iVar13 + 4);
  (**(code **)(iVar15 + 8))(&local_60);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_5c + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_002512f8;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_002512f8:
  iVar13 = *(int *)(iVar13 + 8);
  if (iVar13 <= (int)uVar8) {
    uVar8 = iVar13 - 1;
  }
  (**(code **)(local_60 + 8))(&local_60);
  func_0010E3C4(puVar17,local_5c,uVar8);
  *(undefined1 *)((int)puVar17 + uVar8) = 0;
  piVar18 = (int *)puVar4[6];
  iVar19 = DAT_00251238[3];
  iVar21 = DAT_00251238[4];
  iVar10 = DAT_00251238[5];
  iVar14 = DAT_00251238[6];
  iVar13 = DAT_00251238[7];
  *piVar18 = DAT_00251238[2];
  piVar18[1] = iVar19;
  piVar18 = (int *)puVar4[7];
  piVar18[1] = iVar10;
  *piVar18 = iVar21;
  piVar18 = (int *)puVar4[8];
  piVar18[1] = iVar13;
  *piVar18 = iVar14;
  local_5c = (uint *)s_cState_Exist_0025164c;
  local_60 = iVar15;
  if ((uint)puVar4[2] < 2) {
    iVar13 = puVar4[3];
  }
  else {
    iVar13 = puVar4[3] + 0x24;
  }
  puVar17 = *(uint **)(iVar13 + 4);
  (**(code **)(iVar15 + 8))(&local_60);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_5c + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_002513c8;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_002513c8:
  if (*(int *)(iVar13 + 8) <= (int)uVar8) {
    uVar8 = *(int *)(iVar13 + 8) - 1;
  }
  (**(code **)(local_60 + 8))(&local_60);
  func_0010E3C4(puVar17,local_5c,uVar8);
  piVar18 = DAT_00251238;
  *(undefined1 *)((int)puVar17 + uVar8) = 0;
  iVar13 = puVar4[6];
  iVar14 = piVar18[10];
  iVar10 = piVar18[0xb];
  iVar19 = piVar18[6];
  iVar21 = piVar18[9];
  iVar23 = piVar18[7];
  *(int *)(iVar13 + 8) = piVar18[8];
  *(int *)(iVar13 + 0xc) = iVar21;
  iVar13 = puVar4[7];
  *(int *)(iVar13 + 8) = iVar14;
  *(int *)(iVar13 + 0xc) = iVar10;
  iVar13 = puVar4[8];
  *(int *)(iVar13 + 8) = iVar19;
  *(int *)(iVar13 + 0xc) = iVar23;
  local_5c = (uint *)s_cState_DestroyWait_0025165c;
  local_60 = iVar15;
  if ((uint)puVar4[2] < 3) {
    iVar13 = puVar4[3];
  }
  else {
    iVar13 = puVar4[3] + 0x48;
  }
  puVar17 = *(uint **)(iVar13 + 4);
  (**(code **)(iVar15 + 8))(&local_60);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_5c + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_002514a0;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_002514a0:
  if (*(int *)(iVar13 + 8) <= (int)uVar8) {
    uVar8 = *(int *)(iVar13 + 8) - 1;
  }
  (**(code **)(local_60 + 8))(&local_60);
  func_0010E3C4(puVar17,local_5c,uVar8);
  *(undefined1 *)((int)puVar17 + uVar8) = 0;
  piVar18 = DAT_00251238;
  iVar13 = puVar4[6];
  iVar10 = DAT_00251238[0xe];
  iVar14 = DAT_00251238[6];
  iVar19 = DAT_00251238[0xd];
  iVar21 = DAT_00251238[0xf];
  iVar23 = DAT_00251238[7];
  *(int *)(iVar13 + 0x10) = DAT_00251238[0xc];
  *(int *)(iVar13 + 0x14) = iVar19;
  iVar13 = puVar4[7];
  *(int *)(iVar13 + 0x10) = iVar10;
  *(int *)(iVar13 + 0x14) = iVar21;
  iVar13 = puVar4[8];
  *(int *)(iVar13 + 0x10) = iVar14;
  *(int *)(iVar13 + 0x14) = iVar23;
  local_5c = (uint *)s_cState_Destroy_00251670;
  local_60 = iVar15;
  if ((uint)puVar4[2] < 4) {
    iVar13 = puVar4[3];
  }
  else {
    iVar13 = puVar4[3] + 0x6c;
  }
  puVar17 = *(uint **)(iVar13 + 4);
  (**(code **)(iVar15 + 8))(&local_60);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_5c + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_00251574;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_00251574:
  if (*(int *)(iVar13 + 8) <= (int)uVar8) {
    uVar8 = *(int *)(iVar13 + 8) - 1;
  }
  (**(code **)(local_60 + 8))(&local_60);
  func_0010E3C4(puVar17,local_5c,uVar8);
  *(undefined1 *)((int)puVar17 + uVar8) = 0;
  iVar13 = puVar4[6];
  iVar15 = piVar18[0x12];
  iVar10 = piVar18[6];
  iVar14 = piVar18[0x11];
  iVar21 = piVar18[0x13];
  iVar19 = piVar18[7];
  *(int *)(iVar13 + 0x18) = piVar18[0x10];
  *(int *)(iVar13 + 0x1c) = iVar14;
  iVar13 = puVar4[7];
  *(int *)(iVar13 + 0x18) = iVar15;
  *(int *)(iVar13 + 0x1c) = iVar21;
  iVar13 = puVar4[8];
  *(int *)(iVar13 + 0x18) = iVar10;
  *(int *)(iVar13 + 0x1c) = iVar19;
  func_0024FC98((int)puVar6,puVar4[0x10],(int *)puVar4[0x11],3);
  func_0024FC98((int)puVar6,0,(int *)puVar4[0x12],4);
  piVar18 = DAT_00251680;
  *(undefined2 *)(puVar4[0x10] + 0x2c) = *(undefined2 *)(puVar4 + -0xf2);
  func_004A9510(*piVar18,puVar4[0x10],1);
  puVar5 = (undefined4 *)func_0052FBA0(*DAT_00251684 + 0x3dbbc,puVar4[0x15]);
  if (((*DAT_002518a8 & 1) == 0) && (iVar13 = func_00100174((int *)DAT_002518a8), iVar13 != 0)) {
    *DAT_002518ac = DAT_002518b0;
  }
  if ((puVar5 == (undefined4 *)0x0) ||
     (iVar13 = (**(code **)*puVar5)(puVar5,DAT_002518ac), iVar13 == 0)) {
    puVar5 = (undefined4 *)0x0;
  }
  *(undefined1 *)((int)puVar4 + 0x79) = 1;
  if (puVar5 != (undefined4 *)0x0) {
    bVar2 = func_00520814((int)puVar5);
    *(bool *)((int)puVar4 + 0x79) = bVar2;
    if (bVar2) {
      puVar4[0x21] = 0;
    }
    else {
      puVar4[0x21] = puVar5[0x12a];
    }
    uVar7 = puVar5[0xf5];
    uVar16 = puVar5[0xf6];
    puVar4[0xc] = puVar5[0xf4];
    puVar4[0xd] = uVar7;
    puVar4[0xe] = uVar16;
    puVar4[0xf] = puVar5[0xfa];
  }
  if (*(char *)((int)puVar4 + 0x79) != '\0') {
    iVar13 = func_0054D964((int)puVar6,0);
    puVar4[0x14] = iVar13;
    fVar22 = DAT_002518b4;
    *(float *)(iVar13 + 0x58) = ALBW_AS_F32(puVar4[9]) * DAT_002518b4;
    *(undefined4 *)(puVar4[0x14] + 0x5c) = puVar4[10];
    local_54 = DAT_002518bc;
    *(float *)(puVar4[0x14] + 0x60) = ALBW_AS_F32(puVar4[0xb]) * fVar22;
    *(short *)(puVar4[0x14] + 0x28) = (short)DAT_002518b8;
    iVar13 = puVar4[0x14];
    local_54 = ALBW_AS_F32(puVar4[10]) * local_54;
    local_58 = fVar24;
    local_50 = fVar24;
    func_00115C54(&fStack_4c,(float *)(puVar4 + -0x13),&local_58);
    *(float *)(iVar13 + 4) = fStack_4c;
    *(int *)(iVar13 + 8) = local_48;
    *(undefined4 *)(iVar13 + 0xc) = local_44;
    func_004356B4((int *)puVar4[0x14]);
    puVar12 = (undefined4 *)func_0010BAB4(0x48);
    puVar9 = (undefined4 *)0x0;
    if (puVar12 != (undefined4 *)0x0) {
      puVar9 = func_004EDC9C(puVar12);
    }
    puVar4[0x13] = puVar9;
    piVar3 = puVar4 + 0x13;
    puVar9[6] = puVar4[0x14];
    func_004ED9C8(puVar4[0x13]);
    local_34[0] = puVar4[-0x54];
    func_004EDAD0(*piVar3,local_34);
    *(undefined2 *)(*piVar3 + 0x2c) = *(undefined2 *)(puVar4 + -0xf2);
    func_004A9510(*piVar18,*piVar3,1);
    *(undefined1 *)((int)puVar4 + 0x73) = 1;
    uVar7 = puVar5[0xf5];
    uVar16 = puVar5[0xf6];
    puVar4[0xc] = puVar5[0xf4];
    puVar4[0xd] = uVar7;
    puVar4[0xe] = uVar16;
  }
  func_0065FBB4(local_40,0);
  puVar4[-0x12] = ALBW_AS_U32(ALBW_AS_F32(puVar4[-0x12]) + DAT_002518c0);
  func_002500F4((int)puVar6);
  return puVar6;
}

