#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001E5B90(int param_1,undefined1 param_2,float fparam_0,float fparam_1,float fparam_2, float fparam_3,float fparam_4);
extern int func_001E5CEC(int param_1);
extern int func_001E5F14(undefined4 *param_1,uint *param_2);
extern int func_0027F4D8(int param_1);
extern int func_0027F56C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0027F674(int param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002FCDA0(undefined4 *param_1,undefined4 param_2,undefined1 param_3);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_004ECF6C(int param_1);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00660F70(undefined4 *param_1,undefined1 param_2);
extern int DAT_0028039c;
extern undefined4 DAT_002803a0;
extern undefined4 DAT_002803a4;
extern undefined4 DAT_002803a8;
extern int DAT_002803ac;
extern undefined4 DAT_002803b0;
extern int *DAT_002803b4;
extern float DAT_002803b8;
extern float DAT_002803bc;
extern undefined4 *DAT_002803c0;
extern undefined *DAT_002803c4;
extern int DAT_002803c8;
extern int DAT_002803d8;
extern int *DAT_00280634;
extern int *DAT_00280638;
extern int *DAT_0028063c;
extern char s_cState_Event_00280624[];
extern char s_cState_Move_002803f0[];
extern char s_cState_PullingWait_002803dc[];
extern char s_cState_Reset_00280614[];
extern char s_cState_Wait_002803cc[];

// USA 0027FF60 <- EU 0027FF88 (Ghidra, non-matching)
// GLOBAL DAT_0028039c int
// GLOBAL DAT_002803a0 undefined4
// GLOBAL DAT_002803a4 undefined4
// GLOBAL DAT_002803a8 undefined4
// GLOBAL DAT_002803ac int
// GLOBAL DAT_002803b0 undefined4
// GLOBAL DAT_002803b4 int *
// GLOBAL DAT_002803b8 float
// GLOBAL DAT_002803bc float
// GLOBAL DAT_002803c0 undefined4 *
// GLOBAL DAT_002803c4 undefined *
// GLOBAL DAT_002803c8 int
// GLOBAL DAT_002803d8 int
// GLOBAL DAT_00280634 int *
// GLOBAL DAT_00280638 int *
// GLOBAL DAT_0028063c int *
// GLOBAL s_cState_Event_00280624 string
// GLOBAL s_cState_Move_002803f0 string
// GLOBAL s_cState_PullingWait_002803dc string
// GLOBAL s_cState_Reset_00280614 string
// GLOBAL s_cState_Wait_002803cc string

/* WARNING: Variable defined which should be unmapped: objStack_b8 */
/* WARNING: Variable defined which should be unmapped: objStack_b0 */

undefined4 * func_0027FF60(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 extraout_r1;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define objStack_b8 ((uint *)(albw_frame + 0x8))
  #define objStack_b0 ((uint *)(albw_frame + 0x10))
  #define local_84 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_50 (*(int *)(albw_frame + 0x70))
  #define local_4c (*(char * *)(albw_frame + 0x74))
  piVar5 = (int *)func_001E5F14(param_1,param_2);
  iVar10 = DAT_0028039c;
  uVar15 = 0;
  piVar5[200] = DAT_0028039c + 0x70;
  *piVar5 = iVar10;
  piVar5[300] = 0;
  piVar5[0x12d] = 0;
  piVar5[0x12e] = 0;
  puVar6 = func_0010A794(piVar5 + 0x12f);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  *(undefined1 *)(puVar6 + 0xe) = 1;
  *(undefined1 *)((int)puVar6 + 0x39) = 0;
  *(undefined1 *)((int)puVar6 + 0x3a) = 0;
  uVar7 = DAT_002803a0;
  puVar6[0x10] = 0xffff;
  puVar6[0x11] = uVar7;
  puVar6[0xf] = 0;
  uVar7 = DAT_002803a8;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = uVar7;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  puVar14 = puVar6 + -0x12f;
  uVar19 = CONCAT44(uVar7,DAT_002803a4);
  objStack_b8[1] = 0;
  objStack_b8[0] = 1;
  objStack_b0[0] = 0;
  uVar7 = func_0014E428((int)puVar14,1,0,0,1,0,0);
  puVar6[-3] = uVar7;
  uVar7 = func_0014E904((int)puVar14,6,1);
  iVar10 = DAT_002803ac;
  puVar6[-2] = uVar7;
  do {
    func_00169688((uint *)puVar6[-2],uVar15,(int *)(iVar10 + uVar15 * 8),
                  *(int *)(puVar6[-0x7b] + 0x1c8));
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 6);
  func_0016A02C(puVar6[-2],-1,(int *)0xffffffff,0);
  puVar8 = (uint *)func_002C11E8((int *)objStack_b8,0,10,0);
  func_0016898C(puVar6[-2],puVar8);
  *(int *)(*(int *)(puVar6[-2] + 0x14) + 0x10) = (int)((ulonglong)uVar19 >> 0x20);
  puVar9 = (undefined4 *)func_0010BAB4(0xa8);
  if (puVar9 == (undefined4 *)0x0) {
    puVar8 = (uint *)0x0;
  }
  else {
    puVar8 = func_0016A2FC(puVar9,1,DAT_002803b0,1);
  }
  puVar6[-1] = puVar8;
  func_00169608(puVar8,0,DAT_002803b4,*(int *)(puVar6[-0x7b] + 0x1c8));
  func_0016A02C(puVar6[-1],-1,(int *)0xffffffff,0);
  puVar8 = (uint *)func_002C11E8((int *)objStack_b8,0,10,0);
  func_0016898C(puVar6[-1],puVar8);
  *(int *)(*(int *)(puVar6[-1] + 0x14) + 0x10) = (int)((ulonglong)uVar19 >> 0x20);
  func_003249E0((int)puVar14,0);
  uVar7 = (undefined4)uVar19;
  func_00324964((int)puVar14);
  func_001E5B90((int)puVar14,1,ALBW_AS_F32(puVar6[-0x3b]),ALBW_AS_F32(puVar6[-0x3a]),ALBW_AS_F32(puVar6[-0x39]),
                DAT_002803bc,DAT_002803b8);
  func_0027F674((int)puVar14);
  *(undefined1 *)((int)puVar6 + 6) = 5;
  puVar6[5] = puVar14;
  iVar10 = func_0010BA78(0x50);
  puVar6[6] = iVar10;
  puVar9 = DAT_002803c0;
  iVar13 = 5;
  puVar6[7] = iVar10 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  puVar11 = (undefined4 *)(iVar10 + -8);
  do {
    uVar16 = puVar9[0x17];
    iVar13 = iVar13 + -1;
    puVar11[2] = puVar9[0x16];
    puVar11[3] = uVar16;
    uVar16 = puVar9[0x17];
    puVar11[4] = puVar9[0x16];
    puVar11[5] = uVar16;
    puVar11 = puVar11 + 4;
  } while (iVar13 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar15 = (uint)bVar1;
  puVar11 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar6[8] = puVar11;
  if (uVar15 != 0) {
    puVar12 = puVar11 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = puVar9[5];
      *puVar11 = puVar9[4];
      puVar11[1] = uVar16;
      puVar12 = puVar11;
    }
    for (iVar10 = (int)uVar15 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar16 = puVar9[5];
      puVar12[2] = puVar9[4];
      puVar12[3] = uVar16;
      uVar16 = puVar9[5];
      puVar12[4] = puVar9[4];
      puVar12[5] = uVar16;
      puVar12 = puVar12 + 4;
    }
  }
  puVar11 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar10 = 0;
  if (puVar11 != (undefined4 *)0x0) {
    *puVar11 = 0x24;
    puVar11[1] = 5;
    iVar10 = func_00100118((int)(puVar11 + 2),DAT_002803c4,0x24,5);
  }
  if (iVar10 != 0) {
    puVar6[3] = iVar10;
    puVar6[2] = 5;
  }
  iVar10 = DAT_002803c8;
  puVar6[-0x5a] = puVar6;
  iVar13 = DAT_002803d8;
  *(undefined2 *)(iVar10 + (int)puVar14) = 5;
  local_4c = s_cState_Wait_002803cc;
  local_50 = iVar13;
  func_0010BEC4((int)puVar6,0,&local_50);
  puVar11 = (undefined4 *)puVar6[6];
  uVar16 = puVar9[3];
  uVar17 = puVar9[2];
  uVar18 = puVar9[1];
  uVar20 = puVar9[4];
  uVar21 = puVar9[5];
  *puVar11 = *puVar9;
  puVar11[1] = uVar18;
  puVar11 = (undefined4 *)puVar6[7];
  *puVar11 = uVar17;
  puVar11[1] = uVar16;
  puVar11 = (undefined4 *)puVar6[8];
  *puVar11 = uVar20;
  puVar11[1] = uVar21;
  local_4c = s_cState_PullingWait_002803dc;
  local_50 = iVar13;
  func_0010BEC4((int)puVar6,1,&local_50);
  iVar10 = puVar6[6];
  uVar16 = puVar9[7];
  uVar17 = puVar9[8];
  uVar18 = puVar9[9];
  *(undefined4 *)(iVar10 + 8) = puVar9[6];
  *(undefined4 *)(iVar10 + 0xc) = uVar16;
  iVar10 = puVar6[7];
  *(undefined4 *)(iVar10 + 8) = uVar17;
  *(undefined4 *)(iVar10 + 0xc) = uVar18;
  iVar10 = puVar6[8];
  *(undefined4 *)(iVar10 + 8) = uVar20;
  *(undefined4 *)(iVar10 + 0xc) = uVar21;
  local_4c = s_cState_Move_002803f0;
  local_50 = iVar13;
  func_0010BEC4((int)puVar6,2,&local_50);
  iVar10 = puVar6[6];
  uVar16 = puVar9[0xb];
  uVar17 = puVar9[0xc];
  uVar18 = puVar9[0xd];
  *(undefined4 *)(iVar10 + 0x10) = puVar9[10];
  *(undefined4 *)(iVar10 + 0x14) = uVar16;
  iVar10 = puVar6[7];
  *(undefined4 *)(iVar10 + 0x10) = uVar17;
  *(undefined4 *)(iVar10 + 0x14) = uVar18;
  iVar10 = puVar6[8];
  *(undefined4 *)(iVar10 + 0x10) = uVar20;
  *(undefined4 *)(iVar10 + 0x14) = uVar21;
  local_4c = s_cState_Reset_00280614;
  local_50 = iVar13;
  func_0010BEC4((int)puVar6,3,&local_50);
  iVar10 = puVar6[6];
  uVar16 = puVar9[0xf];
  uVar17 = puVar9[0x10];
  uVar18 = puVar9[0x11];
  *(undefined4 *)(iVar10 + 0x18) = puVar9[0xe];
  *(undefined4 *)(iVar10 + 0x1c) = uVar16;
  iVar10 = puVar6[7];
  *(undefined4 *)(iVar10 + 0x18) = uVar17;
  *(undefined4 *)(iVar10 + 0x1c) = uVar18;
  iVar10 = puVar6[8];
  *(undefined4 *)(iVar10 + 0x18) = uVar20;
  *(undefined4 *)(iVar10 + 0x1c) = uVar21;
  local_4c = s_cState_Event_00280624;
  local_50 = iVar13;
  func_0010BEC4((int)puVar6,4,&local_50);
  iVar10 = puVar6[6];
  iVar13 = puVar9[0x12];
  uVar16 = puVar9[0x14];
  uVar18 = puVar9[0x15];
  uVar17 = puVar9[0x13];
  piVar5 = (int *)(iVar10 + 0x20);
  *piVar5 = iVar13;
  *(undefined4 *)(iVar10 + 0x24) = uVar17;
  iVar10 = puVar6[7];
  *(undefined4 *)(iVar10 + 0x20) = uVar16;
  *(undefined4 *)(iVar10 + 0x24) = uVar18;
  iVar10 = puVar6[8];
  *(undefined4 *)(iVar10 + 0x20) = uVar20;
  *(undefined4 *)(iVar10 + 0x24) = uVar21;
  func_00660F70(puVar6,0);
  if ((*(short *)((int)param_2 + 0x32) != 0) && (bVar4 = func_00588BF0((int)puVar14,0), bVar4)) {
    iVar10 = *(int *)(puVar6[-2] + 0x14);
    if (*(float *)(iVar10 + 8) != *(float *)(iVar10 + 0x14)) {
      *(float *)(iVar10 + 8) = *(float *)(iVar10 + 0x14);
      *(undefined1 *)(iVar10 + 0x26) = 1;
    }
    func_001E5CEC((int)puVar14);
  }
  piVar3 = DAT_00280638;
  if (*(short *)((int)param_2 + 0x2e) == 0) {
    sVar2 = *(short *)(*(int *)(*DAT_00280634 + 0x3dbe4) + 0x30);
  }
  else {
    sVar2 = *(short *)(*(int *)(*DAT_00280634 + 0x3dbe4) + 0x32);
  }
  puVar6[0xc] = (int)sVar2;
  puVar6[0xd] = (int)sVar2;
  uVar15 = func_00564A78(puVar6[-3],piVar3);
  puVar6[0x13] = uVar15;
  uVar15 = func_00564A78(puVar6[-3],DAT_0028063c);
  puVar6[0x12] = uVar15;
  func_0027F4D8((int)puVar14);
  func_0027F56C((int)puVar14,extraout_r1,iVar13,piVar5);
  puVar6[0x10] = 1;
  puVar6[0x11] = uVar7;
  puVar6[0xf] = 0;
  func_001119F4(objStack_b0,
                (undefined4 *)(*(int *)(*(int *)(puVar6[-3] + 0x24) + 0x14) + puVar6[0x13] * 0x30));
  puVar6[0x14] = local_84;
  puVar9 = (undefined4 *)func_0010BAB4(0xb0);
  uVar7 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    uVar7 = func_002FCDA0(puVar9,puVar6[-0x7c],0);
  }
  puVar6[0x16] = uVar7;
  func_004ECF6C((int)puVar14);
  return puVar14;
}

