/* compilefix: func_004FE11C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/004/func_004FE11C.c): 1 inlined atan2Idx copies replaced by
 * albw_atan2_inline (tools/atan2_inline_fix.py, BOOT_LOG 160d). */
int albw_atan2_inline(float a, float b);
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004905E0(float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_00521018(int param_1);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0058A7D4(void);
extern float DAT_004fe3f8;
extern float DAT_004fe3fc;
extern int DAT_004fe400;
extern float DAT_004fe404;
extern int DAT_004fe408;
extern undefined4 DAT_004fe40c;
extern float DAT_004fe410;
extern undefined4 DAT_004fe414;
extern int *DAT_004fe418;
extern undefined4 DAT_004fe41c;
extern float DAT_004fe420;
extern uint DAT_004fe424;
extern float DAT_004fe428;
extern float DAT_004fe59c;
extern float DAT_004fe5a0;

// USA 004FE11C <- EU 004FE0F4 (Ghidra, non-matching)
// GLOBAL DAT_004fe3f8 float
// GLOBAL DAT_004fe3fc float
// GLOBAL DAT_004fe400 int
// GLOBAL DAT_004fe404 float
// GLOBAL DAT_004fe408 int
// GLOBAL DAT_004fe40c undefined4
// GLOBAL DAT_004fe410 float
// GLOBAL DAT_004fe414 undefined4
// GLOBAL DAT_004fe418 int *
// GLOBAL DAT_004fe41c undefined4
// GLOBAL DAT_004fe420 float
// GLOBAL DAT_004fe424 uint
// GLOBAL DAT_004fe428 float
// GLOBAL DAT_004fe59c float
// GLOBAL DAT_004fe5a0 float

void func_004FE11C(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  iVar3 = *(int *)(param_1 + 0x8ec);
  fVar12 = DAT_004fe3f8;
  if (iVar3 == 0) {
    fVar13 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x3d0);
    fVar11 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x3d8);
    fVar10 = DAT_004fe404;
    if ((DAT_004fe400 < (int)ALBW_AS_U32((fVar13 * fVar13 + fVar11 * fVar11))) &&
       (iVar3 = func_005211F4(param_1,DAT_004fe404,DAT_004fe3f8), iVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x8ec) = 1;
    }
    iVar3 = func_005211F4(param_1,fVar10,fVar12);
    if (iVar3 == 0) {
LAB_004fe254:
      *(undefined4 *)(param_1 + 0x8ec) = 3;
    }
  }
  else if (iVar3 == 1) {
    iVar3 = func_005211F4(param_1,DAT_004fe3fc,DAT_004fe3f8);
    if (iVar3 == 0) {
      fVar10 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x3d0);
      fVar11 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x3d8);
      if ((int)ALBW_AS_U32((fVar10 * fVar10 + fVar11 * fVar11)) < 0x42000000) goto LAB_004fe254;
    }
    else {
LAB_004fe204:
      *(undefined4 *)(param_1 + 0x8ec) = 0;
    }
  }
  else if (iVar3 == 2) {
    iVar3 = func_005211F4(param_1,DAT_004fe3fc,DAT_004fe3f8);
    if (iVar3 != 0) goto LAB_004fe204;
    bVar2 = func_00521018(param_1);
    if ((bVar2) ||
       (fVar10 = *(float *)(param_1 + 0x8e0) - *(float *)(param_1 + 0x3d0),
       fVar11 = *(float *)(param_1 + 0x8e8) - *(float *)(param_1 + 0x3d8),
       (int)ALBW_AS_U32((fVar10 * fVar10 + fVar11 * fVar11)) < DAT_004fe408)) goto LAB_004fe254;
  }
  iVar3 = *(int *)(param_1 + 0x8ec);
  uVar14 = CONCAT44(DAT_004fe40c,fVar12);
  if (iVar3 == 0) {
    uVar14 = CONCAT44(DAT_004fe41c,fVar12);
    pfVar4 = *(float **)(*DAT_004fe418 + 0x1c);
    local_38 = *pfVar4;
    local_34 = pfVar4[1];
    local_30 = pfVar4[2];
    fVar10 = DAT_004fe420;
  }
  else {
    fVar10 = DAT_004fe410;
    if (iVar3 == 1) {
      local_38 = *(float *)(param_1 + 8);
      local_34 = *(float *)(param_1 + 0xc);
      local_30 = *(float *)(param_1 + 0x10);
      fVar11 = local_38 - *(float *)(param_1 + 0x3d0);
      fVar13 = local_30 - *(float *)(param_1 + 0x3d8);
      fVar11 = fVar11 * fVar11 + fVar13 * fVar13;
    }
    else {
      if (iVar3 != 2) {
        if (iVar3 == 3) {
          puVar5 = (uint *)func_0058A7D4();
          uVar9 = DAT_004fe424;
          uVar6 = func_00111A64(puVar5);
          func_004D80A4(&local_38,(uint)((ulonglong)uVar9 * (ulonglong)uVar6 >> 0x20),DAT_004fe428);
          local_34 = ALBW_AS_F32(uVar14);
          func_00115C54(&local_38,&local_38,(float *)(param_1 + 8));
          *(float *)(param_1 + 0x8e0) = local_38;
          *(float *)(param_1 + 0x8e4) = local_34;
          *(float *)(param_1 + 0x8e8) = local_30;
          *(undefined4 *)(param_1 + 0x8ec) = 2;
        }
        goto LAB_004fe390;
      }
      local_38 = *(float *)(param_1 + 0x8e0);
      local_34 = *(float *)(param_1 + 0x8e4);
      local_30 = *(float *)(param_1 + 0x8e8);
      fVar11 = local_38 - *(float *)(param_1 + 0x3d0);
      fVar13 = local_30 - *(float *)(param_1 + 0x3d8);
      fVar11 = fVar11 * fVar11 + fVar13 * fVar13;
    }
    if ((int)ALBW_AS_U32(fVar11) < 0x3f800000) {
      uVar14 = CONCAT44(DAT_004fe414,fVar12);
    }
  }
LAB_004fe390:
  func_00115C70(&local_2c,&local_38,(float *)(param_1 + 0x3d0));
  fVar12 = ALBW_AS_F32(uVar14);
  uVar9 = in_fpscr & 0xfffffff;   /* rounding-mode bits, still read below */
  iVar3 = albw_atan2_inline(local_24,local_2c);   /* inlined atan2Idx (atan2_inline_fix) */
  fVar12 = (float)VectorSignedToFloat(iVar3 - *(int *)(param_1 + 1000),(byte)(uVar9 >> 0x15) & 3);
  fVar12 = fVar12 * DAT_004fe59c;
  *(int *)(param_1 + 0x4fc) = (int)fVar12;
  func_004D80A4(&local_2c,*(int *)(param_1 + 1000) + (int)fVar12,ALBW_AS_F32(((ulonglong)uVar14 >> 0x20)))
  ;
  fVar11 = ALBW_AS_F32(uVar14);
  local_28 = fVar11;
  func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_004fe5a0);
  func_00115C54((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),&local_2c);
  fVar12 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar12);
  fVar12 = SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
                *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4));
  bVar2 = fVar12 < fVar11;
  bVar7 = fVar12 == fVar11;
  bVar8 = NAN(fVar12) || NAN(fVar11);
  if (!bVar7 && !bVar2) {
    bVar2 = fVar12 < fVar10;
    bVar7 = fVar12 == fVar10;
    bVar8 = NAN(fVar12) || NAN(fVar10);
  }
  if (!bVar7 && bVar2 == bVar8) {
    func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),fVar10 / fVar12);
  }
  return;
}

