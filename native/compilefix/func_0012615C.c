/* compilefix: func_0012615C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/001/func_0012615C.c) with inlined two-sided approaches
 * restored (tools/approach_fix.py, BOOT_LOG 150). */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0051DAA4(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0058A1F4(int param_1);
extern int func_00656650(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_0012637c;
extern float DAT_00126380;
extern float DAT_00126384;
extern float DAT_00126388;
extern int *DAT_0012638c;
extern uint *DAT_00126390;
extern undefined4 *DAT_00126394;
extern undefined4 DAT_00126398;
extern int DAT_0012639c;

// USA 0012615C <- EU 0012615C (Ghidra, non-matching)
// GLOBAL DAT_0012637c float
// GLOBAL DAT_00126380 float
// GLOBAL DAT_00126384 float
// GLOBAL DAT_00126388 float
// GLOBAL DAT_0012638c int *
// GLOBAL DAT_00126390 uint *
// GLOBAL DAT_00126394 undefined4 *
// GLOBAL DAT_00126398 undefined4
// GLOBAL DAT_0012639c int

/* WARNING: Removing unreachable block (ram,0x00126248) */
/* WARNING: Removing unreachable block (ram,0x0012624c) */
/* WARNING: Removing unreachable block (ram,0x0012625c) */

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
undefined4 func_0012615C(int param_1)

{
  float *pfVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  pfVar1 = (float *)func_0051DAA4(param_1);
  fVar7 = DAT_0012637c;
  if (pfVar1 == (float *)0x0) {
    fVar6 = *(float *)(param_1 + 0xc);
  }
  else {
    func_00115C70(&local_2c,pfVar1,(float *)(param_1 + 0x3d0));
    local_38 = local_2c;
    uStack_34 = uStack_28;
    uStack_30 = uStack_24;
    uVar2 = func_0068C690(&local_38);
    *(uint *)(param_1 + 0x8e4) = uVar2;
    func_0014FAFC(param_1,uVar2,DAT_00126380);
    fVar6 = *(float *)(param_1 + 0x3d0) - *pfVar1;
    fVar8 = *(float *)(param_1 + 0x3d8) - pfVar1[2];
    fVar6 = SQRT(fVar6 * fVar6 + fVar8 * fVar8) * DAT_00126384;
    if (fVar6 != DAT_00126388) {
      fVar7 = *(float *)(param_1 + 0x3d4) - pfVar1[1];
      if (fVar7 <= DAT_00126388) {
        fVar7 = -fVar7;
      }
      fVar7 = fVar7 / fVar6;
    }
    fVar6 = pfVar1[1];
  }
  *(float *)(param_1 + 0x3d4) = albw_approach(*(float *)(param_1 + 0x3d4), fVar6, fVar7);   /* two-sided approach restored (approach_fix) */
  puVar3 = (undefined4 *)func_0052FBA0(*DAT_0012638c + 0x3dbbc,*(uint *)(param_1 + 0x8e0));
  if (puVar3 != (undefined4 *)0x0) {
    if (((*DAT_00126390 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00126390), iVar4 != 0)) {
      *DAT_00126394 = DAT_00126398;
    }
    iVar4 = (**(code **)*puVar3)(puVar3,DAT_00126394);
    if (iVar4 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    if ((puVar3 != (undefined4 *)0x0) && (uVar2 = func_0058A1F4((int)puVar3), uVar2 != 0))
    goto LAB_00126364;
  }
  pfVar5 = (float *)func_0051DAA4(param_1);
  if ((pfVar5 == (float *)0x0) ||
     (fVar7 = *(float *)(param_1 + 0x3d0) - *pfVar5, fVar6 = *(float *)(param_1 + 0x3d8) - pfVar5[2]
     , DAT_0012639c < (int)ALBW_AS_U32((fVar7 * fVar7 + fVar6 * fVar6)))) {
    if (pfVar1 != (float *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x8bc) <= *(int *)(param_1 + 0x8ec)) {
      return 0;
    }
  }
LAB_00126364:
  return func_00656650((undefined4 *)(param_1 + 0x8bc),0);
}

