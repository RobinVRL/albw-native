#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0015AD54(int param_1,undefined4 param_2,uint param_3,float fparam_0);
extern int func_0036BE78();
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int func_0054F9E4(int param_1,uint param_2);
extern int func_0054FA10(int param_1,uint param_2);
extern int func_0054FAC0(int param_1,uint param_2);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_0015b308;
extern float DAT_0015b30c;
extern float DAT_0015b310;
extern int DAT_0015b314;
extern float DAT_0015b318;
extern undefined4 DAT_0015b31c;
extern float *DAT_0015b320;
extern float DAT_0015b324;
extern float DAT_0015b328;
extern undefined DAT_0015b32c;
extern float DAT_0015b338;
extern float DAT_0015b33c;
extern int DAT_0015b4f4;
extern char s__ToImage_0015b32f[];
extern char s_cf_0015b32f[];
extern undefined4 _DAT_0015b32c;

// USA 0015AF20 <- EU 0015AF24 (Ghidra, non-matching)
// GLOBAL DAT_0015b308 float
// GLOBAL DAT_0015b30c float
// GLOBAL DAT_0015b310 float
// GLOBAL DAT_0015b314 int
// GLOBAL DAT_0015b318 float
// GLOBAL DAT_0015b31c undefined4
// GLOBAL DAT_0015b320 float *
// GLOBAL DAT_0015b324 float
// GLOBAL DAT_0015b328 float
// GLOBAL DAT_0015b32c undefined
// GLOBAL DAT_0015b338 float
// GLOBAL DAT_0015b33c float
// GLOBAL DAT_0015b4f4 int
// GLOBAL s_cf_0015b32f string

