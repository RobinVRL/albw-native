#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern float func_0044A2D8(int param_1,float *param_2,float *param_3,float *param_4);
extern int func_004905E0(float fparam_0);
extern undefined4 DAT_0044a700;
extern int DAT_0044a704;
extern undefined4 DAT_0044a708;
extern undefined4 DAT_0044a70c;
extern float DAT_0044a710;
extern undefined4 DAT_0044a714;
extern undefined4 DAT_0044a718;
extern undefined4 DAT_0044a71c;
extern float DAT_0044a720;
extern int DAT_0044a724;
extern float DAT_0044a728;
extern int DAT_0044a72c;
extern float DAT_0044a76c;

// USA 0044A374 <- EU 0044A34C (Ghidra, non-matching)
// GLOBAL DAT_0044a700 undefined4
// GLOBAL DAT_0044a704 int
// GLOBAL DAT_0044a708 undefined4
// GLOBAL DAT_0044a70c undefined4
// GLOBAL DAT_0044a710 float
// GLOBAL DAT_0044a714 undefined4
// GLOBAL DAT_0044a718 undefined4
// GLOBAL DAT_0044a71c undefined4
// GLOBAL DAT_0044a720 float
// GLOBAL DAT_0044a724 int
// GLOBAL DAT_0044a728 float
// GLOBAL DAT_0044a72c int
// GLOBAL DAT_0044a76c float

