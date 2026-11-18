#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_004356B4(int *param_1);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern int func_00491338(float *param_1,uint param_2,uint param_3,uint param_4);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0050BE88(int *param_1);
extern int func_0050C3B4(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_0066B6C4(undefined4 *param_1,undefined1 param_2);
extern int DAT_0050cb60;
extern float *DAT_0050cb64;
extern int DAT_0050cb68;
extern int DAT_0050cb6c;
extern undefined4 DAT_0050cb70;
extern undefined4 *DAT_0050cb74;
extern undefined4 DAT_0050cb78;
extern undefined4 DAT_0050cb7c;
extern int DAT_0050cb80;
extern undefined4 DAT_0050cb84;
extern uint DAT_0050cb90;
extern float *DAT_0050cb94;
extern int *DAT_0050cb98;
extern float *DAT_0050cb9c;
extern int *DAT_0050cba0;
extern int *DAT_0050cba4;
extern float DAT_0050cf14;
extern float DAT_0050cf18;
extern float *DAT_0050cf1c;
extern undefined *DAT_0050d3ec;
extern int DAT_0050d3f0;
extern undefined8 *DAT_0050d400;
extern int *DAT_0050d424;
extern char s_Actor_Seesaw_kcl_0050cf00[];
extern char s_cState_Freeze_0050d404[];
extern char s_cState_Recover_0050d414[];
extern char s_cState_Wait_0050d3f4[];
extern char s_cf_0050cf00[];
extern char s_point_0050cb88[];

// USA 0050C740 <- EU 0050C718 (Ghidra, non-matching)
// GLOBAL DAT_0050cb60 int
// GLOBAL DAT_0050cb64 float *
// GLOBAL DAT_0050cb68 int
// GLOBAL DAT_0050cb6c int
// GLOBAL DAT_0050cb70 undefined4
// GLOBAL DAT_0050cb74 undefined4 *
// GLOBAL DAT_0050cb78 undefined4
// GLOBAL DAT_0050cb7c undefined4
// GLOBAL DAT_0050cb80 int
// GLOBAL DAT_0050cb84 undefined4
// GLOBAL DAT_0050cb90 uint
// GLOBAL DAT_0050cb94 float *
// GLOBAL DAT_0050cb98 int *
// GLOBAL DAT_0050cb9c float *
// GLOBAL DAT_0050cba0 int *
// GLOBAL DAT_0050cba4 int *
// GLOBAL DAT_0050cf14 float
// GLOBAL DAT_0050cf18 float
// GLOBAL DAT_0050cf1c float *
// GLOBAL DAT_0050d3ec undefined *
// GLOBAL DAT_0050d3f0 int
// GLOBAL DAT_0050d400 undefined8 *
// GLOBAL DAT_0050d424 int *
// GLOBAL s_cf_0050cf00 string
// GLOBAL s_cState_Freeze_0050d404 string
// GLOBAL s_cState_Recover_0050d414 string
// GLOBAL s_cState_Wait_0050d3f4 string
// GLOBAL s_point_0050cb88 string

/* WARNING: Variable defined which should be unmapped: objStack_b8 */
/* WARNING: Variable defined which should be unmapped: objStack_b4 */

int * func_0050C740(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 extraout_r1;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  undefined4 uVar21;
  bool bVar22;
  bool bVar23;
  uint in_fpscr;
  uint uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define objStack_b8 ((uint *)(albw_frame + 0x8))
  #define objStack_b4 ((uint *)(albw_frame + 0xc))
  #define local_a8 (*(float *)(albw_frame + 0x18))
  #define local_a4 (*(float *)(albw_frame + 0x1c))
  #define local_a0 (*(float *)(albw_frame + 0x20))
  #define local_9c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_98 (*(float *)(albw_frame + 0x28))
  #define local_94 (*(float *)(albw_frame + 0x2c))
  #define local_90 (*(float *)(albw_frame + 0x30))
  #define local_8c (*(float *)(albw_frame + 0x34))
  #define local_88 (*(float *)(albw_frame + 0x38))
  #define local_84 ((uint *)(albw_frame + 0x3c))
  #define local_78 (*(uint *)(albw_frame + 0x48))
  #define local_74 (*(char * *)(albw_frame + 0x4c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x60))
  #define local_5c (*(undefined1 *)(albw_frame + 0x64))
  #define local_48 (*(uint *)(albw_frame + 0x78))
  #define local_44 (*(uint * *)(albw_frame + 0x7c))
  piVar5 = func_00150E40(param_1,param_2);
  iVar8 = DAT_0050cb60;
  piVar5[200] = DAT_0050cb60 + 0x54;
  *piVar5 = iVar8;
  piVar5[0x103] = 0;
  piVar5[0x104] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  piVar5[0x105] = (int)puVar7;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  piVar5[0x106] = (int)puVar7;
  iVar8 = func_0054D964((int)piVar5,0);
  piVar5[0x107] = iVar8;
  iVar8 = func_0054D964((int)piVar5,0);
  piVar5[0x108] = iVar8;
  piVar5[0x109] = 0;
  pfVar2 = DAT_0050cb64;
  *(undefined1 *)(piVar5 + 0x10a) = 1;
  *(undefined1 *)((int)piVar5 + 0x429) = 1;
  *(undefined1 *)((int)piVar5 + 0x42a) = 1;
  fVar12 = *pfVar2;
  fVar13 = pfVar2[1];
  piVar5[0x10d] = (int)ALBW_AS_U32(pfVar2[2]);
  piVar5[0x10e] = 0;
  piVar5[0x10f] = 0;
  iVar8 = DAT_0050cb68;
  piVar5[0x10b] = (int)ALBW_AS_U32(fVar12);
  piVar5[0x10c] = (int)ALBW_AS_U32(fVar13);
  piVar5[0x110] = iVar8;
  iVar16 = DAT_0050cb6c;
  uVar27 = CONCAT44(iVar8,DAT_0050cb6c);
  piVar5[0x111] = 0;
  piVar5[0x112] = iVar16;
  puVar6 = func_0010A794(piVar5 + 0x113);
  puVar6[5] = 0;
  uVar14 = DAT_0050cb70;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = uVar14;
  puVar7 = DAT_0050cb74;
  puVar6[10] = puVar6 + -0x113;
  puVar6[0xb] = 0;
  piVar5 = puVar6 + -0x113;
  puVar6[0xc] = 0;
  uVar14 = puVar7[1];
  puVar6[0xf] = *puVar7;
  puVar6[0x10] = uVar14;
  uVar14 = DAT_0050cb78;
  puVar6[0xd] = DAT_0050cb78;
  puVar6[0xe] = piVar5;
  uVar15 = puVar7[2];
  uVar21 = puVar7[3];
  puVar6[0x11] = uVar14;
  puVar6[0x12] = piVar5;
  puVar6[0x13] = uVar15;
  puVar6[0x14] = uVar21;
  uVar14 = puVar7[5];
  puVar6[0x17] = puVar7[4];
  puVar6[0x18] = uVar14;
  puVar6[0x15] = DAT_0050cb7c;
  puVar6[0x16] = piVar5;
  objStack_b8[0] = 1;
  objStack_b4[0] = 0;
  objStack_b4[1] = 0;
  iVar8 = func_0014E428((int)piVar5,1,0,0,1,0,0);
  puVar6[-0x10] = iVar8;
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  func_00491938((float *)(iVar8 + 0x80),0,puVar6[-0x19],0);
  iVar8 = puVar6[-0x10];
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar8 + 0x8c) = puVar6[-0x1f];
  *(undefined4 *)(iVar8 + 0x9c) = puVar6[-0x1e];
  *(undefined4 *)(iVar8 + 0xac) = puVar6[-0x1d];
  (**(code **)(*(int *)puVar6[-0x10] + 0x10))((int *)puVar6[-0x10],0x24);
  uVar14 = func_0014E904((int)piVar5,2,1);
  iVar8 = DAT_0050cb80;
  uVar18 = 0;
  puVar6[-0xf] = uVar14;
  do {
    func_00169608((uint *)puVar6[-0xf],uVar18,(int *)(iVar8 + uVar18 * 8),
                  *(int *)(puVar6[-0x5f] + 0x1c8));
    func_00133870(puVar6[-0xf],uVar18,puVar6[-0x10]);
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 2);
  func_0016A02C(puVar6[-0xf],-1,(int *)0xffffffff,0);
  local_a0 = ALBW_AS_F32(((ulonglong)uVar27 >> 0x20));
  objStack_b4[2] = (uint)&local_a8;
  objStack_b4[1] = 3;
  local_60 = 10;
  local_5c = 0;
  objStack_b4[0] = 1;
  local_a8 = 0.0;
  local_94 = ALBW_AS_F32((uVar18 | 0xff));
  local_a4 = ALBW_AS_F32(uVar27);
  local_9c = (undefined4 *)DAT_0050cb84;
  local_98 = local_a0;
  func_0016898C(puVar6[-0xf],objStack_b4);
  uVar3 = DAT_0050cb90;
  objStack_b4[0] = (uint)s_point_0050cb88;
  objStack_b8[0] = DAT_0050cb90;
  uVar18 = func_00564A78(puVar6[-0x10],(int *)objStack_b8);
  puVar6[0xb] = uVar18;
  puVar9 = (uint *)(*(int *)(*(int *)(puVar6[-0x10] + 0x24) + 0xc) + uVar18 * 0x40);
  *puVar9 = *puVar9 | 0x10;
  *(undefined4 **)(puVar6[-0x10] + 0x16c) = puVar6 + 9;
  local_a4 = *DAT_0050cb64;
  local_a0 = DAT_0050cb64[1];
  local_9c = (undefined4 *)ALBW_PTR_BITS(DAT_0050cb64[2]);
  piVar19 = (int *)puVar6[-0xc];
  func_00491338((float *)(piVar19 + 0x19),0,puVar6[-0x19],puVar6[0xc]);
  func_00115C54(&local_a4,(float *)(puVar6 + -0x1f),DAT_0050cb94);
  piVar17 = DAT_0050cb98;
  piVar19[1] = (int)ALBW_AS_U32(local_a4);
  piVar19[2] = (int)ALBW_AS_U32(local_a0);
  piVar19[3] = (int)local_9c;
  iVar8 = *piVar17;
  iVar16 = piVar17[1];
  piVar19[0x18] = piVar17[2];
  piVar19[0x16] = iVar8;
  piVar19[0x17] = iVar16;
  objStack_b8[0] = 0xa1;
  *(undefined2 *)(piVar19 + 10) = 0xa1;
  func_004356B4(piVar19);
  piVar19 = (int *)puVar6[-0xb];
  func_00491338((float *)(piVar19 + 0x19),0,puVar6[-0x19],puVar6[0xc]);
  func_00115C54(&local_a4,(float *)(puVar6 + -0x1f),DAT_0050cb9c);
  piVar17 = DAT_0050cba0;
  piVar19[1] = (int)ALBW_AS_U32(local_a4);
  piVar19[2] = (int)ALBW_AS_U32(local_a0);
  piVar19[3] = (int)local_9c;
  iVar8 = *piVar17;
  iVar16 = piVar17[1];
  piVar19[0x18] = piVar17[2];
  piVar19[0x16] = iVar8;
  piVar19[0x17] = iVar16;
  func_004356B4(piVar19);
  piVar19 = puVar6 + -0xe;
  *(undefined4 *)(puVar6[-0xe] + 0x18) = puVar6[-0xc];
  func_004ED9C8(puVar6[-0xe]);
  local_84[0] = puVar6[-0x60];
  func_004EDAD0(*piVar19,local_84);
  piVar17 = DAT_0050cba4;
  *(short *)(*piVar19 + 0x2c) = (short)param_2[0x14];
  *(undefined4 **)(*piVar19 + 0x28) = puVar6 + 0x15;
  func_004A7F00(*piVar17,*piVar19,3);
  local_74 = s_Actor_Seesaw_kcl_0050cf00;
  local_78 = uVar3;
  piVar19 = puVar6 + -0xd;
  func_004EDB28(puVar6[-0xd],(int)&local_78);
  func_00491624(&local_a8,0,puVar6[-0x19],0);
  fVar13 = DAT_0050cf18;
  fVar12 = DAT_0050cf14;
  iVar8 = *(int *)(*piVar19 + 0x14);
  fVar25 = local_a8 - *(float *)(iVar8 + 0x18);
  uVar18 = in_fpscr & 0xfffffff | (uint)(DAT_0050cf18 == fVar25) << 0x1e |
           (uint)(fVar25 <= DAT_0050cf18) << 0x1d;
  bVar4 = (byte)(uVar18 >> 0x18);
  bVar22 = (bool)(bVar4 >> 6);
  bVar23 = (bool)(bVar4 >> 5 & 1);
  if (!bVar23 || bVar22) {
    uVar18 = in_fpscr & 0xfffffff | (uint)(fVar25 == DAT_0050cf14) << 0x1e |
             (uint)(DAT_0050cf14 <= fVar25) << 0x1d;
    bVar4 = (byte)(uVar18 >> 0x18);
    bVar22 = (bool)(bVar4 >> 6);
    bVar23 = (bool)(bVar4 >> 5 & 1);
  }
  if (bVar23 && !bVar22) {
LAB_0050cd44:
    bVar22 = false;
  }
  else {
    fVar25 = local_a4 - *(float *)(iVar8 + 0x1c);
    uVar24 = uVar18 & 0xfffffff;
    uVar18 = uVar24 | (uint)(DAT_0050cf18 == fVar25) << 0x1e |
             (uint)(fVar25 <= DAT_0050cf18) << 0x1d;
    bVar4 = (byte)(uVar18 >> 0x18);
    bVar22 = (bool)(bVar4 >> 6);
    bVar23 = (bool)(bVar4 >> 5 & 1);
    if (!bVar23 || bVar22) {
      uVar18 = uVar24 | (uint)(fVar25 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar25) << 0x1d;
      bVar4 = (byte)(uVar18 >> 0x18);
      bVar22 = (bool)(bVar4 >> 6);
      bVar23 = (bool)(bVar4 >> 5 & 1);
    }
    if (bVar23 && !bVar22) goto LAB_0050cd44;
    fVar25 = local_a0 - *(float *)(iVar8 + 0x20);
    uVar24 = uVar18 & 0xfffffff;
    uVar18 = uVar24 | (uint)(DAT_0050cf18 == fVar25) << 0x1e |
             (uint)(fVar25 <= DAT_0050cf18) << 0x1d;
    bVar4 = (byte)(uVar18 >> 0x18);
    bVar22 = (bool)(bVar4 >> 6);
    bVar23 = (bool)(bVar4 >> 5 & 1);
    if (!bVar23 || bVar22) {
      uVar18 = uVar24 | (uint)(fVar25 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar25) << 0x1d;
      bVar4 = (byte)(uVar18 >> 0x18);
      bVar22 = (bool)(bVar4 >> 6);
      bVar23 = (bool)(bVar4 >> 5 & 1);
    }
    if (bVar23 && !bVar22) goto LAB_0050cd44;
    fVar25 = ALBW_AS_F32(local_9c) - *(float *)(iVar8 + 0x24);
    uVar24 = uVar18 & 0xfffffff;
    uVar18 = uVar24 | (uint)(DAT_0050cf18 == fVar25) << 0x1e |
             (uint)(fVar25 <= DAT_0050cf18) << 0x1d;
    bVar4 = (byte)(uVar18 >> 0x18);
    bVar22 = (bool)(bVar4 >> 6);
    bVar23 = (bool)(bVar4 >> 5 & 1);
    if (!bVar23 || bVar22) {
      uVar18 = uVar24 | (uint)(fVar25 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar25) << 0x1d;
      bVar4 = (byte)(uVar18 >> 0x18);
      bVar22 = (bool)(bVar4 >> 6);
      bVar23 = (bool)(bVar4 >> 5 & 1);
    }
    if (bVar23 && !bVar22) goto LAB_0050cd44;
    fVar25 = local_98 - *(float *)(iVar8 + 0x28);
    uVar24 = uVar18 & 0xfffffff;
    uVar18 = uVar24 | (uint)(DAT_0050cf18 == fVar25) << 0x1e |
             (uint)(fVar25 <= DAT_0050cf18) << 0x1d;
    bVar4 = (byte)(uVar18 >> 0x18);
    bVar22 = (bool)(bVar4 >> 6);
    bVar23 = (bool)(bVar4 >> 5 & 1);
    if (!bVar23 || bVar22) {
      uVar18 = uVar24 | (uint)(fVar25 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar25) << 0x1d;
      bVar4 = (byte)(uVar18 >> 0x18);
      bVar22 = (bool)(bVar4 >> 6);
      bVar23 = (bool)(bVar4 >> 5 & 1);
    }
    if (bVar23 && !bVar22) goto LAB_0050cd44;
    fVar25 = local_94 - *(float *)(iVar8 + 0x2c);
    uVar24 = uVar18 & 0xfffffff;
    uVar18 = uVar24 | (uint)(DAT_0050cf18 == fVar25) << 0x1e |
             (uint)(fVar25 <= DAT_0050cf18) << 0x1d;
    bVar4 = (byte)(uVar18 >> 0x18);
    bVar22 = (bool)(bVar4 >> 6);
    bVar23 = (bool)(bVar4 >> 5 & 1);
    if (!bVar23 || bVar22) {
      uVar18 = uVar24 | (uint)(fVar25 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar25) << 0x1d;
      bVar4 = (byte)(uVar18 >> 0x18);
      bVar22 = (bool)(bVar4 >> 6);
      bVar23 = (bool)(bVar4 >> 5 & 1);
    }
    if (bVar23 && !bVar22) goto LAB_0050cd44;
    fVar25 = local_90 - *(float *)(iVar8 + 0x30);
    uVar24 = uVar18 & 0xfffffff;
    uVar18 = uVar24 | (uint)(DAT_0050cf18 == fVar25) << 0x1e |
             (uint)(fVar25 <= DAT_0050cf18) << 0x1d;
    bVar4 = (byte)(uVar18 >> 0x18);
    bVar22 = (bool)(bVar4 >> 6);
    bVar23 = (bool)(bVar4 >> 5 & 1);
    if (!bVar23 || bVar22) {
      uVar18 = uVar24 | (uint)(fVar25 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar25) << 0x1d;
      bVar4 = (byte)(uVar18 >> 0x18);
      bVar22 = (bool)(bVar4 >> 6);
      bVar23 = (bool)(bVar4 >> 5 & 1);
    }
    if (bVar23 && !bVar22) goto LAB_0050cd44;
    fVar25 = local_8c - *(float *)(iVar8 + 0x34);
    uVar24 = uVar18 & 0xfffffff;
    uVar18 = uVar24 | (uint)(DAT_0050cf18 == fVar25) << 0x1e |
             (uint)(fVar25 <= DAT_0050cf18) << 0x1d;
    bVar4 = (byte)(uVar18 >> 0x18);
    bVar22 = (bool)(bVar4 >> 6);
    bVar23 = (bool)(bVar4 >> 5 & 1);
    if (!bVar23 || bVar22) {
      uVar18 = uVar24 | (uint)(fVar25 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar25) << 0x1d;
      bVar4 = (byte)(uVar18 >> 0x18);
      bVar22 = (bool)(bVar4 >> 6);
      bVar23 = (bool)(bVar4 >> 5 & 1);
    }
    if (bVar23 && !bVar22) goto LAB_0050cd44;
    fVar25 = local_88 - *(float *)(iVar8 + 0x38);
    uVar24 = uVar18 & 0xfffffff;
    uVar18 = uVar24 | (uint)(DAT_0050cf18 == fVar25) << 0x1e |
             (uint)(fVar25 <= DAT_0050cf18) << 0x1d;
    bVar4 = (byte)(uVar18 >> 0x18);
    bVar22 = (bool)(bVar4 >> 6);
    bVar23 = (bool)(bVar4 >> 5 & 1);
    if (!bVar23 || bVar22) {
      uVar18 = uVar24 | (uint)(fVar25 == DAT_0050cf14) << 0x1e |
               (uint)(DAT_0050cf14 <= fVar25) << 0x1d;
      bVar4 = (byte)(uVar18 >> 0x18);
      bVar22 = (bool)(bVar4 >> 6);
      bVar23 = (bool)(bVar4 >> 5 & 1);
    }
    if (bVar23 && !bVar22) goto LAB_0050cd44;
    bVar22 = true;
  }
  if (!bVar22) {
    bVar4 = *(byte *)(iVar8 + 0xa8);
    *(byte *)(iVar8 + 0xa8) = bVar4 | 8;
    fVar25 = ALBW_AS_F32(uVar27);
    bVar22 = false;
    if (local_a8 == 1.0) {
      uVar18 = uVar18 & 0xfffffff | (uint)(local_a4 == fVar25) << 0x1e;
      bVar22 = SUB41(uVar18 >> 0x1e,0);
    }
    if (bVar22) {
      uVar24 = uVar18 & 0xfffffff;
      uVar18 = uVar24 | (uint)(local_a0 == fVar25) << 0x1e;
      bVar22 = false;
      if (SUB41(uVar18 >> 0x1e,0)) {
        uVar18 = uVar24 | (uint)(ALBW_AS_F32(local_9c) == fVar25) << 0x1e;
        bVar22 = SUB41(uVar18 >> 0x1e,0);
      }
      if (!bVar22) goto LAB_0050cdcc;
      bVar22 = false;
      if (local_98 == 1.0) {
        uVar18 = uVar18 & 0xfffffff | (uint)(local_94 == fVar25) << 0x1e;
        bVar22 = SUB41(uVar18 >> 0x1e,0);
      }
      if (!bVar22) goto LAB_0050cdcc;
      uVar24 = uVar18 & 0xfffffff;
      uVar18 = uVar24 | (uint)(local_90 == fVar25) << 0x1e;
      bVar22 = false;
      if (SUB41(uVar18 >> 0x1e,0)) {
        uVar18 = uVar24 | (uint)(local_8c == fVar25) << 0x1e;
        bVar22 = SUB41(uVar18 >> 0x1e,0);
      }
      if (!bVar22 || local_88 != 1.0) goto LAB_0050cdcc;
      uVar14 = (undefined4)((ulonglong)uVar27 >> 0x20);
      *(undefined4 *)(iVar8 + 0x18) = uVar14;
      *(float *)(iVar8 + 0x1c) = fVar25;
      *(float *)(iVar8 + 0x20) = fVar25;
      bVar4 = bVar4 & 0xfb | 8;
      *(float *)(iVar8 + 0x24) = fVar25;
      *(undefined4 *)(iVar8 + 0x28) = uVar14;
      *(float *)(iVar8 + 0x2c) = fVar25;
      *(float *)(iVar8 + 0x30) = fVar25;
      *(float *)(iVar8 + 0x34) = fVar25;
      *(undefined4 *)(iVar8 + 0x38) = uVar14;
    }
    else {
LAB_0050cdcc:
      func_001151CC((undefined4 *)(iVar8 + 0x18),&local_a8);
      bVar4 = *(byte *)(iVar8 + 0xa8) | 4;
    }
    *(byte *)(iVar8 + 0xa8) = bVar4;
  }
  pfVar2 = DAT_0050cf1c;
  iVar8 = *(int *)(puVar6[-0xd] + 0x14);
  fVar25 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar8 + 4);
  uVar24 = uVar18 & 0xfffffff | (uint)(fVar13 == fVar25) << 0x1e | (uint)(fVar25 <= fVar13) << 0x1d;
  bVar4 = (byte)(uVar24 >> 0x18);
  bVar22 = (bool)(bVar4 >> 6);
  bVar23 = (bool)(bVar4 >> 5 & 1);
  if (!bVar23 || bVar22) {
    uVar24 = uVar18 & 0xfffffff | (uint)(fVar25 == fVar12) << 0x1e |
             (uint)(fVar12 <= fVar25) << 0x1d;
    bVar4 = (byte)(uVar24 >> 0x18);
    bVar22 = (bool)(bVar4 >> 6);
    bVar23 = (bool)(bVar4 >> 5 & 1);
  }
  if (bVar23 && !bVar22) {
LAB_0050ce58:
    bVar22 = false;
  }
  else {
    fVar25 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar8 + 8);
    uVar18 = uVar24 & 0xfffffff;
    uVar24 = uVar18 | (uint)(fVar13 == fVar25) << 0x1e | (uint)(fVar25 <= fVar13) << 0x1d;
    bVar4 = (byte)(uVar24 >> 0x18);
    bVar22 = (bool)(bVar4 >> 6);
    bVar23 = (bool)(bVar4 >> 5 & 1);
    if (!bVar23 || bVar22) {
      uVar24 = uVar18 | (uint)(fVar25 == fVar12) << 0x1e | (uint)(fVar12 <= fVar25) << 0x1d;
      bVar4 = (byte)(uVar24 >> 0x18);
      bVar22 = (bool)(bVar4 >> 6);
      bVar23 = (bool)(bVar4 >> 5 & 1);
    }
    if (bVar23 && !bVar22) goto LAB_0050ce58;
    fVar25 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar8 + 0xc);
    uVar18 = uVar24 & 0xfffffff;
    uVar24 = uVar18 | (uint)(fVar13 == fVar25) << 0x1e | (uint)(fVar25 <= fVar13) << 0x1d;
    bVar4 = (byte)(uVar24 >> 0x18);
    bVar22 = (bool)(bVar4 >> 6);
    bVar23 = (bool)(bVar4 >> 5 & 1);
    if (!bVar23 || bVar22) {
      uVar24 = uVar18 | (uint)(fVar25 == fVar12) << 0x1e | (uint)(fVar12 <= fVar25) << 0x1d;
      bVar4 = (byte)(uVar24 >> 0x18);
      bVar22 = (bool)(bVar4 >> 6);
      bVar23 = (bool)(bVar4 >> 5 & 1);
    }
    if (bVar23 && !bVar22) goto LAB_0050ce58;
    bVar22 = true;
  }
  if (bVar22) goto LAB_0050cf6c;
  *(byte *)(iVar8 + 0xa8) = *(byte *)(iVar8 + 0xa8) | 8;
  fVar25 = ALBW_AS_F32(param_2[4]) - *pfVar2;
  uVar18 = uVar24 & 0xfffffff;
  uVar24 = uVar18 | (uint)(fVar13 == fVar25) << 0x1e | (uint)(fVar25 <= fVar13) << 0x1d;
  bVar4 = (byte)(uVar24 >> 0x18);
  bVar22 = (bool)(bVar4 >> 6);
  bVar23 = (bool)(bVar4 >> 5 & 1);
  if (!bVar23 || bVar22) {
    uVar24 = uVar18 | (uint)(fVar25 == fVar12) << 0x1e | (uint)(fVar12 <= fVar25) << 0x1d;
    bVar4 = (byte)(uVar24 >> 0x18);
    bVar22 = (bool)(bVar4 >> 6);
    bVar23 = (bool)(bVar4 >> 5 & 1);
  }
  if (bVar23 && !bVar22) {
LAB_0050cf4c:
    *(uint *)(iVar8 + 4) = param_2[4];
    *(uint *)(iVar8 + 8) = param_2[5];
    *(uint *)(iVar8 + 0xc) = param_2[6];
    bVar4 = *(byte *)(iVar8 + 0xa8) | 2;
  }
  else {
    fVar25 = ALBW_AS_F32(param_2[5]) - pfVar2[1];
    uVar18 = uVar24 & 0xfffffff;
    uVar24 = uVar18 | (uint)(fVar13 == fVar25) << 0x1e | (uint)(fVar25 <= fVar13) << 0x1d;
    bVar4 = (byte)(uVar24 >> 0x18);
    bVar22 = (bool)(bVar4 >> 6);
    bVar23 = (bool)(bVar4 >> 5 & 1);
    if (!bVar23 || bVar22) {
      uVar24 = uVar18 | (uint)(fVar25 == fVar12) << 0x1e | (uint)(fVar12 <= fVar25) << 0x1d;
      bVar4 = (byte)(uVar24 >> 0x18);
      bVar22 = (bool)(bVar4 >> 6);
      bVar23 = (bool)(bVar4 >> 5 & 1);
    }
    if (bVar23 && !bVar22) goto LAB_0050cf4c;
    fVar25 = ALBW_AS_F32(param_2[6]) - pfVar2[2];
    uVar18 = uVar24 & 0xfffffff;
    uVar24 = uVar18 | (uint)(fVar13 == fVar25) << 0x1e | (uint)(fVar25 <= fVar13) << 0x1d;
    bVar4 = (byte)(uVar24 >> 0x18);
    bVar22 = (bool)(bVar4 >> 6);
    bVar23 = (bool)(bVar4 >> 5 & 1);
    if (!bVar23 || bVar22) {
      uVar24 = uVar18 | (uint)(fVar25 == fVar12) << 0x1e | (uint)(fVar12 <= fVar25) << 0x1d;
      bVar4 = (byte)(uVar24 >> 0x18);
      bVar22 = (bool)(bVar4 >> 6);
      bVar23 = (bool)(bVar4 >> 5 & 1);
    }
    if (bVar23 && !bVar22) goto LAB_0050cf4c;
    *(float *)(iVar8 + 4) = *pfVar2;
    *(float *)(iVar8 + 8) = pfVar2[1];
    *(float *)(iVar8 + 0xc) = pfVar2[2];
    bVar4 = *(byte *)(iVar8 + 0xa8) & 0xfd;
  }
  *(byte *)(iVar8 + 0xa8) = bVar4;
