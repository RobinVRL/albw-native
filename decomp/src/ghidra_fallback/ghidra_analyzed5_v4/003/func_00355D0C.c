#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00151328(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_00356024;
extern float DAT_00356028;
extern float DAT_0035602c;
extern float DAT_00356030;
extern float DAT_00356034;
extern float DAT_00356038;
extern float DAT_0035603c;
extern int DAT_00356040;
extern float DAT_00356044;
extern float DAT_00356048;
extern float DAT_0035604c;
extern int DAT_00356050;
extern int DAT_00356054;
extern int DAT_00356058;
extern float DAT_0035605c;
extern float *DAT_00356060;
extern float DAT_00356064;
extern float DAT_00356068;
extern int DAT_0035606c;
extern float DAT_00356070;
extern float DAT_00356074;
extern float DAT_00356078;

// USA 00355D0C <- EU 00355CE8 (Ghidra, non-matching)
// GLOBAL DAT_00356024 float
// GLOBAL DAT_00356028 float
// GLOBAL DAT_0035602c float
// GLOBAL DAT_00356030 float
// GLOBAL DAT_00356034 float
// GLOBAL DAT_00356038 float
// GLOBAL DAT_0035603c float
// GLOBAL DAT_00356040 int
// GLOBAL DAT_00356044 float
// GLOBAL DAT_00356048 float
// GLOBAL DAT_0035604c float
// GLOBAL DAT_00356050 int
// GLOBAL DAT_00356054 int
// GLOBAL DAT_00356058 int
// GLOBAL DAT_0035605c float
// GLOBAL DAT_00356060 float *
// GLOBAL DAT_00356064 float
// GLOBAL DAT_00356068 float
// GLOBAL DAT_0035606c int
// GLOBAL DAT_00356070 float
// GLOBAL DAT_00356074 float
// GLOBAL DAT_00356078 float

void func_00355D0C(int param_1,float *param_2,float fparam_0,float fparam_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_4c (*(float *)(albw_frame + 0x24))
  #define fStack_48 (*(float *)(albw_frame + 0x28))
  #define afStack_40 ((float *)(albw_frame + 0x30))
  #define afStack_34 ((float *)(albw_frame + 0x3c))
  fVar9 = DAT_00356024;
  func_00115C70(&local_60,param_2,(float *)(param_1 + 0xa8c));
  fVar8 = DAT_0035603c;
  fVar11 = DAT_00356038;
  fVar7 = DAT_00356028;
  fVar10 = SQRT(local_60 * local_60 + local_58 * local_58);
  fVar6 = *(float *)(param_1 + 0x9dc) + DAT_0035602c;
  fVar4 = ((param_2[1] + fparam_0) - *(float *)(param_1 + 0x3d4)) * DAT_00356028;
  fVar5 = DAT_00356030;
  if ((DAT_00356030 <= fVar4) && (fVar5 = fVar4, fVar6 < fVar4)) {
    fVar5 = fVar6;
  }
  fVar5 = (*(float *)(param_1 + 0x3e0) + fVar5) * DAT_00356034;
  *(float *)(param_1 + 0x3e0) = fVar5;
  iVar1 = DAT_00356040;
  if ((fVar11 <= fVar5) && (fVar11 = fVar5, fVar8 < fVar5)) {
    fVar11 = fVar8;
  }
  *(float *)(param_1 + 0x3e0) = fVar11;
  if ((int)ALBW_AS_U32(fVar10) < iVar1) {
    func_004D80A4(&local_60,*(uint *)(param_1 + 1000),DAT_00356044);
    local_5c = fVar9;
  }
  iVar2 = func_0068C690(&local_60);
  iVar1 = DAT_00356054;
  fVar10 = fVar10 - fparam_1;
  fVar11 = DAT_0035604c;
  if ((DAT_0035604c <= fVar10) && (fVar11 = fVar10, DAT_00356048 < fVar10)) {
    fVar11 = DAT_00356048;
  }
  fVar11 = fVar11 * fVar7;
  func_0051D2F4((int *)(param_1 + 0xa58),iVar2,DAT_00356054,DAT_00356050,DAT_00356048);
  func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0xa58),iVar1,DAT_00356058,DAT_0035605c);
  local_50 = local_60;
  local_4c = local_5c;
  fStack_48 = local_58;
  fVar7 = SQRT(local_60 * local_60 + local_5c * local_5c + local_58 * local_58);
  if (fVar9 < fVar7) {
    fVar11 = fVar11 / fVar7;
    local_50 = local_60 * fVar11;
    local_4c = local_5c * fVar11;
    fStack_48 = local_58 * fVar11;
  }
  func_00115C54(afStack_34,(float *)(param_1 + 8),DAT_00356060);
  func_00115C70(afStack_40,afStack_34,(float *)(param_1 + 0xa8c));
  func_00115DC8(afStack_40);
  func_00115DAC(&local_50,afStack_40,&local_50,DAT_00356064);
  func_00115C54((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),&local_50);
  func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_00356068);
  fVar11 = *(float *)(param_1 + 0x3dc);
  fVar7 = *(float *)(param_1 + 0x3e4);
  if (DAT_0035606c < (int)ALBW_AS_U32((fVar11 * fVar11 + fVar7 * fVar7))) {
    fVar5 = *(float *)(param_1 + 0x3e0);
    fVar8 = SQRT(fVar11 * fVar11 + fVar5 * fVar5 + fVar7 * fVar7);
    if (fVar9 < fVar8) {
      fVar8 = DAT_00356070 / fVar8;
      *(float *)(param_1 + 0x3e4) = fVar7 * fVar8;
      *(float *)(param_1 + 0x3dc) = fVar11 * fVar8;
      *(float *)(param_1 + 0x3e0) = fVar5 * fVar8;
    }
  }
  *(undefined4 *)(param_1 + 0xa90) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0xa8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0xa94) = *(undefined4 *)(param_1 + 0x3d8);
  if (*(int *)(param_1 + 0xa88) != 0) {
    local_50 = *(float *)(param_1 + 0xa8c);
    fStack_48 = *(float *)(param_1 + 0xa94);
    fVar7 = *(float *)(param_1 + 0xc) + DAT_00356074;
    local_4c = *(float *)(param_1 + 0xa90);
    if (fVar7 < *(float *)(param_1 + 0x3d4)) {
      local_4c = fVar7;
    }
    func_001512B4(*(int *)(param_1 + 0xa88),&local_50);
    pfVar3 = (float *)func_00151328(*(int *)(param_1 + 0xa88));
    func_00115154(&local_64,&local_54,*(uint *)(param_1 + 1000));
    pfVar3[4] = DAT_00356078;
    pfVar3[7] = fVar9;
    pfVar3[3] = fVar9;
    pfVar3[5] = fVar9;
    pfVar3[1] = fVar9;
    *pfVar3 = local_54;
    pfVar3[2] = local_64;
    pfVar3[6] = -local_64;
    pfVar3[8] = local_54;
  }
  return;
}