void func_0044A374(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r1;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(float *)(albw_frame + 0x0))
  #define local_8c (*(float *)(albw_frame + 0x4))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c ((float *)(albw_frame + 0x14))
  #define local_60 (*(float *)(albw_frame + 0x30))
  #define local_5c (*(float *)(albw_frame + 0x34))
  #define local_58 (*(int *)(albw_frame + 0x38))
  #define iStack_2c (*(int *)(albw_frame + 0x64))
  #define local_28 (*(float * *)(albw_frame + 0x68))
  iVar6 = 0;
  local_90 = *param_2;
  local_8c = param_2[1];
  uVar11 = DAT_0044a700;
  iStack_2c = param_1;
  local_28 = param_2;
  fVar7 = func_0044A2D8(param_1,&local_90,&local_80,&local_60);
  iVar1 = DAT_0044a704;
  if ((int)ALBW_AS_U32(fVar7) < DAT_0044a704) {
    uVar15 = func_00114608(DAT_0044a704 + 0xc100000,extraout_r1);
    fVar7 = DAT_0044a710;
    local_58 = (int)uVar15;
    uVar15 = CONCAT44(DAT_0044a714,uVar11);
    uVar13 = CONCAT44(DAT_0044a718,DAT_0044a70c);
    uVar12 = CONCAT44(DAT_0044a708,DAT_0044a71c);
    do {
      iVar6 = iVar6 + 1;
      fVar10 = ALBW_AS_F32(uVar13);
      if (local_80 == fVar10 && local_7c[0] == fVar10) {
        iVar2 = 0;
      }
      else if (local_80 < fVar10) {
        if (local_7c[0] < fVar10) {
          if (local_7c[0] < local_80) {
            iVar2 = func_004905E0(local_80 / local_7c[0]);
            iVar2 = -0x40000000 - iVar2;
          }
          else {
            iVar2 = func_004905E0(local_7c[0] / local_80);
            iVar2 = iVar2 + -0x80000000;
          }
        }
        else {
          fVar10 = -local_80;
          if (fVar10 < local_7c[0]) {
            iVar2 = func_004905E0(fVar10 / local_7c[0]);
            iVar2 = iVar2 + 0x40000000;
          }
          else {
            iVar2 = func_004905E0(local_7c[0] / fVar10);
            iVar2 = -0x80000000 - iVar2;
          }
        }
      }
      else if (local_7c[0] < fVar10) {
        fVar10 = -local_7c[0];
        if (local_80 < fVar10) {
          iVar2 = func_004905E0(local_80 / fVar10);
          iVar2 = iVar2 + -0x40000000;
        }
        else {
          iVar2 = func_004905E0(fVar10 / local_80);
          iVar2 = -iVar2;
        }
      }
      else if (local_80 < local_7c[0]) {
        iVar2 = func_004905E0(local_80 / local_7c[0]);
        iVar2 = 0x40000000 - iVar2;
      }
      else {
        iVar2 = func_004905E0(local_7c[0] / local_80);
      }
      uVar4 = (iVar2 + local_58 & 0xe0000000U) + 0xc0000000;
      func_00115154(local_7c,&local_80,uVar4);
      fVar10 = SQRT(local_80 * local_80 + local_7c[0] * local_7c[0]);
      if (ALBW_AS_F32(uVar13) < fVar10) {
        fVar10 = ALBW_AS_F32(uVar15) / fVar10;
        local_80 = local_80 * fVar10;
        local_7c[0] = local_7c[0] * fVar10;
      }
      local_90 = ALBW_AS_F32(((ulonglong)uVar15 >> 0x20));
      if ((local_90 <= local_60) &&
         (fVar10 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20)), local_90 = local_60, fVar10 < local_60)) {
        local_90 = fVar10;
      }
      uVar14 = (ulonglong)(uint)ALBW_AS_U32(DAT_0044a720);
      local_8c = ALBW_AS_F32(uVar12);
      if ((local_8c <= local_5c) && (local_8c = local_5c, DAT_0044a720 < local_5c)) {
        local_8c = DAT_0044a720;
      }
      iVar2 = 0;
      do {
        fVar10 = ALBW_AS_F32(((ulonglong)uVar12 >> 0x20));
        uVar3 = 0;
        do {
          if (uVar3 < *(uint *)(param_1 + 0x1ac)) {
            iVar5 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar3 * 4);
          }
          else {
            iVar5 = 0;
          }
          if (*(char *)(iVar5 + 0x6c) != '\0') {
            if (uVar3 < *(uint *)(param_1 + 0x1ac)) {
              iVar5 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar3 * 4);
            }
            else {
              iVar5 = 0;
            }
            fVar9 = local_90 - *(float *)(iVar5 + 0x90);
            fVar8 = local_8c - *(float *)(iVar5 + 0x94);
            fVar8 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
            if (fVar8 < fVar10) {
              fVar10 = fVar8;
            }
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 0x14);
        if (iVar1 <= (int)ALBW_AS_U32(fVar10)) break;
        uVar4 = uVar4 + 0x20000000;
        func_00115154(local_7c,&local_80,uVar4);
        fVar8 = SQRT(local_80 * local_80 + local_7c[0] * local_7c[0]);
        if (ALBW_AS_F32(uVar13) < fVar8) {
          fVar8 = ALBW_AS_F32(uVar15) / fVar8;
          local_80 = local_80 * fVar8;
          local_7c[0] = local_7c[0] * fVar8;
        }
        local_90 = local_60 + local_80;
        local_8c = local_5c + local_7c[0];
        if ((uint)ALBW_AS_U32(fVar7) < (uint)ALBW_AS_U32(local_90)) {
          local_90 = ALBW_AS_F32(((ulonglong)uVar15 >> 0x20));
        }
        else if (DAT_0044a724 < (int)ALBW_AS_U32(local_90)) {
          local_90 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
        }
        if ((uint)ALBW_AS_U32(DAT_0044a728) < (uint)ALBW_AS_U32(local_8c)) {
          local_8c = ALBW_AS_F32(uVar12);
        }
        else if (DAT_0044a72c < (int)ALBW_AS_U32(local_8c)) {
          local_8c = ALBW_AS_F32(uVar14);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 7);
      if (iVar1 <= (int)ALBW_AS_U32(fVar10)) break;
      local_90 = *local_28;
      local_8c = local_28[1];
      uVar15 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),ALBW_AS_F32(uVar15) + DAT_0044a76c);
    } while (iVar6 < 0x14);
    if (0 < iVar6) {
      *local_28 = local_90;
      local_28[1] = local_8c;
    }
  }
  return;
}

