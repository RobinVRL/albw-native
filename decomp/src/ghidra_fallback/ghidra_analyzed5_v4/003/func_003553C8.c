// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0014EB3C(int param_1);
extern int func_0035394C(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_003541E4(int param_1,float *param_2);
extern int func_00355D0C(int param_1,float *param_2,float fparam_0,float fparam_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004F9458(int param_1,float *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00521018(int param_1);
extern int func_00556E64(int param_1);
extern int func_0058A8F0(int param_1);
extern int func_0058A960(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_00666318(undefined4 *param_1,undefined1 param_2);
extern int func_00688C34(float *param_1,float fparam_0,float fparam_1);
extern int func_0068C690(float *param_1);
extern undefined4 uRam00355794;
extern float DAT_00355774;
extern int *DAT_00355778;
extern float DAT_0035577c;
extern float DAT_00355780;
extern float DAT_00355784;
extern float DAT_00355788;
extern float DAT_0035578c;
extern float DAT_00355790;
extern undefined4 DAT_00355798;
extern float DAT_0035579c;
extern float DAT_003557a0;
extern float DAT_003557a4;
extern int DAT_003557a8;
extern int DAT_003557ac;
extern int DAT_003557b0;
extern float DAT_003557b4;
extern float DAT_003557b8;
extern float DAT_003557bc;
extern float DAT_00355870;

// USA 003553C8 <- EU 003553A4 (Ghidra, non-matching)
// GLOBAL DAT_00355774 float
// GLOBAL DAT_00355778 int *
// GLOBAL DAT_0035577c float
// GLOBAL DAT_00355780 float
// GLOBAL DAT_00355784 float
// GLOBAL DAT_00355788 float
// GLOBAL DAT_0035578c float
// GLOBAL DAT_00355790 float
// GLOBAL DAT_00355798 undefined4
// GLOBAL DAT_0035579c float
// GLOBAL DAT_003557a0 float
// GLOBAL DAT_003557a4 float
// GLOBAL DAT_003557a8 int
// GLOBAL DAT_003557ac int
// GLOBAL DAT_003557b0 int
// GLOBAL DAT_003557b4 float
// GLOBAL DAT_003557b8 float
// GLOBAL DAT_003557bc float
// GLOBAL DAT_00355870 float
// GLOBAL UNK_00355794 undefined4

undefined4 func_003553C8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fparam_0;
  undefined8 uVar12;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define fStack_50 (*(float *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define fStack_44 (*(float *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  fVar8 = DAT_00355774;
  if (*(uint *)(param_1 + 0x9f8) < *(uint *)(param_1 + 0x9fc)) {
    *(uint *)(param_1 + 0x9f8) = *(uint *)(param_1 + 0x9f8) + 1;
  }
  iVar6 = *DAT_00355778;
  func_003541E4(param_1,&fStack_44);
  local_40 = *(undefined4 *)(param_1 + 0xc);
  sVar1 = *(short *)(param_1 + 0x9e8);
  if (sVar1 == 0) {
    fVar8 = DAT_0035577c;
    func_00355D0C(param_1,&fStack_44,DAT_00355790,DAT_0035578c);
    if (*(uint *)(param_1 + 0xa1c) < *(uint *)(param_1 + 0xa20)) {
      *(uint *)(param_1 + 0xa1c) = *(uint *)(param_1 + 0xa1c) + 1;
      return 0;
    }
    func_004FABDC(param_1,3,0xffffffff,0);
    *(float *)(param_1 + 0x9d0) = fVar8;
    func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),fVar8);
    uVar2 = uRam00355794;
    *(undefined4 *)(param_1 + 0xa20) = 0x78;
    *(undefined4 *)(param_1 + 0xa24) = uVar2;
    *(undefined4 *)(param_1 + 0xa1c) = 0;
    *(short *)(param_1 + 0x9e8) = *(short *)(param_1 + 0x9e8) + 1;
    return 0;
  }
  uVar12 = CONCAT44(DAT_00355784,DAT_0035577c);
  if (sVar1 != 1) {
    if (sVar1 != 2) {
      return 0;
    }
    func_0035394C(param_1,&fStack_44,0,DAT_00355784);
    func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_00355788);
    iVar6 = func_0058A8F0(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    return func_00666318((undefined4 *)(param_1 + 0xa5c),3);
  }
  fparam_0 = DAT_00355780;
  func_00115C70(&local_5c,&fStack_44,(float *)(param_1 + 0x3d0));
  uVar10 = CONCAT44(DAT_00355798,fVar8);
  fVar9 = DAT_0035579c;
  local_58 = fVar8;
  uVar13 = func_0058AB74(param_1);
  if (((int)uVar13 == 3) && (iVar4 = func_0058A8F0(param_1), iVar4 != 0)) {
    func_004FABDC(param_1,5,0xffffffff,0);
  }
  if (*(int *)(param_1 + 0xa20) - *(int *)(param_1 + 0xa1c) < 0x1f) {
    fVar8 = *(float *)(param_1 + 0x9e0) * DAT_00355870;
  }
  else {
    fVar7 = *(float *)(param_1 + 0x9d0);
    fVar11 = ALBW_AS_F32(((ulonglong)uVar10 >> 0x20));
    fVar8 = fparam_0;
    if ((ALBW_AS_F32(uVar12) < fVar7) && (fVar8 = fVar9, fVar7 < fVar11)) {
      fVar8 = (DAT_003557a4 * (fVar7 - ALBW_AS_F32(uVar12))) / DAT_003557a0 + fparam_0;
    }
    fVar8 = fVar8 * fVar11;
  }
  *(float *)(param_1 + 0x9e0) = fVar8;
  func_0014EB3C(param_1);
  fVar8 = ALBW_AS_F32(((ulonglong)uVar12 >> 0x20));
  if (ALBW_AS_F32(uVar10) <
      *(float *)(param_1 + 0x380) * local_5c + *(float *)(param_1 + 900) * local_58 +
      *(float *)(param_1 + 0x388) * local_54) {
    uVar5 = *(int *)(param_1 + 1000) + 0x20000000;
  }
  else {
    uVar5 = *(int *)(param_1 + 1000) + 0xe0000000;
  }
  func_004D80A4(&fStack_50,uVar5,fparam_0);
  local_4c = (undefined4)uVar10;
  func_004F9458(param_1,&fStack_50);
  iVar4 = func_0068C690(&local_5c);
  func_0051D2F4((int *)(param_1 + 0xa58),iVar4,DAT_003557ac,DAT_003557a8,fVar8);
  func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0xa58),0,DAT_003557b0,
                *(float *)(param_1 + 0x9e0));
  func_0035394C(param_1,&fStack_44,0,fVar8);
  fVar8 = ALBW_AS_F32(uVar10);
  if ((*(float *)(param_1 + 0x9d0) < fVar8) || (0x2d < *(uint *)(param_1 + 0xa1c))) {
    fVar7 = ALBW_AS_F32(((ulonglong)uVar10 >> 0x20));
    fVar9 = (fVar7 - *(float *)(param_1 + 0x9d0)) * DAT_003557b8;
    if (fVar9 <= fVar8) {
      fVar9 = -fVar9;
    }
    if ((fVar8 <= fVar9) && (fVar8 = fVar9, DAT_003557b4 < fVar9)) {
      fVar8 = DAT_003557b4;
    }
    func_00688C34((float *)(param_1 + 0x9d0),fVar7,fVar8);
  }
  else {
    *(float *)(param_1 + 0x9d0) = fVar8;
  }
  fVar8 = ALBW_AS_F32(uVar10);
  func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),*(float *)(param_1 + 0x9d0));
  func_00115DC8((float *)(param_1 + 0xb74));
  func_004D80A4(&local_68,*(uint *)(param_1 + 1000),fparam_0);
  fVar9 = local_68 * *(float *)(param_1 + 0xb74) + fVar8 * *(float *)(param_1 + 0xb78) +
          local_60 * *(float *)(param_1 + 0xb7c);
  local_64 = fVar8;
  func_00556E64(iVar6);
  bVar3 = func_00521018(param_1);
  if ((bVar3) && ((uint)ALBW_AS_U32(DAT_003557bc) < (uint)ALBW_AS_U32(fVar9))) {
    if (*(char *)(param_1 + 0x9eb) == '\0') {
      return func_00666318((undefined4 *)(param_1 + 0xa5c),8);
    }
  }
  else if (*(uint *)(param_1 + 0xa1c) < *(uint *)(param_1 + 0xa20)) {
    *(uint *)(param_1 + 0xa1c) = *(uint *)(param_1 + 0xa1c) + 1;
    goto LAB_00355824;
  }
  func_004FABDC(param_1,6,0xffffffff,0);
  *(short *)(param_1 + 0x9e8) = *(short *)(param_1 + 0x9e8) + 1;
LAB_00355824:
  iVar6 = func_0058A960(param_1);
  if ((iVar6 != 0) && (1 < *(int *)(param_1 + 0xa20) - *(int *)(param_1 + 0xa1c))) {
    *(undefined1 *)(param_1 + 0x9eb) = 1;
    *(undefined4 *)(param_1 + 0xa20) = 1;
    *(float *)(param_1 + 0xa24) = fparam_0;
    *(undefined4 *)(param_1 + 0xa1c) = 0;
    return 0;
  }
  return 0;
}

