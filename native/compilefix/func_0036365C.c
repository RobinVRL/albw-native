/* compilefix: func_0036365C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/003/func_0036365C.c) with inlined two-sided approaches
 * restored (tools/approach_fix.py, BOOT_LOG 150). */
#include "ghidra_types.h"

extern int func_00362860(int param_1);
extern int *DAT_00363718;
extern float DAT_0036371c;
extern float DAT_00363720;
extern float DAT_00363724;
extern float DAT_00363728;

// USA 0036365C <- EU 00363638 (Ghidra, non-matching)
// GLOBAL DAT_00363718 int *
// GLOBAL DAT_0036371c float
// GLOBAL DAT_00363720 float
// GLOBAL DAT_00363724 float
// GLOBAL DAT_00363728 float

/* WARNING: Removing unreachable block (ram,0x003636d0) */
/* WARNING: Removing unreachable block (ram,0x003636d4) */
/* WARNING: Removing unreachable block (ram,0x003636e4) */

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
undefined4 func_0036365C(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = DAT_00363728;
  fVar1 = DAT_00363724;
  fVar3 = DAT_00363720;
  fVar4 = DAT_0036371c;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(param_1 + 0x24) = *DAT_00363718 + *(int *)(param_1 + 0x24);
    fVar5 = *(float *)(param_1 + 0x28);
    fVar2 = -fVar5 * fVar2;
    if (fVar2 <= fVar4) {
      fVar2 = -fVar2;
    }
    if ((fVar3 <= fVar2) && (fVar3 = fVar2, fVar1 < fVar2)) {
      fVar3 = fVar1;
    }
    *(float *)(param_1 + 0x28) = albw_approach(fVar5, fVar4, fVar3);   /* two-sided approach restored (approach_fix) */
    if (fVar4 < *(float *)(param_1 + 0x28)) {
      fVar4 = *(float *)(param_1 + 0x28);
    }
    *(float *)(param_1 + 0x28) = fVar4;
  }
  return func_00362860(param_1);
}

