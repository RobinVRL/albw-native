/* compilefix: func_0017B378, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/001/func_0017B378.c) with inlined two-sided approaches
 * restored (tools/approach_fix.py, BOOT_LOG 150). */
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_0017b5f0;
extern float DAT_0017b5f4;
extern int *DAT_0017b5f8;
extern int *DAT_0017b5fc;
extern float DAT_0017b600;
extern int DAT_0017b604;
extern float DAT_0017b608;
extern float DAT_0017b60c;
extern float DAT_0017b610;
extern float DAT_0017b614;
extern float DAT_0017b618;
extern float DAT_0017b61c;

// USA 0017B378 <- EU 0017B378 (Ghidra, non-matching)
// GLOBAL DAT_0017b5f0 float
// GLOBAL DAT_0017b5f4 float
// GLOBAL DAT_0017b5f8 int *
// GLOBAL DAT_0017b5fc int *
// GLOBAL DAT_0017b600 float
// GLOBAL DAT_0017b604 int
// GLOBAL DAT_0017b608 float
// GLOBAL DAT_0017b60c float
// GLOBAL DAT_0017b610 float
// GLOBAL DAT_0017b614 float
// GLOBAL DAT_0017b618 float
// GLOBAL DAT_0017b61c float

/* WARNING: Removing unreachable block (ram,0x0017b594) */
/* WARNING: Removing unreachable block (ram,0x0017b598) */
/* WARNING: Removing unreachable block (ram,0x0017b5a8) */

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
void func_0017B378(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define afStack_24 ((float *)(albw_frame + 0xc))
  if (param_2 == (int *)0x0) {
    func_00115C70(&local_30,(float *)(param_1 + 0x838),(float *)(param_1 + 0x3d0));
    iVar2 = func_0068C690(&local_30);
    *(int *)(param_1 + 0x870) = iVar2;
  }
  else {
    iVar2 = *param_2;
  }
  func_0051D2CC((int *)(param_1 + 0x86c),iVar2,DAT_0017b5f0);
  fVar10 = DAT_0017b5f4;
  if (param_4 == 0) {
    iVar5 = *(int *)(param_1 + 0x86c);
    iVar6 = *DAT_0017b5f8;
    iVar2 = -iVar6;
    bVar7 = SBORROW4(iVar5,iVar2);
    iVar1 = iVar2;
    iVar3 = iVar5;
    if (iVar2 < iVar5) {
      bVar7 = SBORROW4(iVar6,iVar5);
      iVar3 = -iVar5;
      iVar1 = iVar6;
    }
    if (iVar5 == iVar1 || iVar3 + iVar6 < 0 != bVar7) {
      *(bool *)(param_1 + 0x881) = 0 < *(int *)(param_1 + 1000);
    }
    else {
      iVar3 = iVar6 / 2;
      if (*(char *)(param_1 + 0x881) != '\0') {
        iVar3 = -iVar3;
      }
      if (iVar3 >= iVar5) {
        iVar6 = iVar2;
      }
      *(bool *)(param_1 + 0x881) = iVar3 < iVar5;
      iVar5 = iVar6;
    }
    func_0051D2CC((int *)(param_1 + 1000),iVar5,fVar10);
  }
  else {
    func_0051D2CC((int *)(param_1 + 1000),*(int *)(param_1 + 0x86c),DAT_0017b5f4);
    bVar7 = 0 < *(int *)(param_1 + 1000);
    *(bool *)(param_1 + 0x881) = bVar7;
    *(bool *)(param_1 + 0x881) = bVar7;
  }
  fVar9 = DAT_0017b600;
  *(int *)(param_1 + 0x868) = *DAT_0017b5fc + *(int *)(param_1 + 0x868);
  local_30 = *(float *)(param_1 + 0x838);
  uStack_28 = *(undefined4 *)(param_1 + 0x840);
  pfVar4 = (float *)(DAT_0017b604 + (*(uint *)(param_1 + 0x868) >> 0x18) * 0x10);
  fVar8 = (float)VectorUnsignedToFloat
                           (*(uint *)(param_1 + 0x868) & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  local_2c = *(float *)(param_1 + 0x83c) + (*pfVar4 + pfVar4[1] * fVar8 * fVar9) * fVar10;
  func_00115C70(afStack_24,&local_30,(float *)(param_1 + 0x3d0));
  fVar10 = DAT_0017b608;
  func_00115DAC((float *)(param_1 + 0x3dc),afStack_24,(float *)(param_1 + 0x3dc),DAT_0017b608);
  func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_0017b60c);
  pfVar4 = (float *)(param_1 + 0x888);
  fVar9 = *pfVar4;
  fVar8 = (DAT_0017b614 - fVar9) * DAT_0017b618;
  if (fVar8 <= DAT_0017b61c) {
    fVar8 = -fVar8;
  }
  if ((fVar10 <= fVar8) && (fVar10 = fVar8, DAT_0017b610 < fVar8)) {
    fVar10 = DAT_0017b610;
  }
  *pfVar4 = albw_approach(fVar9, DAT_0017b614, fVar10);   /* two-sided approach restored (approach_fix) */
  if (**(int **)(*(int *)(param_1 + 0x7b4) + 0x14) == 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7b4) + 0x14) + 0x10) =
         *(undefined4 *)(param_1 + 0x888);
  }
  return;
}

