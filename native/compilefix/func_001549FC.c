/* compilefix: func_001549FC, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/001/func_001549FC.c) with inlined two-sided approaches
 * restored (tools/approach_fix.py, BOOT_LOG 150). */
#include "ghidra_types.h"

extern int func_0014FDC4(int param_1,float *param_2,int param_3,float fparam_0,float fparam_1);
extern int func_00520FC0(void);
extern int func_00657D18(undefined4 *param_1,undefined1 param_2);
extern float DAT_00154ba4;
extern float DAT_00154ba8;
extern float DAT_00154bac;
extern undefined4 DAT_00154bb0;
extern int DAT_00154bb4;
extern float DAT_00154bb8;
extern int DAT_00154bbc;
extern int DAT_00154bc0;

// USA 001549FC <- EU 00154A00 (Ghidra, non-matching)
// GLOBAL DAT_00154ba4 float
// GLOBAL DAT_00154ba8 float
// GLOBAL DAT_00154bac float
// GLOBAL DAT_00154bb0 undefined4
// GLOBAL DAT_00154bb4 int
// GLOBAL DAT_00154bb8 float
// GLOBAL DAT_00154bbc int
// GLOBAL DAT_00154bc0 int

/* WARNING: Removing unreachable block (ram,0x00154a64) */
/* WARNING: Removing unreachable block (ram,0x00154a98) */
/* WARNING: Removing unreachable block (ram,0x00154a9c) */
/* WARNING: Removing unreachable block (ram,0x00154aac) */

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
undefined4 func_001549FC(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  fVar4 = DAT_00154ba8;
  local_18 = *(float *)(param_1 + 8);
  local_10 = *(float *)(param_1 + 0x10);
  fVar5 = *(float *)(param_1 + 0xc) + DAT_00154ba4;
  *(float *)(param_1 + 0x3d4) = albw_approach(*(float *)(param_1 + 0x3d4), fVar5, DAT_00154bac);   /* two-sided approach restored (approach_fix) */
  local_14 = *(undefined4 *)(param_1 + 0x3d4);
  func_0014FDC4(param_1,&local_18,DAT_00154bb4,DAT_00154bb8,fVar4);
  fVar4 = local_18 - *(float *)(param_1 + 0x3d0);
  fVar3 = local_10 - *(float *)(param_1 + 0x3d8);
  puVar2 = (undefined4 *)(param_1 + 0x8bc);
  if ((int)ALBW_AS_U32((fVar4 * fVar4 + fVar3 * fVar3)) < DAT_00154bbc) {
    func_00657D18(puVar2,2);
  }
  else {
    pfVar1 = (float *)func_00520FC0();
    fVar4 = *pfVar1 - *(float *)(param_1 + 0x3d0);
    fVar5 = pfVar1[1] - *(float *)(param_1 + 0x3d4);
    fVar3 = pfVar1[2] - *(float *)(param_1 + 0x3d8);
    if ((int)ALBW_AS_U32((fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3)) <= DAT_00154bc0) {
      if (*(char *)(param_1 + 0x8c0) != '\x02') {
        return func_00657D18(puVar2,3);
      }
      return func_00657D18(puVar2,4);
    }
  }
  return 0;
}

