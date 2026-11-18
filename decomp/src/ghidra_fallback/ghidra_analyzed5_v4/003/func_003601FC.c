#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float func_0011F468(undefined4 param_1,undefined4 param_2);
extern int func_004378FC(undefined4 param_1);
extern void func_0049C154(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_00360594;
extern undefined4 DAT_00360598;
extern undefined4 DAT_0036059c;
extern float DAT_003605a0;
extern float DAT_003605a4;
extern float DAT_003605a8;
extern float DAT_003605ac;
extern float DAT_003605b0;
extern undefined DAT_003605b4;
extern undefined4 DAT_003605bc;
extern int *DAT_003605c0;
extern float DAT_003605c4;
extern int *DAT_003605c8;
extern float DAT_003605cc;
extern int DAT_003605d0;
extern undefined4 DAT_00360648;

// USA 003601FC <- EU 003601D8 (Ghidra, non-matching)
// GLOBAL DAT_00360594 float
// GLOBAL DAT_00360598 undefined4
// GLOBAL DAT_0036059c undefined4
// GLOBAL DAT_003605a0 float
// GLOBAL DAT_003605a4 float
// GLOBAL DAT_003605a8 float
// GLOBAL DAT_003605ac float
// GLOBAL DAT_003605b0 float
// GLOBAL DAT_003605b4 undefined
// GLOBAL DAT_003605bc undefined4
// GLOBAL DAT_003605c0 int *
// GLOBAL DAT_003605c4 float
// GLOBAL DAT_003605c8 int *
// GLOBAL DAT_003605cc float
// GLOBAL DAT_003605d0 int
// GLOBAL DAT_00360648 undefined4

void func_003601FC(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fparam_0;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(float *)(albw_frame + 0x0))
  #define local_8c (*(float *)(albw_frame + 0x4))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x8))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define fStack_6c (*(float *)(albw_frame + 0x24))
  #define local_68 (*(float *)(albw_frame + 0x28))
  #define local_60 ((float *)(albw_frame + 0x30))
  #define local_50 (*(undefined4 *)(albw_frame + 0x40))
  #define local_4c (*(float *)(albw_frame + 0x44))
  #define local_48 (*(float *)(albw_frame + 0x48))
  #define local_44 (*(float *)(albw_frame + 0x4c))
  #define local_40 (*(float *)(albw_frame + 0x50))
  #define local_3c (*(float *)(albw_frame + 0x54))
  fVar13 = DAT_003605a4;
  fparam_0 = DAT_003605a0;
  uVar12 = DAT_0036059c;
  uVar11 = DAT_00360598;
  fVar9 = DAT_00360594;
  pfVar8 = (float *)(param_1 + 0x47c);
  if (*(int *)(param_1 + 0x47c) == 0) {
    if (*(int *)(param_1 + 0x344) == 0) {
      *(undefined4 *)(param_1 + 0x480) = 0;
    }
    else {
      func_004A1B9C((int *)&local_80,*(int *)(param_1 + 0x344),(uint *)&DAT_003605b4);
      *pfVar8 = local_80;
      *(float *)(param_1 + 0x480) = local_7c;
    }
    fVar10 = *pfVar8;
    if ((fVar10 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar10) + 0x1c) == *(int *)(param_1 + 0x480))) {
      *(float *)((int)ALBW_AS_U32(fVar10) + 0x28) = fVar9;
      *(undefined4 *)((int)ALBW_AS_U32(fVar10) + 0x2c) = uVar11;
      *(undefined4 *)((int)ALBW_AS_U32(fVar10) + 0x30) = uVar12;
      *(uint *)((int)ALBW_AS_U32(fVar10) + 0x3c) = *(uint *)((int)ALBW_AS_U32(fVar10) + 0x3c) | 0x10;
    }
  }
  else {
    fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x508),
                                        (byte)(in_fpscr >> 0x15) & 3);
    uVar11 = DAT_0036059c;
    fVar10 = DAT_00360594;
    uVar12 = DAT_00360598;
    uVar5 = func_004378FC(*(undefined4 *)(param_1 + 0x504));
    fVar9 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = fVar14 / fVar9;
    uVar1 = in_fpscr & 0xfffffff;
    uVar2 = uVar1 | (uint)(fparam_0 < fVar14) << 0x1f | (uint)(fparam_0 == fVar14) << 0x1e;
    in_fpscr = uVar2 | (uint)(NAN(fparam_0) || NAN(fVar14)) << 0x1c;
    bVar3 = (byte)(uVar2 >> 0x18);
    fVar9 = fparam_0;
    if (((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
       (uVar1 = uVar1 | (uint)(fVar14 < fVar13) << 0x1f | (uint)(fVar14 == fVar13) << 0x1e,
       in_fpscr = uVar1 | (uint)(NAN(fVar14) || NAN(fVar13)) << 0x1c, bVar3 = (byte)(uVar1 >> 0x18),
       fVar9 = fVar14, !(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
      fVar9 = fVar13;
    }
    local_7c = DAT_003605a8;
    local_48 = DAT_003605b0;
    local_44 = DAT_003605a8;
    local_40 = DAT_003605ac;
    local_80 = fVar10;
    local_78 = uVar11;
    local_74 = fVar13;
    local_60[2] = fVar10;
    local_60[3] = ALBW_AS_F32(uVar12);
    local_50 = uVar11;
    local_4c = fVar13;
    local_3c = fVar13;
    if ((int)ALBW_AS_U32(fVar9) < 0x3f000000) {
      func_0049C154((float *)(param_1 + 0x4f0),local_60 + 2,&local_80,fVar9 * DAT_003605a8);
    }
    else {
      func_0049C154((float *)(param_1 + 0x4f0),&local_80,&local_48,
                    (fVar9 - DAT_003605ac) * DAT_003605a8);
    }
    fVar9 = *pfVar8;
    if ((fVar9 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar9) + 0x1c) == *(int *)(param_1 + 0x480))) {
      *(undefined4 *)((int)ALBW_AS_U32(fVar9) + 0x28) = *(undefined4 *)(param_1 + 0x4f0);
      *(undefined4 *)((int)ALBW_AS_U32(fVar9) + 0x2c) = *(undefined4 *)(param_1 + 0x4f4);
      *(undefined4 *)((int)ALBW_AS_U32(fVar9) + 0x30) = *(undefined4 *)(param_1 + 0x4f8);
      *(uint *)((int)ALBW_AS_U32(fVar9) + 0x3c) = *(uint *)((int)ALBW_AS_U32(fVar9) + 0x3c) | 0x10;
    }
  }
  uVar11 = DAT_003605bc;
  *(undefined4 *)(param_1 + 0x4c4) = 0x14;
  *(undefined4 *)(param_1 + 0x4c8) = uVar11;
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  fVar9 = func_0011F468(*(undefined4 *)(param_1 + 0x500),*(undefined4 *)(param_1 + 0x504));
  piVar4 = DAT_003605c0;
  *(float *)(param_1 + 0x514) = fVar9;
  iVar6 = func_0052FBA0(*piVar4 + 0x3dbbc,*(uint *)(param_1 + 0x50));
  iVar7 = 0;
  if (iVar6 != 0) {
    iVar7 = iVar6;
  }
  if (*(char *)(param_1 + 0x513) == '\x01') {
    fVar9 = DAT_003605c4;
    pfVar8 = (float *)func_00520FC0();
    func_00115C70(&local_90,pfVar8,(float *)(param_1 + 0x3d0));
    local_8c = fparam_0;
    func_0068A3EC(&local_90,fVar9);
  }
  else {
    fVar9 = DAT_003605c4;
    pfVar8 = (float *)func_00520FC0();
    func_00115C70(&local_90,pfVar8,(float *)(param_1 + 0x3d0));
    local_8c = fparam_0;
    func_0068A3EC(&local_90,fVar9);
    if ((*(char *)(param_1 + 0x512) == '\0') && (iVar7 != 0)) {
      iVar7 = func_0052FBA0(*piVar4 + 0x3dbbc,*(uint *)(param_1 + 0x50));
      if (iVar7 != 0) {
        iVar7 = *(int *)(*(int *)(*(int *)(iVar7 + 0x40c) + 0x24) + 0x14) +
                *(int *)(iVar7 + 0xb88) * 0x30;
        local_60[0] = *(float *)(iVar7 + 0xc);
        local_60[1] = *(float *)(iVar7 + 0x1c);
        local_60[2] = *(float *)(iVar7 + 0x2c);
      }
      func_00115C70(&fStack_6c,(float *)(param_1 + 0x3d0),local_60);
      local_68 = fparam_0;
      func_0068A3EC(&fStack_6c,fparam_0);
      func_00115C54(&local_90,&local_90,&fStack_6c);
    }
  }
  func_00115DC8(&local_90);
  func_00115D70(&local_90,&local_90,*(float *)(param_1 + 0x514));
  iVar7 = func_0068C690(&local_90);
  *(int *)(param_1 + 1000) = iVar7;
  if (*(char *)(param_1 + 0x512) != '\0') {
    iVar6 = *DAT_003605c8;
    if (*(short *)(param_1 + 0x2e) != 0) {
      iVar6 = -iVar6;
    }
    *(int *)(param_1 + 1000) = iVar7 + iVar6;
  }
  iVar7 = DAT_003605d0;
  fVar9 = DAT_003605cc;
  *(float *)(param_1 + 0x3dc) = local_90;
  *(float *)(param_1 + 0x3e0) = local_8c;
  *(undefined4 *)(param_1 + 0x3e4) = uStack_88;
  local_60[3] = ALBW_AS_F32(*(undefined4 *)(iVar7 + 0xe0));
  local_60[0] = *(float *)(iVar7 + 0xd4);
  local_60[1] = ALBW_AS_F32(*(undefined4 *)(iVar7 + 0xd8));
  local_60[2] = ALBW_AS_F32(*(undefined4 *)(iVar7 + 0xdc));
  fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x504),(byte)(in_fpscr >> 0x15) & 3)
  ;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar10 < fVar9) << 0x1f | (uint)(fVar10 == fVar9) << 0x1e;
  bVar3 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar3 >> 6 & 1) && (bool)(bVar3 >> 7) == (NAN(fVar10) || NAN(fVar9))) {
    fVar10 = fVar9;
  }
  fVar9 = local_60[(int)fVar10];
  *(float *)(param_1 + 0x488) = fVar9;
  if (fVar9 == 0.0) {
    *(float *)(param_1 + 0x48c) = fparam_0;
  }
  else {
    fVar9 = (float)VectorUnsignedToFloat(ALBW_AS_U32(fVar9),(byte)(uVar1 >> 0x15) & 3);
    *(float *)(param_1 + 0x48c) = fVar13 / fVar9;
  }
  *(undefined4 *)(param_1 + 0x484) = 0;
  uVar11 = DAT_00360648;
  *(undefined4 *)(param_1 + 0x4b8) = 0x3c;
  *(undefined4 *)(param_1 + 0x4bc) = uVar11;
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined1 *)(param_1 + 0x510) = 1;
  return;
}

