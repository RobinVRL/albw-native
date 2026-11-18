// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float func_0011F468(undefined4 param_1,undefined4 param_2);
extern int func_004378FC(undefined4 param_1);
extern void func_0049C154(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern float func_00548CB4(int param_1);
extern int func_00556B7C(int param_1);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_0035fe20;
extern float DAT_0035fe24;
extern int *DAT_0035fe28;
extern float DAT_0035fe2c;
extern float DAT_0035fe30;
extern float DAT_0035fe34;
extern float DAT_0035fe38;
extern float DAT_0035fe3c;
extern int *DAT_0035fe40;
extern float DAT_0035fe44;
extern int DAT_0035fe48;
extern undefined4 DAT_0035fe4c;
extern int *DAT_0035fe50;
extern int *DAT_0035fe54;
extern undefined DAT_0035fe58;
extern undefined4 DAT_0035fe60;
extern float DAT_0035fe64;
extern float DAT_0035fe68;
extern float DAT_0035fe6c;
extern undefined4 DAT_0035ff2c;

// USA 0035FA4C <- EU 0035FA28 (Ghidra, non-matching)
// GLOBAL DAT_0035fe20 undefined4
// GLOBAL DAT_0035fe24 float
// GLOBAL DAT_0035fe28 int *
// GLOBAL DAT_0035fe2c float
// GLOBAL DAT_0035fe30 float
// GLOBAL DAT_0035fe34 float
// GLOBAL DAT_0035fe38 float
// GLOBAL DAT_0035fe3c float
// GLOBAL DAT_0035fe40 int *
// GLOBAL DAT_0035fe44 float
// GLOBAL DAT_0035fe48 int
// GLOBAL DAT_0035fe4c undefined4
// GLOBAL DAT_0035fe50 int *
// GLOBAL DAT_0035fe54 int *
// GLOBAL DAT_0035fe58 undefined
// GLOBAL DAT_0035fe60 undefined4
// GLOBAL DAT_0035fe64 float
// GLOBAL DAT_0035fe68 float
// GLOBAL DAT_0035fe6c float
// GLOBAL DAT_0035ff2c undefined4

void func_0035FA4C(int param_1)

{
  byte bVar1;
  int *piVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fparam_0;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(float *)(albw_frame + 0x0))
  #define local_8c (*(float *)(albw_frame + 0x4))
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define fStack_84 (*(float *)(albw_frame + 0xc))
  #define local_80 ((float *)(albw_frame + 0x10))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define local_60 (*(float *)(albw_frame + 0x30))
  #define local_5c (*(float *)(albw_frame + 0x34))
  #define local_58 (*(undefined4 *)(albw_frame + 0x38))
  #define local_54 (*(float *)(albw_frame + 0x3c))
  #define local_50 (*(float *)(albw_frame + 0x40))
  #define local_4c (*(float *)(albw_frame + 0x44))
  #define fStack_48 (*(float *)(albw_frame + 0x48))
  #define local_44 (*(float *)(albw_frame + 0x4c))
  piVar2 = DAT_0035fe28;
  uVar11 = DAT_0035fe20;
  *(undefined4 *)(param_1 + 0x4c4) = 0x14;
  *(undefined4 *)(param_1 + 0x4c8) = uVar11;
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  uVar11 = *(undefined4 *)(param_1 + 0x500);
  fVar16 = DAT_0035fe24;
  iVar5 = func_0052FBA0(*piVar2 + 0x3dbbc,*(uint *)(param_1 + 0x50));
  fVar10 = DAT_0035fe34;
  fparam_0 = DAT_0035fe30;
  fparam_0_00 = DAT_0035fe2c;
  if (iVar5 != 0) {
    fVar13 = func_0011F468(uVar11,*(undefined4 *)(param_1 + 0x504));
    *(float *)(param_1 + 0x514) = fVar13;
    fVar13 = fVar10;
    local_8c = fVar10;
    fVar15 = fVar10;
    if (*(char *)(param_1 + 0x512) == '\0') {
      pfVar7 = (float *)func_00520FC0();
      func_00115C70(&local_90,(float *)(param_1 + 0x3d0),pfVar7);
      local_8c = fVar10;
      func_0068A3EC(&local_90,fparam_0_00);
      iVar6 = *DAT_0035fe50;
      fVar13 = local_90;
      fVar15 = local_88;
      if ((iVar6 != 0) &&
         (bVar3 = func_00556B7C(iVar6), fVar13 = local_90, fVar15 = local_88, !bVar3)) {
        func_004D80A4(&fStack_84,**(uint **)(iVar6 + 0x24),fparam_0);
        local_80[0] = fVar10;
        func_00115C54(&local_90,&local_90,&fStack_84);
        fVar13 = local_90;
        fVar15 = local_88;
      }
    }
    local_88 = fVar15;
    local_90 = fVar13;
    iVar6 = func_0052FBA0(*piVar2 + 0x3dbbc,*(uint *)(param_1 + 0x50));
    if (iVar6 != 0) {
      iVar6 = *(int *)(*(int *)(*(int *)(iVar6 + 0x40c) + 0x24) + 0x14) +
              *(int *)(iVar6 + 0xb88) * 0x30;
      local_64 = *(float *)(iVar6 + 0xc);
      local_60 = *(float *)(iVar6 + 0x1c);
      local_5c = *(float *)(iVar6 + 0x2c);
    }
    func_00115C70(&fStack_84,&local_64,(float *)(param_1 + 0x3d0));
    local_80[0] = fVar10;
    func_0068A3EC(&fStack_84,DAT_0035fe38);
    func_00115C54(&local_90,&local_90,&fStack_84);
    func_00115DC8(&local_90);
    func_00115D70(&local_90,&local_90,*(float *)(param_1 + 0x514));
    iVar6 = func_0068C690(&local_90);
    *(int *)(param_1 + 1000) = iVar6;
    *(float *)(param_1 + 0x3dc) = local_90;
    *(float *)(param_1 + 0x3e0) = local_8c;
    *(float *)(param_1 + 0x3e4) = local_88;
    fVar13 = func_00548CB4(iVar5);
    *(float *)(param_1 + 0x518) = fVar13 + DAT_0035fe3c;
    if (*(char *)(param_1 + 0x512) != '\0') {
      iVar5 = *DAT_0035fe40;
      if (*(short *)(param_1 + 0x2e) != 0) {
        iVar5 = -iVar5;
      }
      *(int *)(param_1 + 1000) = iVar5 + *(int *)(param_1 + 1000);
    }
  }
  fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x504),(byte)(in_fpscr >> 0x15) & 3)
  ;
  local_80[3] = ALBW_AS_F32(*(undefined4 *)(DAT_0035fe48 + 0xe0));
  local_80[0] = *(float *)(DAT_0035fe48 + 0xd4);
  local_80[1] = ALBW_AS_F32(*(undefined4 *)(DAT_0035fe48 + 0xd8));
  local_80[2] = ALBW_AS_F32(*(undefined4 *)(DAT_0035fe48 + 0xdc));
  uVar8 = in_fpscr & 0xfffffff | (uint)(fVar13 < DAT_0035fe44) << 0x1f |
          (uint)(fVar13 == DAT_0035fe44) << 0x1e;
  uVar12 = uVar8 | (uint)(NAN(fVar13) || NAN(DAT_0035fe44)) << 0x1c;
  bVar1 = (byte)(uVar8 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar12 >> 0x1c) & 1)) {
    fVar13 = DAT_0035fe44;
  }
  fVar13 = local_80[(int)fVar13];
  *(float *)(param_1 + 0x488) = fVar13;
  if (fVar13 == 0.0) {
    *(float *)(param_1 + 0x48c) = fVar10;
  }
  else {
    fVar13 = (float)VectorUnsignedToFloat(ALBW_AS_U32(fVar13),(byte)(uVar12 >> 0x15) & 3);
    *(float *)(param_1 + 0x48c) = fVar16 / fVar13;
  }
  *(undefined4 *)(param_1 + 0x484) = 0;
  uVar11 = DAT_0035fe4c;
  *(undefined4 *)(param_1 + 0x4b8) = 0x3c;
  *(undefined4 *)(param_1 + 0x4bc) = uVar11;
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0x3d8);
  if (*(char *)(param_1 + 0x511) == '\0') {
    iVar5 = func_004378FC(*(undefined4 *)(param_1 + 0x504));
    if ((iVar5 == *(int *)(param_1 + 0x500)) &&
       (uVar8 = func_00111A64((uint *)(*DAT_0035fe54 + 0x660)),
       (int)((ulonglong)uVar8 * 100 >> 0x20) < *(int *)(param_1 + 0x50c))) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 0x511) = uVar4;
  }
  if (*(int *)(param_1 + 0x47c) == 0) {
    if (*(int *)(param_1 + 0x344) == 0) {
      *(undefined4 *)(param_1 + 0x480) = 0;
      return;
    }
    func_004A1B9C((int *)local_80,*(int *)(param_1 + 0x344),(uint *)&DAT_0035fe58);
    *(float *)(param_1 + 0x47c) = local_80[0];
    *(float *)(param_1 + 0x480) = local_80[1];
    if (*(int *)(param_1 + 0x47c) == 0) {
      return;
    }
  }
  fVar15 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x508),(byte)(uVar12 >> 0x15) & 3);
  uVar9 = func_004378FC(*(undefined4 *)(param_1 + 0x504));
  fVar13 = DAT_0035fe64;
  uVar11 = DAT_0035fe60;
  fVar14 = (float)VectorSignedToFloat(uVar9,(byte)(uVar12 >> 0x15) & 3);
  fVar15 = fVar15 / fVar14;
  if ((fVar10 <= fVar15) && (fVar10 = fVar15, fVar16 < fVar15)) {
    fVar10 = fVar16;
  }
  local_58 = DAT_0035fe60;
  local_80[1] = DAT_0035fe64;
  local_80[2] = ALBW_AS_F32(DAT_0035fe60);
  local_50 = DAT_0035fe6c;
  local_4c = DAT_0035fe64;
  fStack_48 = DAT_0035fe68;
  if (*(char *)(param_1 + 0x511) == '\0') {
    local_80[0] = fparam_0;
    local_80[3] = fVar16;
    local_60 = fparam_0;
    local_5c = fparam_0_00;
    local_54 = fVar16;
    local_44 = fVar16;
    if ((int)ALBW_AS_U32(fVar10) < 0x3f000000) {
      func_0049C154((float *)(param_1 + 0x4f0),&local_60,local_80,fVar10 * DAT_0035fe64);
    }
    else {
      func_0049C154((float *)(param_1 + 0x4f0),local_80,&local_50,
                    (fVar10 - DAT_0035fe68) * DAT_0035fe64);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4f0) = DAT_0035ff2c;
    *(float *)(param_1 + 0x4f4) = fVar13;
    *(undefined4 *)(param_1 + 0x4f8) = uVar11;
    *(float *)(param_1 + 0x4fc) = fVar16;
  }
  fVar10 = *(float *)(param_1 + 0x47c);
  if ((fVar10 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar10) + 0x1c) == *(int *)(param_1 + 0x480))) {
    *(undefined4 *)((int)ALBW_AS_U32(fVar10) + 0x28) = *(undefined4 *)(param_1 + 0x4f0);
    *(undefined4 *)((int)ALBW_AS_U32(fVar10) + 0x2c) = *(undefined4 *)(param_1 + 0x4f4);
    *(undefined4 *)((int)ALBW_AS_U32(fVar10) + 0x30) = *(undefined4 *)(param_1 + 0x4f8);
    *(uint *)((int)ALBW_AS_U32(fVar10) + 0x3c) = *(uint *)((int)ALBW_AS_U32(fVar10) + 0x3c) | 0x10;
  }
  return;
}

