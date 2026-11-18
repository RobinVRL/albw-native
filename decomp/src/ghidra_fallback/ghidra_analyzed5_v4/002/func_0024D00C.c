#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_0024C3E0(undefined4 param_1,float *param_2,float *param_3,int param_4,float *param_5);
extern int func_00536CA4(undefined4 param_1,float *param_2,float *param_3,float fparam_0,float fparam_1, float fparam_2,float fparam_3);
extern int func_0054F9B8(int param_1,uint param_2);
extern int func_0054F9E4(int param_1,uint param_2);
extern int func_0054FA98(int param_1,uint param_2);
extern int func_0054FAC0(int param_1,uint param_2);
extern int func_0054FBB0(int param_1,int param_2);
extern int func_0054FC84(int param_1,int param_2);
extern float DAT_0024d318;
extern float DAT_0024d31c;
extern float DAT_0024d320;
extern float DAT_0024d324;
extern float *DAT_0024d328;

// USA 0024D00C <- EU 0024D00C (Ghidra, non-matching)
// GLOBAL DAT_0024d318 float
// GLOBAL DAT_0024d31c float
// GLOBAL DAT_0024d320 float
// GLOBAL DAT_0024d324 float
// GLOBAL DAT_0024d328 float *

/* WARNING: Variable defined which should be unmapped: objStack_70 */

void func_0024D00C(int param_1,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  int extraout_r1;
  undefined4 *puVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_70 ((uint *)(albw_frame + 0x0))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define fStack_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define fStack_4c (*(float *)(albw_frame + 0x24))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define afStack_40 ((float *)(albw_frame + 0x30))
  #define local_34 (*(float *)(albw_frame + 0x3c))
  #define fStack_30 (*(float *)(albw_frame + 0x40))
  #define fStack_2c (*(float *)(albw_frame + 0x44))
  if (*(char *)(param_1 + 0xa84) == '\0') {
    uVar2 = func_0054FBB0(param_2,param_3);
  }
  else {
    uVar2 = func_0054FC84(param_2,param_3);
  }
  if (*(char *)(param_1 + 0xa85) == '\0') goto LAB_0024d0a4;
  uVar3 = param_3 + param_4;
  if (*(char *)(param_1 + 0xa84) == '\0') {
    if (param_3 < param_4) goto LAB_0024d088;
  }
  else if (param_4 < param_3) {
LAB_0024d088:
    uVar3 = uVar3 + *(uint *)(param_2 + 0xc);
  }
  uVar12 = func_00110710(uVar3 >> 1,*(uint *)(param_2 + 0xc));
  param_4 = (uint)((ulonglong)uVar12 >> 0x20);
LAB_0024d0a4:
  if (*(char *)(param_1 + 0xa84) == '\0') {
    pfVar4 = (float *)func_0054F9B8(param_2,uVar2);
  }
  else {
    pfVar4 = (float *)func_0054FA98(param_2,uVar2);
  }
  local_50 = *pfVar4;
  fStack_4c = pfVar4[1];
  local_48 = pfVar4[2];
  if (*(char *)(param_1 + 0xa85) == '\0') {
    if (*(char *)(param_1 + 0xa84) == '\0') {
      pfVar4 = (float *)func_0054F9B8(param_2,param_4);
    }
    else {
      pfVar4 = (float *)func_0054FA98(param_2,param_4);
    }
    pfVar5 = (float *)func_0054F9E4(param_2,param_4);
    func_00115C54(&local_34,pfVar4,pfVar5);
    objStack_70[0] = (uint)ALBW_AS_U32(local_34);
    objStack_70[1] = (uint)ALBW_AS_U32(fStack_30);
    objStack_70[2] = (uint)ALBW_AS_U32(fStack_2c);
    func_00115D70(&local_34,(float *)objStack_70,DAT_0024d318);
    local_64 = local_34;
    fStack_60 = fStack_30;
    local_5c = fStack_2c;
  }
  else {
    if (*(char *)(param_1 + 0xa84) == '\0') {
      pfVar4 = (float *)func_0054FA98(param_2,param_4);
    }
    else {
      pfVar4 = (float *)func_0054F9B8(param_2,param_4);
    }
    local_64 = *pfVar4;
    fStack_60 = pfVar4[1];
    local_5c = pfVar4[2];
  }
  if (*(char *)(param_1 + 0xa84) == '\0') {
    pfVar4 = (float *)func_0054FA98(param_2,param_4);
  }
  else {
    pfVar4 = (float *)func_0054F9B8(param_2,param_4);
  }
  fVar9 = local_50 - *pfVar4;
  iVar6 = 0;
  if (fVar9 <= DAT_0024d31c) {
    fVar9 = -fVar9;
  }
  fVar11 = local_48 - pfVar4[2];
  if (fVar11 <= DAT_0024d31c) {
    fVar11 = -fVar11;
  }
  uVar3 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar11) << 0x1f | (uint)(fVar9 == fVar11) << 0x1e;
  bVar1 = (byte)(uVar3 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar9) || NAN(fVar11))) {
    fVar11 = fVar9;
  }
  for (fVar9 = fVar11 / DAT_0024d320; 0x3f7fffff < (int)ALBW_AS_U32(fVar9); fVar9 = fVar9 - DAT_0024d324) {
    iVar6 = iVar6 + 1;
  }
  fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(uVar3 >> 0x15) & 3);
  fVar9 = DAT_0024d31c;
  func_00536CA4(param_1,afStack_40,&local_50,local_64,fStack_60,local_5c,fVar11 / fVar10);
  uVar3 = 0;
  while( true ) {
    pfVar4 = (float *)(param_1 + 0x630);
    if (uVar3 < 0x20) {
      pfVar4 = (float *)(param_1 + 0x630 + uVar3 * 0xc);
    }
    objStack_70[0] = (uint)DAT_0024d328;
    if (uVar3 != 0) {
      objStack_70[0] = (uint)afStack_40;
    }
    fVar11 = func_0024C3E0(param_1,pfVar4,&local_50,(int)&local_64,(float *)objStack_70[0]);
    puVar8 = (undefined4 *)(param_1 + 0x7b0);
    if (uVar3 < 0x20) {
      puVar8 = puVar8 + uVar3;
    }
    uVar7 = func_0054FAC0(param_2,uVar2);
    iVar6 = extraout_r1;
    if (uVar3 < 0x20) {
      iVar6 = uVar3 * 3;
    }
    *puVar8 = uVar7;
    pfVar4 = (float *)(param_1 + 0x630);
    if (uVar3 < 0x20) {
      pfVar4 = pfVar4 + iVar6;
    }
    local_50 = *pfVar4;
    fStack_4c = pfVar4[1];
    local_48 = pfVar4[2];
    if (fVar9 < fVar11) break;
    uVar3 = uVar3 + 1;
    if (0x1f < (int)uVar3) {
      return;
    }
  }
  if (*(char *)(param_1 + 0xa85) != '\0') {
    uVar3 = uVar3 - 1;
  }
  *(uint *)(param_1 + 0xa88) = uVar3;
  return;
}

