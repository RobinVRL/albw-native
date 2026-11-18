#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00151328(int param_1);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00688C34(float *param_1,float fparam_0,float fparam_1);
extern int func_0068C690(float *param_1);
extern float DAT_00353c04;
extern float DAT_00353c08;
extern float DAT_00353c0c;
extern float DAT_00353c10;
extern float DAT_00353c14;
extern float DAT_00353c18;
extern float DAT_00353c1c;
extern float DAT_00353c20;
extern float DAT_00353c24;
extern float DAT_00353c28;
extern int DAT_00353c2c;
extern int DAT_00353c30;
extern float DAT_00353c34;
extern float DAT_00353c38;
extern float DAT_00353c3c;
extern float DAT_00353c40;
extern float DAT_00353c44;
extern float DAT_00353c48;
extern int DAT_00353c4c;
extern float DAT_00353c50;
extern float DAT_00353c54;

// USA 0035394C <- EU 00353928 (Ghidra, non-matching)
// GLOBAL DAT_00353c04 float
// GLOBAL DAT_00353c08 float
// GLOBAL DAT_00353c0c float
// GLOBAL DAT_00353c10 float
// GLOBAL DAT_00353c14 float
// GLOBAL DAT_00353c18 float
// GLOBAL DAT_00353c1c float
// GLOBAL DAT_00353c20 float
// GLOBAL DAT_00353c24 float
// GLOBAL DAT_00353c28 float
// GLOBAL DAT_00353c2c int
// GLOBAL DAT_00353c30 int
// GLOBAL DAT_00353c34 float
// GLOBAL DAT_00353c38 float
// GLOBAL DAT_00353c3c float
// GLOBAL DAT_00353c40 float
// GLOBAL DAT_00353c44 float
// GLOBAL DAT_00353c48 float
// GLOBAL DAT_00353c4c int
// GLOBAL DAT_00353c50 float
// GLOBAL DAT_00353c54 float

void func_0035394C(int param_1,float *param_2,int param_3,float fparam_0)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define local_48 ((float *)(albw_frame + 0x18))
  #define local_40 (*(float *)(albw_frame + 0x20))
  fVar8 = *(float *)(param_1 + 0x3d4) - param_2[1];
  if (fVar8 < DAT_00353c04) {
    fVar8 = DAT_00353c04;
  }
  fVar8 = fVar8 * DAT_00353c08;
  fVar11 = DAT_00353c04;
  func_00115C70(local_48,param_2,(float *)(param_1 + 0xa8c));
  fVar1 = DAT_00353c20;
  fVar10 = DAT_00353c1c;
  fVar12 = local_48[0] * local_48[0] + local_40 * local_40;
  fVar6 = ((param_2[1] + fparam_0) - *(float *)(param_1 + 0x3d4)) * DAT_00353c0c;
  fVar9 = *(float *)(param_1 + 0x9dc) + DAT_00353c10;
  fVar7 = DAT_00353c14;
  if ((DAT_00353c14 <= fVar6) && (fVar7 = fVar6, fVar9 < fVar6)) {
    fVar7 = fVar9;
  }
  fVar9 = (*(float *)(param_1 + 0x3e0) + fVar7) * DAT_00353c18;
  *(float *)(param_1 + 0x3e0) = fVar9;
  fVar6 = DAT_00353c28;
  fVar7 = DAT_00353c24;
  if ((fVar10 <= fVar9) && (fVar10 = fVar9, fVar1 < fVar9)) {
    fVar10 = fVar1;
  }
  *(float *)(param_1 + 0x3e0) = fVar10;
  if (param_3 == 0) {
    *(float *)(param_1 + 0x9d4) = fVar7;
    *(undefined4 *)(param_1 + 0xa58) = *(undefined4 *)(param_1 + 1000);
    *(float *)(param_1 + 0xa90) = *(float *)(param_1 + 0x3d4);
    *(undefined4 *)(param_1 + 0xa8c) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0xa94) = *(undefined4 *)(param_1 + 0x3d8);
  }
  else {
    iVar4 = func_0068C690(local_48);
    iVar3 = DAT_00353c30;
    iVar2 = DAT_00353c2c;
    func_0051D2F4((int *)(param_1 + 0xa58),iVar4,DAT_00353c30,DAT_00353c2c,DAT_00353c34);
    fVar12 = fVar12 * DAT_00353c38;
    fVar10 = fVar11;
    if ((fVar11 <= fVar12) && (fVar10 = fVar12, fVar6 < fVar12)) {
      fVar10 = fVar6;
    }
    func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0xa58),iVar3,iVar2,
                  fVar10 * DAT_00353c3c);
    fVar8 = fVar6 - fVar8;
    fVar10 = fVar11;
    if ((fVar11 <= fVar8) && (fVar10 = fVar8, fVar6 < fVar8)) {
      fVar10 = fVar6;
    }
    *(float *)(param_1 + 0x9d4) = fVar7 + fVar10 * DAT_00353c40;
    if (*(uint *)(param_1 + 0xa4c) < *(uint *)(param_1 + 0xa50)) {
      *(uint *)(param_1 + 0xa4c) = *(uint *)(param_1 + 0xa4c) + 1;
    }
    else {
      func_00688C34((float *)(param_1 + 0x9d8),DAT_00353c48,DAT_00353c44);
    }
    fVar10 = *(float *)(param_1 + 0x9d8);
    fVar8 = fVar10;
    if (DAT_00353c4c <= (int)ALBW_AS_U32(fVar10)) {
      fVar8 = DAT_00353c50;
    }
    func_004D838C((float *)(param_1 + 0xa8c),param_2,*(float *)(param_1 + 0x9d4),fVar8,fVar10);
    *(undefined4 *)(param_1 + 0xa90) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0xa8c);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0xa94);
  }
  if (*(int *)(param_1 + 0xa88) != 0) {
    local_5c = *(float *)(param_1 + 0xa8c);
    uStack_54 = *(undefined4 *)(param_1 + 0xa94);
    fVar8 = *(float *)(param_1 + 0xc) + DAT_00353c54;
    local_58 = *(float *)(param_1 + 0xa90);
    if (fVar8 < *(float *)(param_1 + 0x3d4)) {
      local_58 = fVar8;
    }
    func_001512B4(*(int *)(param_1 + 0xa88),&local_5c);
    pfVar5 = (float *)func_00151328(*(int *)(param_1 + 0xa88));
    func_00115154(&local_50,&local_4c,*(uint *)(param_1 + 1000));
    pfVar5[4] = fVar6;
    pfVar5[7] = fVar11;
    pfVar5[3] = fVar11;
    pfVar5[5] = fVar11;
    pfVar5[1] = fVar11;
    *pfVar5 = local_4c;
    pfVar5[2] = local_50;
    pfVar5[6] = -local_50;
    pfVar5[8] = local_4c;
  }
  return;
}