LAB_0050cf6c:
  func_0043625C(*(int **)(puVar6[-0xd] + 0x14),puVar6 + -0x1f);
  func_004ED9C8(*piVar19);
  local_84[0] = puVar6[-0x60];
  func_004EDAD0(*piVar19,local_84);
  *(short *)(*piVar19 + 0x2c) = (short)param_2[0x14];
  func_004A7F00(*piVar17,*piVar19,2);
  *(undefined1 *)((int)puVar6 + 6) = 3;
  puVar6[5] = piVar5;
  local_9c = puVar6;
  iVar8 = func_0010BA78(0x30);
  puVar6[6] = iVar8;
  puVar7 = DAT_0050cb74;
  puVar6[7] = iVar8 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar16 = 3;
  puVar10 = (undefined4 *)(iVar8 + -8);
  do {
    uVar14 = puVar7[0x17];
    iVar16 = iVar16 + -1;
    puVar10[2] = puVar7[0x16];
    puVar10[3] = uVar14;
    uVar14 = puVar7[0x17];
    puVar10[4] = puVar7[0x16];
    puVar10[5] = uVar14;
    puVar10 = puVar10 + 4;
  } while (iVar16 != 0);
  bVar4 = *(byte *)((int)puVar6 + 6);
  uVar18 = (uint)bVar4;
  puVar10 = (undefined4 *)func_0010BA78(uVar18 << 3);
  puVar6[8] = puVar10;
  if (uVar18 != 0) {
    puVar11 = puVar10 + -2;
    if ((bVar4 & 1) != 0) {
      uVar14 = puVar7[0xb];
      *puVar10 = puVar7[10];
      puVar10[1] = uVar14;
      puVar11 = puVar10;
    }
    for (iVar8 = (int)uVar18 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar14 = puVar7[0xb];
      puVar11[2] = puVar7[10];
      puVar11[3] = uVar14;
      uVar14 = puVar7[0xb];
      puVar11[4] = puVar7[10];
      puVar11[5] = uVar14;
      puVar11 = puVar11 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar8 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 3;
    iVar8 = func_00100118((int)(puVar7 + 2),DAT_0050d3ec,0x24,3);
  }
  if (iVar8 != 0) {
    puVar6[2] = 3;
    puVar6[3] = iVar8;
  }
  iVar8 = DAT_0050d3f0;
  puVar6[-0x3e] = local_9c;
  *(undefined2 *)(iVar8 + (int)piVar5) = 3;
  local_44 = (uint *)s_cState_Wait_0050d3f4;
  local_48 = uVar3;
  iVar8 = puVar6[3];
  puVar9 = *(uint **)(iVar8 + 4);
  (**(code **)(uVar3 + 8))(&local_48);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_44 + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_0050d144;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_0050d144:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar18) {
    uVar18 = iVar8 - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar9,local_44,uVar18);
  *(undefined1 *)((int)puVar9 + uVar18) = 0;
  puVar7 = (undefined4 *)puVar6[6];
  uVar27 = *DAT_0050d400;
  uVar14 = *(undefined4 *)(DAT_0050d400 + 1);
  uVar15 = *(undefined4 *)((int)DAT_0050d400 + 0xc);
  uVar21 = *(undefined4 *)(DAT_0050d400 + 2);
  uVar26 = *(undefined4 *)((int)DAT_0050d400 + 0x14);
  *puVar7 = (int)uVar27;
  puVar7[1] = (int)((ulonglong)uVar27 >> 0x20);
  puVar7 = (undefined4 *)puVar6[7];
  *puVar7 = uVar14;
  puVar7[1] = uVar15;
  puVar7 = (undefined4 *)puVar6[8];
  *puVar7 = uVar21;
  puVar7[1] = uVar26;
  local_44 = (uint *)s_cState_Freeze_0050d404;
  local_48 = uVar3;
  if ((uint)puVar6[2] < 2) {
    iVar8 = puVar6[3];
  }
  else {
    iVar8 = puVar6[3] + 0x24;
  }
  puVar9 = *(uint **)(iVar8 + 4);
  (**(code **)(uVar3 + 8))(&local_48);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_44 + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_0050d1fc;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_0050d1fc:
  if (*(int *)(iVar8 + 8) <= (int)uVar18) {
    uVar18 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar9,local_44,uVar18);
  *(undefined1 *)((int)puVar9 + uVar18) = 0;
  puVar7 = DAT_0050cb74;
  iVar8 = puVar6[6];
  uVar27 = *(undefined8 *)(DAT_0050cb74 + 10);
  uVar14 = DAT_0050cb74[0xd];
  uVar15 = DAT_0050cb74[0xe];
  uVar21 = DAT_0050cb74[0xf];
  *(undefined4 *)(iVar8 + 8) = DAT_0050cb74[0xc];
  *(undefined4 *)(iVar8 + 0xc) = uVar14;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 8) = uVar15;
  *(undefined4 *)(iVar8 + 0xc) = uVar21;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 8) = (int)uVar27;
  *(int *)(iVar8 + 0xc) = (int)((ulonglong)uVar27 >> 0x20);
  local_44 = (uint *)s_cState_Recover_0050d414;
  local_48 = uVar3;
  uVar18 = puVar6[2];
  if (uVar18 < 3) {
    uVar20 = puVar6[3];
    uVar1 = uVar18;
  }
  else {
    uVar20 = uVar3;
    uVar1 = puVar6[3];
  }
  if (2 < uVar18) {
    uVar20 = uVar1 + 0x48;
  }
  puVar9 = *(uint **)(uVar20 + 4);
  (**(code **)(uVar3 + 8))(&local_48);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_44 + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_0050d2c8;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_0050d2c8:
  if (*(int *)(uVar20 + 8) <= (int)uVar18) {
    uVar18 = *(int *)(uVar20 + 8) - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar9,local_44,uVar18);
  *(undefined1 *)((int)puVar9 + uVar18) = 0;
  iVar8 = puVar6[6];
  uVar14 = puVar7[0x13];
  piVar17 = (int *)puVar7[0x14];
  uVar15 = puVar7[0x15];
  uVar21 = puVar7[0x12];
  uVar26 = puVar7[0x11];
  *(undefined4 *)(iVar8 + 0x10) = puVar7[0x10];
  *(undefined4 *)(iVar8 + 0x14) = uVar26;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar21;
  *(undefined4 *)(iVar8 + 0x14) = uVar14;
  iVar8 = puVar6[8];
  *(int **)(iVar8 + 0x10) = piVar17;
  *(undefined4 *)(iVar8 + 0x14) = uVar15;
  func_0066B6C4(local_9c,0);
  if ((short)param_2[10] == 0) {
    iVar8 = *DAT_0050d424;
  }
  else {
    fVar12 = (float)VectorSignedToFloat(*DAT_0050d424,(byte)(uVar24 >> 0x15) & 3);
    iVar8 = (int)-fVar12;
  }
  puVar6[-10] = iVar8;
  puVar6[0xc] = iVar8;
  func_00169A80((int *)puVar6[-0xf],extraout_r1,uVar21,piVar17);
  func_00168E9C((int *)puVar6[-0xf],puVar6[-0x10],(int *)0x0);
  func_0050BE88(piVar5);
  func_00115C54((float *)objStack_b4,(float *)(puVar6 + -0x1f),(float *)(puVar6 + -8));
  iVar8 = puVar6[-0x10];
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  *(uint *)(iVar8 + 0x8c) = objStack_b4[0];
  *(uint *)(iVar8 + 0x9c) = objStack_b4[1];
  *(uint *)(iVar8 + 0xac) = objStack_b4[2];
  func_004CEAF0(puVar6[-0x10]);
  func_0050C3B4((int)piVar5);
  return piVar5;
}