/* WARNING: Removing unreachable block (ram,0x0015b348) */
/* WARNING: Removing unreachable block (ram,0x0015b350) */
/* WARNING: Removing unreachable block (ram,0x0015b360) */
/* WARNING: Removing unreachable block (ram,0x0015b3e4) */
/* WARNING: Removing unreachable block (ram,0x0015b3e8) */
/* WARNING: Removing unreachable block (ram,0x0015b3ec) */
/* WARNING: Removing unreachable block (ram,0x0015b3fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0015AF20(int param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_d0 (*(float *)(albw_frame + 0x0))
  #define local_cc (*(float *)(albw_frame + 0x4))
  #define local_c8 (*(float *)(albw_frame + 0x8))
  #define local_c4 (*(float * *)(albw_frame + 0xc))
  #define local_b4 (*(float *)(albw_frame + 0x1c))
  #define fStack_b0 (*(float *)(albw_frame + 0x20))
  #define local_ac (*(float *)(albw_frame + 0x24))
  #define local_a8 (*(undefined4 * *)(albw_frame + 0x28))
  #define local_a0 (*(uint *)(albw_frame + 0x30))
  #define local_9c (*(int *)(albw_frame + 0x34))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x38))
  #define local_94 (*(float *)(albw_frame + 0x3c))
  #define local_90 (*(float *)(albw_frame + 0x40))
  #define local_8c (*(float *)(albw_frame + 0x44))
  #define local_88 (*(float *)(albw_frame + 0x48))
  #define fStack_84 (*(float *)(albw_frame + 0x4c))
  #define local_80 (*(float *)(albw_frame + 0x50))
  #define afStack_78 ((float *)(albw_frame + 0x58))
  #define local_48 (*(int *)(albw_frame + 0x88))
  #define iStack_44 (*(int *)(albw_frame + 0x8c))
  fVar13 = DAT_0015b308;
  if (*(char *)(param_1 + 0x8c0) == '\x1a') {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    uVar19 = func_0058AB74(param_1);
    if (((int)uVar19 == 3) && (iVar6 = func_0058A8F0(param_1), iVar6 != 0)) {
      func_0015AD54(param_1,4,0xffffffff,fVar13);
    }
  }
  iVar6 = param_1 + 0x9b4;
  pfVar7 = (float *)func_0054F9E4(iVar6,*(uint *)(param_1 + 0x904));
  local_d0 = *pfVar7;
  local_cc = pfVar7[1];
  local_c8 = pfVar7[2];
  pfVar7 = (float *)func_0054FA10(iVar6,*(uint *)(param_1 + 0x904));
  local_b4 = *pfVar7;
  fStack_b0 = pfVar7[1];
  local_ac = pfVar7[2];
  uVar19 = CONCAT44(fVar13,DAT_0015b30c);
  if (bVar1) {
    func_00115D70(&local_b4,&local_b4,DAT_0015b310);
  }
  else {
    func_00115D70(&local_b4,&local_b4,DAT_0015b30c);
  }
  func_00115C54(&local_d0,&local_d0,&local_b4);
  fVar13 = DAT_0015b324;
  local_a8 = (undefined4 *)(param_1 + 0x8bc);
  bVar10 = true;
  if (bVar1) {
    if (*(int *)(param_1 + 0xf94) == 0) {
      pfVar7 = (float *)func_00520FC0();
      uVar4 = DAT_0015b31c;
      fVar13 = *pfVar7 - local_d0;
      if ((int)ALBW_AS_U32(SQRT(fVar13 * fVar13 + (pfVar7[2] - local_c8) * (pfVar7[2] - local_c8))) <
          DAT_0015b314) {
        if (local_d0 < *pfVar7) {
          local_d0 = local_d0 - DAT_0015b318;
        }
        else {
          local_d0 = local_d0 + DAT_0015b318;
        }
      }
      fVar14 = DAT_0015b320[1];
      fVar13 = DAT_0015b320[2];
      *(float *)(param_1 + 0xf68) = local_d0 + *DAT_0015b320;
      *(float *)(param_1 + 0xf6c) = *(float *)(param_1 + 0xf78) + fVar14;
      *(float *)(param_1 + 0xf70) = local_c8 + fVar13;
      *(undefined4 *)(param_1 + 0xf94) = uVar4;
      *(float *)(param_1 + 0xfbc) = local_d0;
      *(float *)(param_1 + 0xfc0) = local_cc;
      *(float *)(param_1 + 0xfc4) = local_c8;
    }
    bVar10 = 0x1e < *(int *)(param_1 + 0x8bc);
    func_0036BE78(param_1 + 0xe60);
  }
  else {
    *(float *)(param_1 + 0xfbc) = local_d0;
    *(float *)(param_1 + 0xfc0) = local_cc;
    *(float *)(param_1 + 0xfc4) = local_c8;
    fVar14 = ALBW_AS_F32(_DAT_0015b32c);
    if ((*(uint *)(param_1 + 0x8fc) == 0) || (uVar9 = *(uint *)(param_1 + 0x8f8), uVar9 == 0)) {
      fVar11 = ALBW_AS_F32(((ulonglong)uVar19 >> 0x20));
    }
    else {
      fVar11 = fVar13;
      if (uVar9 < *(uint *)(param_1 + 0x8fc)) {
        fVar11 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
        fVar11 = fVar11 * *(float *)(param_1 + 0x900);
      }
    }
    *(float *)(param_1 + 0x4f0) = fVar13 + fVar11 * DAT_0015b328;
    fVar13 = fVar14;
    if ((*(ushort *)(param_1 + 0x2e) & 0xff) != 0) {
      fVar13 = ALBW_AS_F32(uVar19);
    }
    *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0xc) + fVar13 * fVar11;
    if (*(char *)(param_1 + 0x908) == '\0') {
      iVar8 = 10;
    }
    else {
      iVar8 = 0xc;
    }
    if (*(int *)(param_1 + 0x8e0) == iVar8) {
      pfVar7 = (float *)func_0054F9E4(iVar6,*(uint *)(param_1 + 0x904));
      local_94 = *pfVar7;
      local_8c = pfVar7[2];
      if ((*(ushort *)(param_1 + 0x2e) & 0xff) != 0) {
        fVar14 = ALBW_AS_F32(uVar19);
      }
      local_90 = fVar14 + *(float *)(param_1 + 0xc);
      pfVar7 = (float *)func_0054FA10(iVar6,*(uint *)(param_1 + 0x904));
      local_88 = *pfVar7;
      fStack_84 = pfVar7[1];
      local_80 = pfVar7[2];
      if (*(int *)(param_1 + 0x344) == 0) {
        local_48 = 0;
        iStack_44 = 0;
      }
      else {
        func_004A1B9C(&local_48,*(int *)(param_1 + 0x344),(uint *)(s__ToImage_0015b32f + 1));
      }
      local_c4 = afStack_78;
      local_9c = func_0068C690(&local_88);
      local_a0 = 0;
      uStack_98 = 0;
      func_0049216C(local_c4,&local_a0,&local_94);
      if ((local_48 != 0) && (*(int *)(local_48 + 0x1c) == iStack_44)) {
        func_004A2D1C(local_48,afStack_78);
      }
    }
  }
  fVar14 = DAT_0015b33c;
  fVar13 = DAT_0015b338;
  fVar15 = *(float *)(param_1 + 0xfbc);
  fVar16 = *(float *)(param_1 + 0x3d0);
  fVar17 = ALBW_AS_F32(uVar19);
  fVar11 = (fVar15 - fVar16) * DAT_0015b338;
  fVar18 = ALBW_AS_F32(((ulonglong)uVar19 >> 0x20));
  if (fVar11 <= fVar18) {
    fVar11 = -fVar11;
  }
  fVar12 = DAT_0015b33c;
  if ((DAT_0015b33c <= fVar11) && (fVar12 = fVar11, fVar17 < fVar11)) {
    fVar12 = fVar17;
  }
  fVar12 = fVar16 + fVar12;
  if ((fVar15 <= fVar12) || (fVar12 < fVar16)) {
    bVar3 = 1;
    *(float *)(param_1 + 0x3d0) = fVar15;
  }
  else {
    bVar3 = 0;
    *(float *)(param_1 + 0x3d0) = fVar12;
  }
  fVar11 = *(float *)(param_1 + 0xfc4);
  fVar15 = *(float *)(param_1 + 0x3d8);
  fVar13 = (fVar11 - fVar15) * fVar13;
  if (fVar13 <= fVar18) {
    fVar13 = -fVar13;
  }
  if ((fVar14 <= fVar13) && (fVar14 = fVar13, fVar17 < fVar13)) {
    fVar14 = fVar17;
  }
  fVar14 = fVar15 + fVar14;
  if ((fVar11 <= fVar14) || (fVar14 < fVar15)) {
    bVar2 = 1;
    *(float *)(param_1 + 0x3d8) = fVar11;
  }
  else {
    bVar2 = 0;
    *(float *)(param_1 + 0x3d8) = fVar14;
  }
  iVar8 = func_0054FAC0(iVar6,*(uint *)(param_1 + 0x904));
  bVar5 = func_0051D27C((int *)(param_1 + 1000),iVar8,DAT_0015b4f4);
  if ((((bool)(bVar1 & bVar10)) ||
      ((*(uint *)(param_1 + 0x8e4) <= *(uint *)(param_1 + 0x8e0) &&
       (*(uint *)(param_1 + 0x8fc) <= *(uint *)(param_1 + 0x8f8))))) &&
     ((bool)(bVar3 & bVar2) && bVar5)) {
    iVar6 = func_0054FAC0(iVar6,*(uint *)(param_1 + 0x904));
    *(int *)(param_1 + 0x90c) = iVar6 + -0x80000000;
    if (bVar1) {
      return func_0065836C(local_a8,0x1b);
    }
    return func_0065836C(local_a8,6);
  }
  fVar13 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar13);
  if (*(uint *)(param_1 + 0x8f8) < *(uint *)(param_1 + 0x8fc)) {
    *(uint *)(param_1 + 0x8f8) = *(uint *)(param_1 + 0x8f8) + 1;
  }
  return 0;
}

