#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00151328(int param_1);
extern int func_003541E4(int param_1,float *param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00666318(undefined4 *param_1,undefined1 param_2);
extern int func_00688C34(float *param_1,float fparam_0,float fparam_1);
extern int func_0068C690(float *param_1);
extern float DAT_00352e9c;
extern float DAT_00352ea0;
extern float DAT_00352ea4;
extern float DAT_00352ea8;
extern float DAT_00352eac;
extern float DAT_00352eb0;
extern float DAT_00352eb4;
extern float DAT_00352eb8;
extern float DAT_00352ebc;
extern int DAT_00352ec0;
extern int DAT_00352ec4;
extern float DAT_00352ec8;
extern float DAT_00352ecc;
extern float DAT_00352ed0;
extern float DAT_00352ed4;
extern int DAT_00352ed8;
extern float DAT_00352edc;
extern float DAT_00352ee0;
extern float DAT_00352ee4;

// USA 00352B0C <- EU 00352AE8 (Ghidra, non-matching)
// GLOBAL DAT_00352e9c float
// GLOBAL DAT_00352ea0 float
// GLOBAL DAT_00352ea4 float
// GLOBAL DAT_00352ea8 float
// GLOBAL DAT_00352eac float
// GLOBAL DAT_00352eb0 float
// GLOBAL DAT_00352eb4 float
// GLOBAL DAT_00352eb8 float
// GLOBAL DAT_00352ebc float
// GLOBAL DAT_00352ec0 int
// GLOBAL DAT_00352ec4 int
// GLOBAL DAT_00352ec8 float
// GLOBAL DAT_00352ecc float
// GLOBAL DAT_00352ed0 float
// GLOBAL DAT_00352ed4 float
// GLOBAL DAT_00352ed8 int
// GLOBAL DAT_00352edc float
// GLOBAL DAT_00352ee0 float
// GLOBAL DAT_00352ee4 float

undefined4 func_00352B0C(uint param_1,float fparam_0)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_7c (*(float *)(albw_frame + 0x4))
  #define local_78 ((float *)(albw_frame + 0x8))
  #define local_70 (*(float *)(albw_frame + 0x10))
  #define fStack_6c (*(float *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_60 ((float *)(albw_frame + 0x20))
  #define local_58 (*(float *)(albw_frame + 0x28))
  #define local_54 (*(float *)(albw_frame + 0x2c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x30))
  fVar15 = DAT_00352ea4;
  fVar9 = DAT_00352ea0;
  fVar11 = DAT_00352e9c;
  uVar5 = *(uint *)(param_1 + 0x9fc);
  uVar13 = CONCAT44(DAT_00352ea0,DAT_00352e9c);
  uVar2 = param_1;
  if (uVar5 != 0) {
    uVar2 = *(uint *)(param_1 + 0x9f8);
  }
  fVar10 = DAT_00352e9c;
  if ((uVar5 != 0 && uVar2 != 0) && (fVar10 = DAT_00352ea0, uVar2 < uVar5)) {
    fparam_0 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = fparam_0 * *(float *)(param_1 + 0xa00);
  }
  bVar7 = *(uint *)(param_1 + 0x9f8) < uVar5;
  if (bVar7) {
    *(uint *)(param_1 + 0x9f8) = *(uint *)(param_1 + 0x9f8) + 1;
  }
  iVar6 = *(int *)(param_1 + 0x40c);
  if (iVar6 != 0) {
    if (bVar7) {
      *(float *)(param_1 + 0x3dc) = fVar11;
      *(float *)(param_1 + 0x3e0) = fVar11;
      *(float *)(param_1 + 0x3e4) = fVar11;
      *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x9d0) + fVar15;
    }
    else {
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x81;
      uVar2 = *(uint *)(param_1 + 0xa08);
      if (*(uint *)(param_1 + 0xa04) < uVar2) {
        uVar5 = *(uint *)(param_1 + 0xa04) + 1;
        if (uVar2 == 0 || uVar5 == 0) {
          fparam_0 = fVar11;
        }
        *(uint *)(param_1 + 0xa04) = uVar5;
        if ((uVar2 != 0 && uVar5 != 0) && (fparam_0 = fVar9, uVar5 < uVar2)) {
          fVar9 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
          fparam_0 = fVar9 * *(float *)(param_1 + 0xa0c);
        }
        *(float *)(iVar6 + 0x158) = fparam_0;
      }
      else {
        *(float *)(iVar6 + 0x158) = fVar9;
      }
    }
  }
  fVar9 = *(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0xc);
  if (fVar9 < fVar11) {
    fVar9 = fVar11;
  }
  fVar9 = fVar9 * DAT_00352ea8;
  func_003541E4(param_1,&fStack_6c);
  local_68 = *(undefined4 *)(param_1 + 0x3d4);
  func_00115C70(local_78,&fStack_6c,(float *)(param_1 + 0xa8c));
  bVar8 = false;
  fVar11 = local_78[0] * local_78[0] + local_70 * local_70;
  fVar12 = (*(float *)(param_1 + 0x9d0) + DAT_00352eac) - *(float *)(param_1 + 0x3d4);
  if (!bVar7) {
    bVar8 = *(uint *)(param_1 + 0xa14) <= *(uint *)(param_1 + 0xa10);
    if (!bVar8) {
      *(uint *)(param_1 + 0xa10) = *(uint *)(param_1 + 0xa10) + 1;
    }
  }
  if (*(short *)(param_1 + 0x9e8) == 0) {
    iVar6 = func_0068C690(local_78);
    fVar1 = DAT_00352eb4;
    fVar14 = DAT_00352eb0;
    *(int *)(param_1 + 0xa58) = iVar6;
    *(float *)(param_1 + 0x3e0) = (*(float *)(param_1 + 0x3e0) + fVar12 * fVar14) * fVar1;
    if (bVar8) {
      if (*(char *)(param_1 + 0x9f0) == '\0') {
        uVar4 = 7;
      }
      else {
        uVar4 = 6;
      }
      return func_00666318((undefined4 *)(param_1 + 0xa5c),uVar4);
    }
  }
  if ((int)ALBW_AS_U32(fVar10) < 0x3f800000) {
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0xa58);
  }
  else {
    fVar11 = fVar11 * DAT_00352eb8;
    fVar12 = ALBW_AS_F32(uVar13);
    if ((fVar12 <= fVar11) &&
       (fVar14 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20)), fVar12 = fVar11, fVar14 < fVar11)) {
      fVar12 = fVar14;
    }
    func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0xa58),DAT_00352ec4,DAT_00352ec0,
                  fVar12 * DAT_00352ebc);
  }
  if (*(short *)(param_1 + 0x9e8) == 0) {
    *(float *)(param_1 + 0x9d4) =
         DAT_00352ec8 + (ALBW_AS_F32(((ulonglong)uVar13 >> 0x20)) - fVar9) * DAT_00352edc;
  }
  else {
    *(float *)(param_1 + 0x9d4) = DAT_00352ec8;
  }
  fVar11 = ALBW_AS_F32(uVar13);
  if (bVar7) {
    func_00688C34((float *)(param_1 + 0x9d8),DAT_00352ecc,DAT_00352ee0);
  }
  else {
    fVar9 = DAT_00352ecc;
    func_00688C34((float *)(param_1 + 0x9d8),DAT_00352ed4,DAT_00352ed0);
    fVar11 = *(float *)(param_1 + 0x9d8);
    if (DAT_00352ed8 <= (int)ALBW_AS_U32(fVar11)) {
      fVar11 = fVar9;
    }
  }
  func_004D838C((float *)(param_1 + 0xa8c),&fStack_6c,*(float *)(param_1 + 0x9d4),fVar11,
                *(float *)(param_1 + 0x9d8));
  *(undefined4 *)(param_1 + 0xa90) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0xa8c);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0xa94);
  if (*(int *)(param_1 + 0xa88) == 0) {
    return 0;
  }
  local_58 = *(float *)(param_1 + 0xa8c);
  uStack_50 = *(undefined4 *)(param_1 + 0xa94);
  fVar11 = *(float *)(param_1 + 0x9d0) +
           (ALBW_AS_F32(((ulonglong)uVar13 >> 0x20)) - fVar10 * DAT_00352ee4) * fVar15;
  local_54 = *(float *)(param_1 + 0xa90);
  if (fVar11 < *(float *)(param_1 + 0x3d4)) {
    local_54 = fVar11;
  }
  func_001512B4(*(int *)(param_1 + 0xa88),&local_58);
  pfVar3 = (float *)func_00151328(*(int *)(param_1 + 0xa88));
  func_00115154(&local_7c,local_60,*(uint *)(param_1 + 1000));
  fVar11 = ALBW_AS_F32(uVar13);
  pfVar3[7] = fVar11;
  pfVar3[3] = fVar11;
  pfVar3[4] = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
  pfVar3[5] = fVar11;
  pfVar3[1] = fVar11;
  *pfVar3 = local_60[0];
  pfVar3[2] = local_7c;
  pfVar3[6] = -local_7c;
  pfVar3[8] = local_60[0];
  return 0;
}

