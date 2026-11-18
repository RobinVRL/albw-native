#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_002ACC68(undefined4 *param_1);
extern int func_00325150(int *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004ED9C8(int param_1);
extern int func_0052107C(int param_1);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern float func_0054E460(undefined4 param_1,undefined4 *param_2,undefined4 param_3,float fparam_0, float fparam_1);
extern int func_00581D60(int param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_00335b44;
extern int *DAT_00335b48;
extern float DAT_00335b4c;
extern int DAT_00335b50;
extern float DAT_00335b54;
extern float DAT_00335b58;
extern float DAT_00335b5c;
extern uint *DAT_00335b60;
extern undefined4 DAT_00335b64;
extern float DAT_00335b68;
extern int DAT_00335b6c;
extern undefined DAT_00335b70;
extern uint DAT_00335b90;
extern char s_SE_PushPullStatue_LAND_00335b78[];

// USA 00335798 <- EU 00335774 (Ghidra, non-matching)
// GLOBAL DAT_00335b44 int *
// GLOBAL DAT_00335b48 int *
// GLOBAL DAT_00335b4c float
// GLOBAL DAT_00335b50 int
// GLOBAL DAT_00335b54 float
// GLOBAL DAT_00335b58 float
// GLOBAL DAT_00335b5c float
// GLOBAL DAT_00335b60 uint *
// GLOBAL DAT_00335b64 undefined4
// GLOBAL DAT_00335b68 float
// GLOBAL DAT_00335b6c int
// GLOBAL DAT_00335b70 undefined
// GLOBAL DAT_00335b90 uint
// GLOBAL s_SE_PushPullStatue_LAND_00335b78 string

/* WARNING: Variable defined which should be unmapped: objStack_40 */

undefined4 func_00335798(int *param_1)

{
  char cVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define auStack_38 ((uint *)(albw_frame + 0x8))
  iVar4 = (short)param_1[0x14b] + -1;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  *(short *)(param_1 + 0x14b) = (short)iVar4;
  objStack_40[0] = 0;
  objStack_40[1] = 0;
  func_0014E2A0((int)param_1,param_1[0x126],param_1 + 0x14d,0x1600,0,0);
  iVar4 = func_00588BE4((int)param_1);
  piVar2 = DAT_00335b44;
  if (iVar4 == *DAT_00335b44) {
    if (*DAT_00335b48 != 0) {
      iVar4 = func_00581D60(*DAT_00335b48);
      if (param_1[0x14a] != iVar4) {
        if ((4 < param_1[0x14a]) && (iVar4 == 4)) {
          param_1[0x141] = 0;
        }
        param_1[0x14a] = iVar4;
      }
    }
    if ((param_1[0x14a] == 4) || (*(char *)((int)param_1 + 0x52f) != '\0')) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
    func_004CF478(param_1[0x13c],iVar4);
    func_00151148(param_1[0x13e],iVar4);
  }
  piVar5 = (int *)(param_1[0x148] + (char)param_1[0x142] * 8);
  uVar6 = *(uint *)(param_1[0x148] + (char)param_1[0x142] * 8 + 4);
  piVar7 = (int *)(param_1[0x146] + ((int)uVar6 >> 1));
  if ((uVar6 & 1) != 0) {
    piVar5 = (int *)(*piVar5 + *piVar7);
  }
  (*(code *)*piVar5)(piVar7);
  iVar4 = param_1[0x141] + 1;
  param_1[0x141] = iVar4;
  if (param_1[0x145] != 0) {
    fVar10 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x145],1,fVar10);
  }
  cVar1 = *(char *)((int)param_1 + 0x52f);
  cVar3 = func_0052107C((int)param_1);
  fVar10 = DAT_00335b4c;
  bVar9 = !(bool)cVar3;
  if (!bVar9) {
    cVar3 = (char)param_1[0x142];
  }
  if (bVar9 || cVar3 == '\x03') {
    iVar4 = func_00588BE4((int)param_1);
    if (iVar4 == *piVar2) {
      if ((param_1[0x14a] != 4) && (*(char *)((int)param_1 + 0x52f) == '\0')) {
        param_1[0xf8] = (int)ALBW_AS_U32(fVar10);
        goto code_r0x0033595c;
      }
      if (1 < param_1[0x141]) {
        *(undefined1 *)((int)param_1 + 0x52f) = 1;
      }
    }
    fVar11 = ALBW_AS_F32(param_1[0xf8]) - DAT_00335b54;
    if (ALBW_AS_F32(param_1[0xf8]) - DAT_00335b54 < DAT_00335b58) {
      fVar11 = DAT_00335b58;
    }
    param_1[0xf8] = (int)ALBW_AS_U32(fVar11);
  }
  else {
    param_1[0xf8] = DAT_00335b50;
  }
code_r0x0033595c:
  func_00325150(param_1);
  iVar13 = param_1[0xf4];
  fVar12 = ALBW_AS_F32(param_1[0xf5]);
  iVar14 = param_1[0xf6];
  fVar11 = func_0054DE3C(param_1,0,1);
  iVar4 = param_1[0x140];
  fVar11 = fVar11 * DAT_00335b5c;
  *(int *)(iVar4 + 4) = iVar13;
  *(float *)(iVar4 + 8) = fVar12 + fVar11;
  *(int *)(iVar4 + 0xc) = iVar14;
  func_004ED9C8(param_1[0x13f]);
  objStack_40[0] = *DAT_00335b60;
  objStack_40[1] = DAT_00335b60[1];
  auStack_38[0] = DAT_00335b60[2];
  fVar11 = ALBW_AS_F32(param_1[299]);
  iVar4 = func_0014EEC8((int)param_1,(uint)objStack_40,param_1 + 0x127,DAT_00335b64,fVar11);
  bVar9 = iVar4 == 0;
  cVar3 = '\0';
  if (!bVar9) {
    cVar3 = (char)param_1[0x142];
  }
  bVar8 = bVar9 || cVar3 == '\x03';
  if (!bVar9 && cVar3 != '\x03') {
    bVar8 = ALBW_AS_F32(objStack_40[1]) == fVar10;
    fVar11 = ALBW_AS_F32(objStack_40[1]);
  }
  if (!bVar8) {
    param_1[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) + fVar11));
  }
  if ((cVar1 == '\0') && (*(char *)((int)param_1 + 0x52f) != '\0')) {
    *(undefined1 *)(param_1 + 0x14c) = 1;
  }
  if (*(char *)((int)param_1 + 0x52e) == '\0') {
    bVar9 = func_0052107C((int)param_1);
    if (!bVar9) {
      fVar10 = func_0054E460(param_1,param_1 + 0xf4,0xffffffff,fVar10,DAT_00335b68);
      if (((0x3f800000 < (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) - fVar10))) &&
          (DAT_00335b6c < (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xdb]) - ALBW_AS_F32(param_1[0xf5]))))) &&
         (bVar9 = func_002ACC68(param_1 + 0xf4), !bVar9)) {
        *(undefined1 *)((int)param_1 + 0x52e) = 1;
        goto LAB_00335a8c;
      }
    }
    if (*(char *)((int)param_1 + 0x52e) == '\0') goto LAB_00335ad8;
  }
LAB_00335a8c:
  bVar9 = func_0052107C((int)param_1);
  if (bVar9) {
    *(undefined1 *)((int)param_1 + 0x52e) = 0;
    if (param_1[0xd1] != 0) {
      func_004A1B9C((int *)auStack_38,param_1[0xd1],(uint *)&DAT_00335b70);
    }
    objStack_40[1] = (uint)s_SE_PushPullStatue_LAND_00335b78;
    objStack_40[0] = DAT_00335b90;
    func_00150A84(param_1,(int *)objStack_40,0);
  }
LAB_00335ad8:
  iVar4 = param_1[0x13c];
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar4 + 0x80),0,param_1[0xfa],0);
  iVar4 = param_1[0x13c];
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  *(int *)(iVar4 + 0x8c) = param_1[0xf4];
  *(int *)(iVar4 + 0x9c) = param_1[0xf5];
  *(int *)(iVar4 + 0xac) = param_1[0xf6];
  func_004CEAF0(param_1[0x13c]);
  return func_001512B4(param_1[0x13e],(float *)(param_1 + 0xf4));
}

