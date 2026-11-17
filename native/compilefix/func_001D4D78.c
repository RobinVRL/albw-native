/* compilefix: func_001D4D78, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/001/func_001D4D78.c) with inlined two-sided approaches
 * restored (tools/approach_fix.py, BOOT_LOG 150). */
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001D4854(int param_1,undefined4 param_2,float fparam_0);
extern int func_001D4AE8(int param_1,undefined4 param_2,float fparam_0);
extern int func_001DDDE8(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_00361434(int param_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern float DAT_001d5084;
extern float DAT_001d5088;
extern float DAT_001d508c;
extern int *DAT_001d5090;
extern int *DAT_001d5094;
extern float DAT_001d5098;
extern float DAT_001d509c;
extern int DAT_001d50a0;
extern float DAT_001d50a4;
extern float DAT_001d50a8;
extern float DAT_001d50ac;
extern float DAT_001d50b0;
extern undefined4 DAT_001d50b4;
extern int DAT_001d50b8;
extern float *DAT_001d51d4;
extern undefined4 DAT_001d51d8;
extern float DAT_001d51dc;
extern float DAT_001d51e0;
extern int *DAT_001d51e4;

// USA 001D4D78 <- EU 001D4D78 (Ghidra, non-matching)
// GLOBAL DAT_001d5084 float
// GLOBAL DAT_001d5088 float
// GLOBAL DAT_001d508c float
// GLOBAL DAT_001d5090 int *
// GLOBAL DAT_001d5094 int *
// GLOBAL DAT_001d5098 float
// GLOBAL DAT_001d509c float
// GLOBAL DAT_001d50a0 int
// GLOBAL DAT_001d50a4 float
// GLOBAL DAT_001d50a8 float
// GLOBAL DAT_001d50ac float
// GLOBAL DAT_001d50b0 float
// GLOBAL DAT_001d50b4 undefined4
// GLOBAL DAT_001d50b8 int
// GLOBAL DAT_001d51d4 float *
// GLOBAL DAT_001d51d8 undefined4
// GLOBAL DAT_001d51dc float
// GLOBAL DAT_001d51e0 float
// GLOBAL DAT_001d51e4 int *

/* WARNING: Removing unreachable block (ram,0x001d4f3c) */
/* WARNING: Removing unreachable block (ram,0x001d4f40) */
/* WARNING: Removing unreachable block (ram,0x001d4f50) */

#ifndef ALBW_APPROACH_DEFINED
#define ALBW_APPROACH_DEFINED
/* inlined two-sided approach (tools/approach_fix.py, BOOT_LOG 150): v -> t by s, no overshoot */
static float albw_approach(float v, float t, float s) {
    float n;
    if (v < t) { n = v + s; return (t <= n || v > n) ? t : n; }
    if (v > t) { n = v - s; if (n <= t) return t; return n <= v ? n : t; }
    return v;
}
#endif
void func_001D4D78(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fparam_0;
  float fparam_0_00;
  float fparam_0_01;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(float *)(albw_frame + 0x0))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x8))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define fStack_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x30))
  fVar11 = DAT_001d50b0;
  fparam_0_01 = DAT_001d50ac;
  fVar10 = DAT_001d50a4;
  fparam_0_00 = DAT_001d5098;
  piVar3 = DAT_001d5094;
  piVar2 = DAT_001d5090;
  fVar9 = DAT_001d508c;
  fparam_0 = DAT_001d5088;
  fVar13 = DAT_001d5084;
  piVar7 = (int *)(param_1 + 0x494);
  cVar1 = *(char *)(param_1 + 0x4c1);
  if (cVar1 == '\x05') {
    pfVar5 = (float *)(DAT_001d50a0 + (*(uint *)(param_1 + 0x498) >> 0x18) * 0x10);
    fVar9 = (float)VectorUnsignedToFloat
                             (*(uint *)(param_1 + 0x498) & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x3d0) =
         *(float *)(param_1 + 0x3d0) + (*pfVar5 + pfVar5[1] * fVar9 * DAT_001d509c) * DAT_001d50a4;
    fVar9 = *(float *)(param_1 + 0x3d4) +
            (*(float *)(param_1 + 0x46c) - *(float *)(param_1 + 0x3d4)) * fVar10;
    *(float *)(param_1 + 0x3d4) = fVar9;
    fVar9 = fVar9 - *(float *)(param_1 + 0x46c);
    if (fVar9 <= fVar13) {
      fVar9 = -fVar9;
    }
    if (0x3f000000 < (int)ALBW_AS_U32(fVar9)) {
      return;
    }
    func_001D4854(param_1,3,fparam_0);
    func_001D4AE8(param_1,1,fparam_0);
    *(float *)(param_1 + 0x484) = fVar13;
    *(undefined4 *)(param_1 + 0x494) = 0;
    *(undefined1 *)(param_1 + 0x4c1) = 6;
    return;
  }
  piVar8 = DAT_001d5094 + -1;
  if (cVar1 == '\x06') {
    fVar12 = *(float *)(param_1 + 0x484);
    fVar12 = fVar12 + -fVar12 * DAT_001d50a8;
    *(float *)(param_1 + 0x484) = fVar12;
    pfVar5 = (float *)(param_1 + 0x480);
    fVar14 = *pfVar5;
    fVar10 = (fVar12 - fVar14) * fparam_0_00;
    if (fVar10 <= fVar13) {
      fVar10 = -fVar10;
    }
    if ((fVar11 <= fVar10) && (fVar11 = fVar10, fparam_0_01 < fVar10)) {
      fVar11 = fparam_0_01;
    }
    *pfVar5 = albw_approach(fVar14, fVar12, fVar11);   /* two-sided approach restored (approach_fix) */
    func_0051D2F4(piVar7,0,*piVar8,*piVar3,fparam_0_01);
    func_0051D2F4((int *)(param_1 + 0x490),*piVar7,*piVar8,*piVar3,fparam_0_01);
    iVar6 = *(int *)(*(int *)(param_1 + 0x4bc) + 0x14);
    if (*(char *)(iVar6 + 0x1c) == '\0') {
      if (*(float *)(iVar6 + 0x10) < fVar13) {
        if (*(float *)(iVar6 + 8) <= fVar13) goto LAB_001d50bc;
      }
      else if (*(float *)(iVar6 + 8) == *(float *)(iVar6 + 0x14)) {
LAB_001d50bc:
        func_001D4854(param_1,2,fparam_0);
        func_001D4AE8(param_1,0,fparam_0);
        pfVar5 = DAT_001d51d4;
        *(float *)(param_1 + 0x468) = *(float *)(param_1 + 0x474) + *DAT_001d51d4;
        uVar4 = DAT_001d51d8;
        *(float *)(param_1 + 0x46c) = *(float *)(param_1 + 0x46c) + pfVar5[1];
        *(undefined4 *)(param_1 + 0x488) = uVar4;
        *(undefined4 *)(param_1 + 0x3e0) = uVar4;
        *(undefined1 *)(param_1 + 0x4c1) = 7;
        goto LAB_001d5114;
      }
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x4bc) + 0x14);
    fVar13 = *(float *)(iVar6 + 0xc);
    if (*(float *)(iVar6 + 8) < fVar13) {
      if (((fVar13 < *(float *)(iVar6 + 0x14)) && (fVar13 < fVar9)) &&
         (fVar9 <= *(float *)(iVar6 + 0x14))) goto LAB_001d505c;
    }
    else if (fVar9 <= fVar13) {
      return;
    }
    if (fVar9 <= *(float *)(iVar6 + 8)) {
LAB_001d505c:
      func_00361434(*piVar2);
      iVar6 = DAT_001d50b8;
      *(undefined4 *)(param_1 + 0x484) = DAT_001d50b4;
      *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(iVar6 + 0x14);
      return;
    }
  }
  else {
    if (cVar1 == '\a') {
LAB_001d5114:
      func_0051D2F4(piVar7,0,*piVar8,*piVar3,fparam_0_00);
      func_0051D2F4((int *)(param_1 + 0x490),*piVar7,*piVar8,*piVar3,fparam_0_00);
      local_60 = fVar13;
      fStack_5c = fparam_0;
      local_58 = fVar13;
      func_00115C54(&local_48,(float *)(param_1 + 0x3d0),&local_60);
      local_54 = local_48;
      uStack_50 = uStack_44;
      uStack_4c = uStack_40;
      func_001DDDE8(*piVar2,&local_54,2,DAT_001d51dc);
      local_70 = *(float *)(param_1 + 0x3d0);
      uStack_6c = *(undefined4 *)(param_1 + 0x3d4);
      uStack_68 = *(undefined4 *)(param_1 + 0x3d8);
      iVar6 = func_0051E6D0(*DAT_001d51e4,&local_70,DAT_001d51e0);
      if (iVar6 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x4a0) = 10;
      *(float *)(param_1 + 0x4a4) = fparam_0_00;
      *(undefined4 *)(param_1 + 0x49c) = 0;
      *(undefined1 *)(param_1 + 0x4c1) = 8;
    }
    else if (cVar1 != '\b') {
      return;
    }
    if (*(uint *)(param_1 + 0x49c) < *(uint *)(param_1 + 0x4a0)) {
      *(uint *)(param_1 + 0x49c) = *(uint *)(param_1 + 0x49c) + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
  }
  return;
}

