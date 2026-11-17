/* compilefix: func_00154460, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/001/func_00154460.c) with its inlined two-sided approach
 * restored by hand (Ghidra dropped the approach-from-above branch; BOOT_LOG 150). */
#include "ghidra_types.h"

extern int func_0014FB58(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_001546BC(int param_1,int param_2);
extern int func_00520FC0(void);
extern int func_00657D18(undefined4 *param_1,undefined1 param_2);
extern int DAT_00154698;
extern float DAT_0015469c;
extern int DAT_001546a0;
extern float DAT_001546a4;
extern int DAT_001546a8;
extern float DAT_001546ac;
extern float DAT_001546b0;
extern float DAT_001546b4;
extern float DAT_001546b8;
extern int DAT_001546bc;

// USA 00154460 <- EU 00154464 (Ghidra, non-matching)
// GLOBAL DAT_00154698 int
// GLOBAL DAT_0015469c float
// GLOBAL DAT_001546a0 int
// GLOBAL DAT_001546a4 float
// GLOBAL DAT_001546a8 int
// GLOBAL DAT_001546ac float
// GLOBAL DAT_001546b0 float
// GLOBAL DAT_001546b4 float
// GLOBAL DAT_001546b8 float
// GLOBAL DAT_001546bc int

/* WARNING: Removing unreachable block (ram,0x001545d4) */
/* WARNING: Removing unreachable block (ram,0x001545d8) */
/* WARNING: Removing unreachable block (ram,0x001545e8) */

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
undefined4 func_00154460(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar3 = DAT_00154698;
  pfVar2 = (float *)func_00520FC0();
  fVar8 = DAT_0015469c;
  func_0014FB58(param_1,pfVar2,iVar3,DAT_0015469c);
  iVar3 = *(int *)(param_1 + 0x8f8);
  iVar5 = DAT_001546a0 + iVar3;
  *(int *)(param_1 + 0x8f8) = iVar5;
  uVar4 = func_001546BC(param_1,(uint)(iVar5 < iVar3));
  fVar9 = DAT_001546ac;
  pfVar2 = (float *)(DAT_001546a8 + (*(uint *)(param_1 + 0x8f8) >> 0x18) * 0x10);
  fVar7 = (float)VectorUnsignedToFloat
                           (*(uint *)(param_1 + 0x8f8) & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (*pfVar2 + pfVar2[1] * fVar7 * DAT_001546a4) * *(float *)(param_1 + 0x908);
  pfVar2 = (float *)(DAT_001546a8 + (uVar4 >> 0x18) * 0x10);
  fVar7 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = pfVar2[2];
  fVar14 = pfVar2[3];
  fVar12 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = fVar12 * DAT_001546a4;
  *(float *)(param_1 + 0x3dc) = (*pfVar2 + pfVar2[1] * fVar7 * DAT_001546a4) * fVar10;
  *(float *)(param_1 + 0x3e0) = fVar9;
  fVar1 = DAT_001546b8;
  fVar11 = DAT_001546b4;
  fVar7 = DAT_001546b0;
  *(float *)(param_1 + 0x3e4) = (fVar13 + fVar14 * fVar12) * fVar10;
  fVar10 = *(float *)(param_1 + 0x3d4);
  fVar7 = *(float *)(param_1 + 0xc) + fVar7;
  fVar8 = (fVar7 - fVar10) * fVar8;
  if (fVar8 <= fVar9) {
    fVar8 = -fVar8;
  }
  if ((fVar11 <= fVar8) && (fVar11 = fVar8, fVar1 < fVar8)) {
    fVar11 = fVar1;
  }
  fVar11 = albw_approach(fVar10, fVar7, fVar11);   /* two-sided (BOOT_LOG 150) */
  *(float *)(param_1 + 0x3e0) = fVar11 - fVar10;
  pfVar2 = (float *)func_00520FC0();
  fVar9 = *pfVar2 - *(float *)(param_1 + 0x3d0);
  fVar11 = pfVar2[1] - *(float *)(param_1 + 0x3d4);
  fVar7 = pfVar2[2] - *(float *)(param_1 + 0x3d8);
  if (DAT_001546bc < (int)ALBW_AS_U32((fVar9 * fVar9 + fVar11 * fVar11 + fVar7 * fVar7))) {
    func_00657D18((undefined4 *)(param_1 + 0x8bc),6);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x914);
    bVar6 = *(uint *)(param_1 + 0x910) < uVar4;
    if (bVar6) {
      uVar4 = *(uint *)(param_1 + 0x910) + 1;
    }
    if (bVar6) {
      *(uint *)(param_1 + 0x910) = uVar4;
    }
    if (!bVar6 && iVar5 < iVar3) {
      return func_00657D18((undefined4 *)(param_1 + 0x8bc),4);
    }
  }
  return 0;
}

