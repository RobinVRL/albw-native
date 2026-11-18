#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0039DC1C(int param_1,int param_2,int param_3);
extern int func_0048B330(float *param_1,float *param_2,float *param_3,float fparam_0);
extern void func_0048B740(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_00491C08(float *param_1,float *param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00668934(undefined4 *param_1,undefined1 param_2);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int *DAT_0039dae8;
extern float DAT_0039daec;
extern float DAT_0039daf0;
extern int *DAT_0039daf4;
extern float DAT_0039daf8;
extern float DAT_0039dafc;
extern float DAT_0039db00;
extern undefined4 DAT_0039db04;
extern undefined4 DAT_0039db08;
extern float DAT_0039db0c;
extern float DAT_0039db10;
extern float DAT_0039db14;

// USA 0039D760 <- EU 0039D73C (Ghidra, non-matching)
// GLOBAL DAT_0039dae8 int *
// GLOBAL DAT_0039daec float
// GLOBAL DAT_0039daf0 float
// GLOBAL DAT_0039daf4 int *
// GLOBAL DAT_0039daf8 float
// GLOBAL DAT_0039dafc float
// GLOBAL DAT_0039db00 float
// GLOBAL DAT_0039db04 undefined4
// GLOBAL DAT_0039db08 undefined4
// GLOBAL DAT_0039db0c float
// GLOBAL DAT_0039db10 float
// GLOBAL DAT_0039db14 float

undefined4 func_0039D760(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  iVar2 = func_0052FBA0(*DAT_0039dae8 + 0x3dbbc,*(uint *)(param_1 + 0x50));
  local_48 = *(float *)(param_1 + 0x3d0);
  local_44 = *(float *)(param_1 + 0x3d4);
  local_40 = *(float *)(param_1 + 0x3d8);
  fVar9 = DAT_0039daec;
  if (*(int *)(param_1 + 0x40c) < 0x14) {
    fVar9 = (float)VectorSignedToFloat(0x14 - *(int *)(param_1 + 0x40c),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar9 = DAT_0039daec / fVar9;
  }
  fVar15 = DAT_0039daec;
  if (iVar2 != 0) {
    iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + 0x40c) + 0x24) + 0x14) +
            *(int *)(iVar2 + 0xb80) * 0x30;
    local_48 = *(float *)(iVar3 + 0xc);
    local_44 = *(float *)(iVar3 + 0x1c);
    local_40 = *(float *)(iVar3 + 0x2c);
    local_3c = *(float *)(iVar3 + 8);
    local_38 = *(undefined4 *)(iVar3 + 0x18);
    local_34 = *(undefined4 *)(iVar3 + 0x28);
    func_0068A3EC(&local_3c,DAT_0039daf0);
    func_00115C54(&local_48,&local_48,&local_3c);
  }
  fVar14 = DAT_0039dafc;
  fVar12 = DAT_0039daf8;
  iVar3 = *(int *)(param_1 + 0x4a0);
  pfVar7 = (float *)(param_1 + 0x52c);
  pfVar8 = (float *)(param_1 + 0x454);
  if (iVar3 == 0) {
    uVar4 = *(int *)(param_1 + 1000) + *DAT_0039daf4;
    *(uint *)(param_1 + 1000) = uVar4;
    func_0048B740(pfVar7,0,uVar4,0);
    uVar6 = *(uint *)(param_1 + 0x4f4);
    uVar4 = *(uint *)(param_1 + 0x4f0);
    if (uVar4 < uVar6) {
      uVar4 = uVar4 + 1;
      *(uint *)(param_1 + 0x4f0) = uVar4;
    }
    if (uVar6 != 0) {
      uVar4 = *(uint *)(param_1 + 0x4f0);
    }
    fVar10 = fVar14;
    if ((uVar6 != 0 && uVar4 != 0) && (fVar10 = fVar15, uVar4 < uVar6)) {
      fVar10 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * *(float *)(param_1 + 0x4f8);
    }
    fVar13 = fVar10 * fVar10 - fVar10;
    fVar11 = fVar13 * fVar10;
    fVar12 = fVar10 * fVar10 - fVar11 * fVar12;
    fVar15 = (fVar14 - fVar12 * fVar14) + fVar12 * fVar15 + (fVar11 - fVar13) * DAT_0039db00 +
             fVar11 * fVar14;
    *(float *)(param_1 + 0x3d0) = *pfVar8 + (*(float *)(param_1 + 0x460) - *pfVar8) * fVar15;
    *(float *)(param_1 + 0x3d4) =
         *(float *)(param_1 + 0x458) +
         (*(float *)(param_1 + 0x464) - *(float *)(param_1 + 0x458)) * fVar15;
    *(float *)(param_1 + 0x3d8) =
         *(float *)(param_1 + 0x45c) +
         (*(float *)(param_1 + 0x468) - *(float *)(param_1 + 0x45c)) * fVar15;
    if (uVar6 <= *(uint *)(param_1 + 0x4f0)) {
      func_0039DC1C(param_1,4,0x14);
      uVar1 = DAT_0039db04;
      *(undefined4 *)(param_1 + 0x4f4) = 0x14;
      *(undefined4 *)(param_1 + 0x4f8) = uVar1;
      *(undefined4 *)(param_1 + 0x4f0) = 0;
      *(int *)(param_1 + 0x4a0) = *(int *)(param_1 + 0x4a0) + 1;
    }
  }
  else if (iVar3 == 1) {
    uVar4 = *(int *)(param_1 + 1000) + *DAT_0039daf4;
    *(uint *)(param_1 + 1000) = uVar4;
    func_0048B740(pfVar7,0,uVar4,0);
    uVar4 = *(uint *)(param_1 + 0x4f0);
    if (uVar4 < *(uint *)(param_1 + 0x4f4)) {
      uVar4 = uVar4 + 1;
      *(uint *)(param_1 + 0x4f0) = uVar4;
    }
    if (*(uint *)(param_1 + 0x4f4) <= uVar4) {
      func_0039DC1C(param_1,4,0x50);
      uVar1 = DAT_0039db08;
      *(undefined4 *)(param_1 + 0x4f4) = 0x50;
      *(undefined4 *)(param_1 + 0x4f8) = uVar1;
      *(undefined4 *)(param_1 + 0x4f0) = 0;
      *pfVar8 = local_48;
      *(float *)(param_1 + 0x458) = local_44;
      *(float *)(param_1 + 0x45c) = local_40;
      *(int *)(param_1 + 0x4a0) = *(int *)(param_1 + 0x4a0) + 1;
    }
  }
  else if (iVar3 == 2) {
    uVar4 = *(int *)(param_1 + 1000) + *DAT_0039daf4;
    *(uint *)(param_1 + 1000) = uVar4;
    func_0048B740(pfVar7,0,uVar4,0);
    uVar4 = *(uint *)(param_1 + 0x4f0);
    uVar6 = *(uint *)(param_1 + 0x4f4);
    if (uVar4 < uVar6) {
      uVar4 = uVar4 + 1;
      *(uint *)(param_1 + 0x4f0) = uVar4;
    }
    if (uVar6 != 0) {
      uVar4 = *(uint *)(param_1 + 0x4f0);
    }
    fVar10 = fVar14;
    if ((uVar6 != 0 && uVar4 != 0) && (fVar10 = fVar15, uVar4 < uVar6)) {
      fVar10 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * *(float *)(param_1 + 0x4f8);
    }
    fVar13 = fVar10 * fVar10 - fVar10;
    fVar11 = fVar13 * fVar10;
    fVar12 = fVar10 * fVar10 - fVar11 * fVar12;
    fVar15 = (fVar14 - fVar12 * fVar14) + fVar12 * fVar15 + (fVar11 - fVar13) * fVar14 +
             fVar11 * fVar14;
    func_004D838C(pfVar8,&local_48,DAT_0039db14,DAT_0039db10,DAT_0039db0c);
    *(float *)(param_1 + 0x3d0) =
         *(float *)(param_1 + 0x460) + (*pfVar8 - *(float *)(param_1 + 0x460)) * fVar15;
    *(float *)(param_1 + 0x3d4) =
         *(float *)(param_1 + 0x464) +
         (*(float *)(param_1 + 0x458) - *(float *)(param_1 + 0x464)) * fVar15;
    *(float *)(param_1 + 0x3d8) =
         *(float *)(param_1 + 0x468) +
         (*(float *)(param_1 + 0x45c) - *(float *)(param_1 + 0x468)) * fVar15;
  }
  else if (iVar3 == 3) {
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0xb80);
      iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x40c) + 0x24) + 0x14);
      uVar4 = *(uint *)(param_1 + 0x4f0);
      if (uVar4 < *(uint *)(param_1 + 0x4f4)) {
        uVar4 = uVar4 + 1;
        *(uint *)(param_1 + 0x4f0) = uVar4;
      }
      iVar5 = *(uint *)(param_1 + 0x4f4) - uVar4;
      if (0 < iVar5) {
        fVar9 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = fVar15 / fVar9;
        func_00491C08(pfVar7,(float *)(iVar2 + iVar3 * 0x30));
        *(float *)(param_1 + 0x3d0) = *pfVar8 + (local_48 - *pfVar8) * fVar9;
        *(float *)(param_1 + 0x3d4) =
             *(float *)(param_1 + 0x458) + (local_44 - *(float *)(param_1 + 0x458)) * fVar9;
        *(float *)(param_1 + 0x3d8) =
             *(float *)(param_1 + 0x45c) + (local_40 - *(float *)(param_1 + 0x45c)) * fVar9;
      }
    }
    if (*(uint *)(param_1 + 0x4f4) <= *(uint *)(param_1 + 0x4f0)) {
      func_0039DC1C(param_1,0,0);
      func_00668934((undefined4 *)(param_1 + 0x40c),0);
    }
  }
  return func_0048B330((float *)(param_1 + 0x51c),(float *)(param_1 + 0x51c),pfVar7,fVar9);
}

